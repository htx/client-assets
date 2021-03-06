	<Page
		AllowLookAtTargetSelection='true'
		BackgroundOpacity='1.00'
		BackgroundTint='#00D6FB'
		Location='862,462'
		MaximumSize='16384,94'
		MinimumSize='200,94'
		Name='dpsMeter'
		PackLocation='fff,fff'
		PalBgTint='back1'
		RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
		ScrollExtent='200,94'
		Size='200,94'
		UserMovable='true'
		VisualEditLock='true'
	>
		<Data
			buttonreset='buttonReset'
			Name='CodeData'
			textDps='dpstext'
			textDpsTotal='totalDamageText'
			textTaken='damageTakenText'
			textTakenTotal='totalTakenText'
		/>
		<Text
			Font='bold_14'
			LocalText='DPS:'
			MaxLines='1'
			Name='dpslabel'
			PalText='text1'
			ScrollExtent='77,16'
			Size='77,16'
			TextAlignment='Right'
			TextAlignmentVertical='Center'
			TextColor='#96F4FC'
		>DPS:</Text>
		<Text
			Font='bold_14'
			LocalText='35000'
			Location='77,0'
			MaxLines='1'
			Name='dpstext'
			PalText='text1'
			ScrollExtent='86,16'
			Size='86,16'
			TextAlignment='Right'
			TextAlignmentVertical='Center'
			TextColor='#96F4FC'
		>35000</Text>
		<Text
			Font='bold_14'
			LocalText='Taken DPS:'
			Location='0,16'
			MaxLines='1'
			Name='damageTakenLabel'
			PalText='text1'
			ScrollExtent='79,16'
			Size='79,16'
			TextAlignment='Right'
			TextAlignmentVertical='Center'
			TextColor='#96F4FC'
		>Taken DPS:</Text>
		<Text
			Font='bold_14'
			LocalText='88%'
			Location='103,15'
			MaxLines='1'
			Name='damageTakenText'
			PalText='text1'
			ScrollExtent='61,16'
			Size='61,16'
			TextAlignment='Right'
			TextAlignmentVertical='Center'
			TextColor='#96F4FC'
		>88%</Text>
		<Text
			Font='bold_14'
			LocalText='Total Dmg:'
			Location='0,32'
			MaxLines='1'
			Name='totalDamageLabel'
			PalText='text1'
			ScrollExtent='73,16'
			Size='73,16'
			TextAlignment='Right'
			TextAlignmentVertical='Center'
			TextColor='#96F4FC'
		>Total Dmg:</Text>
		<Text
			Font='bold_14'
			LocalText='0.0/0.0'
			Location='75,32'
			MaxLines='1'
			Name='totalDamageText'
			PalText='text1'
			ScrollExtent='90,16'
			Size='90,16'
			TextAlignment='Right'
			TextAlignmentVertical='Center'
			TextColor='#96F4FC'
		>0.0/0.0</Text>
		<Text
			Font='bold_14'
			LocalText='Total Taken:'
			Location='0,48'
			MaxLines='1'
			Name='totalTakenLabel'
			PalText='text1'
			ScrollExtent='84,16'
			Size='84,16'
			TextAlignment='Right'
			TextAlignmentVertical='Center'
			TextColor='#96F4FC'
		>Total Taken:</Text>
		<Text
			Font='bold_14'
			LocalText='500'
			Location='85,48'
			MaxLines='1'
			Name='totalTakenText'
			PalText='text1'
			ScrollExtent='80,16'
			Size='80,16'
			TextAlignment='Right'
			TextAlignmentVertical='Center'
			TextColor='#96F4FC'
		>500</Text>
		<Button
			IsDefaultButton='true'
			LocalText='[@dps_reset]'
			Location='48,70'
			Name='buttonReset'
			PackLocation='cfc,fff'
			ScrollExtent='60,22'
			Size='60,22'
			Style='/Styles.New.buttons.hud.style'
		>@dps_reset</Button>
	</Page>
