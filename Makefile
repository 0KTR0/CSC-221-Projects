CXX ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -pedantic
BUILD_DIR := .build

PROGRAMS := \
	$(BUILD_DIR)/project-1.2 \
	$(BUILD_DIR)/ocean-levels \
	$(BUILD_DIR)/distance-per-tank \
	$(BUILD_DIR)/energy-drink-consumption \
	$(BUILD_DIR)/ingredient-adjuster \
	$(BUILD_DIR)/interest-earned \
	$(BUILD_DIR)/lottery-tickets

.PHONY: all clean project-1.2 ocean-levels distance-per-tank energy-drink-consumption ingredient-adjuster interest-earned lottery-tickets

all: $(PROGRAMS)

project-1.2: $(BUILD_DIR)/project-1.2
ocean-levels: $(BUILD_DIR)/ocean-levels
distance-per-tank: $(BUILD_DIR)/distance-per-tank
energy-drink-consumption: $(BUILD_DIR)/energy-drink-consumption
ingredient-adjuster: $(BUILD_DIR)/ingredient-adjuster
interest-earned: $(BUILD_DIR)/interest-earned
lottery-tickets: $(BUILD_DIR)/lottery-tickets

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/project-1.2: CSC-221-Project-1.2/CSC-221-Project-1.2/CSC-221-Project-1.2.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR)/ocean-levels: CSC-221-Project-2.1-Ocean-Levels/OceanLevels.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR)/distance-per-tank: CSC-221-Project-2.2-Distance-Per-Tank-of-Gas/DistancePerTank.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR)/energy-drink-consumption: CSC-221-Project-2.3-Energy-Drink-Consumption/EnergyDrinkConsumption.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR)/ingredient-adjuster: CSC-221-Project-3.1-Ingredient-Adjuster/Main.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR)/interest-earned: CSC-221-Project-3.3-Interest-Earned/Main.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR)/lottery-tickets: CSC-221-Project-3.2-Lottery-Tickets/main.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(BUILD_DIR)