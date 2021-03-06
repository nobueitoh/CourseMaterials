#include "ReadyQueue.hpp"
#include <queue>
namespace cs3100
{
  class Simulation;

  class ShortestJobFirstReadyQueue : public ReadyQueue
  {
  public:
    ShortestJobFirstReadyQueue();
    // Shortest Job First needs to be able to look inside current simulation
    void associateSimulator(Simulation* s);
    void add(int) override;
    int next() override;

  private:
    std::queue<int> queue;
    Simulation* simulation;
  };
}
