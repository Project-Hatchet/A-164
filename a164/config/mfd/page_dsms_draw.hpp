color[]={0,0.83999997,0,1};
TEXT_MFD_R_SCALE(CCIP_TEXT,0.37,0.08,0.6,"center")
	source="static";
	sourceScale=1;
	sourceIndex=1;
	text="CCIP";
}; // WP_COUNT

TEXT_MFD_R_SCALE(CCRP_TEXT,0.62,0.08,0.6,"center")
	source="static";
	sourceScale=1;
	sourceIndex=1;
	text="CCRP";
}; // WP_COUNT

class PylonSelected6
{
	condition="PylonSelected6>0";
	class NotEmpty
	{
		color[]={0.58999997,0.30000001,0,1};
		condition="PylonAmmoRelative6>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.113477,0.15763301},
						1
					},
					
					{
						{0.113477,0.24454699},
						1
					},
					
					{
						{0.32246101,0.24454699},
						1
					},
					
					{
						{0.32246101,0.15763301},
						1
					},
					
					{
						{0.113477,0.15763301},
						1
					},
					{},
					
					{
						{0.32234401,0.226969},
						1
					},
					
					{
						{0.35749999,0.226969},
						1
					},
					
					{
						{0.35749999,0.175211},
						1
					},
					
					{
						{0.32234401,0.175211},
						1
					},
					
					{
						{0.32234401,0.226969},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.32234401,0.226969},
						1
					},
					
					{
						{0.35749999,0.226969},
						1
					},
					
					{
						"PylonAmmo6",
						{0.35749999,0.175211},
						1
					},
					
					{
						"PylonAmmo6",
						{0.32234401,0.175211},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=6;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.163727},
				1
			};
			right[]=
			{
				{0.16328099,0.163727},
				1
			};
			down[]=
			{
				{0.127148,0.198883},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=6;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.20372701},
				1
			};
			right[]=
			{
				{0.16328099,0.20372701},
				1
			};
			down[]=
			{
				{0.127148,0.238883},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=6;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.30714801,0.20372701},
				1
			};
			right[]=
			{
				{0.343281,0.20372701},
				1
			};
			down[]=
			{
				{0.30714801,0.238883},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative6<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.32234401,0.226969},
						1
					},
					
					{
						{0.35749999,0.226969},
						1
					},
					
					{
						{0.35749999,0.175211},
						1
					},
					
					{
						{0.32234401,0.175211},
						1
					},
					
					{
						{0.32234401,0.226969},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.113477,0.15763301},
							1
						},
						
						{
							{0.113477,0.24454699},
							1
						},
						
						{
							{0.32246101,0.24454699},
							1
						},
						
						{
							{0.32246101,0.15763301},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=6;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.127148,0.16349199},
					1
				};
				right[]=
				{
					{0.14375,0.16349199},
					1
				};
				down[]=
				{
					{0.127148,0.18888301},
					1
				};
			};
		};
	};
};
class Pylon6
{
	condition="PylonSelected6<=0";
	class NotEmpty
	{
		color[]={0,0.83999997,0,1};
		condition="PylonAmmoRelative6>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.113477,0.15763301},
						1
					},
					
					{
						{0.113477,0.24454699},
						1
					},
					
					{
						{0.32246101,0.24454699},
						1
					},
					
					{
						{0.32246101,0.15763301},
						1
					},
					
					{
						{0.113477,0.15763301},
						1
					},
					{},
					
					{
						{0.32234401,0.226969},
						1
					},
					
					{
						{0.35749999,0.226969},
						1
					},
					
					{
						{0.35749999,0.175211},
						1
					},
					
					{
						{0.32234401,0.175211},
						1
					},
					
					{
						{0.32234401,0.226969},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.32234401,0.226969},
						1
					},
					
					{
						{0.35749999,0.226969},
						1
					},
					
					{
						"PylonAmmo6",
						{0.35749999,0.175211},
						1
					},
					
					{
						"PylonAmmo6",
						{0.32234401,0.175211},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=6;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.163727},
				1
			};
			right[]=
			{
				{0.16328099,0.163727},
				1
			};
			down[]=
			{
				{0.127148,0.198883},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=6;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.20372701},
				1
			};
			right[]=
			{
				{0.16328099,0.20372701},
				1
			};
			down[]=
			{
				{0.127148,0.238883},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=6;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.30714801,0.20372701},
				1
			};
			right[]=
			{
				{0.343281,0.20372701},
				1
			};
			down[]=
			{
				{0.30714801,0.238883},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative6<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.32234401,0.226969},
						1
					},
					
					{
						{0.35749999,0.226969},
						1
					},
					
					{
						{0.35749999,0.175211},
						1
					},
					
					{
						{0.32234401,0.175211},
						1
					},
					
					{
						{0.32234401,0.226969},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.113477,0.15763301},
							1
						},
						
						{
							{0.113477,0.24454699},
							1
						},
						
						{
							{0.32246101,0.24454699},
							1
						},
						
						{
							{0.32246101,0.15763301},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=6;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.127148,0.16349199},
					1
				};
				right[]=
				{
					{0.14375,0.16349199},
					1
				};
				down[]=
				{
					{0.127148,0.18888301},
					1
				};
			};
		};
	};
};
class PylonSelected7
{
	condition="PylonSelected7>0";
	class NotEmpty
	{
		color[]={0.58999997,0.30000001,0,1};
		condition="PylonAmmoRelative7>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.113477,0.273844},
						1
					},
					
					{
						{0.113477,0.36075801},
						1
					},
					
					{
						{0.32246101,0.36075801},
						1
					},
					
					{
						{0.32246101,0.273844},
						1
					},
					
					{
						{0.113477,0.273844},
						1
					},
					{},
					
					{
						{0.32234401,0.34318},
						1
					},
					
					{
						{0.35749999,0.34318},
						1
					},
					
					{
						{0.35749999,0.29142201},
						1
					},
					
					{
						{0.32234401,0.29142201},
						1
					},
					
