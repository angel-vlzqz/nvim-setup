Vim�UnDo� ��)��f�b�z�Ȣ�-�TN�9��� �8�Y/   &                                  e�v�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             e�v�     �                   �               5��                    %                       �      5�_�                            ����                                                                                                                                                                                                                                                                                                                                      &           V   5    e�v�     �       '       &   monitor ProducerConsumer      condition full, empty;      integer count;       $    procedure insert(item: integer);   	    begin   &         if count = N then wait(full);            insert_item(item);            count := count + 1;   (         if count = 1 then signal(empty)       end;           function remove: integer;   	    begin   '         if count = 0 then wait(empty);            remove = remove_item;            count := count 1;   (         if count = N  then signal(full)       end;       count := 0;   end monitor;   procedure producer;   begin        while true do   
     begin            item = produce_item;   &         ProducerConsumer.insert(item)        end   end;   procedure consumer;   begin        while true do   
     begin   )          item = ProducerConsumer.remove;             consume_item(item)        end   end;    5��                                                �                          0                      �                          @                      �                          a                      �               	           g       	               �               	           �       	               �               	           �       	               �    	           	           �       	               �    
                     �                     �                         �                     �                         �                     �               	          �       	              �               	                	              �               	           1      	               �               	           C      	               �                         c                    �                          j                     �                          �                     �                          �                     �               	           �      	               �               	           �      	               �                         �                    �                          �                     �                          �                     �                                               �                                             �                                              �    !           
          '      
              �    "           
           I      
               �    #                     \                    �    $                      b                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                      &           V   5    e�v�     �                 monitor ProducerConsumer5�5�_�                             ����                                                                                                                                                                                                                                                                                                                                      &           V   5    e�v�    �                 monitor ProducerConsumer5�5��