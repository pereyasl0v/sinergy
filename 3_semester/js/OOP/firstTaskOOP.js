"use strict"

class Oven{
    get maxTemperature(){
        return this.maxTemperatureCost;
    }
    set maxTemperature(maxTemperatureCost){
        if(maxTemperatureCost > 15){
            console.log(`Максимальное значение температуры должно быть менее 15 единиц`);
        }
        else{
            this.maxTemperatureCost = maxTemperatureCost;
        }
    }

}

let oven = new Oven;
oven.maxTemperature = 15;
console.log(oven.maxTemperature);
