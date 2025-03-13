/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataColorPalette.h>
#include <aws/quicksight/model/UIColorPalette.h>
#include <aws/quicksight/model/SheetStyle.h>
#include <aws/quicksight/model/Typography.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The theme configuration. This configuration contains all of the display
   * properties for a theme.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ThemeConfiguration">AWS
   * API Reference</a></p>
   */
  class ThemeConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ThemeConfiguration() = default;
    AWS_QUICKSIGHT_API ThemeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ThemeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Color properties that apply to chart data colors.</p>
     */
    inline const DataColorPalette& GetDataColorPalette() const { return m_dataColorPalette; }
    inline bool DataColorPaletteHasBeenSet() const { return m_dataColorPaletteHasBeenSet; }
    template<typename DataColorPaletteT = DataColorPalette>
    void SetDataColorPalette(DataColorPaletteT&& value) { m_dataColorPaletteHasBeenSet = true; m_dataColorPalette = std::forward<DataColorPaletteT>(value); }
    template<typename DataColorPaletteT = DataColorPalette>
    ThemeConfiguration& WithDataColorPalette(DataColorPaletteT&& value) { SetDataColorPalette(std::forward<DataColorPaletteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Color properties that apply to the UI and to charts, excluding the colors
     * that apply to data. </p>
     */
    inline const UIColorPalette& GetUIColorPalette() const { return m_uIColorPalette; }
    inline bool UIColorPaletteHasBeenSet() const { return m_uIColorPaletteHasBeenSet; }
    template<typename UIColorPaletteT = UIColorPalette>
    void SetUIColorPalette(UIColorPaletteT&& value) { m_uIColorPaletteHasBeenSet = true; m_uIColorPalette = std::forward<UIColorPaletteT>(value); }
    template<typename UIColorPaletteT = UIColorPalette>
    ThemeConfiguration& WithUIColorPalette(UIColorPaletteT&& value) { SetUIColorPalette(std::forward<UIColorPaletteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Display options related to sheets.</p>
     */
    inline const SheetStyle& GetSheet() const { return m_sheet; }
    inline bool SheetHasBeenSet() const { return m_sheetHasBeenSet; }
    template<typename SheetT = SheetStyle>
    void SetSheet(SheetT&& value) { m_sheetHasBeenSet = true; m_sheet = std::forward<SheetT>(value); }
    template<typename SheetT = SheetStyle>
    ThemeConfiguration& WithSheet(SheetT&& value) { SetSheet(std::forward<SheetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Typography& GetTypography() const { return m_typography; }
    inline bool TypographyHasBeenSet() const { return m_typographyHasBeenSet; }
    template<typename TypographyT = Typography>
    void SetTypography(TypographyT&& value) { m_typographyHasBeenSet = true; m_typography = std::forward<TypographyT>(value); }
    template<typename TypographyT = Typography>
    ThemeConfiguration& WithTypography(TypographyT&& value) { SetTypography(std::forward<TypographyT>(value)); return *this;}
    ///@}
  private:

    DataColorPalette m_dataColorPalette;
    bool m_dataColorPaletteHasBeenSet = false;

    UIColorPalette m_uIColorPalette;
    bool m_uIColorPaletteHasBeenSet = false;

    SheetStyle m_sheet;
    bool m_sheetHasBeenSet = false;

    Typography m_typography;
    bool m_typographyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
