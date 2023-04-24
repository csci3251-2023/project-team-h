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

# Contributors

{% for stu in site.stu %}
  * <img src="{{stu.image}}" style="width: 50px; height: 50px"> <a href="https://github.com/{{stu.user}}">@{{stu.user}}</a> ({{stu.name}}) 
    * {{stu.content}}
{% endfor %}

Last updated: {{ site.time }}
