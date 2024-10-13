// CheckBoxFrame.java
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.event.ItemListener;
import java.awt.event.ItemEvent;
import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.JCheckBox;

public class CheckBoxFrame extends JFrame
{
    private JTextField textField;
    private JCheckBox boldJCheckBox;
    private JCheckBox italicJCheckBox;
    private static int FONT_SIZE = 22;

    public CheckBoxFrame()
    {
        super("JCheckBox Test");
        setLayout(new FlowLayout());

        textField = new JTextField("What the font style change", 20);
        textField.setFont(new Font("Serif", Font.PLAIN, FONT_SIZE));
        add(textField);

        boldJCheckBox = new JCheckBox("Bold");
        italicJCheckBox = new JCheckBox("Italic");
        add(boldJCheckBox);
        add(italicJCheckBox);

        CheckBoxHandler handler = new CheckBoxHandler();
        boldJCheckBox.addItemListener(handler);
        italicJCheckBox.addItemListener(handler);
    }

    private class CheckBoxHandler implements ItemListener
    {
        public void itemStateChanged(ItemEvent event)
        {
            Font font = null;

            if(boldJCheckBox.isSelected() && italicJCheckBox.isSelected())
                font = new Font("Serif", Font.BOLD + Font.ITALIC, FONT_SIZE);
            else if(boldJCheckBox.isSelected())
                font = new Font("Serif", Font.BOLD, FONT_SIZE);
            else if(italicJCheckBox.isSelected())
                font = new Font("Serif", Font.ITALIC, FONT_SIZE);
            else
                font = new Font("Serif", Font.PLAIN, FONT_SIZE);

            textField.setFont(font);
        }
    }

    public static void main(String[] args)
    {
        CheckBoxFrame checkBoxFrame = new CheckBoxFrame();
        checkBoxFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        checkBoxFrame.setSize(375, 120);
        checkBoxFrame.setVisible(true);
    }
}