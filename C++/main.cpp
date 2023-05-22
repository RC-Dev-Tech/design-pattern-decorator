/*
 *  Design Pattern - Decorator 裝飾者模式
 * 
 * 這個範例展示了 Component、ConcreteComponent、Decorator 和 ConcreteDecorator 四個類別的概念。
 * Client 可以創建 ConcreteComponent 對象並直接呼叫其 Operation 方法，也可以創建 ConcreteDecorator 對象，並將 ConcreteComponent 對象作為參數傳遞給它。
 * Decorator 類持有一個 Component 對象的實例，並在 Operation 方法中調用該對象的 Operation 方法，同時可以添加額外的操作。
 * ConcreteDecorator 類繼承 Decorator 並實現 AdditionalOperation 方法，以提供對被裝飾對象的具體裝飾功能。
 */

#include <iostream>

/*
 * Component - 定義一個共同的接口，用於具體組件和裝飾器的一致性.
*/
class Component {
public:
    virtual void Operation() const = 0;
};

/*
 * ConcreteComponent - 實現 Component 接口，是被裝飾的對象，也就是需要添加額外職責的對象.
*/
class ConcreteComponent : public Component {
public:
    void Operation() const override {
        std::cout << "ConcreteComponent: Performing operation." << std::endl;
    }
};

/*
 * Decorator - 實現 Component 接口，同時持有一個 Component 對象的實例，即被裝飾對象.
*/
class Decorator : public Component {
protected:
    Component* component;

public:
    Decorator(Component* component) : component(component) {}

    void Operation() const override {
        if (component != nullptr) {
            component->Operation();
        }
    }
};

/*
 * ConcreteDecorator - 繼承 Decorator 類，實現對被裝飾對象的具體裝飾功能.
*/
class ConcreteDecorator : public Decorator {
public:
    ConcreteDecorator(Component* component) : Decorator(component) {}

    void Operation() const override {
        Decorator::Operation();
        AdditionalOperation();
    }

    void AdditionalOperation() const {
        std::cout << "ConcreteDecorator: Performing additional operation." << std::endl;
    }
};

/*
 * Client - 使用 Decorator 模式的客戶端.
*/
int main() {
    Component* component = new ConcreteComponent();
    component->Operation();

    Component* decoratedComponent = new ConcreteDecorator(component);
    decoratedComponent->Operation();

    delete decoratedComponent;
    delete component;

    return 0;
}
