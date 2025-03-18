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
    AWS_QUICKSIGHT_API UIColorPalette() = default;
    AWS_QUICKSIGHT_API UIColorPalette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API UIColorPalette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color of text and other foreground elements that appear over the primary
     * background regions, such as grid lines, borders, table banding, icons, and so
     * on.</p>
     */
    inline const Aws::String& GetPrimaryForeground() const { return m_primaryForeground; }
    inline bool PrimaryForegroundHasBeenSet() const { return m_primaryForegroundHasBeenSet; }
    template<typename PrimaryForegroundT = Aws::String>
    void SetPrimaryForeground(PrimaryForegroundT&& value) { m_primaryForegroundHasBeenSet = true; m_primaryForeground = std::forward<PrimaryForegroundT>(value); }
    template<typename PrimaryForegroundT = Aws::String>
    UIColorPalette& WithPrimaryForeground(PrimaryForegroundT&& value) { SetPrimaryForeground(std::forward<PrimaryForegroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The background color that applies to visuals and other high emphasis UI.</p>
     */
    inline const Aws::String& GetPrimaryBackground() const { return m_primaryBackground; }
    inline bool PrimaryBackgroundHasBeenSet() const { return m_primaryBackgroundHasBeenSet; }
    template<typename PrimaryBackgroundT = Aws::String>
    void SetPrimaryBackground(PrimaryBackgroundT&& value) { m_primaryBackgroundHasBeenSet = true; m_primaryBackground = std::forward<PrimaryBackgroundT>(value); }
    template<typename PrimaryBackgroundT = Aws::String>
    UIColorPalette& WithPrimaryBackground(PrimaryBackgroundT&& value) { SetPrimaryBackground(std::forward<PrimaryBackgroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any sheet title, sheet control text, or
     * UI that appears over the secondary background.</p>
     */
    inline const Aws::String& GetSecondaryForeground() const { return m_secondaryForeground; }
    inline bool SecondaryForegroundHasBeenSet() const { return m_secondaryForegroundHasBeenSet; }
    template<typename SecondaryForegroundT = Aws::String>
    void SetSecondaryForeground(SecondaryForegroundT&& value) { m_secondaryForegroundHasBeenSet = true; m_secondaryForeground = std::forward<SecondaryForegroundT>(value); }
    template<typename SecondaryForegroundT = Aws::String>
    UIColorPalette& WithSecondaryForeground(SecondaryForegroundT&& value) { SetSecondaryForeground(std::forward<SecondaryForegroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The background color that applies to the sheet background and sheet
     * controls.</p>
     */
    inline const Aws::String& GetSecondaryBackground() const { return m_secondaryBackground; }
    inline bool SecondaryBackgroundHasBeenSet() const { return m_secondaryBackgroundHasBeenSet; }
    template<typename SecondaryBackgroundT = Aws::String>
    void SetSecondaryBackground(SecondaryBackgroundT&& value) { m_secondaryBackgroundHasBeenSet = true; m_secondaryBackground = std::forward<SecondaryBackgroundT>(value); }
    template<typename SecondaryBackgroundT = Aws::String>
    UIColorPalette& WithSecondaryBackground(SecondaryBackgroundT&& value) { SetSecondaryBackground(std::forward<SecondaryBackgroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This color is that applies to selected states and buttons.</p>
     */
    inline const Aws::String& GetAccent() const { return m_accent; }
    inline bool AccentHasBeenSet() const { return m_accentHasBeenSet; }
    template<typename AccentT = Aws::String>
    void SetAccent(AccentT&& value) { m_accentHasBeenSet = true; m_accent = std::forward<AccentT>(value); }
    template<typename AccentT = Aws::String>
    UIColorPalette& WithAccent(AccentT&& value) { SetAccent(std::forward<AccentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the accent color.</p>
     */
    inline const Aws::String& GetAccentForeground() const { return m_accentForeground; }
    inline bool AccentForegroundHasBeenSet() const { return m_accentForegroundHasBeenSet; }
    template<typename AccentForegroundT = Aws::String>
    void SetAccentForeground(AccentForegroundT&& value) { m_accentForegroundHasBeenSet = true; m_accentForeground = std::forward<AccentForegroundT>(value); }
    template<typename AccentForegroundT = Aws::String>
    UIColorPalette& WithAccentForeground(AccentForegroundT&& value) { SetAccentForeground(std::forward<AccentForegroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that applies to error messages.</p>
     */
    inline const Aws::String& GetDanger() const { return m_danger; }
    inline bool DangerHasBeenSet() const { return m_dangerHasBeenSet; }
    template<typename DangerT = Aws::String>
    void SetDanger(DangerT&& value) { m_dangerHasBeenSet = true; m_danger = std::forward<DangerT>(value); }
    template<typename DangerT = Aws::String>
    UIColorPalette& WithDanger(DangerT&& value) { SetDanger(std::forward<DangerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the error color.</p>
     */
    inline const Aws::String& GetDangerForeground() const { return m_dangerForeground; }
    inline bool DangerForegroundHasBeenSet() const { return m_dangerForegroundHasBeenSet; }
    template<typename DangerForegroundT = Aws::String>
    void SetDangerForeground(DangerForegroundT&& value) { m_dangerForegroundHasBeenSet = true; m_dangerForeground = std::forward<DangerForegroundT>(value); }
    template<typename DangerForegroundT = Aws::String>
    UIColorPalette& WithDangerForeground(DangerForegroundT&& value) { SetDangerForeground(std::forward<DangerForegroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This color that applies to warning and informational messages.</p>
     */
    inline const Aws::String& GetWarning() const { return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    template<typename WarningT = Aws::String>
    void SetWarning(WarningT&& value) { m_warningHasBeenSet = true; m_warning = std::forward<WarningT>(value); }
    template<typename WarningT = Aws::String>
    UIColorPalette& WithWarning(WarningT&& value) { SetWarning(std::forward<WarningT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the warning color.</p>
     */
    inline const Aws::String& GetWarningForeground() const { return m_warningForeground; }
    inline bool WarningForegroundHasBeenSet() const { return m_warningForegroundHasBeenSet; }
    template<typename WarningForegroundT = Aws::String>
    void SetWarningForeground(WarningForegroundT&& value) { m_warningForegroundHasBeenSet = true; m_warningForeground = std::forward<WarningForegroundT>(value); }
    template<typename WarningForegroundT = Aws::String>
    UIColorPalette& WithWarningForeground(WarningForegroundT&& value) { SetWarningForeground(std::forward<WarningForegroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that applies to success messages, for example the check mark for a
     * successful download.</p>
     */
    inline const Aws::String& GetSuccess() const { return m_success; }
    inline bool SuccessHasBeenSet() const { return m_successHasBeenSet; }
    template<typename SuccessT = Aws::String>
    void SetSuccess(SuccessT&& value) { m_successHasBeenSet = true; m_success = std::forward<SuccessT>(value); }
    template<typename SuccessT = Aws::String>
    UIColorPalette& WithSuccess(SuccessT&& value) { SetSuccess(std::forward<SuccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the success color.</p>
     */
    inline const Aws::String& GetSuccessForeground() const { return m_successForeground; }
    inline bool SuccessForegroundHasBeenSet() const { return m_successForegroundHasBeenSet; }
    template<typename SuccessForegroundT = Aws::String>
    void SetSuccessForeground(SuccessForegroundT&& value) { m_successForegroundHasBeenSet = true; m_successForeground = std::forward<SuccessForegroundT>(value); }
    template<typename SuccessForegroundT = Aws::String>
    UIColorPalette& WithSuccessForeground(SuccessForegroundT&& value) { SetSuccessForeground(std::forward<SuccessForegroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that applies to the names of fields that are identified as
     * dimensions.</p>
     */
    inline const Aws::String& GetDimension() const { return m_dimension; }
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
    template<typename DimensionT = Aws::String>
    void SetDimension(DimensionT&& value) { m_dimensionHasBeenSet = true; m_dimension = std::forward<DimensionT>(value); }
    template<typename DimensionT = Aws::String>
    UIColorPalette& WithDimension(DimensionT&& value) { SetDimension(std::forward<DimensionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the dimension color.</p>
     */
    inline const Aws::String& GetDimensionForeground() const { return m_dimensionForeground; }
    inline bool DimensionForegroundHasBeenSet() const { return m_dimensionForegroundHasBeenSet; }
    template<typename DimensionForegroundT = Aws::String>
    void SetDimensionForeground(DimensionForegroundT&& value) { m_dimensionForegroundHasBeenSet = true; m_dimensionForeground = std::forward<DimensionForegroundT>(value); }
    template<typename DimensionForegroundT = Aws::String>
    UIColorPalette& WithDimensionForeground(DimensionForegroundT&& value) { SetDimensionForeground(std::forward<DimensionForegroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that applies to the names of fields that are identified as
     * measures.</p>
     */
    inline const Aws::String& GetMeasure() const { return m_measure; }
    inline bool MeasureHasBeenSet() const { return m_measureHasBeenSet; }
    template<typename MeasureT = Aws::String>
    void SetMeasure(MeasureT&& value) { m_measureHasBeenSet = true; m_measure = std::forward<MeasureT>(value); }
    template<typename MeasureT = Aws::String>
    UIColorPalette& WithMeasure(MeasureT&& value) { SetMeasure(std::forward<MeasureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foreground color that applies to any text or other elements that appear
     * over the measure color.</p>
     */
    inline const Aws::String& GetMeasureForeground() const { return m_measureForeground; }
    inline bool MeasureForegroundHasBeenSet() const { return m_measureForegroundHasBeenSet; }
    template<typename MeasureForegroundT = Aws::String>
    void SetMeasureForeground(MeasureForegroundT&& value) { m_measureForegroundHasBeenSet = true; m_measureForeground = std::forward<MeasureForegroundT>(value); }
    template<typename MeasureForegroundT = Aws::String>
    UIColorPalette& WithMeasureForeground(MeasureForegroundT&& value) { SetMeasureForeground(std::forward<MeasureForegroundT>(value)); return *this;}
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
