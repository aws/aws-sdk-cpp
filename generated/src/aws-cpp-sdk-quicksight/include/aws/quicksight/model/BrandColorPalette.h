/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Palette.h>
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
   * <p>The color palette.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BrandColorPalette">AWS
   * API Reference</a></p>
   */
  class BrandColorPalette
  {
  public:
    AWS_QUICKSIGHT_API BrandColorPalette() = default;
    AWS_QUICKSIGHT_API BrandColorPalette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BrandColorPalette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The primary color.</p>
     */
    inline const Palette& GetPrimary() const { return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    template<typename PrimaryT = Palette>
    void SetPrimary(PrimaryT&& value) { m_primaryHasBeenSet = true; m_primary = std::forward<PrimaryT>(value); }
    template<typename PrimaryT = Palette>
    BrandColorPalette& WithPrimary(PrimaryT&& value) { SetPrimary(std::forward<PrimaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secondary color.</p>
     */
    inline const Palette& GetSecondary() const { return m_secondary; }
    inline bool SecondaryHasBeenSet() const { return m_secondaryHasBeenSet; }
    template<typename SecondaryT = Palette>
    void SetSecondary(SecondaryT&& value) { m_secondaryHasBeenSet = true; m_secondary = std::forward<SecondaryT>(value); }
    template<typename SecondaryT = Palette>
    BrandColorPalette& WithSecondary(SecondaryT&& value) { SetSecondary(std::forward<SecondaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for accent elements.</p>
     */
    inline const Palette& GetAccent() const { return m_accent; }
    inline bool AccentHasBeenSet() const { return m_accentHasBeenSet; }
    template<typename AccentT = Palette>
    void SetAccent(AccentT&& value) { m_accentHasBeenSet = true; m_accent = std::forward<AccentT>(value); }
    template<typename AccentT = Palette>
    BrandColorPalette& WithAccent(AccentT&& value) { SetAccent(std::forward<AccentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for measure elements.</p>
     */
    inline const Palette& GetMeasure() const { return m_measure; }
    inline bool MeasureHasBeenSet() const { return m_measureHasBeenSet; }
    template<typename MeasureT = Palette>
    void SetMeasure(MeasureT&& value) { m_measureHasBeenSet = true; m_measure = std::forward<MeasureT>(value); }
    template<typename MeasureT = Palette>
    BrandColorPalette& WithMeasure(MeasureT&& value) { SetMeasure(std::forward<MeasureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for dimension elements.</p>
     */
    inline const Palette& GetDimension() const { return m_dimension; }
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
    template<typename DimensionT = Palette>
    void SetDimension(DimensionT&& value) { m_dimensionHasBeenSet = true; m_dimension = std::forward<DimensionT>(value); }
    template<typename DimensionT = Palette>
    BrandColorPalette& WithDimension(DimensionT&& value) { SetDimension(std::forward<DimensionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for success elements.</p>
     */
    inline const Palette& GetSuccess() const { return m_success; }
    inline bool SuccessHasBeenSet() const { return m_successHasBeenSet; }
    template<typename SuccessT = Palette>
    void SetSuccess(SuccessT&& value) { m_successHasBeenSet = true; m_success = std::forward<SuccessT>(value); }
    template<typename SuccessT = Palette>
    BrandColorPalette& WithSuccess(SuccessT&& value) { SetSuccess(std::forward<SuccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for info elements.</p>
     */
    inline const Palette& GetInfo() const { return m_info; }
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
    template<typename InfoT = Palette>
    void SetInfo(InfoT&& value) { m_infoHasBeenSet = true; m_info = std::forward<InfoT>(value); }
    template<typename InfoT = Palette>
    BrandColorPalette& WithInfo(InfoT&& value) { SetInfo(std::forward<InfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for warning elements.</p>
     */
    inline const Palette& GetWarning() const { return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    template<typename WarningT = Palette>
    void SetWarning(WarningT&& value) { m_warningHasBeenSet = true; m_warning = std::forward<WarningT>(value); }
    template<typename WarningT = Palette>
    BrandColorPalette& WithWarning(WarningT&& value) { SetWarning(std::forward<WarningT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for danger elements.</p>
     */
    inline const Palette& GetDanger() const { return m_danger; }
    inline bool DangerHasBeenSet() const { return m_dangerHasBeenSet; }
    template<typename DangerT = Palette>
    void SetDanger(DangerT&& value) { m_dangerHasBeenSet = true; m_danger = std::forward<DangerT>(value); }
    template<typename DangerT = Palette>
    BrandColorPalette& WithDanger(DangerT&& value) { SetDanger(std::forward<DangerT>(value)); return *this;}
    ///@}
  private:

    Palette m_primary;
    bool m_primaryHasBeenSet = false;

    Palette m_secondary;
    bool m_secondaryHasBeenSet = false;

    Palette m_accent;
    bool m_accentHasBeenSet = false;

    Palette m_measure;
    bool m_measureHasBeenSet = false;

    Palette m_dimension;
    bool m_dimensionHasBeenSet = false;

    Palette m_success;
    bool m_successHasBeenSet = false;

    Palette m_info;
    bool m_infoHasBeenSet = false;

    Palette m_warning;
    bool m_warningHasBeenSet = false;

    Palette m_danger;
    bool m_dangerHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
