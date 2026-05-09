## 04_CPUScheduling(concepts)

### CPU Scheduler
Ready 중인 프로세스 중에서 하나를 선택해서 CPU를 할당해줌.

- 선제적인 경우
  - 실행 상태에서 준비 상태로 변경(interrupt)
  - 대기 상태에서 준비 상태로 변경(I/O complition)
- 비선제적인 경우
  - 실행 상태에서 대기 상태로 변경(I/O request)
  - 실행 종료(exit())

> 비선제적인 경우 실행 상태에서만 일어나며 Blocked 되거나 종료되는 경우로, 스케쥴러는 프로세스가 자발적으로 CPU 점유를 되돌려주는 걸 기다린다.
> 선제적인 경우 : 거의 모든 최신 스케쥴러는 선제적이다. 스케줄러는 프로세스를 중단하고 컨텍스트 스위치를 강제할 수 있다. 특별한 하드웨어가 필요하다.(ex: timer)

Workload
- A set of job descriptions
- e.g. arrival time, run time, etc.

Scheduler
- A logic that decides when jobs run

Metric
- Measurement of scheduling quality
- e.g. turnaround time, response time, fairness, etc.