
Comment ( VER2 Standard ORTS Diesel Engine for EMD SD40-2 & SD40T2, and safety cab "W" model )
Comment ( Data from Bob Boudoin Engine physics and Derek Morton Train physics )

ORTSCurtius_Kniffler ( 9.429 90.537 0.161 0.7 ) 

Comment ( Power Ratings == Gross HP 3150 == Traction HP 3000 == Rail HP 2520 )
Comment ( Coninuous Tractive Effort 83089lb @ 11.23mph == 84%eff. == Stating Tractive Effort 103408lb )
Comment ( Mass 390218lbs = 177.0t == metric, Adhesion Factor = 26.5% )
Comment ( Mass×Adhesion Factor = Starting Tractive Effort )
Comment ( Brake HP -- bhp = Power-at-the-shaft = Gross HP or MaximalPower )
Comment ( Gross HP per technical specs or lacking good data == add 130hp to 150hp to Traction HP )
Comment ( Diesel Consumption Tab == http://www.gatx.com )
Comment ( include ( "..\\..\\Common.inc\\Locomotives\\Std_Eng_SD40-2.inc" ) )

ORTSDieselEngines ( 1			
	Diesel (		
	IdleRPM ( 255 )		
	MaxRPM ( 904 )		
	StartingRPM ( 155 )		
	StartingConfirmRPM ( 305 )		
	ChangeUpRPMps ( 84 )		
	ChangeDownRPMps ( 53 )		
	RateOfChangeUpRPMpSS ( 13 )		
	RateOfChangeDownRPMpSS ( 8 )		
	MaximalPower ( 2348955W )		
	IdleExhaust ( 1.2 )		
	MaxExhaust ( 2.2 )		
	ExhaustDynamics ( 1.6 )		
	ExhaustDynamicsDown ( 0.8 )		
	ExhaustColor ( 20161819 )		
	ExhaustTransientColor ( 40212324 )		
	DieselPowerTab (		
		0	0
		318	293806
		402	587612
		486	880672
		570	1174478
		654	1468283
		738	1762089
		822	2055149
		904	2348955
	)		
	DieselConsumptionTab (		
		0	0
		255	16.3
		318	34.4
		402	94.2
		486	156.7
		570	216.5
		654	299.0
		738	410.7
		822	549.6
		904	634.7
	)
	ThrottleRPMTab (		
		0	255
		12.5	318
		25	402
		37.5	486
		50	570
		62.5	654
		75	738
		87.5	822
		100	904
	)		
	DieselTorqueTab (		
		0	0
		318	70534
		402	55795
		486	46152
		570	39350
		654	34296
		738	30393
		822	27287
		904	24812
	)		
	MinOilPressure ( 30psi )		
	MaxOilPressure ( 90psi )		
	MaxTemperature ( 120degc )		
	Cooling ( 3 )		
	TempTimeConstant ( 720 )		
	OptTemperature ( 71degc )		
	IdleTemperature ( 55degc )		
	)		
)
ORTSEmergencyCausesThrottleDown ( 0 )
	ORTSWheelSlipCausesThrottleDown ( 0 )
	ORTSMainResChargingRate ( 0.4psi/s )
	ORTSBrakePipeChargingRate ( 200psi/s )
	ORTSEngineBrakeReleaseRate ( 38psi/s )
	ORTSEngineBrakeApplicationRate ( 34psi/s )
	ORTSBrakePipeTimeFactor ( 0.003 )
	ORTSBrakeEmergencyTimeFactor ( 0.1 )
	ORTSBrakeServiceTimeFactor ( 1.009 )
	ORTSAirBrakeMainResVolume ( 28.35ft^3 )
	TrainPipeLeakRate ( 0.0833psi/s )
	TrainBrakesControllerMaxReleaseRate ( 10psi/s )

MaxForce ( 460298N )
MaxContinuousForce ( 369598N )
ORTSMaxTractiveForceCurves (					
		0 (			
			0	0	
			4.03	0	
			5.28	0	
			6.88	0	
			8.94	0	
			11.40	0	
			14.31	0	
			17.88	0	
			21.90	0	
			26.38	0	
			31.29	0	)
	0.125 (				
			0	57538	
			4.03	57538	
			5.28	43957	
			6.88	33682	
			8.94	25935	
			11.40	20341	
			14.31	16210	
			17.88	12968	
			21.90	10586	
			26.38	8792	
			31.29	7410	)
	0.25 (				
			0	115075	
			4.03	115075	
			5.28	87914	
			6.88	67363	
			8.94	51869	
			11.40	40682	
			14.31	32419	
			17.88	25935	
			21.90	21172	
			26.38	17583	
			31.29	14820	)
	0.375 (				
			0	172612	
			4.03	172612	
			5.28	131871	
			6.88	101044	
			8.94	77804	
			11.40	61023	
			14.31	48628	
			17.88	38902	
			21.90	31757	
			26.38	26375	
			31.29	22230	)
	0.50 (				
			0	230149	
			4.03	230149	
			5.28	175827	
			6.88	134725	
			8.94	103738	
			11.40	81364	
			14.31	64837	
			17.88	51869	
			21.90	42343	
			26.38	35166	
			31.29	29640	)
	0.625 (				
			0	287687	
			4.03	287687	
			5.28	219784	
			6.88	168406	
			8.94	129673	
			11.40	101704	
			14.31	81046	
			17.88	64837	
			21.90	52928	
			26.38	43957	
			31.29	37050	)
	0.75 (				
			0	345224	
			4.03	345224	
			5.28	263741	
			6.88	202087	
			8.94	155607	
			11.40	122045	
			14.31	97255	
			17.88	77804	
			21.90	63514	
			26.38	52749	
			31.29	44460	)
	0.875 (				
			0	402761	
			4.03	402761	
			5.28	307698	
			6.88	235769	
			8.94	181542	
			11.40	142386	
			14.31	113464	
			17.88	90771	
			21.90	74099	
			26.38	61540	
			31.29	51869	)
	1.0 (				
			0	460298	
			4.03	460298	
			5.28	351654	
			6.88	269450	
			8.94	207476	
			11.40	162727	
			14.31	129673	
			17.88	103738	
			21.90	84685	
			26.38	70331	
			31.29	59279	)
		)			
