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
    AWS_QUICKSIGHT_API ReferenceLineLabelConfiguration();
    AWS_QUICKSIGHT_API ReferenceLineLabelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLineLabelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value label configuration of the label in a reference line.</p>
     */
    inline const ReferenceLineValueLabelConfiguration& GetValueLabelConfiguration() const{ return m_valueLabelConfiguration; }

    /**
     * <p>The value label configuration of the label in a reference line.</p>
     */
    inline bool ValueLabelConfigurationHasBeenSet() const { return m_valueLabelConfigurationHasBeenSet; }

    /**
     * <p>The value label configuration of the label in a reference line.</p>
     */
    inline void SetValueLabelConfiguration(const ReferenceLineValueLabelConfiguration& value) { m_valueLabelConfigurationHasBeenSet = true; m_valueLabelConfiguration = value; }

    /**
     * <p>The value label configuration of the label in a reference line.</p>
     */
    inline void SetValueLabelConfiguration(ReferenceLineValueLabelConfiguration&& value) { m_valueLabelConfigurationHasBeenSet = true; m_valueLabelConfiguration = std::move(value); }

    /**
     * <p>The value label configuration of the label in a reference line.</p>
     */
    inline ReferenceLineLabelConfiguration& WithValueLabelConfiguration(const ReferenceLineValueLabelConfiguration& value) { SetValueLabelConfiguration(value); return *this;}

    /**
     * <p>The value label configuration of the label in a reference line.</p>
     */
    inline ReferenceLineLabelConfiguration& WithValueLabelConfiguration(ReferenceLineValueLabelConfiguration&& value) { SetValueLabelConfiguration(std::move(value)); return *this;}


    /**
     * <p>The custom label configuration of the label in a reference line.</p>
     */
    inline const ReferenceLineCustomLabelConfiguration& GetCustomLabelConfiguration() const{ return m_customLabelConfiguration; }

    /**
     * <p>The custom label configuration of the label in a reference line.</p>
     */
    inline bool CustomLabelConfigurationHasBeenSet() const { return m_customLabelConfigurationHasBeenSet; }

    /**
     * <p>The custom label configuration of the label in a reference line.</p>
     */
    inline void SetCustomLabelConfiguration(const ReferenceLineCustomLabelConfiguration& value) { m_customLabelConfigurationHasBeenSet = true; m_customLabelConfiguration = value; }

    /**
     * <p>The custom label configuration of the label in a reference line.</p>
     */
    inline void SetCustomLabelConfiguration(ReferenceLineCustomLabelConfiguration&& value) { m_customLabelConfigurationHasBeenSet = true; m_customLabelConfiguration = std::move(value); }

    /**
     * <p>The custom label configuration of the label in a reference line.</p>
     */
    inline ReferenceLineLabelConfiguration& WithCustomLabelConfiguration(const ReferenceLineCustomLabelConfiguration& value) { SetCustomLabelConfiguration(value); return *this;}

    /**
     * <p>The custom label configuration of the label in a reference line.</p>
     */
    inline ReferenceLineLabelConfiguration& WithCustomLabelConfiguration(ReferenceLineCustomLabelConfiguration&& value) { SetCustomLabelConfiguration(std::move(value)); return *this;}


    /**
     * <p>The font configuration of the label in a reference line.</p>
     */
    inline const FontConfiguration& GetFontConfiguration() const{ return m_fontConfiguration; }

    /**
     * <p>The font configuration of the label in a reference line.</p>
     */
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }

    /**
     * <p>The font configuration of the label in a reference line.</p>
     */
    inline void SetFontConfiguration(const FontConfiguration& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = value; }

    /**
     * <p>The font configuration of the label in a reference line.</p>
     */
    inline void SetFontConfiguration(FontConfiguration&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::move(value); }

    /**
     * <p>The font configuration of the label in a reference line.</p>
     */
    inline ReferenceLineLabelConfiguration& WithFontConfiguration(const FontConfiguration& value) { SetFontConfiguration(value); return *this;}

    /**
     * <p>The font configuration of the label in a reference line.</p>
     */
    inline ReferenceLineLabelConfiguration& WithFontConfiguration(FontConfiguration&& value) { SetFontConfiguration(std::move(value)); return *this;}


    /**
     * <p>The font color configuration of the label in a reference line.</p>
     */
    inline const Aws::String& GetFontColor() const{ return m_fontColor; }

    /**
     * <p>The font color configuration of the label in a reference line.</p>
     */
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }

    /**
     * <p>The font color configuration of the label in a reference line.</p>
     */
    inline void SetFontColor(const Aws::String& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }

    /**
     * <p>The font color configuration of the label in a reference line.</p>
     */
    inline void SetFontColor(Aws::String&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }

    /**
     * <p>The font color configuration of the label in a reference line.</p>
     */
    inline void SetFontColor(const char* value) { m_fontColorHasBeenSet = true; m_fontColor.assign(value); }

    /**
     * <p>The font color configuration of the label in a reference line.</p>
     */
    inline ReferenceLineLabelConfiguration& WithFontColor(const Aws::String& value) { SetFontColor(value); return *this;}

    /**
     * <p>The font color configuration of the label in a reference line.</p>
     */
    inline ReferenceLineLabelConfiguration& WithFontColor(Aws::String&& value) { SetFontColor(std::move(value)); return *this;}

    /**
     * <p>The font color configuration of the label in a reference line.</p>
     */
    inline ReferenceLineLabelConfiguration& WithFontColor(const char* value) { SetFontColor(value); return *this;}


    /**
     * <p>The horizontal position configuration of the label in a reference line.
     * Choose one of the following options:</p> <ul> <li> <p> <code>LEFT</code> </p>
     * </li> <li> <p> <code>CENTER</code> </p> </li> <li> <p> <code>RIGHT</code> </p>
     * </li> </ul>
     */
    inline const ReferenceLineLabelHorizontalPosition& GetHorizontalPosition() const{ return m_horizontalPosition; }

    /**
     * <p>The horizontal position configuration of the label in a reference line.
     * Choose one of the following options:</p> <ul> <li> <p> <code>LEFT</code> </p>
     * </li> <li> <p> <code>CENTER</code> </p> </li> <li> <p> <code>RIGHT</code> </p>
     * </li> </ul>
     */
    inline bool HorizontalPositionHasBeenSet() const { return m_horizontalPositionHasBeenSet; }

    /**
     * <p>The horizontal position configuration of the label in a reference line.
     * Choose one of the following options:</p> <ul> <li> <p> <code>LEFT</code> </p>
     * </li> <li> <p> <code>CENTER</code> </p> </li> <li> <p> <code>RIGHT</code> </p>
     * </li> </ul>
     */
    inline void SetHorizontalPosition(const ReferenceLineLabelHorizontalPosition& value) { m_horizontalPositionHasBeenSet = true; m_horizontalPosition = value; }

    /**
     * <p>The horizontal position configuration of the label in a reference line.
     * Choose one of the following options:</p> <ul> <li> <p> <code>LEFT</code> </p>
     * </li> <li> <p> <code>CENTER</code> </p> </li> <li> <p> <code>RIGHT</code> </p>
     * </li> </ul>
     */
    inline void SetHorizontalPosition(ReferenceLineLabelHorizontalPosition&& value) { m_horizontalPositionHasBeenSet = true; m_horizontalPosition = std::move(value); }

    /**
     * <p>The horizontal position configuration of the label in a reference line.
     * Choose one of the following options:</p> <ul> <li> <p> <code>LEFT</code> </p>
     * </li> <li> <p> <code>CENTER</code> </p> </li> <li> <p> <code>RIGHT</code> </p>
     * </li> </ul>
     */
    inline ReferenceLineLabelConfiguration& WithHorizontalPosition(const ReferenceLineLabelHorizontalPosition& value) { SetHorizontalPosition(value); return *this;}

    /**
     * <p>The horizontal position configuration of the label in a reference line.
     * Choose one of the following options:</p> <ul> <li> <p> <code>LEFT</code> </p>
     * </li> <li> <p> <code>CENTER</code> </p> </li> <li> <p> <code>RIGHT</code> </p>
     * </li> </ul>
     */
    inline ReferenceLineLabelConfiguration& WithHorizontalPosition(ReferenceLineLabelHorizontalPosition&& value) { SetHorizontalPosition(std::move(value)); return *this;}


    /**
     * <p>The vertical position configuration of the label in a reference line. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ABOVE</code> </p> </li>
     * <li> <p> <code>BELOW</code> </p> </li> </ul>
     */
    inline const ReferenceLineLabelVerticalPosition& GetVerticalPosition() const{ return m_verticalPosition; }

    /**
     * <p>The vertical position configuration of the label in a reference line. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ABOVE</code> </p> </li>
     * <li> <p> <code>BELOW</code> </p> </li> </ul>
     */
    inline bool VerticalPositionHasBeenSet() const { return m_verticalPositionHasBeenSet; }

    /**
     * <p>The vertical position configuration of the label in a reference line. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ABOVE</code> </p> </li>
     * <li> <p> <code>BELOW</code> </p> </li> </ul>
     */
    inline void SetVerticalPosition(const ReferenceLineLabelVerticalPosition& value) { m_verticalPositionHasBeenSet = true; m_verticalPosition = value; }

    /**
     * <p>The vertical position configuration of the label in a reference line. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ABOVE</code> </p> </li>
     * <li> <p> <code>BELOW</code> </p> </li> </ul>
     */
    inline void SetVerticalPosition(ReferenceLineLabelVerticalPosition&& value) { m_verticalPositionHasBeenSet = true; m_verticalPosition = std::move(value); }

    /**
     * <p>The vertical position configuration of the label in a reference line. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ABOVE</code> </p> </li>
     * <li> <p> <code>BELOW</code> </p> </li> </ul>
     */
    inline ReferenceLineLabelConfiguration& WithVerticalPosition(const ReferenceLineLabelVerticalPosition& value) { SetVerticalPosition(value); return *this;}

    /**
     * <p>The vertical position configuration of the label in a reference line. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ABOVE</code> </p> </li>
     * <li> <p> <code>BELOW</code> </p> </li> </ul>
     */
    inline ReferenceLineLabelConfiguration& WithVerticalPosition(ReferenceLineLabelVerticalPosition&& value) { SetVerticalPosition(std::move(value)); return *this;}

  private:

    ReferenceLineValueLabelConfiguration m_valueLabelConfiguration;
    bool m_valueLabelConfigurationHasBeenSet = false;

    ReferenceLineCustomLabelConfiguration m_customLabelConfiguration;
    bool m_customLabelConfigurationHasBeenSet = false;

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;

    Aws::String m_fontColor;
    bool m_fontColorHasBeenSet = false;

    ReferenceLineLabelHorizontalPosition m_horizontalPosition;
    bool m_horizontalPositionHasBeenSet = false;

    ReferenceLineLabelVerticalPosition m_verticalPosition;
    bool m_verticalPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
