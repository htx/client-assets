	<Page
		Name='BuffBuilder'
		ScrollExtent='1026,767'
		Size='1026,767'
	>
		<Page
			Location='95,27'
			MaximumSize='848,646'
			MinimumSize='848,646'
			Name='Buffer'
			ScrollExtent='848,646'
			Size='848,646'
			UserMovable='true'
		>
			<Data
				buffeeList='all.Bottom.ListView'
				buffList='all.right.box.ListView'
				buffTree='all.Left.box.TreeView'
				buttonAccept='buttonAccept'
				buttonAdd='all.Right.buttonAdd'
				buttonCancel='buttonCancel'
				buttonClear='buttonClear'
				buttonclose='bg.mmc.close'
				buttonRemove='all.Right.buttonRemove'
				caption='bg.caption.text'
				coverChargeTextBox='all.right.paymenttextBox'
				labelComponentDescription='all.middle.labelComponentDescription'
				Name='CodeData'
				pointsLeft='all.right.dynamicPointsRemaining'
				recipientName='all.Right.dynamicRecipient'
				totalCost='all.right.dynamicTotalCost'
			/>
			<Page
				Location='8,32'
				Name='all'
				RStyleDefault='/Styles.New.whiteOutline.rs_default'
				ScrollExtent='829,568'
				Selectable='true'
				Size='829,568'
			>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					Location='11,302'
					Name='Middle'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='816,26'
					Size='816,26'
				>
					<Text
						Font='bold_13'
						Location='6,4'
						MaxLines='1'
						MinimumSize='0,19'
						Name='labelComponentDescription'
						PalText='header'
						ScrollExtent='602,19'
						Size='602,19'
						TextColor='#97FFFF'
					></Text>
				</Page>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					Location='9,332'
					Name='Bottom'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='817,236'
					Size='817,236'
				>
					<Scrollbar
						Control='ListView'
						Enabled='false'
						Location='804,5'
						MaximumSize='8,223'
						Name='scroll'
						ScrollExtent='8,223'
						Size='8,223'
						Style='/Styles.scrollbar.default.vHud4.style'
					>
					</Scrollbar>
					<DataSource
						Name='ListViewData'
					>
						<Data
							Name='foo'
							Text='fofofof'
						/>
						<Data
							Name='foo'
							Text='asdasdasd'
						/>
						<Data
							Name='foo'
							Text='fkfkfkfkfkkf'
						/>
						<Data
							Name='foo'
							Text='foobar'
						/>
					</DataSource>
					<List
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.00'
						DataSource='ListViewData'
						Location='9,9'
						MinimumScrollExtent='792,99'
						Name='ListView'
						RenderSeperatorLines='false'
						ScrollExtent='792,220'
						Selectable='false'
						SelectedRow='0'
						SelectedRowCount='1'
						SelectionAllowedMultiRow='false'
						Size='792,220'
						Style='/Styles.list.dark.style'
					/>
				</Page>
				<Page
					BackgroundTint='#00D6FB'
					Location='1,0'
					Name='Left'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.whiteOutline.rs_default'
					ScrollExtent='396,311'
					Size='396,311'
				>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						Location='12,9'
						Name='box'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='382,287'
						Size='382,287'
					>
						<Scrollbar
							Control='TreeView'
							Enabled='false'
							Location='368,11'
							Name='scroll'
							ScrollExtent='12,272'
							Size='12,272'
							Style='/Styles.scrollbar.default.vHud4.style'
						>
						</Scrollbar>
						<DataSourceContainer
							Name='TreeViewData'
						>
							<DataSourceContainer
								Expanded='false'
								Name='category1'
								Text='category1'
							>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
							</DataSourceContainer>
							<DataSourceContainer
								Expanded='false'
								Name='category2'
								Text='category2'
							>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
							</DataSourceContainer>
							<DataSourceContainer
								Expanded='false'
								Name='category3'
								Text='category3'
							>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
								<DataSourceContainer
									Expanded='false'
									Name='item'
									Text='xxx'
								/>
							</DataSourceContainer>
						</DataSourceContainer>
						<TreeView
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.00'
							DataSourceContainer='TreeViewData'
							Location='5,4'
							MinimumScrollExtent='366,63'
							Name='TreeView'
							ScrollExtent='366,280'
							SelectedRow='10'
							SelectedRowCount='1'
							SelectionAllowedMultiRow='false'
							Size='364,280'
							Style='/Styles.tree.style'
						/>
					</Page>
				</Page>
				<Page
					BackgroundTint='#00D6FB'
					Location='399,-2'
					MaximumSize='629,16384'
					Name='Right'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.whiteOutline.rs_default'
					ScrollExtent='439,306'
					Size='439,306'
				>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						Location='100,9'
						Name='box'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='329,189'
						Size='329,189'
					>
						<List
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.00'
							DataSource='ListViewData'
							Location='9,5'
							MinimumScrollExtent='303,99'
							Name='ListView'
							ScrollExtent='303,181'
							Selectable='false'
							SelectionAllowedMultiRow='false'
							Size='303,181'
							Style='/Styles.list.dark.style'
						/>
						<DataSource
							Name='ListViewData'
						>
							<Data
								Name='foo'
								Text='fofofof'
							/>
							<Data
								Name='foo'
								Text='asdasdasd'
							/>
							<Data
								Name='foo'
								Text='fkfkfkfkfkkf'
							/>
							<Data
								Name='foo'
								Text='foobar'
							/>
						</DataSource>
						<Scrollbar
							Control='ListView'
							Enabled='false'
							Location='313,3'
							Name='scroll'
							ScrollExtent='12,182'
							Size='12,182'
							Style='/Styles.scrollbar.default.vHud4.style'
						>
						</Scrollbar>
					</Page>
					<Text
						Font='bold_14'
						LocalText='[@ui_buffbuilder:recipient_name]'
						Location='3,209'
						MaxLines='1'
						MinimumSize='0,19'
						Name='labelRecipient'
						PalText='header'
						ScrollExtent='195,19'
						Size='195,19'
						TextAlignment='Right'
						TextColor='#97FFFF'
					>@ui_buffbuilder:recipient_name</Text>
					<Text
						Font='bold_14'
						LocalText='SomeGuy'
						Location='224,209'
						MaxLines='1'
						MinimumSize='0,19'
						Name='dynamicRecipient'
						PalText='header'
						ScrollExtent='203,19'
						Size='203,19'
						TextColor='#97FFFF'
					>SomeGuy</Text>
					<Textbox
						BackgroundOpacity='0.70'
						BackgroundTint='#1CFFFF'
						Location='224,230'
						MaxLength='10'
						MinimumSize='0,19'
						Name='paymenttextBox'
						NumericInteger='true'
						PalBgTint='line1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='102,24'
						Size='102,24'
						Style='/Styles.textbox.login.Style_13'
					>credits</Textbox>
					<Text
						Font='bold_14'
						LocalText='[@ui_buffbuilder:cover_charge]'
						Location='3,235'
						MaxLines='1'
						MinimumSize='0,19'
						Name='labelCoverCharge'
						PalText='header'
						ScrollExtent='195,19'
						Size='195,19'
						TextAlignment='Right'
						TextColor='#97FFFF'
					>@ui_buffbuilder:cover_charge</Text>
					<Text
						Font='bold_14'
						LocalText='[@ui_buffbuilder:points_remaining]'
						Location='4,257'
						MaxLines='1'
						MinimumSize='0,19'
						Name='labelPointsRemaining'
						PalText='header'
						ScrollExtent='194,19'
						Size='194,19'
						TextAlignment='Right'
						TextColor='#97FFFF'
					>@ui_buffbuilder:points_remaining</Text>
					<Text
						Font='bold_14'
						LocalText='0'
						Location='224,258'
						MaxLines='1'
						MinimumSize='0,19'
						Name='dynamicPointsRemaining'
						PalText='header'
						ScrollExtent='134,19'
						Size='134,19'
						TextColor='#97FFFF'
					>0</Text>
					<Text
						Font='bold_14'
						LocalText='[@ui_buffbuilder:total_cost]'
						Location='4,283'
						MaxLines='1'
						MinimumSize='0,19'
						Name='labelTotalCost'
						PalText='header'
						ScrollExtent='194,19'
						Size='194,19'
						TextAlignment='Right'
						TextColor='#97FFFF'
					>@ui_buffbuilder:total_cost</Text>
					<Text
						Font='bold_14'
						LocalText='0'
						Location='224,281'
						MaxLines='1'
						MinimumSize='0,19'
						Name='dynamicTotalCost'
						PalText='header'
						ScrollExtent='134,19'
						Size='134,19'
						TextColor='#97FFFF'
					>0</Text>
					<Button
						buttondelete.visible='true'
						LocalText='[@ui_buffbuilder:add]'
						Location='1,106'
						MinimumSize='0,30'
						Name='buttonAdd'
						ScrollExtent='92,30'
						Size='92,30'
						Style='/Styles.New.buttons.hud.style'
						TextColor='#000000'
					>@ui_buffbuilder:add</Button>
					<Button
						buttondelete.visible='true'
						LocalText='[@ui_buffbuilder:remove]'
						Location='2,139'
						MinimumSize='0,30'
						Name='buttonRemove'
						ScrollExtent='92,30'
						Size='92,30'
						Style='/Styles.New.buttons.hud.style'
						TextColor='#000000'
					>@ui_buffbuilder:remove</Button>
				</Page>
				<Data
					content='comp.details.content'
					Label='bg.caption.text'
					Name='CodeData'
					textAttribs='comp.details.content.textAttribs'
					textDesc='comp.details.content.textDesc'
					viewer='comp.right.viewerpage.viewer'
				/>
			</Page>
			<Button
				buttondelete.visible='true'
				IsCancelButton='true'
				LocalText='[@ui_buffbuilder:cancel]'
				Location='722,605'
				MinimumSize='0,30'
				Name='buttonCancel'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='113,30'
				Size='113,30'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@ui_buffbuilder:cancel</Button>
			<Button
				LocalText='[@ui_buffbuilder:clear]'
				Location='596,605'
				MinimumSize='0,30'
				Name='buttonClear'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='118,30'
				Size='118,30'
				Style='/Styles.New.buttons.hud.style'
			>@ui_buffbuilder:clear</Button>
			<Button
				LocalText='[@ui_buffbuilder:accept]'
				Location='475,605'
				MinimumSize='0,30'
				Name='buttonAccept'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='109,30'
				Size='109,30'
				Style='/Styles.New.buttons.hud.style'
			>@ui_buffbuilder:accept</Button>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='848,646'
				Size='848,646'
			>
				<Page
					Location='837,8'
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
					ScrollExtent='701,19'
					Size='701,19'
				>
					<Text
						Enabled='false'
						Font='bold_13'
						LocalText='[@ui_buffbuilder:buffer_caption]'
						Margin='6,-2,0,0'
						MaxLines='1'
						Name='text'
						PackSize='a,f'
						PalText='titletext'
						ScrollExtent='701,19'
						Size='701,19'
						TextAlignmentVertical='Center'
						TextColor='#00354F'
					>@ui_buffbuilder:buffer_caption</Text>
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
					ScrollExtent='847,646'
					Selectable='true'
					Size='847,646'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='1,0'
						Name='lines'
						PackSize='a,a'
						RStyleDefault='/Styles.space.boxes.generic4.rs_default'
						ScrollExtent='847,646'
						Size='847,646'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='0,624'
							Name='outlineBL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,fff'
							PackSize='p,f'
							ScrollExtent='665,22'
							Size='665,22'
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
								ScrollExtent='665,9'
								Size='665,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='234,624'
							Name='outlineBR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,fff'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='613,22'
							Size='613,22'
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
								ScrollExtent='613,9'
								Size='613,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='234,0'
							Name='outlineTR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,nfn'
							PackSize='p,f'
							ScrollExtent='613,22'
							Size='613,22'
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
								ScrollExtent='613,9'
								Size='613,9'
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
							ScrollExtent='665,22'
							Size='665,22'
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
								ScrollExtent='665,9'
								Size='665,9'
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
						ScrollExtent='848,29'
						Size='848,29'
					/>
					<Page
						BackgroundOpacity='1.00'
						Location='0,623'
						Name='bottom'
						PackLocation='nfn,fff'
						PackSize='a,f'
						RStyleDefault='/Styles.New.main_BR.rs_default'
						ScrollExtent='847,23'
						Size='847,23'
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
					ScrollExtent='848,638'
					Selectable='true'
					Size='848,638'
				/>
				<Page
					BackgroundOpacity='0.80'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.space.spaceglow.rs_default'
					ScrollExtent='848,646'
					Selectable='true'
					Size='848,646'
				/>
			</Page>
		</Page>
		<Page
			BackgroundColor='#FFFFFF'
			Location='92,275'
			MinimumSize='500,390'
			Name='Buffee'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			RStyleDefault='/Styles.New.active2.rs_default'
			ScrollExtent='668,390'
			Size='668,390'
			UserMovable='true'
		>
			<Page
				BackgroundOpacity='0.50'
				BackgroundTint='#1CFFFF'
				Location='14,31'
				Name='data'
				PackSize='a,a'
				PalBgTint='line1'
				RStyleDefault='/Styles.New.whiteOutline.rs_default'
				ScrollExtent='638,305'
				Size='638,305'
			>
				<Page
					Location='0,3'
					Name='page'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					RStyleDefault='rs_default'
					ScrollExtent='638,305'
					Size='638,305'
				>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='1.00'
						BackgroundTint='#1CFFFF'
						Location='12,56'
						Name='outline'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='line1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='618,239'
						Size='618,239'
					>
						<Scrollbar
							Control='ListView'
							Enabled='false'
							Location='602,7'
							MaximumSize='8,223'
							Name='scroll'
							ScrollExtent='8,223'
							Size='8,223'
							Style='/Styles.scrollbar.default.vHud4.style'
						>
						</Scrollbar>
						<DataSource
							Name='ListViewData'
						>
							<Data
								Name='foo'
								Text='fofofof'
							/>
							<Data
								Name='foo'
								Text='asdasdasd'
							/>
							<Data
								Name='foo'
								Text='fkfkfkfkfkkf'
							/>
							<Data
								Name='foo'
								Text='foobar'
							/>
						</DataSource>
						<List
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.00'
							DataSource='ListViewData'
							Location='9,9'
							MinimumScrollExtent='590,99'
							Name='ListView'
							RenderSeperatorLines='false'
							ScrollExtent='590,224'
							Selectable='false'
							SelectedRow='0'
							SelectedRowCount='1'
							SelectionAllowedMultiRow='false'
							Size='590,224'
							Style='/Styles.list.dark.style'
						/>
					</Page>
					<Text
						Font='bold_16'
						LocalText='[@ui_buffbuilder:entertainer]'
						Location='9,13'
						MaximumSize='148,19'
						MaxLines='1'
						MinimumSize='0,19'
						Name='labelBuffer'
						PackLocation='nnn,fff'
						PackSize='f,f'
						PalText='header'
						ScrollExtent='140,19'
						Size='140,19'
						TextColor='#97FFFF'
					>@ui_buffbuilder:entertainer</Text>
					<Text
						Font='bold_16'
						Location='150,13'
						MaximumSize='148,19'
						MaxLines='1'
						MinimumSize='0,19'
						Name='dynamicBuffer'
						PackLocation='nnn,fff'
						PackSize='f,f'
						PalText='header'
						ScrollExtent='148,19'
						Size='148,19'
						TextColor='#97FFFF'
					></Text>
				</Page>
			</Page>
			<Data
				bodycheckbox='checkBody'
				buttonAccept='buttonAccept'
				buttonCancel='buttonCancel'
				buttonclose='bg.mmc.close'
				caption='bg.caption.text'
				covercharge='coverCharge'
				entertainerName='data.page.dynamicBuffer'
				ListView='data.page.outline.ListView'
				Name='CodeData'
			/>
			<Text
				Font='bold_16'
				LocalText='[@ui_buffbuilder:cover_charge]'
				Location='15,350'
				MaxLines='1'
				MinimumSize='0,30'
				Name='labelCoverCharge'
				PackLocation='nnn,fff'
				PackSize='f,f'
				PalText='header'
				ScrollExtent='183,30'
				Size='183,30'
				TextAlignment='Center'
				TextColor='#97FFFF'
			>@ui_buffbuilder:cover_charge</Text>
			<Text
				Font='bold_16'
				LocalText='[@ui_buffbuilder:cover_charge]'
				Location='199,350'
				MaxLines='1'
				MinimumSize='0,30'
				Name='coverCharge'
				PackLocation='nnn,fff'
				PackSize='f,f'
				PalText='header'
				ScrollExtent='134,30'
				Size='134,30'
				TextAlignment='Center'
				TextColor='#97FFFF'
			>@ui_buffbuilder:cover_charge</Text>
			<Button
				buttondelete.visible='true'
				LocalText='[@ui_buffbuilder:accept]'
				Location='442,351'
				MinimumSize='0,30'
				Name='buttonAccept'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='107,30'
				Size='107,30'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@ui_buffbuilder:accept</Button>
			<Button
				buttondelete.visible='true'
				IsCancelButton='true'
				LocalText='[@ui_buffbuilder:cancel]'
				Location='552,351'
				MinimumSize='0,30'
				Name='buttonCancel'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='102,30'
				Size='102,30'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@ui_buffbuilder:cancel</Button>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='668,390'
				Size='668,390'
			>
				<Page
					Location='657,8'
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
					Location='5,0'
					MinimumSize='0,19'
					Name='caption'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					ScrollExtent='521,19'
					Size='521,19'
				>
					<Text
						Enabled='false'
						Font='bold_13'
						LocalText='[@UI_BUFFBUILDER:RECIPIENT_CAPTION]'
						Margin='6,-2,0,0'
						MaxLines='1'
						MinimumSize='0,19'
						Name='text'
						PackSize='a,f'
						PalText='titletext'
						ScrollExtent='521,19'
						Size='521,19'
						TextAlignmentVertical='Center'
						TextCapital='true'
						TextColor='#00354F'
					>@ui_buffbuilder:recipient_caption</Text>
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
					ScrollExtent='667,390'
					Selectable='true'
					Size='667,390'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='1,0'
						Name='lines'
						PackSize='a,a'
						RStyleDefault='/Styles.space.boxes.generic4.rs_default'
						ScrollExtent='667,390'
						Size='667,390'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='0,368'
							Name='outlineBL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,fff'
							PackSize='p,f'
							ScrollExtent='523,22'
							Size='523,22'
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
								ScrollExtent='523,9'
								Size='523,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='186,368'
							Name='outlineBR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,fff'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='481,22'
							Size='481,22'
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
								ScrollExtent='481,9'
								Size='481,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='186,0'
							Name='outlineTR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,nfn'
							PackSize='p,f'
							ScrollExtent='481,22'
							Size='481,22'
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
								ScrollExtent='481,9'
								Size='481,9'
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
							ScrollExtent='523,22'
							Size='523,22'
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
								ScrollExtent='523,9'
								Size='523,9'
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
						ScrollExtent='668,29'
						Size='668,29'
					/>
					<Page
						BackgroundOpacity='1.00'
						Location='0,367'
						Name='bottom'
						PackLocation='nfn,fff'
						PackSize='a,f'
						RStyleDefault='/Styles.New.main_BR.rs_default'
						ScrollExtent='667,23'
						Size='667,23'
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
					ScrollExtent='668,382'
					Selectable='true'
					Size='668,382'
				/>
				<Page
					BackgroundOpacity='0.80'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.space.spaceglow.rs_default'
					ScrollExtent='668,390'
					Selectable='true'
					Size='668,390'
				/>
			</Page>
		</Page>
	</Page>