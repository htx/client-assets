	<Page
		Location='349,269'
		MaximumSize='430,228'
		MinimumSize='430,228'
		Name='option'
		ScrollExtent='430,228'
		Size='430,228'
		UserMovable='true'
		UserResizable='true'
		Visible='false'
	>
		<Data
			buttonclose='bg.mmc.close'
			buttonexperiment='completion.buttonExperiment'
			buttonprototype='completion.buttonPrototype'
			buttonschematic='completion.buttonSchematic'
			Name='CodeData'
		/>
		<Text
			Font='bold_14'
			LocalText='[@ui_craft:cpt_crafting_completion]'
			Location='26,44'
			Margin='2,2,2,2'
			MaxLines='1'
			MinimumSize='0,19'
			Name='label'
			PackLocation='nfn,nfn'
			PackSize='p,f'
			PalText='header'
			RStyleDefault='rs_default'
			ScrollExtent='363,19'
			Size='363,19'
			TextAlignment='Center'
			TextColor='#97FFFF'
		>@ui_craft:cpt_crafting_completion</Text>
		<Composite
			Location='10,8'
			Name='top'
			Orientation='Horizontal'
			PackLocation='nfn,nfn'
			PackSize='a,f'
			ScrollExtent='402,32'
			Size='402,32'
			Visible='false'
		>
			<Text
				BackgroundColor='#FFFFFF'
				Font='bold_11'
				LocalText='[@ui_craft:cpt_option_help]'
				Location='0,13'
				MaxLines='1'
				MinimumSize='0,19'
				Name='helpCaption'
				PackLocation='nfn,fff'
				PackSize='f,f'
				PalText='header'
				RStyleDefault='rs_default'
				ScrollExtent='144,19'
				Size='144,19'
				TextColor='#97FFFF'
			>@ui_craft:cpt_option_help</Text>
		</Composite>
		<Page
			Location='13,64'
			Name='completion'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='402,151'
			Selectable='true'
			Size='402,151'
		>
			<Button
				IsDefaultButton='true'
				LocalText='[@ui_craft:exp]'
				Location='31,20'
				MinimumSize='0,19'
				Name='buttonExperiment'
				PackLocation='cpc,cpc'
				PackSize='p,f'
				RStyleDefault='/top_Buttons.roundButtonLarge.style'
				ScrollExtent='341,30'
				Size='341,30'
				Style='/Styles.New.buttons.hud.style'
			>@ui_craft:exp</Button>
			<Button
				IsDefaultButton='true'
				LocalText='[@ui_craft:create_prototype]'
				Location='31,59'
				MinimumSize='0,19'
				Name='buttonPrototype'
				PackLocation='cpc,cpc'
				PackSize='p,f'
				RStyleDefault='/top_Buttons.roundButtonLarge.style'
				ScrollExtent='341,30'
				Size='341,30'
				Style='/Styles.New.buttons.hud.style'
			>@ui_craft:create_prototype</Button>
			<Button
				LocalText='[@ui_craft:create_manf_schem]'
				Location='31,97'
				MinimumSize='0,19'
				Name='buttonSchematic'
				PackLocation='cpc,cpc'
				PackSize='p,f'
				RStyleDefault='/top_Buttons.roundButtonLarge.style'
				ScrollExtent='341,30'
				Size='341,30'
				Style='/Styles.New.buttons.hud.style'
			>@ui_craft:create_manf_schem</Button>
			<Page
				BackgroundColor='#FFFFFF'
				BackgroundOpacity='0.80'
				BackgroundTint='#1CFFFF'
				Name='outline'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='line1'
				RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
				ScrollExtent='402,151'
				Size='402,151'
			/>
			<Page
				BackgroundColor='#FFFFFF'
				BackgroundOpacity='0.70'
				BackgroundTint='#00D6FB'
				Name='inFrame'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='back1'
				RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
				ScrollExtent='402,151'
				Size='402,151'
			/>
		</Page>
		<Page
			Name='bg'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='430,228'
			Size='430,228'
		>
			<Page
				Location='419,8'
				Name='mmc'
				PackLocation='fff,nfn'
				PackSize='f,f'
				RStyleDefault='/Styles.New.thin_mmc.rs_default'
				ScrollExtent='12,10'
				Size='12,10'
			>
				<Button
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.80'
					IsCancelButton='true'
					Location='-3,-3'
					Name='close'
					PackLocation='fff,cfc'
					PackSize='f,f'
					ScrollExtent='16,16'
					Size='16,16'
					Style='/Styles.Frame.buttonClose.style'
				></Button>
			</Page>
			<Page
				MinimumSize='0,19'
				Name='caption'
				PackLocation='nfn,nfn'
				PackSize='a,f'
				ScrollExtent='288,19'
				Size='288,19'
			>
				<Text
					Enabled='false'
					Font='bold_13'
					LocalText='[@UI_CRAFT:CPT_OPTION]'
					Margin='6,-2,0,0'
					MaxLines='1'
					MinimumSize='0,19'
					Name='label'
					OpacityRelativeMin='0.70'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					PalText='titletext'
					ScrollExtent='221,19'
					Size='221,19'
					TextAlignmentVertical='Center'
					TextCapital='true'
					TextColor='#00354F'
				>@ui_craft:cpt_option</Text>
				<Text
					Enabled='false'
					Font='bold_13'
					LocalText='STEP 4/6'
					Location='216,0'
					Margin='6,-2,0,0'
					MaxLines='1'
					MinimumSize='0,19'
					Name='text'
					OpacityRelativeMin='0.70'
					PackLocation='fff,nfn'
					PackSize='f,f'
					PalText='titletext'
					ScrollExtent='72,19'
					Size='72,19'
					TextAlignmentVertical='Center'
					TextCapital='true'
					TextColor='#00354F'
				>STEP 4/6</Text>
			</Page>
			<Page
				BackgroundTint='#00D6FB'
				GetsInput='false'
				Location='1,0'
				Name='frame'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='baselight'
				RStyleDefault='/Styles.New.thin_in.rs_default'
				ScrollExtent='429,228'
				Selectable='true'
				Size='429,228'
			>
				<Page
					BackgroundColor='#FFFFFF'
					GetsInput='false'
					Location='1,0'
					Name='lines'
					PackSize='a,a'
					RStyleDefault='/Styles.space.boxes.generic4.rs_default'
					ScrollExtent='429,228'
					Size='429,228'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='0,206'
						Name='outlineBL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,fff'
						PackSize='p,f'
						ScrollExtent='337,22'
						Size='337,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Location='0,13'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlinebottomLeft2.rs_default'
							ScrollExtent='337,9'
							Size='337,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='116,206'
						Name='outlineBR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,fff'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='313,22'
						Size='313,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Location='0,13'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlinebottomRight2.rs_default'
							ScrollExtent='313,9'
							Size='313,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='116,0'
						Name='outlineTR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,nfn'
						PackSize='p,f'
						ScrollExtent='313,22'
						Size='313,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlineTopRight2.rs_default'
							ScrollExtent='313,9'
							Size='313,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Name='outlineTL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,nfn'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='337,22'
						Size='337,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft2.rs_default'
							ScrollExtent='337,9'
							Size='337,9'
						/>
					</Page>
				</Page>
				<Page
					BackgroundOpacity='1.00'
					Location='-1,0'
					Name='top'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					RStyleDefault='/Styles.New.main_TR.rs_default'
					ScrollExtent='430,29'
					Size='430,29'
				/>
				<Page
					BackgroundOpacity='1.00'
					Location='0,205'
					Name='bottom'
					PackLocation='nfn,fff'
					PackSize='a,f'
					RStyleDefault='/Styles.New.main_BR.rs_default'
					ScrollExtent='429,23'
					Size='429,23'
				/>
			</Page>
			<Page
				BackgroundOpacity='1.00'
				BackgroundTint='#00D6FB'
				GetsInput='false'
				Location='0,5'
				Name='back'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='back1'
				RStyleDefault='/Styles.New.thin_in.rs_default'
				ScrollExtent='430,220'
				Selectable='true'
				Size='430,220'
			/>
			<Page
				BackgroundOpacity='1.00'
				BackgroundTint='#00D6FB'
				GetsInput='false'
				Name='back'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='back1'
				RStyleDefault='/Styles.space.spaceglow.rs_default'
				ScrollExtent='430,228'
				Selectable='true'
				Size='430,228'
			/>
		</Page>
	</Page>