/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ReferenceLineValueLabelConfiguration.h>
#include <aws/quicksight/model/ReferenceLineCustomLabelConfiguration.h>
#include <aws/quicksight/model/FontConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ReferenceLineLabelHorizontalPosition.h>
#include <aws/quicksight/model/ReferenceLineLabelVerticalPosition.h>
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
   * <p>The label configuration of a reference line.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLineLabelConfiguration">AWS
   * API Reference</a></p>
   */
  class ReferenceLineLabelConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLineLabelConfiguration() = default;
    AWS_QUICKSIGHT_API ReferenceLineLabelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLineLabelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value label configuration of the label in a reference line.</p>
     */
    inline const ReferenceLineValueLabelConfiguration& GetValueLabelConfiguration() const { return m_valueLabelConfiguration; }
    inline bool ValueLabelConfigurationHasBeenSet() const { return m_valueLabelConfigurationHasBeenSet; }
    template<typename ValueLabelConfigurationT = ReferenceLineValueLabelConfiguration>
    void SetValueLabelConfiguration(ValueLabelConfigurationT&& value) { m_valueLabelConfigurationHasBeenSet = true; m_valueLabelConfiguration = std::forward<ValueLabelConfigurationT>(value); }
    template<typename ValueLabelConfigurationT = ReferenceLineValueLabelConfiguration>
    ReferenceLineLabelConfiguration& WithValueLabelConfiguration(ValueLabelConfigurationT&& value) { SetValueLabelConfiguration(std::forward<ValueLabelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom label configuration of the label in a reference line.</p>
     */
    inline const ReferenceLineCustomLabelConfiguration& GetCustomLabelConfiguration() const { return m_customLabelConfiguration; }
    inline bool CustomLabelConfigurationHasBeenSet() const { return m_customLabelConfigurationHasBeenSet; }
    template<typename CustomLabelConfigurationT = ReferenceLineCustomLabelConfiguration>
    void SetCustomLabelConfiguration(CustomLabelConfigurationT&& value) { m_customLabelConfigurationHasBeenSet = true; m_customLabelConfiguration = std::forward<CustomLabelConfigurationT>(value); }
    template<typename CustomLabelConfigurationT = ReferenceLineCustomLabelConfiguration>
    ReferenceLineLabelConfiguration& WithCustomLabelConfiguration(CustomLabelConfigurationT&& value) { SetCustomLabelConfiguration(std::forward<CustomLabelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The font configuration of the label in a reference line.</p>
     */
    inline const FontConfiguration& GetFontConfiguration() const { return m_fontConfiguration; }
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }
    template<typename FontConfigurationT = FontConfiguration>
    void SetFontConfiguration(FontConfigurationT&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::forward<FontConfigurationT>(value); }
    template<typename FontConfigurationT = FontConfiguration>
    ReferenceLineLabelConfiguration& WithFontConfiguration(FontConfigurationT&& value) { SetFontConfiguration(std::forward<FontConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The font color configuration of the label in a reference line.</p>
     */
    inline const Aws::String& GetFontColor() const { return m_fontColor; }
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }
    template<typename FontColorT = Aws::String>
    void SetFontColor(FontColorT&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::forward<FontColorT>(value); }
    template<typename FontColorT = Aws::String>
    ReferenceLineLabelConfiguration& WithFontColor(FontColorT&& value) { SetFontColor(std::forward<FontColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The horizontal position configuration of the label in a reference line.
     * Choose one of the following options:</p> <ul> <li> <p> <code>LEFT</code> </p>
     * </li> <li> <p> <code>CENTER</code> </p> </li> <li> <p> <code>RIGHT</code> </p>
     * </li> </ul>
     */
    inline ReferenceLineLabelHorizontalPosition GetHorizontalPosition() const { return m_horizontalPosition; }
    inline bool HorizontalPositionHasBeenSet() const { return m_horizontalPositionHasBeenSet; }
    inline void SetHorizontalPosition(ReferenceLineLabelHorizontalPosition value) { m_horizontalPositionHasBeenSet = true; m_horizontalPosition = value; }
    inline ReferenceLineLabelConfiguration& WithHorizontalPosition(ReferenceLineLabelHorizontalPosition value) { SetHorizontalPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vertical position configuration of the label in a reference line. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ABOVE</code> </p> </li>
     * <li> <p> <code>BELOW</code> </p> </li> </ul>
     */
    inline ReferenceLineLabelVerticalPosition GetVerticalPosition() const { return m_verticalPosition; }
    inline bool VerticalPositionHasBeenSet() const { return m_verticalPositionHasBeenSet; }
    inline void SetVerticalPosition(ReferenceLineLabelVerticalPosition value) { m_verticalPositionHasBeenSet = true; m_verticalPosition = value; }
    inline ReferenceLineLabelConfiguration& WithVerticalPosition(ReferenceLineLabelVerticalPosition value) { SetVerticalPosition(value); return *this;}
    ///@}
  private:

    ReferenceLineValueLabelConfiguration m_valueLabelConfiguration;
    bool m_valueLabelConfigurationHasBeenSet = false;

    ReferenceLineCustomLabelConfiguration m_customLabelConfiguration;
    bool m_customLabelConfigurationHasBeenSet = false;

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;

    Aws::String m_fontColor;
    bool m_fontColorHasBeenSet = false;

    ReferenceLineLabelHorizontalPosition m_horizontalPosition{ReferenceLineLabelHorizontalPosition::NOT_SET};
    bool m_horizontalPositionHasBeenSet = false;

    ReferenceLineLabelVerticalPosition m_verticalPosition{ReferenceLineLabelVerticalPosition::NOT_SET};
    bool m_verticalPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
