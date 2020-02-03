
void init() {
    float pos[3];
    pos[0] = 0.0;
    pos[1] = 0.0;
    pos[2] = 1.0;
}

void loop() {
    api.setPositionTarget(pos);
}