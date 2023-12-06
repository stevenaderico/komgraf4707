import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class DDAline extends JFrame {
    private int x1 = 1, y1 = 3, x2 = 3, y2 = 2;

    public DDAline() {
        setTitle("DDA Line UTS KOMGRAF");
        setSize(500, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                if (x1 == 0 && y1 == 0) {
                    x1 = e.getX();
                    y1 = e.getY();
                } else {
                    x2 = e.getX();
                    y2 = e.getY();
                    repaint();
                    
                }
            }
        });
    }

    @Override
    public void paint(Graphics g) {
        super.paint(g);
        if (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0) {
            drawLineDDA(g, x1, y1, x2, y2);
        }
    }

    public void drawLineDDA(Graphics g, int x1, int y1, int x2, int y2) {
        int dx = x2 - x1;
        int dy = y2 - y1; 
        int steps = Math.max(Math.abs(dx), Math.abs(dy)); // mengambil nilai antara dx dan dy yang paling besar

        float xIncrement = (float) dx / steps;
        float yIncrement = (float) dy / steps;

        float x = x1;
        float y = y1;

        // mencari nilai incremen X dan Y 
    

        for (int i = 0; i <= steps; i++) { // looping
            g.setColor(Color.BLACK);
            g.fillRect(Math.round(x), Math.round(y), 1, 1); // Gambar titik pada koordinat (x, y)
            x += xIncrement;
            y += yIncrement;
        }
    }
        

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            DDAline ddaLine = new DDAline();
            ddaLine.setVisible(true);
        });
    }
}
//eksekusi program