					{
						{0.32234401,0.34318},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.32234401,0.34318},
						1
					},
					
					{
						{0.35749999,0.34318},
						1
					},
					
					{
						"PylonAmmo7",
						{0.35749999,0.29142201},
						1
					},
					
					{
						"PylonAmmo7",
						{0.32234401,0.29142201},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=7;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.27993801},
				1
			};
			right[]=
			{
				{0.16328099,0.27993801},
				1
			};
			down[]=
			{
				{0.127148,0.31509399},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=7;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.31993699},
				1
			};
			right[]=
			{
				{0.16328099,0.31993699},
				1
			};
			down[]=
			{
				{0.127148,0.35509399},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=7;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.30714801,0.31993699},
				1
			};
			right[]=
			{
				{0.343281,0.31993699},
				1
			};
			down[]=
			{
				{0.30714801,0.35509399},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative7<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.32234401,0.34318},
						1
					},
					
					{
						{0.35749999,0.34318},
						1
					},
					
					{
						{0.35749999,0.29142201},
						1
					},
					
					{
						{0.32234401,0.29142201},
						1
					},
					
					{
						{0.32234401,0.34318},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.113477,0.273844},
							1
						},
						
						{
							{0.113477,0.36075801},
							1
						},
						
						{
							{0.32246101,0.36075801},
							1
						},
						
						{
							{0.32246101,0.273844},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=7;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.127148,0.27970299},
					1
				};
				right[]=
				{
					{0.14375,0.27970299},
					1
				};
				down[]=
				{
					{0.127148,0.305094},
					1
				};
			};
		};
	};
};
class Pylon7
{
	condition="PylonSelected7<=0";
	class NotEmpty
	{
		color[]={0,0.83999997,0,1};
		condition="PylonAmmoRelative7>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.113477,0.273844},
						1
					},
					
					{
						{0.113477,0.36075801},
						1
					},
					
					{
						{0.32246101,0.36075801},
						1
					},
					
					{
						{0.32246101,0.273844},
						1
					},
					
					{
						{0.113477,0.273844},
						1
					},
					{},
					
					{
						{0.32234401,0.34318},
						1
					},
					
					{
						{0.35749999,0.34318},
						1
					},
					
					{
						{0.35749999,0.29142201},
						1
					},
					
					{
						{0.32234401,0.29142201},
						1
					},
					
					{
						{0.32234401,0.34318},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.32234401,0.34318},
						1
					},
					
					{
						{0.35749999,0.34318},
						1
					},
					
					{
						"PylonAmmo7",
						{0.35749999,0.29142201},
						1
					},
					
					{
						"PylonAmmo7",
						{0.32234401,0.29142201},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=7;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.27993801},
				1
			};
			right[]=
			{
				{0.16328099,0.27993801},
				1
			};
			down[]=
			{
				{0.127148,0.31509399},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=7;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.31993699},
				1
			};
			right[]=
			{
				{0.16328099,0.31993699},
				1
			};
			down[]=
			{
				{0.127148,0.35509399},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=7;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.30714801,0.31993699},
				1
			};
			right[]=
			{
				{0.343281,0.31993699},
				1
			};
			down[]=
			{
				{0.30714801,0.35509399},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative7<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.32234401,0.34318},
						1
					},
					
					{
						{0.35749999,0.34318},
						1
					},
					
					{
						{0.35749999,0.29142201},
						1
					},
					
					{
						{0.32234401,0.29142201},
						1
					},
					
					{
						{0.32234401,0.34318},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.113477,0.273844},
							1
						},
						
						{
							{0.113477,0.36075801},
							1
						},
						
						{
							{0.32246101,0.36075801},
							1
						},
						
						{
							{0.32246101,0.273844},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=7;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.127148,0.27970299},
					1
				};
				right[]=
				{
					{0.14375,0.27970299},
					1
				};
				down[]=
				{
					{0.127148,0.305094},
					1
				};
			};
		};
	};
};
class PylonSelected8
{
	condition="PylonSelected8>0";
	class NotEmpty
	{
		color[]={0.58999997,0.30000001,0,1};
		condition="PylonAmmoRelative8>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.113477,0.390055},
						1
					},
					
					{
						{0.113477,0.476969},
						1
					},
					
					{
						{0.32246101,0.476969},
						1
					},
					
					{
						{0.32246101,0.390055},
						1
					},
					
					{
						{0.113477,0.390055},
						1
					},
					{},
					
					{
						{0.32234401,0.459391},
						1
					},
					
					{
						{0.35749999,0.459391},
						1
					},
					
					{
						{0.35749999,0.40763301},
						1
					},
					
					{
						{0.32234401,0.40763301},
						1
					},
					
					{
						{0.32234401,0.459391},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.32234401,0.459391},
						1
					},
					
					{
						{0.35749999,0.459391},
						1
					},
					
					{
						"PylonAmmo8",
						{0.35749999,0.40763301},
						1
					},
					
					{
						"PylonAmmo8",
						{0.32234401,0.40763301},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=8;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.396148},
				1
			};
			right[]=
			{
				{0.16328099,0.396148},
				1
			};
			down[]=
			{
				{0.127148,0.43130499},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=8;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.43614799},
				1
			};
			right[]=
			{
				{0.16328099,0.43614799},
				1
			};
			down[]=
			{
				{0.127148,0.47130501},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=8;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.30714801,0.43614799},
				1
			};
			right[]=
			{
				{0.343281,0.43614799},
				1
			};
			down[]=
			{
				{0.30714801,0.47130501},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative8<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.32234401,0.459391},
						1
					},
					
					{
						{0.35749999,0.459391},
						1
					},
					
					{
						{0.35749999,0.40763301},
						1
					},
					
					{
						{0.32234401,0.40763301},
						1
					},
					
					{
						{0.32234401,0.459391},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.113477,0.390055},
							1
						},
						
						{
							{0.113477,0.476969},
							1
						},
						
						{
							{0.32246101,0.476969},
							1
						},
						
						{
							{0.32246101,0.390055},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=8;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.127148,0.39591399},
					1
				};
				right[]=
				{
					{0.14375,0.39591399},
					1
				};
				down[]=
				{
					{0.127148,0.421305},
					1
				};
			};
		};
	};
};
class Pylon8
{
	condition="PylonSelected8<=0";
	class NotEmpty
	{
		color[]={0,0.83999997,0,1};
		condition="PylonAmmoRelative8>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.113477,0.390055},
						1
					},
					
