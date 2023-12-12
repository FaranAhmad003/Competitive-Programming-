class ListNode {
    constructor(data) {
       this.data = data;
       this.next = null;
    }
   }
   
   class LinkList {
    constructor() {
       this.head = null;
    }
   
    append(data) {
       const newNode = new ListNode(data);
   
       if (!this.head) {
         this.head = newNode;
         return;
       }
   
       let current = this.head;
       while (current.next) {
         current = current.next;
       }
   
       current.next = newNode;
    }
   
    display() {
       let current = this.head;
       while (current) {
         console.log(current.data);
         current = current.next;
       }
    }
    reverseLL()
    {
        let current = this.head;
        let prev=null;
        let next=null;

        //List ko iterate kryn ge pura
        while(current!==null)
        {
         //next initialization to current ka next pr
         next=current.next;
         //List ko ulta kryn ge
         current.next=prev;
         prev=current;
         current=next;
        }
        this.head=prev;

    }
   }

   const list = new LinkList();
   list.append(10);
   list.append(20);
   list.append(30);
   list.append(40);
   list.append(50);
   list.reverseLL();
   list.display();
