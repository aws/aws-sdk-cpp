/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/LabelOptions.h>
#include <aws/quicksight/model/LegendPosition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FontConfiguration.h>
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
   * <p>The options for the legend setup of a visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LegendOptions">AWS
   * API Reference</a></p>
   */
  class LegendOptions
  {
  public:
    AWS_QUICKSIGHT_API LegendOptions() = default;
    AWS_QUICKSIGHT_API LegendOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LegendOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether or not the legend is visible.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline LegendOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom title for the legend.</p>
     */
    inline const LabelOptions& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = LabelOptions>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = LabelOptions>
    LegendOptions& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The positions for the legend. Choose one of the following options:</p> <ul>
     * <li> <p> <code>AUTO</code> </p> </li> <li> <p> <code>RIGHT</code> </p> </li>
     * <li> <p> <code>BOTTOM</code> </p> </li> <li> <p> <code>LEFT</code> </p> </li>
     * </ul>
     */
    inline LegendPosition GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(LegendPosition value) { m_positionHasBeenSet = true; m_position = value; }
    inline LegendOptions& WithPosition(LegendPosition value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of the legend. If this value is omitted, a default width is used
     * when rendering.</p>
     */
    inline const Aws::String& GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    template<typename WidthT = Aws::String>
    void SetWidth(WidthT&& value) { m_widthHasBeenSet = true; m_width = std::forward<WidthT>(value); }
    template<typename WidthT = Aws::String>
    LegendOptions& WithWidth(WidthT&& value) { SetWidth(std::forward<WidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The height of the legend. If this value is omitted, a default height is used
     * when rendering.</p>
     */
    inline const Aws::String& GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    template<typename HeightT = Aws::String>
    void SetHeight(HeightT&& value) { m_heightHasBeenSet = true; m_height = std::forward<HeightT>(value); }
    template<typename HeightT = Aws::String>
    LegendOptions& WithHeight(HeightT&& value) { SetHeight(std::forward<HeightT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FontConfiguration& GetValueFontConfiguration() const { return m_valueFontConfiguration; }
    inline bool ValueFontConfigurationHasBeenSet() const { return m_valueFontConfigurationHasBeenSet; }
    template<typename ValueFontConfigurationT = FontConfiguration>
    void SetValueFontConfiguration(ValueFontConfigurationT&& value) { m_valueFontConfigurationHasBeenSet = true; m_valueFontConfiguration = std::forward<ValueFontConfigurationT>(value); }
    template<typename ValueFontConfigurationT = FontConfiguration>
    LegendOptions& WithValueFontConfiguration(ValueFontConfigurationT&& value) { SetValueFontConfiguration(std::forward<ValueFontConfigurationT>(value)); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    LabelOptions m_title;
    bool m_titleHasBeenSet = false;

    LegendPosition m_position{LegendPosition::NOT_SET};
    bool m_positionHasBeenSet = false;

    Aws::String m_width;
    bool m_widthHasBeenSet = false;

    Aws::String m_height;
    bool m_heightHasBeenSet = false;

    FontConfiguration m_valueFontConfiguration;
    bool m_valueFontConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