					{
						{0.113477,0.476969},
						1
					},
					
					{
						{0.32246101,0.476969},
						1
					},
					
					{
						{0.32246101,0.390055},
						1
					},
					
					{
						{0.113477,0.390055},
						1
					},
					{},
					
					{
						{0.32234401,0.459391},
						1
					},
					
					{
						{0.35749999,0.459391},
						1
					},
					
					{
						{0.35749999,0.40763301},
						1
					},
					
					{
						{0.32234401,0.40763301},
						1
					},
					
					{
						{0.32234401,0.459391},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.32234401,0.459391},
						1
					},
					
					{
						{0.35749999,0.459391},
						1
					},
					
					{
						"PylonAmmo8",
						{0.35749999,0.40763301},
						1
					},
					
					{
						"PylonAmmo8",
						{0.32234401,0.40763301},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=8;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.396148},
				1
			};
			right[]=
			{
				{0.16328099,0.396148},
				1
			};
			down[]=
			{
				{0.127148,0.43130499},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=8;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.43614799},
				1
			};
			right[]=
			{
				{0.16328099,0.43614799},
				1
			};
			down[]=
			{
				{0.127148,0.47130501},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=8;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.30714801,0.43614799},
				1
			};
			right[]=
			{
				{0.343281,0.43614799},
				1
			};
			down[]=
			{
				{0.30714801,0.47130501},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative8<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.32234401,0.459391},
						1
					},
					
					{
						{0.35749999,0.459391},
						1
					},
					
					{
						{0.35749999,0.40763301},
						1
					},
					
					{
						{0.32234401,0.40763301},
						1
					},
					
					{
						{0.32234401,0.459391},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.113477,0.390055},
							1
						},
						
						{
							{0.113477,0.476969},
							1
						},
						
						{
							{0.32246101,0.476969},
							1
						},
						
						{
							{0.32246101,0.390055},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=8;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.127148,0.39591399},
					1
				};
				right[]=
				{
					{0.14375,0.39591399},
					1
				};
				down[]=
				{
					{0.127148,0.421305},
					1
				};
			};
		};
	};
};
class PylonSelected9
{
	condition="PylonSelected9>0";
	class NotEmpty
	{
		color[]={0.58999997,0.30000001,0,1};
		condition="PylonAmmoRelative9>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.113477,0.506266},
						1
					},
					
					{
						{0.113477,0.59318},
						1
					},
					
					{
						{0.32246101,0.59318},
						1
					},
					
					{
						{0.32246101,0.506266},
						1
					},
					
					{
						{0.113477,0.506266},
						1
					},
					{},
					
					{
						{0.32234401,0.57560199},
						1
					},
					
					{
						{0.35749999,0.57560199},
						1
					},
					
					{
						{0.35749999,0.523844},
						1
					},
					
					{
						{0.32234401,0.523844},
						1
					},
					
					{
						{0.32234401,0.57560199},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.32234401,0.57560199},
						1
					},
					
					{
						{0.35749999,0.57560199},
						1
					},
					
					{
						"PylonAmmo9",
						{0.35749999,0.523844},
						1
					},
					
					{
						"PylonAmmo9",
						{0.32234401,0.523844},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=9;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.51235902},
				1
			};
			right[]=
			{
				{0.16328099,0.51235902},
				1
			};
			down[]=
			{
				{0.127148,0.54751599},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=9;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.55235898},
				1
			};
			right[]=
			{
				{0.16328099,0.55235898},
				1
			};
			down[]=
			{
				{0.127148,0.58751601},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=9;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.30714801,0.55235898},
				1
			};
			right[]=
			{
				{0.343281,0.55235898},
				1
			};
			down[]=
			{
				{0.30714801,0.58751601},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative9<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.32234401,0.57560199},
						1
					},
					
					{
						{0.35749999,0.57560199},
						1
					},
					
					{
						{0.35749999,0.523844},
						1
					},
					
					{
						{0.32234401,0.523844},
						1
					},
					
					{
						{0.32234401,0.57560199},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.113477,0.506266},
							1
						},
						
						{
							{0.113477,0.59318},
							1
						},
						
						{
							{0.32246101,0.59318},
							1
						},
						
						{
							{0.32246101,0.506266},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=9;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.127148,0.51212502},
					1
				};
				right[]=
				{
					{0.14375,0.51212502},
					1
				};
				down[]=
				{
					{0.127148,0.537516},
					1
				};
			};
		};
	};
};
class Pylon9
{
	condition="PylonSelected9<=0";
	class NotEmpty
	{
		color[]={0,0.83999997,0,1};
		condition="PylonAmmoRelative9>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.113477,0.506266},
						1
					},
					
					{
						{0.113477,0.59318},
						1
					},
					
					{
						{0.32246101,0.59318},
						1
					},
					
					{
						{0.32246101,0.506266},
						1
					},
					
					{
						{0.113477,0.506266},
						1
					},
					{},
					
					{
						{0.32234401,0.57560199},
						1
					},
					
					{
						{0.35749999,0.57560199},
						1
					},
					
					{
						{0.35749999,0.523844},
						1
					},
					
					{
						{0.32234401,0.523844},
						1
					},
					
					{
						{0.32234401,0.57560199},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.32234401,0.57560199},
						1
					},
					
					{
						{0.35749999,0.57560199},
						1
					},
					
					{
						"PylonAmmo9",
						{0.35749999,0.523844},
						1
					},
					
					{
						"PylonAmmo9",
						{0.32234401,0.523844},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=9;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.51235902},
				1
			};
			right[]=
			{
				{0.16328099,0.51235902},
				1
			};
			down[]=
			{
				{0.127148,0.54751599},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=9;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.55235898},
				1
			};
			right[]=
			{
				{0.16328099,0.55235898},
				1
			};
			down[]=
			{
				{0.127148,0.58751601},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=9;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.30714801,0.55235898},
				1
			};
			right[]=
			{
				{0.343281,0.55235898},
				1
			};
			down[]=
			{
				{0.30714801,0.58751601},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative9<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.32234401,0.57560199},
						1
					},
					
					{
						{0.35749999,0.57560199},
						1
					},
					
					{
						{0.35749999,0.523844},
						1
					},
					
					{
						{0.32234401,0.523844},
						1
					},
					
					{
						{0.32234401,0.57560199},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.113477,0.506266},
							1
						},
						
						{
							{0.113477,0.59318},
							1
						},
						
						{
							{0.32246101,0.59318},
							1
						},
						
						{
							{0.32246101,0.506266},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=9;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.127148,0.51212502},
					1
				};
				right[]=
				{
					{0.14375,0.51212502},
					1
				};
				down[]=
				{
					{0.127148,0.537516},
					1
				};
			};
		};
	};
};
class PylonSelected10
{
	condition="PylonSelected10>0";
	class NotEmpty
	{
		color[]={0.58999997,0.30000001,0,1};
		condition="PylonAmmoRelative10>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.113477,0.62247699},
						1
					},
					
