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
    AWS_QUICKSIGHT_API FilledMapAggregatedFieldWells();
    AWS_QUICKSIGHT_API FilledMapAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilledMapAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated location field well of the filled map. Values are grouped by
     * location fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetGeospatial() const{ return m_geospatial; }

    /**
     * <p>The aggregated location field well of the filled map. Values are grouped by
     * location fields.</p>
     */
    inline bool GeospatialHasBeenSet() const { return m_geospatialHasBeenSet; }

    /**
     * <p>The aggregated location field well of the filled map. Values are grouped by
     * location fields.</p>
     */
    inline void SetGeospatial(const Aws::Vector<DimensionField>& value) { m_geospatialHasBeenSet = true; m_geospatial = value; }

    /**
     * <p>The aggregated location field well of the filled map. Values are grouped by
     * location fields.</p>
     */
    inline void SetGeospatial(Aws::Vector<DimensionField>&& value) { m_geospatialHasBeenSet = true; m_geospatial = std::move(value); }

    /**
     * <p>The aggregated location field well of the filled map. Values are grouped by
     * location fields.</p>
     */
    inline FilledMapAggregatedFieldWells& WithGeospatial(const Aws::Vector<DimensionField>& value) { SetGeospatial(value); return *this;}

    /**
     * <p>The aggregated location field well of the filled map. Values are grouped by
     * location fields.</p>
     */
    inline FilledMapAggregatedFieldWells& WithGeospatial(Aws::Vector<DimensionField>&& value) { SetGeospatial(std::move(value)); return *this;}

    /**
     * <p>The aggregated location field well of the filled map. Values are grouped by
     * location fields.</p>
     */
    inline FilledMapAggregatedFieldWells& AddGeospatial(const DimensionField& value) { m_geospatialHasBeenSet = true; m_geospatial.push_back(value); return *this; }

    /**
     * <p>The aggregated location field well of the filled map. Values are grouped by
     * location fields.</p>
     */
    inline FilledMapAggregatedFieldWells& AddGeospatial(DimensionField&& value) { m_geospatialHasBeenSet = true; m_geospatial.push_back(std::move(value)); return *this; }


    /**
     * <p>The aggregated color field well of a filled map. Values are aggregated based
     * on location fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }

    /**
     * <p>The aggregated color field well of a filled map. Values are aggregated based
     * on location fields.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The aggregated color field well of a filled map. Values are aggregated based
     * on location fields.</p>
     */
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The aggregated color field well of a filled map. Values are aggregated based
     * on location fields.</p>
     */
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The aggregated color field well of a filled map. Values are aggregated based
     * on location fields.</p>
     */
    inline FilledMapAggregatedFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}

    /**
     * <p>The aggregated color field well of a filled map. Values are aggregated based
     * on location fields.</p>
     */
    inline FilledMapAggregatedFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The aggregated color field well of a filled map. Values are aggregated based
     * on location fields.</p>
     */
    inline FilledMapAggregatedFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The aggregated color field well of a filled map. Values are aggregated based
     * on location fields.</p>
     */
    inline FilledMapAggregatedFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DimensionField> m_geospatial;
    bool m_geospatialHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
