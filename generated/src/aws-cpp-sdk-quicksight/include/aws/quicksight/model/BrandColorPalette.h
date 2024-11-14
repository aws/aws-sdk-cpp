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
    AWS_QUICKSIGHT_API BrandColorPalette();
    AWS_QUICKSIGHT_API BrandColorPalette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BrandColorPalette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The primary color.</p>
     */
    inline const Palette& GetPrimary() const{ return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    inline void SetPrimary(const Palette& value) { m_primaryHasBeenSet = true; m_primary = value; }
    inline void SetPrimary(Palette&& value) { m_primaryHasBeenSet = true; m_primary = std::move(value); }
    inline BrandColorPalette& WithPrimary(const Palette& value) { SetPrimary(value); return *this;}
    inline BrandColorPalette& WithPrimary(Palette&& value) { SetPrimary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secondary color.</p>
     */
    inline const Palette& GetSecondary() const{ return m_secondary; }
    inline bool SecondaryHasBeenSet() const { return m_secondaryHasBeenSet; }
    inline void SetSecondary(const Palette& value) { m_secondaryHasBeenSet = true; m_secondary = value; }
    inline void SetSecondary(Palette&& value) { m_secondaryHasBeenSet = true; m_secondary = std::move(value); }
    inline BrandColorPalette& WithSecondary(const Palette& value) { SetSecondary(value); return *this;}
    inline BrandColorPalette& WithSecondary(Palette&& value) { SetSecondary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for accent elements.</p>
     */
    inline const Palette& GetAccent() const{ return m_accent; }
    inline bool AccentHasBeenSet() const { return m_accentHasBeenSet; }
    inline void SetAccent(const Palette& value) { m_accentHasBeenSet = true; m_accent = value; }
    inline void SetAccent(Palette&& value) { m_accentHasBeenSet = true; m_accent = std::move(value); }
    inline BrandColorPalette& WithAccent(const Palette& value) { SetAccent(value); return *this;}
    inline BrandColorPalette& WithAccent(Palette&& value) { SetAccent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for measure elements.</p>
     */
    inline const Palette& GetMeasure() const{ return m_measure; }
    inline bool MeasureHasBeenSet() const { return m_measureHasBeenSet; }
    inline void SetMeasure(const Palette& value) { m_measureHasBeenSet = true; m_measure = value; }
    inline void SetMeasure(Palette&& value) { m_measureHasBeenSet = true; m_measure = std::move(value); }
    inline BrandColorPalette& WithMeasure(const Palette& value) { SetMeasure(value); return *this;}
    inline BrandColorPalette& WithMeasure(Palette&& value) { SetMeasure(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for dimension elements.</p>
     */
    inline const Palette& GetDimension() const{ return m_dimension; }
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
    inline void SetDimension(const Palette& value) { m_dimensionHasBeenSet = true; m_dimension = value; }
    inline void SetDimension(Palette&& value) { m_dimensionHasBeenSet = true; m_dimension = std::move(value); }
    inline BrandColorPalette& WithDimension(const Palette& value) { SetDimension(value); return *this;}
    inline BrandColorPalette& WithDimension(Palette&& value) { SetDimension(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for success elements.</p>
     */
    inline const Palette& GetSuccess() const{ return m_success; }
    inline bool SuccessHasBeenSet() const { return m_successHasBeenSet; }
    inline void SetSuccess(const Palette& value) { m_successHasBeenSet = true; m_success = value; }
    inline void SetSuccess(Palette&& value) { m_successHasBeenSet = true; m_success = std::move(value); }
    inline BrandColorPalette& WithSuccess(const Palette& value) { SetSuccess(value); return *this;}
    inline BrandColorPalette& WithSuccess(Palette&& value) { SetSuccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for info elements.</p>
     */
    inline const Palette& GetInfo() const{ return m_info; }
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
    inline void SetInfo(const Palette& value) { m_infoHasBeenSet = true; m_info = value; }
    inline void SetInfo(Palette&& value) { m_infoHasBeenSet = true; m_info = std::move(value); }
    inline BrandColorPalette& WithInfo(const Palette& value) { SetInfo(value); return *this;}
    inline BrandColorPalette& WithInfo(Palette&& value) { SetInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for warning elements.</p>
     */
    inline const Palette& GetWarning() const{ return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    inline void SetWarning(const Palette& value) { m_warningHasBeenSet = true; m_warning = value; }
    inline void SetWarning(Palette&& value) { m_warningHasBeenSet = true; m_warning = std::move(value); }
    inline BrandColorPalette& WithWarning(const Palette& value) { SetWarning(value); return *this;}
    inline BrandColorPalette& WithWarning(Palette&& value) { SetWarning(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for danger elements.</p>
     */
    inline const Palette& GetDanger() const{ return m_danger; }
    inline bool DangerHasBeenSet() const { return m_dangerHasBeenSet; }
    inline void SetDanger(const Palette& value) { m_dangerHasBeenSet = true; m_danger = value; }
    inline void SetDanger(Palette&& value) { m_dangerHasBeenSet = true; m_danger = std::move(value); }
    inline BrandColorPalette& WithDanger(const Palette& value) { SetDanger(value); return *this;}
    inline BrandColorPalette& WithDanger(Palette&& value) { SetDanger(std::move(value)); return *this;}
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
