float pos[3];
void init() {
    pos[0] = 0.0;
    pos[1] = 0.0;
    pos[2] = 1.0;
}

void loop() {
    api.setPositionTarget(pos);
    // AYAYA new commit
    // this is for merge testing
    // this creates a merge conflict
}
