import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class BrasenhamLineDrawing extends JFrame {
    private int x1 = 1, y1 = 2, x2 = 4, y2 = 1;

    public BrasenhamLineDrawing() {
        setTitle("Brasenham Line UTS KOMGRAF");
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
            drawLineBresenham(g, x1, y1, x2, y2);
        }
    }

    public void drawLineBresenham(Graphics g, int x1, int y1, int x2, int y2) {
        // Implementasi algoritma Bresenham 
        int dx = Math.abs(x2 - x1);
        int dy = Math.abs(y2 - y1);
        int sx = x1 < x2 ? 1 : -1;
        int sy = y1 < y2 ? 1 : -1;
        int err = dx - dy;
        //Looping
        while (x1 != x2 || y1 != y2) {
            g.drawLine(x1, y1, x1, y1);
            int e2 = 2 * err;
            if (e2 > -dy) {
                err -= dy;
                x1 += sx;
            }
            if (e2 < dx) {
                err += dx;
                y1 += sy;
            }
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            BrasenhamLineDrawing brasenhamLineDrawing = new BrasenhamLineDrawing();
            brasenhamLineDrawing.setVisible(true);
        });
    }
}
//eksekusi program