					{
						{0.113477,0.709391},
						1
					},
					
					{
						{0.32246101,0.709391},
						1
					},
					
					{
						{0.32246101,0.62247699},
						1
					},
					
					{
						{0.113477,0.62247699},
						1
					},
					{},
					
					{
						{0.32234401,0.69181299},
						1
					},
					
					{
						{0.35749999,0.69181299},
						1
					},
					
					{
						{0.35749999,0.640055},
						1
					},
					
					{
						{0.32234401,0.640055},
						1
					},
					
					{
						{0.32234401,0.69181299},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.32234401,0.69181299},
						1
					},
					
					{
						{0.35749999,0.69181299},
						1
					},
					
					{
						"PylonAmmo10",
						{0.35749999,0.640055},
						1
					},
					
					{
						"PylonAmmo10",
						{0.32234401,0.640055},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=10;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.62857002},
				1
			};
			right[]=
			{
				{0.16328099,0.62857002},
				1
			};
			down[]=
			{
				{0.127148,0.66372699},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=10;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.66856998},
				1
			};
			right[]=
			{
				{0.16328099,0.66856998},
				1
			};
			down[]=
			{
				{0.127148,0.70372701},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=10;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.30714801,0.66856998},
				1
			};
			right[]=
			{
				{0.343281,0.66856998},
				1
			};
			down[]=
			{
				{0.30714801,0.70372701},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative10<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.32234401,0.69181299},
						1
					},
					
					{
						{0.35749999,0.69181299},
						1
					},
					
					{
						{0.35749999,0.640055},
						1
					},
					
					{
						{0.32234401,0.640055},
						1
					},
					
					{
						{0.32234401,0.69181299},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.113477,0.62247699},
							1
						},
						
						{
							{0.113477,0.709391},
							1
						},
						
						{
							{0.32246101,0.709391},
							1
						},
						
						{
							{0.32246101,0.62247699},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=10;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.127148,0.62833601},
					1
				};
				right[]=
				{
					{0.14375,0.62833601},
					1
				};
				down[]=
				{
					{0.127148,0.65372699},
					1
				};
			};
		};
	};
};
class Pylon10
{
	condition="PylonSelected10<=0";
	class NotEmpty
	{
		color[]={0,0.83999997,0,1};
		condition="PylonAmmoRelative10>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.113477,0.62247699},
						1
					},
					
					{
						{0.113477,0.709391},
						1
					},
					
					{
						{0.32246101,0.709391},
						1
					},
					
					{
						{0.32246101,0.62247699},
						1
					},
					
					{
						{0.113477,0.62247699},
						1
					},
					{},
					
					{
						{0.32234401,0.69181299},
						1
					},
					
					{
						{0.35749999,0.69181299},
						1
					},
					
					{
						{0.35749999,0.640055},
						1
					},
					
					{
						{0.32234401,0.640055},
						1
					},
					
					{
						{0.32234401,0.69181299},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.32234401,0.69181299},
						1
					},
					
					{
						{0.35749999,0.69181299},
						1
					},
					
					{
						"PylonAmmo10",
						{0.35749999,0.640055},
						1
					},
					
					{
						"PylonAmmo10",
						{0.32234401,0.640055},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=10;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.62857002},
				1
			};
			right[]=
			{
				{0.16328099,0.62857002},
				1
			};
			down[]=
			{
				{0.127148,0.66372699},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=10;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.127148,0.66856998},
				1
			};
			right[]=
			{
				{0.16328099,0.66856998},
				1
			};
			down[]=
			{
				{0.127148,0.70372701},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=10;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.30714801,0.66856998},
				1
			};
			right[]=
			{
				{0.343281,0.66856998},
				1
			};
			down[]=
			{
				{0.30714801,0.70372701},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative10<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.32234401,0.69181299},
						1
					},
					
					{
						{0.35749999,0.69181299},
						1
					},
					
					{
						{0.35749999,0.640055},
						1
					},
					
					{
						{0.32234401,0.640055},
						1
					},
					
					{
						{0.32234401,0.69181299},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.113477,0.62247699},
							1
						},
						
						{
							{0.113477,0.709391},
							1
						},
						
						{
							{0.32246101,0.709391},
							1
						},
						
						{
							{0.32246101,0.62247699},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=10;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.127148,0.62833601},
					1
				};
				right[]=
				{
					{0.14375,0.62833601},
					1
				};
				down[]=
				{
					{0.127148,0.65372699},
					1
				};
			};
		};
	};
};
class PylonSelected5
{
	condition="PylonSelected5>0";
	class NotEmpty
	{
		color[]={0.58999997,0.30000001,0,1};
		condition="PylonAmmoRelative5>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.70347703,0.15763301},
						1
					},
					
					{
						{0.70347703,0.24454699},
						1
					},
					
					{
						{0.91246098,0.24454699},
						1
					},
					
					{
						{0.91246098,0.15763301},
						1
					},
					
					{
						{0.70347703,0.15763301},
						1
					},
					{},
					
					{
						{0.66734397,0.226969},
						1
					},
					
					{
						{0.70249999,0.226969},
						1
					},
					
					{
						{0.70249999,0.175211},
						1
					},
					
					{
						{0.66734397,0.175211},
						1
					},
					
