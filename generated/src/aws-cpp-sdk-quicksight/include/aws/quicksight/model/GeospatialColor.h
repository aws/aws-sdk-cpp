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
    AWS_QUICKSIGHT_API GeospatialColor();
    AWS_QUICKSIGHT_API GeospatialColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visualization properties for the solid color.</p>
     */
    inline const GeospatialSolidColor& GetSolid() const{ return m_solid; }
    inline bool SolidHasBeenSet() const { return m_solidHasBeenSet; }
    inline void SetSolid(const GeospatialSolidColor& value) { m_solidHasBeenSet = true; m_solid = value; }
    inline void SetSolid(GeospatialSolidColor&& value) { m_solidHasBeenSet = true; m_solid = std::move(value); }
    inline GeospatialColor& WithSolid(const GeospatialSolidColor& value) { SetSolid(value); return *this;}
    inline GeospatialColor& WithSolid(GeospatialSolidColor&& value) { SetSolid(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visualization properties for the gradient color.</p>
     */
    inline const GeospatialGradientColor& GetGradient() const{ return m_gradient; }
    inline bool GradientHasBeenSet() const { return m_gradientHasBeenSet; }
    inline void SetGradient(const GeospatialGradientColor& value) { m_gradientHasBeenSet = true; m_gradient = value; }
    inline void SetGradient(GeospatialGradientColor&& value) { m_gradientHasBeenSet = true; m_gradient = std::move(value); }
    inline GeospatialColor& WithGradient(const GeospatialGradientColor& value) { SetGradient(value); return *this;}
    inline GeospatialColor& WithGradient(GeospatialGradientColor&& value) { SetGradient(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visualization properties for the categorical color.</p>
     */
    inline const GeospatialCategoricalColor& GetCategorical() const{ return m_categorical; }
    inline bool CategoricalHasBeenSet() const { return m_categoricalHasBeenSet; }
    inline void SetCategorical(const GeospatialCategoricalColor& value) { m_categoricalHasBeenSet = true; m_categorical = value; }
    inline void SetCategorical(GeospatialCategoricalColor&& value) { m_categoricalHasBeenSet = true; m_categorical = std::move(value); }
    inline GeospatialColor& WithCategorical(const GeospatialCategoricalColor& value) { SetCategorical(value); return *this;}
    inline GeospatialColor& WithCategorical(GeospatialCategoricalColor&& value) { SetCategorical(std::move(value)); return *this;}
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
