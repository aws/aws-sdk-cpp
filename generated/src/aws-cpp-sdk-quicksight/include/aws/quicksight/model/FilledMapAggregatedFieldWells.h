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
   * <p>The aggregated field well of the filled map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilledMapAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class FilledMapAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API FilledMapAggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API FilledMapAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilledMapAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated location field well of the filled map. Values are grouped by
     * location fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetGeospatial() const { return m_geospatial; }
    inline bool GeospatialHasBeenSet() const { return m_geospatialHasBeenSet; }
    template<typename GeospatialT = Aws::Vector<DimensionField>>
    void SetGeospatial(GeospatialT&& value) { m_geospatialHasBeenSet = true; m_geospatial = std::forward<GeospatialT>(value); }
    template<typename GeospatialT = Aws::Vector<DimensionField>>
    FilledMapAggregatedFieldWells& WithGeospatial(GeospatialT&& value) { SetGeospatial(std::forward<GeospatialT>(value)); return *this;}
    template<typename GeospatialT = DimensionField>
    FilledMapAggregatedFieldWells& AddGeospatial(GeospatialT&& value) { m_geospatialHasBeenSet = true; m_geospatial.emplace_back(std::forward<GeospatialT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregated color field well of a filled map. Values are aggregated based
     * on location fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    FilledMapAggregatedFieldWells& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = MeasureField>
    FilledMapAggregatedFieldWells& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_geospatial;
    bool m_geospatialHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
