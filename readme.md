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
<ul>
{% for stu in site.stu %}
  <li><img src = "{{ stu.image }}" height="50" width="50"/>@{{ stu.user }}({{ stu.name }})
      <ul>
          <li><p>{{ stu.content | markdownify }}</p></li>
      </ul>
  </li>
{% endfor %}
</ul>

# Newcomer's Guide
1) Create your 1155xxxxxx.md file under \_stu folder (just follow others' format should be okay)
2) Add your hello card to our project board
3) Read the In-progress issues and pick one to work on. Remember to assign yourself to the issue
4) Frequently check our pull requests and approve them in order to make progress
5) Let's pass this course.

Last updated: {{ site.time }}