					{
						{0.66734397,0.226969},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.66734397,0.226969},
						1
					},
					
					{
						{0.70249999,0.226969},
						1
					},
					
					{
						"PylonAmmo5",
						{0.70249999,0.175211},
						1
					},
					
					{
						"PylonAmmo5",
						{0.66734397,0.175211},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=5;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.163727},
				1
			};
			right[]=
			{
				{0.753281,0.163727},
				1
			};
			down[]=
			{
				{0.71714801,0.198883},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=5;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.20372701},
				1
			};
			right[]=
			{
				{0.753281,0.20372701},
				1
			};
			down[]=
			{
				{0.71714801,0.238883},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=5;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.89714801,0.20372701},
				1
			};
			right[]=
			{
				{0.933281,0.20372701},
				1
			};
			down[]=
			{
				{0.89714801,0.238883},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative5<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.66734397,0.226969},
						1
					},
					
					{
						{0.70249999,0.226969},
						1
					},
					
					{
						{0.70249999,0.175211},
						1
					},
					
					{
						{0.66734397,0.175211},
						1
					},
					
					{
						{0.66734397,0.226969},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.70347703,0.15763301},
							1
						},
						
						{
							{0.70347703,0.24454699},
							1
						},
						
						{
							{0.91246098,0.24454699},
							1
						},
						
						{
							{0.91246098,0.15763301},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=5;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.71714801,0.16349199},
					1
				};
				right[]=
				{
					{0.73374999,0.16349199},
					1
				};
				down[]=
				{
					{0.71714801,0.18888301},
					1
				};
			};
		};
	};
};
class Pylon5
{
	condition="PylonSelected5<=0";
	class NotEmpty
	{
		color[]={0,0.83999997,0,1};
		condition="PylonAmmoRelative5>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.70347703,0.15763301},
						1
					},
					
					{
						{0.70347703,0.24454699},
						1
					},
					
					{
						{0.91246098,0.24454699},
						1
					},
					
					{
						{0.91246098,0.15763301},
						1
					},
					
					{
						{0.70347703,0.15763301},
						1
					},
					{},
					
					{
						{0.66734397,0.226969},
						1
					},
					
					{
						{0.70249999,0.226969},
						1
					},
					
					{
						{0.70249999,0.175211},
						1
					},
					
					{
						{0.66734397,0.175211},
						1
					},
					
					{
						{0.66734397,0.226969},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.66734397,0.226969},
						1
					},
					
					{
						{0.70249999,0.226969},
						1
					},
					
					{
						"PylonAmmo5",
						{0.70249999,0.175211},
						1
					},
					
					{
						"PylonAmmo5",
						{0.66734397,0.175211},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=5;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.163727},
				1
			};
			right[]=
			{
				{0.753281,0.163727},
				1
			};
			down[]=
			{
				{0.71714801,0.198883},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=5;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.20372701},
				1
			};
			right[]=
			{
				{0.753281,0.20372701},
				1
			};
			down[]=
			{
				{0.71714801,0.238883},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=5;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.89714801,0.20372701},
				1
			};
			right[]=
			{
				{0.933281,0.20372701},
				1
			};
			down[]=
			{
				{0.89714801,0.238883},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative5<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.66734397,0.226969},
						1
					},
					
					{
						{0.70249999,0.226969},
						1
					},
					
					{
						{0.70249999,0.175211},
						1
					},
					
					{
						{0.66734397,0.175211},
						1
					},
					
					{
						{0.66734397,0.226969},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.70347703,0.15763301},
							1
						},
						
						{
							{0.70347703,0.24454699},
							1
						},
						
						{
							{0.91246098,0.24454699},
							1
						},
						
						{
							{0.91246098,0.15763301},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=5;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.71714801,0.16349199},
					1
				};
				right[]=
				{
					{0.73374999,0.16349199},
					1
				};
				down[]=
				{
					{0.71714801,0.18888301},
					1
				};
			};
		};
	};
};
class PylonSelected4
{
	condition="PylonSelected4>0";
	class NotEmpty
	{
		color[]={0.58999997,0.30000001,0,1};
		condition="PylonAmmoRelative4>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.70347703,0.273844},
						1
					},
					
					{
						{0.70347703,0.36075801},
						1
					},
					
					{
						{0.91246098,0.36075801},
						1
					},
					
					{
						{0.91246098,0.273844},
						1
					},
					
					{
						{0.70347703,0.273844},
						1
					},
					{},
					
					{
						{0.66734397,0.34318},
						1
					},
					
					{
						{0.70249999,0.34318},
						1
					},
					
					{
						{0.70249999,0.29142201},
						1
					},
					
					{
						{0.66734397,0.29142201},
						1
					},
					
					{
						{0.66734397,0.34318},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.66734397,0.34318},
						1
					},
					
					{
						{0.70249999,0.34318},
						1
					},
					
					{
						"PylonAmmo4",
						{0.70249999,0.29142201},
						1
					},
					
					{
						"PylonAmmo4",
						{0.66734397,0.29142201},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=4;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.27993801},
				1
			};
			right[]=
			{
				{0.753281,0.27993801},
				1
			};
			down[]=
			{
				{0.71714801,0.31509399},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=4;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.31993699},
				1
			};
			right[]=
			{
				{0.753281,0.31993699},
				1
			};
			down[]=
			{
				{0.71714801,0.35509399},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=4;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.89714801,0.31993699},
				1
			};
			right[]=
			{
				{0.933281,0.31993699},
				1
			};
			down[]=
			{
				{0.89714801,0.35509399},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative4<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.66734397,0.34318},
						1
					},
					
					{
						{0.70249999,0.34318},
						1
					},
					
					{
						{0.70249999,0.29142201},
						1
					},
					
					{
						{0.66734397,0.29142201},
						1
					},
					
					{
						{0.66734397,0.34318},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.70347703,0.273844},
							1
						},
						
						{
							{0.70347703,0.36075801},
							1
						},
						
						{
							{0.91246098,0.36075801},
							1
						},
						
						{
							{0.91246098,0.273844},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=4;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.71714801,0.27970299},
					1
				};
				right[]=
				{
					{0.73374999,0.27970299},
					1
				};
				down[]=
				{
					{0.71714801,0.305094},
					1
				};
			};
		};
	};
};
class Pylon4
{
	condition="PylonSelected4<=0";
	class NotEmpty
	{
		color[]={0,0.83999997,0,1};
		condition="PylonAmmoRelative4>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.70347703,0.273844},
						1
					},
					
