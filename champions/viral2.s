.name		"Viral"
.comment	"Infectious"

	ld  	%-2147258366,r2		#80 03 70 02
	ld  	%-2147258365,r3		#80 03 70 03
	ld  	%-2147258364,r4		#80 03 70 04
	ld  	%-2147258363,r5		#80 03 70 05
	ld		%106172175,r6		#06 54 0f 0f
	ld		%-4042719126,r7		#0f 09 00 5b
#	st		r1,19		#5
	st		r1,6		#5
	live	%0			#5
#	fork	-5			#3
#	live	%0			#5
	st		r2,128		#5
	st		r3,128		#5
	st		r4,128		#5
	st		r5,128		#5
	st		r5,128
	st		r6,124		#5
	st		r7,123		#5
	and		r15,r15,r15	#5
	zjmp	%91		#3

	#