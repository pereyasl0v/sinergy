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

class ImproveOven extends Oven{    
    onOven(){
        console.log(`Печь включилась. Производится нагрев. `);
        
        let upTemperature = setInterval(  ()=>{
         if(this.maxTemperatureCost < 15){
         console.log(this.maxTemperatureCost = this.maxTemperatureCost+1)
    }
    else{
        clearInterval(upTemperature);
        this.offOven();
    }
        }
         ,500);
    }

    offOven(){
        console.log(`Печь выключилась. Производится остывание. `);
        let downTemperature = setInterval(  ()=>{
            if(this.maxTemperatureCost > 0){
            console.log(this.maxTemperatureCost = this.maxTemperatureCost-1)
       }
       else{
           clearInterval(downTemperature);
           console.log(`Печь остыла. Работа прекращена. `)
       }
           }
            ,500);
       }
}
let oven = new ImproveOven;
oven.maxTemperature = 12;
console.log(oven.maxTemperature);