					{
						{0.70347703,0.36075801},
						1
					},
					
					{
						{0.91246098,0.36075801},
						1
					},
					
					{
						{0.91246098,0.273844},
						1
					},
					
					{
						{0.70347703,0.273844},
						1
					},
					{},
					
					{
						{0.66734397,0.34318},
						1
					},
					
					{
						{0.70249999,0.34318},
						1
					},
					
					{
						{0.70249999,0.29142201},
						1
					},
					
					{
						{0.66734397,0.29142201},
						1
					},
					
					{
						{0.66734397,0.34318},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.66734397,0.34318},
						1
					},
					
					{
						{0.70249999,0.34318},
						1
					},
					
					{
						"PylonAmmo4",
						{0.70249999,0.29142201},
						1
					},
					
					{
						"PylonAmmo4",
						{0.66734397,0.29142201},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=4;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.27993801},
				1
			};
			right[]=
			{
				{0.753281,0.27993801},
				1
			};
			down[]=
			{
				{0.71714801,0.31509399},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=4;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.31993699},
				1
			};
			right[]=
			{
				{0.753281,0.31993699},
				1
			};
			down[]=
			{
				{0.71714801,0.35509399},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=4;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.89714801,0.31993699},
				1
			};
			right[]=
			{
				{0.933281,0.31993699},
				1
			};
			down[]=
			{
				{0.89714801,0.35509399},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative4<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.66734397,0.34318},
						1
					},
					
					{
						{0.70249999,0.34318},
						1
					},
					
					{
						{0.70249999,0.29142201},
						1
					},
					
					{
						{0.66734397,0.29142201},
						1
					},
					
					{
						{0.66734397,0.34318},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.70347703,0.273844},
							1
						},
						
						{
							{0.70347703,0.36075801},
							1
						},
						
						{
							{0.91246098,0.36075801},
							1
						},
						
						{
							{0.91246098,0.273844},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=4;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.71714801,0.27970299},
					1
				};
				right[]=
				{
					{0.73374999,0.27970299},
					1
				};
				down[]=
				{
					{0.71714801,0.305094},
					1
				};
			};
		};
	};
};
class PylonSelected3
{
	condition="PylonSelected3>0";
	class NotEmpty
	{
		color[]={0.58999997,0.30000001,0,1};
		condition="PylonAmmoRelative3>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.70347703,0.390055},
						1
					},
					
					{
						{0.70347703,0.476969},
						1
					},
					
					{
						{0.91246098,0.476969},
						1
					},
					
					{
						{0.91246098,0.390055},
						1
					},
					
					{
						{0.70347703,0.390055},
						1
					},
					{},
					
					{
						{0.66734397,0.459391},
						1
					},
					
					{
						{0.70249999,0.459391},
						1
					},
					
					{
						{0.70249999,0.40763301},
						1
					},
					
					{
						{0.66734397,0.40763301},
						1
					},
					
					{
						{0.66734397,0.459391},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.66734397,0.459391},
						1
					},
					
					{
						{0.70249999,0.459391},
						1
					},
					
					{
						"PylonAmmo3",
						{0.70249999,0.40763301},
						1
					},
					
					{
						"PylonAmmo3",
						{0.66734397,0.40763301},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=3;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.396148},
				1
			};
			right[]=
			{
				{0.753281,0.396148},
				1
			};
			down[]=
			{
				{0.71714801,0.43130499},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=3;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.43614799},
				1
			};
			right[]=
			{
				{0.753281,0.43614799},
				1
			};
			down[]=
			{
				{0.71714801,0.47130501},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=3;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.89714801,0.43614799},
				1
			};
			right[]=
			{
				{0.933281,0.43614799},
				1
			};
			down[]=
			{
				{0.89714801,0.47130501},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative3<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.66734397,0.459391},
						1
					},
					
					{
						{0.70249999,0.459391},
						1
					},
					
					{
						{0.70249999,0.40763301},
						1
					},
					
					{
						{0.66734397,0.40763301},
						1
					},
					
					{
						{0.66734397,0.459391},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.70347703,0.390055},
							1
						},
						
						{
							{0.70347703,0.476969},
							1
						},
						
						{
							{0.91246098,0.476969},
							1
						},
						
						{
							{0.91246098,0.390055},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=3;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.71714801,0.39591399},
					1
				};
				right[]=
				{
					{0.73374999,0.39591399},
					1
				};
				down[]=
				{
					{0.71714801,0.421305},
					1
				};
			};
		};
	};
};
class Pylon3
{
	condition="PylonSelected3<=0";
	class NotEmpty
	{
		color[]={0,0.83999997,0,1};
		condition="PylonAmmoRelative3>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.70347703,0.390055},
						1
					},
					
					{
						{0.70347703,0.476969},
						1
					},
					
					{
						{0.91246098,0.476969},
						1
					},
					
					{
						{0.91246098,0.390055},
						1
					},
					
					{
						{0.70347703,0.390055},
						1
					},
					{},
					
					{
						{0.66734397,0.459391},
						1
					},
					
					{
						{0.70249999,0.459391},
						1
					},
					
					{
						{0.70249999,0.40763301},
						1
					},
					
					{
						{0.66734397,0.40763301},
						1
					},
					
