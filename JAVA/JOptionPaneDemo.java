/**
 * 
 */
package kt20141223;

import javax.swing.JOptionPane;

/**
 * @author Administrator
 *
 */
public class JOptionPaneDemo {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Object[] options = {"确定","取消","帮助"};
		//定制可供选择按钮
		int response=JOptionPane.showOptionDialog(null, "这是个选项对话框，用户可以选择自己的按钮的个数","选项对话框标题",JOptionPane.YES_OPTION, JOptionPane.QUESTION_MESSAGE, null, options, options[0]);
		if(response==0) {         
		  JOptionPane.showMessageDialog(null,"您按下了确定按钮","消   息",JOptionPane.INFORMATION_MESSAGE);//消息对话框      
		} else if(response==1) {           
		  JOptionPane.showMessageDialog(null,"您按下了取消按钮","消息",JOptionPane.INFORMATION_MESSAGE);       
		} else if(response==2) {         
		  JOptionPane.showMessageDialog(null,"您按下了帮助按钮","消息",JOptionPane.INFORMATION_MESSAGE);         
		}                
		String sa=JOptionPane.showInputDialog(null,"请输入第一个整数:");  
		//输入对话框        
		String sb=JOptionPane.showInputDialog(null,"请输入第二个整数:");        
		int ia,ib;        
		try{    //捕获parselnt()抛出的异常           
		  ia=Integer.parseInt(sa);        
		}catch(Exception e){            
		ia=0;        
		}                    
		try{            
		  ib=Integer.parseInt(sb);        
		}catch(Exception e){            
		ib=0;        
		}        
		int ic=ib+ia;        
		JOptionPane.showMessageDialog(null,"这两个数之和是:"+ic,"Message",JOptionPane.INFORMATION_MESSAGE);
	}
}
