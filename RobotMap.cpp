// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANJaguar* RobotMap::intakeIntakeMotor = NULL;
CANJaguar* RobotMap::conveyorConveyorMotor = NULL;
CANJaguar* RobotMap::shooterFirstShooterMotor = NULL;
CANJaguar* RobotMap::shooterSecondShooterMotor = NULL;
DoubleSolenoid* RobotMap::shifterShifter1 = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	intakeIntakeMotor = new CANJaguar(11);
	
	
	conveyorConveyorMotor = new CANJaguar(12);
	
	
	shooterFirstShooterMotor = new CANJaguar(7);
	
	
	shooterSecondShooterMotor = new CANJaguar(8);
	
	
	shifterShifter1 = new DoubleSolenoid(1, 1, 2);      
	
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
