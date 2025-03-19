/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialSolidColor.h>
#include <aws/quicksight/model/GeospatialGradientColor.h>
#include <aws/quicksight/model/GeospatialCategoricalColor.h>
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
   * <p>The visualization properties for solid, gradient, and categorical
   * colors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialColor">AWS
   * API Reference</a></p>
   */
  class GeospatialColor
  {
  public:
    AWS_QUICKSIGHT_API GeospatialColor() = default;
    AWS_QUICKSIGHT_API GeospatialColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visualization properties for the solid color.</p>
     */
    inline const GeospatialSolidColor& GetSolid() const { return m_solid; }
    inline bool SolidHasBeenSet() const { return m_solidHasBeenSet; }
    template<typename SolidT = GeospatialSolidColor>
    void SetSolid(SolidT&& value) { m_solidHasBeenSet = true; m_solid = std::forward<SolidT>(value); }
    template<typename SolidT = GeospatialSolidColor>
    GeospatialColor& WithSolid(SolidT&& value) { SetSolid(std::forward<SolidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visualization properties for the gradient color.</p>
     */
    inline const GeospatialGradientColor& GetGradient() const { return m_gradient; }
    inline bool GradientHasBeenSet() const { return m_gradientHasBeenSet; }
    template<typename GradientT = GeospatialGradientColor>
    void SetGradient(GradientT&& value) { m_gradientHasBeenSet = true; m_gradient = std::forward<GradientT>(value); }
    template<typename GradientT = GeospatialGradientColor>
    GeospatialColor& WithGradient(GradientT&& value) { SetGradient(std::forward<GradientT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visualization properties for the categorical color.</p>
     */
    inline const GeospatialCategoricalColor& GetCategorical() const { return m_categorical; }
    inline bool CategoricalHasBeenSet() const { return m_categoricalHasBeenSet; }
    template<typename CategoricalT = GeospatialCategoricalColor>
    void SetCategorical(CategoricalT&& value) { m_categoricalHasBeenSet = true; m_categorical = std::forward<CategoricalT>(value); }
    template<typename CategoricalT = GeospatialCategoricalColor>
    GeospatialColor& WithCategorical(CategoricalT&& value) { SetCategorical(std::forward<CategoricalT>(value)); return *this;}
    ///@}
  private:

    GeospatialSolidColor m_solid;
    bool m_solidHasBeenSet = false;

    GeospatialGradientColor m_gradient;
    bool m_gradientHasBeenSet = false;

    GeospatialCategoricalColor m_categorical;
    bool m_categoricalHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
