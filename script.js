function waterPlant() {
    alert("Water pump turned ON!");
}

// Dummy data simulation
setInterval(() => {
    document.getElementById("temp").innerText = Math.floor(Math.random()*10 + 20) + "°C";
    document.getElementById("humidity").innerText = Math.floor(Math.random()*20 + 50) + "%";
    document.getElementById("soil").innerText = Math.floor(Math.random()*30 + 30) + "%";
}, 3000);
