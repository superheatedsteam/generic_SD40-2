
	Comment ( Standard Grade F Couplers for Diesel Locomotives )
	Comment ( include ( "..\\..\\Common.inc\\Locomotives\\Std_TypeF_Coupler.inc" ) )

	Coupling (
		Type ( Automatic )
		Spring (
			Stiffness ( 4e2N/m 6e6N/m )
			Damping ( 5e6N/m/s 5e6N/m/s )
			Break ( 1850kN 1850kN )
			r0 ( 3cm 5cm )
		)
		CouplingHasRigidConnection ( 1 )
		Velocity ( 0.2m/s )
	)
	Comment ( front coupling )
	Coupling (
		Type ( Automatic )
		Spring (
			Stiffness ( 4e2N/m 6e6N/m )
			Damping ( 5e6N/m/s 5e6N/m/s )
			Break ( 1850kN 1850kN )
			r0 ( 3cm 5cm )
		)
		CouplingHasRigidConnection ( 1 ) 
		Velocity ( -0.2m/s )
	)
