float pos[3];
void init() {
    pos[0] = 0.0;
    pos[1] = 0.0;
    pos[2] = 1.0;
}

void loop() {
    api.setPositionTarget(pos);
    // merge testing 1
}