					{
						{0.66734397,0.459391},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.66734397,0.459391},
						1
					},
					
					{
						{0.70249999,0.459391},
						1
					},
					
					{
						"PylonAmmo3",
						{0.70249999,0.40763301},
						1
					},
					
					{
						"PylonAmmo3",
						{0.66734397,0.40763301},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=3;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.396148},
				1
			};
			right[]=
			{
				{0.753281,0.396148},
				1
			};
			down[]=
			{
				{0.71714801,0.43130499},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=3;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.43614799},
				1
			};
			right[]=
			{
				{0.753281,0.43614799},
				1
			};
			down[]=
			{
				{0.71714801,0.47130501},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=3;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.89714801,0.43614799},
				1
			};
			right[]=
			{
				{0.933281,0.43614799},
				1
			};
			down[]=
			{
				{0.89714801,0.47130501},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative3<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.66734397,0.459391},
						1
					},
					
					{
						{0.70249999,0.459391},
						1
					},
					
					{
						{0.70249999,0.40763301},
						1
					},
					
					{
						{0.66734397,0.40763301},
						1
					},
					
					{
						{0.66734397,0.459391},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.70347703,0.390055},
							1
						},
						
						{
							{0.70347703,0.476969},
							1
						},
						
						{
							{0.91246098,0.476969},
							1
						},
						
						{
							{0.91246098,0.390055},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=3;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.71714801,0.39591399},
					1
				};
				right[]=
				{
					{0.73374999,0.39591399},
					1
				};
				down[]=
				{
					{0.71714801,0.421305},
					1
				};
			};
		};
	};
};
class PylonSelected2
{
	condition="PylonSelected2>0";
	class NotEmpty
	{
		color[]={0.58999997,0.30000001,0,1};
		condition="PylonAmmoRelative2>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.70347703,0.506266},
						1
					},
					
					{
						{0.70347703,0.59318},
						1
					},
					
					{
						{0.91246098,0.59318},
						1
					},
					
					{
						{0.91246098,0.506266},
						1
					},
					
					{
						{0.70347703,0.506266},
						1
					},
					{},
					
					{
						{0.66734397,0.57560199},
						1
					},
					
					{
						{0.70249999,0.57560199},
						1
					},
					
					{
						{0.70249999,0.523844},
						1
					},
					
					{
						{0.66734397,0.523844},
						1
					},
					
					{
						{0.66734397,0.57560199},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.66734397,0.57560199},
						1
					},
					
					{
						{0.70249999,0.57560199},
						1
					},
					
					{
						"PylonAmmo2",
						{0.70249999,0.523844},
						1
					},
					
					{
						"PylonAmmo2",
						{0.66734397,0.523844},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=2;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.51235902},
				1
			};
			right[]=
			{
				{0.753281,0.51235902},
				1
			};
			down[]=
			{
				{0.71714801,0.54751599},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=2;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.55235898},
				1
			};
			right[]=
			{
				{0.753281,0.55235898},
				1
			};
			down[]=
			{
				{0.71714801,0.58751601},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=2;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.89714801,0.55235898},
				1
			};
			right[]=
			{
				{0.933281,0.55235898},
				1
			};
			down[]=
			{
				{0.89714801,0.58751601},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative2<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.66734397,0.57560199},
						1
					},
					
					{
						{0.70249999,0.57560199},
						1
					},
					
					{
						{0.70249999,0.523844},
						1
					},
					
					{
						{0.66734397,0.523844},
						1
					},
					
					{
						{0.66734397,0.57560199},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.70347703,0.506266},
							1
						},
						
						{
							{0.70347703,0.59318},
							1
						},
						
						{
							{0.91246098,0.59318},
							1
						},
						
						{
							{0.91246098,0.506266},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=2;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.71714801,0.51212502},
					1
				};
				right[]=
				{
					{0.73374999,0.51212502},
					1
				};
				down[]=
				{
					{0.71714801,0.537516},
					1
				};
			};
		};
	};
};
class Pylon2
{
	condition="PylonSelected2<=0";
	class NotEmpty
	{
		color[]={0,0.83999997,0,1};
		condition="PylonAmmoRelative2>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.70347703,0.506266},
						1
					},
					
					{
						{0.70347703,0.59318},
						1
					},
					
					{
						{0.91246098,0.59318},
						1
					},
					
					{
						{0.91246098,0.506266},
						1
					},
					
					{
						{0.70347703,0.506266},
						1
					},
					{},
					
					{
						{0.66734397,0.57560199},
						1
					},
					
					{
						{0.70249999,0.57560199},
						1
					},
					
					{
						{0.70249999,0.523844},
						1
					},
					
					{
						{0.66734397,0.523844},
						1
					},
					
					{
						{0.66734397,0.57560199},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.66734397,0.57560199},
						1
					},
					
					{
						{0.70249999,0.57560199},
						1
					},
					
					{
						"PylonAmmo2",
						{0.70249999,0.523844},
						1
					},
					
					{
						"PylonAmmo2",
						{0.66734397,0.523844},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=2;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.51235902},
				1
			};
			right[]=
			{
				{0.753281,0.51235902},
				1
			};
			down[]=
			{
				{0.71714801,0.54751599},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=2;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.55235898},
				1
			};
			right[]=
			{
				{0.753281,0.55235898},
				1
			};
			down[]=
			{
				{0.71714801,0.58751601},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=2;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.89714801,0.55235898},
				1
			};
			right[]=
			{
				{0.933281,0.55235898},
				1
			};
			down[]=
			{
				{0.89714801,0.58751601},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative2<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.66734397,0.57560199},
						1
					},
					
					{
						{0.70249999,0.57560199},
						1
					},
					
					{
						{0.70249999,0.523844},
						1
					},
					
					{
						{0.66734397,0.523844},
						1
					},
					
					{
						{0.66734397,0.57560199},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.70347703,0.506266},
							1
						},
						
						{
							{0.70347703,0.59318},
							1
						},
						
						{
							{0.91246098,0.59318},
							1
						},
						
						{
							{0.91246098,0.506266},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=2;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.71714801,0.51212502},
					1
				};
				right[]=
				{
					{0.73374999,0.51212502},
					1
				};
				down[]=
				{
					{0.71714801,0.537516},
					1
				};
			};
		};
	};
};
class PylonSelected1
{
	condition="PylonSelected1>0";
	class NotEmpty
	{
		color[]={0.58999997,0.30000001,0,1};
		condition="PylonAmmoRelative1>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.70347703,0.62247699},
						1
					},
					
					{
						{0.70347703,0.709391},
						1
					},
					
					{
						{0.91246098,0.709391},
						1
					},
					
					{
						{0.91246098,0.62247699},
						1
					},
					
					{
						{0.70347703,0.62247699},
						1
					},
					{},
					
					{
						{0.66734397,0.69181299},
						1
					},
					
					{
						{0.70249999,0.69181299},
						1
					},
					
