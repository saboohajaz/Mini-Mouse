/*

  __  __ _       _                                 
 |  \/  ( _)     ( _)                                
 | \  / |_ _ __  _ _ __ ___   ___  _   _ ___  ___  
 | |\/| | | '_ \| | '_ ` _ \ / _ \| | | / __|/ _ \
 | |  | | | | | | | | | | | | ( _) | |_| \__ \  __/ 
 |_|  |_|_|_| |_|_|_| |_| |_|\___/ \__,_|___/\___| 
                                                   
                                                   
Description       : LoraWan Regions Specific objets.  
License           : Revised BSD License, see LICENSE.TXT file include in the project
Maintainer        : Fabien Holin ( SEMTECH)

*/

#include "Regions.h"
#include "Define.h"


/*************************************************/
/*                     Constructors              */
/*@note have to check init values                */
/*************************************************/
LoraRegionsEU :: LoraRegionsEU (  PinName interrupt ) : LoraWanContainer (interrupt){
    MacTxFrequency[0] = 868100000;
    MacTxFrequency[1] = 868300000;
    MacTxFrequency[2] = 868500000;
    NbOfActiveChannel = 3;
    MacRx2Frequency  = 869525000; 
    MacRx2Sf = 12;
    MacRx2Bw = BW125;
    MacTxBw  = BW125;
    MacRx1Bw = BW125;
    MacRx1Delay = RECEIVE_DELAY1;// @note replace by default setting regions
}

/***********************************************************************************************/
/*                      Public  Methods                                                        */
/***********************************************************************************************/
 //@note Partionning Public/private not yet finalized
void LoraRegionsEU :: SetRegionsdefaultSettings ( void ) {
    

}
