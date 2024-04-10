double score(double * input) {
    double var0;
    if (input[0] <= 315.5) {
        if (input[0] <= 310.5) {
            var0 = 86.0;
        } else {
            if (input[0] <= 312.5) {
                var0 = 121.0;
            } else {
                if (input[0] <= 314.5) {
                    var0 = 96.0;
                } else {
                    var0 = 93.0;
                }
            }
        }
    } else {
        if (input[0] <= 318.0) {
            if (input[0] <= 316.5) {
                var0 = 123.0;
            } else {
                var0 = 118.0;
            }
        } else {
            var0 = 108.0;
        }
    }
    return var0;
}
