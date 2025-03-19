import * as THREE from 'three';
import { OrbitControls } from 'three/examples/jsm/controls/OrbitControls';

// Scene, Camera & Renderer
const scene = new THREE.Scene();
const camera = new THREE.PerspectiveCamera(75, window.innerWidth / window.innerHeight, 0.1, 1000);
const renderer = new THREE.WebGLRenderer();
renderer.setSize(window.innerWidth, window.innerHeight);
document.body.appendChild(renderer.domElement);

// Controls
const controls = new OrbitControls(camera, renderer.domElement);
controls.enableDamping = true;

// Lighting
const light = new THREE.DirectionalLight(0xffffff, 1);
light.position.set(5, 10, 5).normalize();
scene.add(light);

// Ground
const groundGeometry = new THREE.PlaneGeometry(20, 20);
const groundMaterial = new THREE.MeshStandardMaterial({ color: 0x808080 });
const ground = new THREE.Mesh(groundGeometry, groundMaterial);
ground.rotation.x = -Math.PI / 2;
scene.add(ground);

// Function to create a garbage bin
function createGarbageBin(x, z, fillLevel) {
    const binGeometry = new THREE.CylinderGeometry(0.5, 0.5, 1.5, 16);
    const binMaterial = new THREE.MeshStandardMaterial({ color: 0x006600 });
    const bin = new THREE.Mesh(binGeometry, binMaterial);
    bin.position.set(x, 0.75, z);
    scene.add(bin);

    // Fill level indicator
    const fillGeometry = new THREE.CylinderGeometry(0.45, 0.45, fillLevel * 1.4, 16);
    const fillMaterial = new THREE.MeshStandardMaterial({ color: 0xff0000 });
    const fill = new THREE.Mesh(fillGeometry, fillMaterial);
    fill.position.set(x, 0.75 * fillLevel, z);
    scene.add(fill);
}

// Adding multiple bins
createGarbageBin(-3, -3, 0.8);
createGarbageBin(3, 2, 0.5);
createGarbageBin(-2, 4, 0.3);

// Position Camera
camera.position.set(5, 5, 10);
camera.lookAt(0, 0, 0);

// Render Loop
function animate() {
    requestAnimationFrame(animate);
    controls.update();
    renderer.render(scene, camera);
}
animate();

// Resize Handler
window.addEventListener('resize', () => {
    camera.aspect = window.innerWidth / window.innerHeight;
    camera.updateProjectionMatrix();
    renderer.setSize(window.innerWidth, window.innerHeight);
});
