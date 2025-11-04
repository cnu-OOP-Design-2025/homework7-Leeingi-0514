#include "duck.h"

/* TODO */
void Duck::performFly(){
    flyBehavior -> fly();
}
/* TODO */
void Duck::performQuack(){
    quackBehavior -> quack();
}
/* TODO */
void Duck::setFlyBehavior(FlyBehavior* fb){
    delete flyBehavior;
    flyBehavior = fb;
}
/* TODO */
void Duck::setQuackBehavior(QuackBehavior* qb){
    delete quackBehavior;
    quackBehavior = qb;
}


/* TODO */
MallardDuck::MallardDuck(): Duck(new FlyWithWings, new Quack) {
    // FlyBehavior* fb = new FlyWithWings;
    // setFlyBehavior(fb);
    // QuackBehavior* qb = new Quack;
    // setQuackBehavior(qb);
}
/* TODO */
RedheadDuck::RedheadDuck(): Duck(new FlyWithWings, new Quack) {
    // FlyBehavior* fb = new FlyWithWings;
    // setFlyBehavior(fb);
    // QuackBehavior* qb = new Quack;
    // setQuackBehavior(qb);
}
/* TODO */
RubberDuck::RubberDuck(): Duck(new FlyNoWay, new Squeak) {
    // FlyBehavior* fb = new FlyNoWay;
    // setFlyBehavior(fb);
    // QuackBehavior* qb = new Squeak;
    // setQuackBehavior(qb);
}
/* TODO */
DecoyDuck::DecoyDuck(): Duck(new FlyNoWay, new MuteQuack) {
    // FlyBehavior* fb = new FlyNoWay;
    // setFlyBehavior(fb);
    // QuackBehavior* qb = new MuteQuack;
    // setQuackBehavior(qb);
}
/* TODO */
ModelDuck::ModelDuck(): Duck(new FlyNoWay, new MuteQuack) {
    // FlyBehavior* fb = new FlyNoWay;
    // setFlyBehavior(fb);
    // QuackBehavior* qb = new MuteQuack;
    // setQuackBehavior(qb);
}