// #include <gtest/gtest.h>
// #include "../src/ShapeFactory.h"

// TEST(ShapeFactoryTest, CreatesCircle) {
//     auto shape = ShapeFactory::createShape("circle");
//     ASSERT_NE(shape, nullptr);
//     EXPECT_EQ(shape->draw(), "Drawing Circle");
// }

// TEST(ShapeFactoryTest, CreatesSquare) {
//     auto shape = ShapeFactory::createShape("square");
//     ASSERT_NE(shape, nullptr);
//     EXPECT_EQ(shape->draw(), "Drawing Square");
// }

// TEST(ShapeFactoryTest, CreatesSRectangle) {
//     auto shape = ShapeFactory::createShape("rectangle");
//     ASSERT_NE(shape, nullptr);
//     EXPECT_EQ(shape->draw(), "Drawing Rectangle");
// }

// TEST(ShapeFactoryTest, ReturnsNullOnUnknownType) {
//     auto shape = ShapeFactory::createShape("triangle");
//     EXPECT_EQ(shape, nullptr);
// }

#include <gtest/gtest.h>
#include "../src/ShapeFactory.h"

TEST(ShapeFactoryTest, CreatesCircle) {
    auto shape = ShapeFactory::createShape("circle", 2.0);
    ASSERT_NE(shape, nullptr);
    EXPECT_EQ(shape->draw(), "Drawing Circle");
    EXPECT_NEAR(shape->area(), 12.5664, 0.0001);  // π * r^2
}

TEST(ShapeFactoryTest, CreatesSquare) {
    auto shape = ShapeFactory::createShape("square", 3.0);
    ASSERT_NE(shape, nullptr);
    EXPECT_EQ(shape->draw(), "Drawing Square");
    EXPECT_DOUBLE_EQ(shape->area(), 9.0);  // 3 * 3
}

TEST(ShapeFactoryTest, CreatesRectangle) {
    auto shape = ShapeFactory::createShape("rectangle", 4.0, 5.0);
    ASSERT_NE(shape, nullptr);
    EXPECT_EQ(shape->draw(), "Drawing Rectangle");
    EXPECT_DOUBLE_EQ(shape->area(), 20.0);  // 4 * 5
}

TEST(ShapeFactoryTest, ReturnsNullOnUnknownType) {
    auto shape = ShapeFactory::createShape("triangle");
    EXPECT_EQ(shape, nullptr);
}
