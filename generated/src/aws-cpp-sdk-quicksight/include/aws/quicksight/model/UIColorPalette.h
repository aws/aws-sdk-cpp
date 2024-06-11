/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The theme colors that apply to UI and to charts, excluding data colors. The
   * colors description is a hexadecimal color code that consists of six
   * alphanumerical characters, prefixed with <code>#</code>, for example #37BFF5.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/themes-in-quicksight.html">Using
   * Themes in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide.</i>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UIColorPalette">AWS
   * API Reference</a></p>
   */
  class UIColorPalette
  {
  public:
    AWS_QUICKSIGHT_API UIColorPalette();
    AWS_QUICKSIGHT_API UIColorPalette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API UIColorPalette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color of text and other foreground elements that appear over the primary
     * background regions, such as grid lines, borders, table banding, icons, and so
     * on.</p>
     */
    inline const Aws::String& GetPrimaryForeground() const{ return m_primaryForeground; }
    inline bool PrimaryForegroundHasBeenSet() const { return m_primaryForegroundHasBeenSet; }
    inline void SetPrimaryForeground(const Aws::String& value) { m_primaryForegroundHasBeenSet = true; m_primaryForeground = value; }
    inline void SetPrimaryForeground(Aws::String&& value) { m_primaryForegroundHasBeenSet = true; m_primaryForeground = std::move(value); }
    inline void SetPrimaryForeground(const char* value) { m_primaryForegroundHasBeenSet = true; m_primaryForeground.assign(value); }
    inline UIColorPalette& WithPrimaryForeground(const Aws::String& value) { SetPrimaryForeground(value); return *this;}
    inline UIColorPalette& WithPrimaryForeground(Aws::String&& value) { SetPrimaryForeground(std::move(value)); return *this;}
    inline UIColorPalette& WithPrimaryForeground(const char* value) { SetPrimaryForeground(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The background color that applies to visuals and other high emphasis UI.</p>
     */
    inline const Aws::String& GetPrimaryBackground() const{ return m_primaryBackground; }
    inline bool PrimaryBackgroundHasBeenSet() const { return m_primaryBackgroundHasBeenSet; }
    inline void SetPrimaryBackground(const Aws::String& value) { m_primaryBackgroundHasBeenSet = true; m_primaryBackground = value; }
    inline void SetPrimaryBackground(Aws::String&& value) { m_primaryBackgroundHasBeenSet = true; m_primaryBackground = std::move(value); }
    inline void SetPrimaryBackground(const char* value) { m_primaryBackgroundHasBeenSet = true; m_primaryBackground.assign(value); }
    inline UIColorPalette& WithPrimaryBackground(const Aws::String& value) { SetPrimaryBackground(value); return *this;}
    inline UIColorPalette& WithPrimaryBackground(Aws::String&& value) { SetPrimaryBackground(std::move(value)); return *this;}
    inline UIColorPalette& WithPrimaryBackground(const char* value) { SetPrimaryBackground(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any sheet title, sheet control text, or
     * UI that appears over the secondary background.</p>
     */
    inline const Aws::String& GetSecondaryForeground() const{ return m_secondaryForeground; }
    inline bool SecondaryForegroundHasBeenSet() const { return m_secondaryForegroundHasBeenSet; }
    inline void SetSecondaryForeground(const Aws::String& value) { m_secondaryForegroundHasBeenSet = true; m_secondaryForeground = value; }
    inline void SetSecondaryForeground(Aws::String&& value) { m_secondaryForegroundHasBeenSet = true; m_secondaryForeground = std::move(value); }
    inline void SetSecondaryForeground(const char* value) { m_secondaryForegroundHasBeenSet = true; m_secondaryForeground.assign(value); }
    inline UIColorPalette& WithSecondaryForeground(const Aws::String& value) { SetSecondaryForeground(value); return *this;}
    inline UIColorPalette& WithSecondaryForeground(Aws::String&& value) { SetSecondaryForeground(std::move(value)); return *this;}
    inline UIColorPalette& WithSecondaryForeground(const char* value) { SetSecondaryForeground(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The background color that applies to the sheet background and sheet
     * controls.</p>
     */
    inline const Aws::String& GetSecondaryBackground() const{ return m_secondaryBackground; }
    inline bool SecondaryBackgroundHasBeenSet() const { return m_secondaryBackgroundHasBeenSet; }
    inline void SetSecondaryBackground(const Aws::String& value) { m_secondaryBackgroundHasBeenSet = true; m_secondaryBackground = value; }
    inline void SetSecondaryBackground(Aws::String&& value) { m_secondaryBackgroundHasBeenSet = true; m_secondaryBackground = std::move(value); }
    inline void SetSecondaryBackground(const char* value) { m_secondaryBackgroundHasBeenSet = true; m_secondaryBackground.assign(value); }
    inline UIColorPalette& WithSecondaryBackground(const Aws::String& value) { SetSecondaryBackground(value); return *this;}
    inline UIColorPalette& WithSecondaryBackground(Aws::String&& value) { SetSecondaryBackground(std::move(value)); return *this;}
    inline UIColorPalette& WithSecondaryBackground(const char* value) { SetSecondaryBackground(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This color is that applies to selected states and buttons.</p>
     */
    inline const Aws::String& GetAccent() const{ return m_accent; }
    inline bool AccentHasBeenSet() const { return m_accentHasBeenSet; }
    inline void SetAccent(const Aws::String& value) { m_accentHasBeenSet = true; m_accent = value; }
    inline void SetAccent(Aws::String&& value) { m_accentHasBeenSet = true; m_accent = std::move(value); }
    inline void SetAccent(const char* value) { m_accentHasBeenSet = true; m_accent.assign(value); }
    inline UIColorPalette& WithAccent(const Aws::String& value) { SetAccent(value); return *this;}
    inline UIColorPalette& WithAccent(Aws::String&& value) { SetAccent(std::move(value)); return *this;}
    inline UIColorPalette& WithAccent(const char* value) { SetAccent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the accent color.</p>
     */
    inline const Aws::String& GetAccentForeground() const{ return m_accentForeground; }
    inline bool AccentForegroundHasBeenSet() const { return m_accentForegroundHasBeenSet; }
    inline void SetAccentForeground(const Aws::String& value) { m_accentForegroundHasBeenSet = true; m_accentForeground = value; }
    inline void SetAccentForeground(Aws::String&& value) { m_accentForegroundHasBeenSet = true; m_accentForeground = std::move(value); }
    inline void SetAccentForeground(const char* value) { m_accentForegroundHasBeenSet = true; m_accentForeground.assign(value); }
    inline UIColorPalette& WithAccentForeground(const Aws::String& value) { SetAccentForeground(value); return *this;}
    inline UIColorPalette& WithAccentForeground(Aws::String&& value) { SetAccentForeground(std::move(value)); return *this;}
    inline UIColorPalette& WithAccentForeground(const char* value) { SetAccentForeground(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that applies to error messages.</p>
     */
    inline const Aws::String& GetDanger() const{ return m_danger; }
    inline bool DangerHasBeenSet() const { return m_dangerHasBeenSet; }
    inline void SetDanger(const Aws::String& value) { m_dangerHasBeenSet = true; m_danger = value; }
    inline void SetDanger(Aws::String&& value) { m_dangerHasBeenSet = true; m_danger = std::move(value); }
    inline void SetDanger(const char* value) { m_dangerHasBeenSet = true; m_danger.assign(value); }
    inline UIColorPalette& WithDanger(const Aws::String& value) { SetDanger(value); return *this;}
    inline UIColorPalette& WithDanger(Aws::String&& value) { SetDanger(std::move(value)); return *this;}
    inline UIColorPalette& WithDanger(const char* value) { SetDanger(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the error color.</p>
     */
    inline const Aws::String& GetDangerForeground() const{ return m_dangerForeground; }
    inline bool DangerForegroundHasBeenSet() const { return m_dangerForegroundHasBeenSet; }
    inline void SetDangerForeground(const Aws::String& value) { m_dangerForegroundHasBeenSet = true; m_dangerForeground = value; }
    inline void SetDangerForeground(Aws::String&& value) { m_dangerForegroundHasBeenSet = true; m_dangerForeground = std::move(value); }
    inline void SetDangerForeground(const char* value) { m_dangerForegroundHasBeenSet = true; m_dangerForeground.assign(value); }
    inline UIColorPalette& WithDangerForeground(const Aws::String& value) { SetDangerForeground(value); return *this;}
    inline UIColorPalette& WithDangerForeground(Aws::String&& value) { SetDangerForeground(std::move(value)); return *this;}
    inline UIColorPalette& WithDangerForeground(const char* value) { SetDangerForeground(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This color that applies to warning and informational messages.</p>
     */
    inline const Aws::String& GetWarning() const{ return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    inline void SetWarning(const Aws::String& value) { m_warningHasBeenSet = true; m_warning = value; }
    inline void SetWarning(Aws::String&& value) { m_warningHasBeenSet = true; m_warning = std::move(value); }
    inline void SetWarning(const char* value) { m_warningHasBeenSet = true; m_warning.assign(value); }
    inline UIColorPalette& WithWarning(const Aws::String& value) { SetWarning(value); return *this;}
    inline UIColorPalette& WithWarning(Aws::String&& value) { SetWarning(std::move(value)); return *this;}
    inline UIColorPalette& WithWarning(const char* value) { SetWarning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the warning color.</p>
     */
    inline const Aws::String& GetWarningForeground() const{ return m_warningForeground; }
    inline bool WarningForegroundHasBeenSet() const { return m_warningForegroundHasBeenSet; }
    inline void SetWarningForeground(const Aws::String& value) { m_warningForegroundHasBeenSet = true; m_warningForeground = value; }
    inline void SetWarningForeground(Aws::String&& value) { m_warningForegroundHasBeenSet = true; m_warningForeground = std::move(value); }
    inline void SetWarningForeground(const char* value) { m_warningForegroundHasBeenSet = true; m_warningForeground.assign(value); }
    inline UIColorPalette& WithWarningForeground(const Aws::String& value) { SetWarningForeground(value); return *this;}
    inline UIColorPalette& WithWarningForeground(Aws::String&& value) { SetWarningForeground(std::move(value)); return *this;}
    inline UIColorPalette& WithWarningForeground(const char* value) { SetWarningForeground(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that applies to success messages, for example the check mark for a
     * successful download.</p>
     */
    inline const Aws::String& GetSuccess() const{ return m_success; }
    inline bool SuccessHasBeenSet() const { return m_successHasBeenSet; }
    inline void SetSuccess(const Aws::String& value) { m_successHasBeenSet = true; m_success = value; }
    inline void SetSuccess(Aws::String&& value) { m_successHasBeenSet = true; m_success = std::move(value); }
    inline void SetSuccess(const char* value) { m_successHasBeenSet = true; m_success.assign(value); }
    inline UIColorPalette& WithSuccess(const Aws::String& value) { SetSuccess(value); return *this;}
    inline UIColorPalette& WithSuccess(Aws::String&& value) { SetSuccess(std::move(value)); return *this;}
    inline UIColorPalette& WithSuccess(const char* value) { SetSuccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the success color.</p>
     */
    inline const Aws::String& GetSuccessForeground() const{ return m_successForeground; }
    inline bool SuccessForegroundHasBeenSet() const { return m_successForegroundHasBeenSet; }
    inline void SetSuccessForeground(const Aws::String& value) { m_successForegroundHasBeenSet = true; m_successForeground = value; }
    inline void SetSuccessForeground(Aws::String&& value) { m_successForegroundHasBeenSet = true; m_successForeground = std::move(value); }
    inline void SetSuccessForeground(const char* value) { m_successForegroundHasBeenSet = true; m_successForeground.assign(value); }
    inline UIColorPalette& WithSuccessForeground(const Aws::String& value) { SetSuccessForeground(value); return *this;}
    inline UIColorPalette& WithSuccessForeground(Aws::String&& value) { SetSuccessForeground(std::move(value)); return *this;}
    inline UIColorPalette& WithSuccessForeground(const char* value) { SetSuccessForeground(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that applies to the names of fields that are identified as
     * dimensions.</p>
     */
    inline const Aws::String& GetDimension() const{ return m_dimension; }
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
    inline void SetDimension(const Aws::String& value) { m_dimensionHasBeenSet = true; m_dimension = value; }
    inline void SetDimension(Aws::String&& value) { m_dimensionHasBeenSet = true; m_dimension = std::move(value); }
    inline void SetDimension(const char* value) { m_dimensionHasBeenSet = true; m_dimension.assign(value); }
    inline UIColorPalette& WithDimension(const Aws::String& value) { SetDimension(value); return *this;}
    inline UIColorPalette& WithDimension(Aws::String&& value) { SetDimension(std::move(value)); return *this;}
    inline UIColorPalette& WithDimension(const char* value) { SetDimension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the dimension color.</p>
     */
    inline const Aws::String& GetDimensionForeground() const{ return m_dimensionForeground; }
    inline bool DimensionForegroundHasBeenSet() const { return m_dimensionForegroundHasBeenSet; }
    inline void SetDimensionForeground(const Aws::String& value) { m_dimensionForegroundHasBeenSet = true; m_dimensionForeground = value; }
    inline void SetDimensionForeground(Aws::String&& value) { m_dimensionForegroundHasBeenSet = true; m_dimensionForeground = std::move(value); }
    inline void SetDimensionForeground(const char* value) { m_dimensionForegroundHasBeenSet = true; m_dimensionForeground.assign(value); }
    inline UIColorPalette& WithDimensionForeground(const Aws::String& value) { SetDimensionForeground(value); return *this;}
    inline UIColorPalette& WithDimensionForeground(Aws::String&& value) { SetDimensionForeground(std::move(value)); return *this;}
    inline UIColorPalette& WithDimensionForeground(const char* value) { SetDimensionForeground(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that applies to the names of fields that are identified as
     * measures.</p>
     */
    inline const Aws::String& GetMeasure() const{ return m_measure; }
    inline bool MeasureHasBeenSet() const { return m_measureHasBeenSet; }
    inline void SetMeasure(const Aws::String& value) { m_measureHasBeenSet = true; m_measure = value; }
    inline void SetMeasure(Aws::String&& value) { m_measureHasBeenSet = true; m_measure = std::move(value); }
    inline void SetMeasure(const char* value) { m_measureHasBeenSet = true; m_measure.assign(value); }
    inline UIColorPalette& WithMeasure(const Aws::String& value) { SetMeasure(value); return *this;}
    inline UIColorPalette& WithMeasure(Aws::String&& value) { SetMeasure(std::move(value)); return *this;}
    inline UIColorPalette& WithMeasure(const char* value) { SetMeasure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the measure color.</p>
     */
    inline const Aws::String& GetMeasureForeground() const{ return m_measureForeground; }
    inline bool MeasureForegroundHasBeenSet() const { return m_measureForegroundHasBeenSet; }
    inline void SetMeasureForeground(const Aws::String& value) { m_measureForegroundHasBeenSet = true; m_measureForeground = value; }
    inline void SetMeasureForeground(Aws::String&& value) { m_measureForegroundHasBeenSet = true; m_measureForeground = std::move(value); }
    inline void SetMeasureForeground(const char* value) { m_measureForegroundHasBeenSet = true; m_measureForeground.assign(value); }
    inline UIColorPalette& WithMeasureForeground(const Aws::String& value) { SetMeasureForeground(value); return *this;}
    inline UIColorPalette& WithMeasureForeground(Aws::String&& value) { SetMeasureForeground(std::move(value)); return *this;}
    inline UIColorPalette& WithMeasureForeground(const char* value) { SetMeasureForeground(value); return *this;}
    ///@}
  private:

    Aws::String m_primaryForeground;
    bool m_primaryForegroundHasBeenSet = false;

    Aws::String m_primaryBackground;
    bool m_primaryBackgroundHasBeenSet = false;

    Aws::String m_secondaryForeground;
    bool m_secondaryForegroundHasBeenSet = false;

    Aws::String m_secondaryBackground;
    bool m_secondaryBackgroundHasBeenSet = false;

    Aws::String m_accent;
    bool m_accentHasBeenSet = false;

    Aws::String m_accentForeground;
    bool m_accentForegroundHasBeenSet = false;

    Aws::String m_danger;
    bool m_dangerHasBeenSet = false;

    Aws::String m_dangerForeground;
    bool m_dangerForegroundHasBeenSet = false;

    Aws::String m_warning;
    bool m_warningHasBeenSet = false;

    Aws::String m_warningForeground;
    bool m_warningForegroundHasBeenSet = false;

    Aws::String m_success;
    bool m_successHasBeenSet = false;

    Aws::String m_successForeground;
    bool m_successForegroundHasBeenSet = false;

    Aws::String m_dimension;
    bool m_dimensionHasBeenSet = false;

    Aws::String m_dimensionForeground;
    bool m_dimensionForegroundHasBeenSet = false;

    Aws::String m_measure;
    bool m_measureHasBeenSet = false;

    Aws::String m_measureForeground;
    bool m_measureForegroundHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
