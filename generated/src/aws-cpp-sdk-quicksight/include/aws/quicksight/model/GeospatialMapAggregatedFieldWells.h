/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * <p>The aggregated field wells for a geospatial map.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialMapAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class GeospatialMapAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API GeospatialMapAggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API GeospatialMapAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialMapAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The geospatial field wells of a geospatial map. Values are grouped by
     * geospatial fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetGeospatial() const { return m_geospatial; }
    inline bool GeospatialHasBeenSet() const { return m_geospatialHasBeenSet; }
    template<typename GeospatialT = Aws::Vector<DimensionField>>
    void SetGeospatial(GeospatialT&& value) { m_geospatialHasBeenSet = true; m_geospatial = std::forward<GeospatialT>(value); }
    template<typename GeospatialT = Aws::Vector<DimensionField>>
    GeospatialMapAggregatedFieldWells& WithGeospatial(GeospatialT&& value) { SetGeospatial(std::forward<GeospatialT>(value)); return *this;}
    template<typename GeospatialT = DimensionField>
    GeospatialMapAggregatedFieldWells& AddGeospatial(GeospatialT&& value) { m_geospatialHasBeenSet = true; m_geospatial.emplace_back(std::forward<GeospatialT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size field wells of a geospatial map. Values are aggregated based on
     * geospatial fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    GeospatialMapAggregatedFieldWells& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = MeasureField>
    GeospatialMapAggregatedFieldWells& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The color field wells of a geospatial map.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColors() const { return m_colors; }
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }
    template<typename ColorsT = Aws::Vector<DimensionField>>
    void SetColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors = std::forward<ColorsT>(value); }
    template<typename ColorsT = Aws::Vector<DimensionField>>
    GeospatialMapAggregatedFieldWells& WithColors(ColorsT&& value) { SetColors(std::forward<ColorsT>(value)); return *this;}
    template<typename ColorsT = DimensionField>
    GeospatialMapAggregatedFieldWells& AddColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors.emplace_back(std::forward<ColorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_geospatial;
    bool m_geospatialHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<DimensionField> m_colors;
    bool m_colorsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
