# Introduction 
We will do the tasks one by one as a team:
1. Task Manager: [start the issue](https://github.com/csci3251-2023/project-team-h/issues/2)
2. Project Manager: [create project board](https://github.com/csci3251-2023/project-team-h/issues/3) 
3. Documentation Manager: [set up readme](https://github.com/csci3251-2023/project-team-h/issues/4) 
4. Development Manager: [write a program](https://github.com/csci3251-2023/project-team-h/issues/5)
5. Delivery Manager: get a [workflow status badge](https://github.com/csci3251-2023/project-team-h/issues/6) for the code
6. Personnel Manager: [showcase our team](https://github.com/csci3251-2023/project-team-h/issues/7) under the [contributors section](https://github.com/csci3251-2023/project-team-h#contributors)
7. Promotion Manager: [promote our repo](https://github.com/csci3251-2023/project-team-h/issues/8) in **`csci3251-2023.github.io`**

# Code
```c
// Your C code here
#include <stdio.h>

int main() {
    //this is simple for loop
    double size = 3.251;
    for(int i = 0 ; i < size ; i++ )
        printf("Hello csci3215_%d\n" , i);
    return 0;
}
```







# Contributors
<ul>
{% for stu in site.stu %}
  <li><img src = "{{ stu.image }}" height="50" width="50"/>@{{ stu.user }}({{ stu.name }})
      <ul>
          <li><p>{{ stu.content | markdownify }}</p></li>
      </ul>
  </li>
{% endfor %}
</ul>
