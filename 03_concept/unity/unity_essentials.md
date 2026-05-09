## Unity Essential

### 카메라 제어
- 오브젝트를 선택(클릭)하고 더블 클릭(맥에선 일단 트랙패드 더블 클릭으로는 안됨)하거나 F 키를 누르면 카메라가 view 중앙 정렬된다
  - F, frame이라 생각함
- 우클릭 후 view travel은 내 시점 고정, option 키를 누른 후 카메라 무빙은 그 클릭한 위치에 못을 박고 와이어 무빙을 하는 느낌
- 우클릭: navigation mode, fly through mode

## Inspector(Game Object)
### Transform Components
position x, y, z -> origin center(x: 0, y: 0, z: 0)
rotation x, y, z
scale: 1 -> real world 1 meter
### Mesh Filter
This components determine the shape of your GameObject. A mesh is a wireframe 3D model.
### Mesh Renderer
This components control the external appearance of the ball.

### Sphere Collider
This components
### Materials
- Material을 Object에 적용시키고 나면 종속된다. -> Material의 특성을 바꾸면 적용시킨 Object의 특성도 자동적으로 바뀐다.
- Surface
  - Base map : color
  - Metallic
  - Smoothness 
- Physics Material -> Bounciness
  
### Components
- Rigidbody : 무게 (can select for using gravity) 