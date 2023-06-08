project=int(input("Enter cash of project investition\t"));
Mike=int(input("Enter Mike's cash\t"));
Ivan=int(input("Enter Ivan's cash\t"));

print(project, Mike , Ivan)
if (Mike>=project) and (Ivan>=project):
    print ("2");
else:
    if Mike>=project:
        print("Mike");
    else:
       if Ivan>=project:
            print("ivan");
    if Mike+Ivan>=project:
       print("1");
    else:
       print("0");