					{
						{0.70249999,0.640055},
						1
					},
					
					{
						{0.66734397,0.640055},
						1
					},
					
					{
						{0.66734397,0.69181299},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.66734397,0.69181299},
						1
					},
					
					{
						{0.70249999,0.69181299},
						1
					},
					
					{
						"PylonAmmo1",
						{0.70249999,0.640055},
						1
					},
					
					{
						"PylonAmmo1",
						{0.66734397,0.640055},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=1;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.62857002},
				1
			};
			right[]=
			{
				{0.753281,0.62857002},
				1
			};
			down[]=
			{
				{0.71714801,0.66372699},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=1;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.66856998},
				1
			};
			right[]=
			{
				{0.753281,0.66856998},
				1
			};
			down[]=
			{
				{0.71714801,0.70372701},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=1;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.89714801,0.66856998},
				1
			};
			right[]=
			{
				{0.933281,0.66856998},
				1
			};
			down[]=
			{
				{0.89714801,0.70372701},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative1<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.66734397,0.69181299},
						1
					},
					
					{
						{0.70249999,0.69181299},
						1
					},
					
					{
						{0.70249999,0.640055},
						1
					},
					
					{
						{0.66734397,0.640055},
						1
					},
					
					{
						{0.66734397,0.69181299},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.70347703,0.62247699},
							1
						},
						
						{
							{0.70347703,0.709391},
							1
						},
						
						{
							{0.91246098,0.709391},
							1
						},
						
						{
							{0.91246098,0.62247699},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=1;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.71714801,0.62833601},
					1
				};
				right[]=
				{
					{0.73374999,0.62833601},
					1
				};
				down[]=
				{
					{0.71714801,0.65372699},
					1
				};
			};
		};
	};
};
class Pylon1
{
	condition="PylonSelected1<=0";
	class NotEmpty
	{
		color[]={0,0.83999997,0,1};
		condition="PylonAmmoRelative1>0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.70347703,0.62247699},
						1
					},
					
					{
						{0.70347703,0.709391},
						1
					},
					
					{
						{0.91246098,0.709391},
						1
					},
					
					{
						{0.91246098,0.62247699},
						1
					},
					
					{
						{0.70347703,0.62247699},
						1
					},
					{},
					
					{
						{0.66734397,0.69181299},
						1
					},
					
					{
						{0.70249999,0.69181299},
						1
					},
					
					{
						{0.70249999,0.640055},
						1
					},
					
					{
						{0.66734397,0.640055},
						1
					},
					
					{
						{0.66734397,0.69181299},
						1
					}
				};
			};
		};
		class PolyBar
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						{0.66734397,0.69181299},
						1
					},
					
					{
						{0.70249999,0.69181299},
						1
					},
					
					{
						"PylonAmmo1",
						{0.70249999,0.640055},
						1
					},
					
					{
						"PylonAmmo1",
						{0.66734397,0.640055},
						1
					}
				}
			};
		};
		class WeapName
		{
			type="text";
			source="PylonMagazineName";
			sourceindex=1;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.62857002},
				1
			};
			right[]=
			{
				{0.753281,0.62857002},
				1
			};
			down[]=
			{
				{0.71714801,0.66372699},
				1
			};
		};
		class MagName
		{
			type="text";
			source="PylonMagazineNameShort";
			sourceindex=1;
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.71714801,0.66856998},
				1
			};
			right[]=
			{
				{0.753281,0.66856998},
				1
			};
			down[]=
			{
				{0.71714801,0.70372701},
				1
			};
		};
		class MagCount
		{
			type="text";
			source="PylonAmmo";
			sourceindex=1;
			sourceScale=1;
			align="left";
			scale=1;
			pos[]=
			{
				{0.89714801,0.66856998},
				1
			};
			right[]=
			{
				{0.933281,0.66856998},
				1
			};
			down[]=
			{
				{0.89714801,0.70372701},
				1
			};
		};
	};
	class Empty
	{
		color[]={1,0,0,1};
		condition="PylonAmmoRelative1<=0";
		class Static
		{
			class Lines
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.66734397,0.69181299},
						1
					},
					
					{
						{0.70249999,0.69181299},
						1
					},
					
					{
						{0.70249999,0.640055},
						1
					},
					
					{
						{0.66734397,0.640055},
						1
					},
					
					{
						{0.66734397,0.69181299},
						1
					}
				};
			};
			class Poly
			{
				type="polygon";
				points[]=
				{
					
					{
						
						{
							{0.70347703,0.62247699},
							1
						},
						
						{
							{0.70347703,0.709391},
							1
						},
						
						{
							{0.91246098,0.709391},
							1
						},
						
						{
							{0.91246098,0.62247699},
							1
						}
					}
				};
			};
		};
		class black
		{
			color[]={1,0,0,1};
			class MagName
			{
				type="text";
				source="PylonMagazineNameShort";
				sourceindex=1;
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.71714801,0.62833601},
					1
				};
				right[]=
				{
					{0.73374999,0.62833601},
					1
				};
				down[]=
				{
					{0.71714801,0.65372699},
					1
				};
			};
		};
	};
};
class Gatling_Ammo
{
	type="text";
	source="ammo";
	sourceIndex=0;
	scale=1;
	sourceScale=1;
	align="right";
	pos[]=
	{
		{0.435,0.86000001},
		1
	};
	right[]=
	{
		{0.47499999,0.86000001},
		1
	};
	down[]=
	{
		{0.435,0.89099997},
		1
	};
};
class CM_Name
{
	type="text";
	source="CMWeapon";
	scale=1;
	sourceScale=1;
	align="right";
	pos[]=
	{
		{0.72500002,0.82999998},
		1
	};
	right[]=
	{
		{0.76499999,0.82999998},
		1
	};
	down[]=
	{
		{0.72500002,0.861},
		1
	};
};
class CM_Ammo
{
	type="text";
	source="CMAmmo";
	scale=1;
	sourceScale=1;
	align="right";
	pos[]=
	{
		{0.72500002,0.86000001},
		1
	};
	right[]=
	{
		{0.76499999,0.86000001},
		1
	};
	down[]=
	{
		{0.72500002,0.89099997},
		1
	};
};