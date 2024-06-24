#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Declare variables
    int max_attempts, frame, attempts, backoff_time;
    float propagation_time;
    char acknowledgement;

    // Seed the random number generator
    srand(time(NULL));

    // Prompt user to enter maximum number of attempts
    cout << "Enter the maximum number of attempts: ";
    cin >> max_attempts;

    // Prompt user to enter maximum propagation time
    cout << "Enter the maximum propagation time (in seconds): ";
    cin >> propagation_time;

    // Array of frames to be sent
    int frames[] = {100, 101, 111};

    // Loop through each frame
    for (int i = 0; i < 3; i++) {
        frame = frames[i];
        attempts = 0;

        // Loop until successful transmission or max attempts reached
        while (attempts <= max_attempts) {
            // Send the frame
            cout << "Sending frame " << frame << endl;

            // Calculate wait time for acknowledgement
            double wait_time = 2 * propagation_time;
            cout << "Waiting for acknowledgement: " << wait_time << " seconds" << endl;

            // Simulate random acknowledgement (y: yes, n: no)
            acknowledgement = rand() % 2 == 0 ? 'y' : 'n';
            cout << "Acknowledgement received: " << acknowledgement << endl;

            // Check if frame was successfully sent
            if (acknowledgement == 'y') {
                cout << "!!Frame successfully sent!!" << endl << endl;
                break;
            } else {
                attempts++;

                // Check if max attempts reached
                if (attempts > max_attempts) {
                    break;
                }

                // Calculate back-off time
                backoff_time = rand() % (1 << attempts);
                cout << "Waiting for back-off time: " << backoff_time * propagation_time << " seconds" << endl;
            }
        }
    }

    return 0;
}

