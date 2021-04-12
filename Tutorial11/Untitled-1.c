/*
 * @Author: Zitian(Daniel) Tong
 * @Date: 2021-04-03 19:32:58
 * @LastEditTime: 2021-04-03 21:43:35
 * @LastEditors: Zitian(Daniel) Tong
 * @Description: 
 * @FilePath: /undefined/Users/danieltongawesome/Desktop/TA Documentation/CPSC 261/Tutorial/Tutorial11/Untitled-1.c
 */


/*
    a mutex - lock
    a condition variable - hasBeer
*/

void pour(){
    // step 1 - acquire the access to a resource
    pthread_mutex_lock(&lock);
    // step 2 - check glasses
    // pthread_cond_wait -> when hasBeer is not been signaled: release lock & wait in queue
    //                   -> when hasBeer been signaled/broadcasted: lock and access
    while( glasses == 0){
        pthread_cond_wait(&hasBeer, &lock);
    }
    // step 3 - consume
    glasses--;
    // step 4 - release resource
    pthread_mutex_unlock(&lock);
}

void refill(){
    // step 1 - acquire the access to a resource
    pthread_mutex_lock(&lock);
    // step 2 - perform operation
    glasses += n; // add n beer to the table
    // step 3 - call broadcast to activate threads waitting for beer
    pthread_cond_broadcast(&hasBeer)   // or call signal n times    
    // step 4 - release resource
    pthread_mutex_unlock(&lock);
}
