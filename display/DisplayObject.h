class  DisplayObject{
public:

    DisplayObject();

    ~DisplayObject() {
    }

    float getX() const {
        return x;
    }

    void setX(float x) {
        DisplayObject::x = x;
    }

    float getY() const {
        return y;
    }

    void setY(float y) {
        DisplayObject::y = y;
    }

    float getWidth() const {
        return width;
    }

    void setWidth(float width) {
        DisplayObject::width = width;
    }

    float getHeight() const {
        return height;
    }

    void setHeight(float height) {
        DisplayObject::height = height;
    }

    float getRotationX() const {
        return rotationX;
    }

    void setRotationX(float rotationX) {
        DisplayObject::rotationX = rotationX;
    }

    float getRotationY() const {
        return rotationY;
    }

    void setRotationY(float rotationY) {
        DisplayObject::rotationY = rotationY;
    }

    float getScaleX() const {
        return scaleX;
    }

    void setScaleX(float scaleX) {
        DisplayObject::scaleX = scaleX;
    }

    float getScaleY() const {
        return ScaleY;
    }

    void setScaleY(float ScaleY) {
        DisplayObject::ScaleY = ScaleY;
    }

private:

    float x, y;

    float width, height;

    float rotationX, rotationY;

    float scaleX, ScaleY;
};