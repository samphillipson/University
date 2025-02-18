document.addEventListener("DOMContentLoaded", function() {
    // Example static data for 2024 F1 season
    const driverStats = [
      { name: 'Max Verstappen', points: 500, team: 'Red Bull Racing' },
      { name: 'Lewis Hamilton', points: 350, team: 'Mercedes' },
      { name: 'Charles Leclerc', points: 280, team: 'Ferrari' },
      { name: 'Sergio Perez', points: 270, team: 'Red Bull Racing' },
      { name: 'Lando Norris', points: 240, team: 'McLaren' }
    ];
  
    const constructorStats = [
      { name: 'Red Bull Racing', points: 800 },
      { name: 'Mercedes', points: 500 },
      { name: 'Ferrari', points: 400 },
      { name: 'McLaren', points: 350 },
      { name: 'Aston Martin', points: 250 }
    ];
  
    const raceWins = [
      { race: 'Australian Grand Prix', winner: 'Max Verstappen' },
      { race: 'Bahrain Grand Prix', winner: 'Charles Leclerc' },
      { race: 'Saudi Arabian Grand Prix', winner: 'Lewis Hamilton' }
    ];
  
    // Function to display driver stats
    function displayDriverStats() {
      const driverList = document.getElementById("driver-list");
      driverStats.forEach(driver => {
        const li = document.createElement("li");
        li.textContent = `${driver.name} (${driver.team}) - Points: ${driver.points}`;
        driverList.appendChild(li);
      });
    }
  
    // Function to display constructor stats
    function displayConstructorStats() {
      const constructorList = document.getElementById("constructor-list");
      constructorStats.forEach(constructor => {
        const li = document.createElement("li");
        li.textContent = `${constructor.name} - Points: ${constructor.points}`;
        constructorList.appendChild(li);
      });
    }
  
    // Function to display race wins
    function displayRaceWins() {
      const raceWinsList = document.getElementById("race-wins-list");
      raceWins.forEach(race => {
        const div = document.createElement("div");
        div.textContent = `${race.race} - Winner: ${race.winner}`;
        raceWinsList.appendChild(div);
      });
    }
  
    // Initialize the display functions
    displayDriverStats();
    displayConstructorStats();
    displayRaceWins();
  });
  