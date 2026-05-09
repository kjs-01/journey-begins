### How Virtualizing the CPU
The OS needs to share the physical CPU by **time sharing**
- **Performance:** How can we implement virtualization without adding excessive overhead to the system?
- **Control:** How can we run processes efficiently while retaining control over the CPU?

### Run program directly on the CPU.
**OS**
1. 프로세스 리스트에 접근하는 진입점 생성
2. 프로그램을 위한 메모리 할당
3. 프로그램을 메모리로 적재(Load)
4. argc/argv를 위한 메모리 셋업
5. 레지스터 비우기
6. main() call
--- 
**Program**

7. Run main()
8. 메인에서 Returns
---
**OS** 

9. 프로레스의 메모리 헤제
10.  프로세스 리스트에서 삭제