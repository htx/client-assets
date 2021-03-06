	<Page
		AllowLookAtTargetSelection='true'
		BackgroundOpacity='0.70'
		BackgroundTint='#00D6FB'
		Location='770,555'
		MaximumSize='16384,150'
		MinimumSize='120,26'
		Name='waypointMon'
		OnDisable='bg.enabled=enabled
mmc.enabled=enabled'
		OnEnable='bg.enabled=enabled
mmc.enabled=enabled'
		PalBgTint='back1'
		PopupStyle='/Styles.popupmenu.left.style'
		RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
		ScrollExtent='250,26'
		Size='250,26'
		SizeIncrement='1,24'
		UserMovable='true'
		UserResizable='true'
	>
		<Data
			buttonclose='mmc.close'
			comp='comp'
			effectorFadeIn='/effectors.opacity.slow.fadefull'
			Name='CodeData'
			sample='comp.sample'
		/>
		<Page
			Location='226,1'
			Name='mmc'
			OnDisableEffector='/effectors.opacity.fast.fadeout'
			OnEnableEffector='/effectors.opacity.fast.fadefull'
			PackLocation='fff,nfn'
			PackSize='f,f'
			RStyleDefault='/Styles.New.thin_mmc.rs_default'
			ScrollExtent='24,16'
			Size='24,16'
		>
			<Button
				BackgroundColor='#FFFFFF'
				Location='10,0'
				Name='close'
				PackLocation='fff,cfc'
				PackSize='f,f'
				ScrollExtent='14,14'
				Size='14,14'
				Style='/Styles.Frame.buttonCloseDark.style'
			></Button>
		</Page>
		<Composite
			ContextToParent='true'
			Name='comp'
			PackSize='a,a'
			ScrollExtent='250,24'
			Size='250,22'
			SpacingType='Constant'
		>
			<Page
				BackgroundTint='#1CFFFF'
				ContextToParent='true'
				MaximumSize='16384,24'
				MinimumSize='0,24'
				Name='sample'
				OnDisable='bg.enabled=enabled'
				OnEnable='bg.enabled=enabled'
				PackSize='a'
				PalBgTint='line1'
				RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
				ScrollExtent='250,24'
				Size='250,24'
			>
				<Data
					arrow='arrow'
					Name='CodeData'
					textDistance='textDistance'
					textname='textName'
					waypoint='waypointMarker'
				/>
				<Image
					ContextToParent='true'
					Location='221,4'
					MinimumSize='18,18'
					Name='arrow'
					OpacityRelativeMin='0.70'
					PackLocation='fff'
					Rotation='0.30'
					ScrollExtent='18,18'
					Size='18,18'
					SourceRect='482,309,506,334'
					SourceResource='ui_rebel_final'
				/>
				<Image
					BackgroundColor='#FFFFFF'
					Color='#00FF00'
					Location='221,6'
					MinimumSize='17,12'
					Name='waypointMarker'
					OpacityRelativeMin='1.00'
					PackLocation='fff'
					ScrollExtent='17,12'
					Size='17,12'
					SourceRect='239,392,262,403'
					SourceResource='ui_shader_add:ui_space_hud'
					Visible='false'
				/>
				<Text
					BackgroundOpacity='0.50'
					ContextToParent='true'
					Font='normal_16'
					LocalText='16384m'
					Location='4,4'
					MaxLines='1'
					MinimumSize='0,19'
					Name='textName'
					PackSize='a'
					ScrollExtent='157,19'
					Size='157,19'
					TextAlignment='Right'
					TextAlignmentVertical='Center'
					TextColor='#FFAA00'
				>16384m</Text>
				<Text
					BackgroundOpacity='0.50'
					ContextToParent='true'
					Font='fixed_14'
					LocalText='96384m'
					Location='164,4'
					MaxLines='1'
					MinimumSize='0,19'
					Name='textDistance'
					PackLocation='fff'
					PalText='contrast1'
					ScrollExtent='50,19'
					Size='50,19'
					TextAlignment='Right'
					TextAlignmentVertical='Center'
					TextColor='#62FF15'
				>16384m</Text>
			</Page>
		</Composite>
		<Page
			BackgroundColor='#FFFFFF'
			BackgroundTint='#1FE6F5'
			Name='bg'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnableEffector='/effectors.opacity.fast.fadefull'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			PalBgTint='titlebar'
			ScrollExtent='250,26'
			Size='250,26'
		/>
	</Page>
