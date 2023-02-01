/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialMapAggregatedFieldWells.h>
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
   * <p>The field wells of a <code>GeospatialMapVisual</code>.</p> <p>This is a union
   * type structure. For this structure to be valid, only one of the attributes can
   * be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialMapFieldWells">AWS
   * API Reference</a></p>
   */
  class GeospatialMapFieldWells
  {
  public:
    AWS_QUICKSIGHT_API GeospatialMapFieldWells();
    AWS_QUICKSIGHT_API GeospatialMapFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialMapFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated field well for a geospatial map.</p>
     */
    inline const GeospatialMapAggregatedFieldWells& GetGeospatialMapAggregatedFieldWells() const{ return m_geospatialMapAggregatedFieldWells; }

    /**
     * <p>The aggregated field well for a geospatial map.</p>
     */
    inline bool GeospatialMapAggregatedFieldWellsHasBeenSet() const { return m_geospatialMapAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The aggregated field well for a geospatial map.</p>
     */
    inline void SetGeospatialMapAggregatedFieldWells(const GeospatialMapAggregatedFieldWells& value) { m_geospatialMapAggregatedFieldWellsHasBeenSet = true; m_geospatialMapAggregatedFieldWells = value; }

    /**
     * <p>The aggregated field well for a geospatial map.</p>
     */
    inline void SetGeospatialMapAggregatedFieldWells(GeospatialMapAggregatedFieldWells&& value) { m_geospatialMapAggregatedFieldWellsHasBeenSet = true; m_geospatialMapAggregatedFieldWells = std::move(value); }

    /**
     * <p>The aggregated field well for a geospatial map.</p>
     */
    inline GeospatialMapFieldWells& WithGeospatialMapAggregatedFieldWells(const GeospatialMapAggregatedFieldWells& value) { SetGeospatialMapAggregatedFieldWells(value); return *this;}

    /**
     * <p>The aggregated field well for a geospatial map.</p>
     */
    inline GeospatialMapFieldWells& WithGeospatialMapAggregatedFieldWells(GeospatialMapAggregatedFieldWells&& value) { SetGeospatialMapAggregatedFieldWells(std::move(value)); return *this;}

  private:

    GeospatialMapAggregatedFieldWells m_geospatialMapAggregatedFieldWells;
    bool m_geospatialMapAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
