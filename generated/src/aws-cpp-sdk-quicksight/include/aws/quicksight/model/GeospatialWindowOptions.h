/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialCoordinateBounds.h>
#include <aws/quicksight/model/MapZoomMode.h>
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
   * <p>The window options of the geospatial map visual.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialWindowOptions">AWS
   * API Reference</a></p>
   */
  class GeospatialWindowOptions
  {
  public:
    AWS_QUICKSIGHT_API GeospatialWindowOptions();
    AWS_QUICKSIGHT_API GeospatialWindowOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialWindowOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bounds options (north, south, west, east) of the geospatial window
     * options.</p>
     */
    inline const GeospatialCoordinateBounds& GetBounds() const{ return m_bounds; }

    /**
     * <p>The bounds options (north, south, west, east) of the geospatial window
     * options.</p>
     */
    inline bool BoundsHasBeenSet() const { return m_boundsHasBeenSet; }

    /**
     * <p>The bounds options (north, south, west, east) of the geospatial window
     * options.</p>
     */
    inline void SetBounds(const GeospatialCoordinateBounds& value) { m_boundsHasBeenSet = true; m_bounds = value; }

    /**
     * <p>The bounds options (north, south, west, east) of the geospatial window
     * options.</p>
     */
    inline void SetBounds(GeospatialCoordinateBounds&& value) { m_boundsHasBeenSet = true; m_bounds = std::move(value); }

    /**
     * <p>The bounds options (north, south, west, east) of the geospatial window
     * options.</p>
     */
    inline GeospatialWindowOptions& WithBounds(const GeospatialCoordinateBounds& value) { SetBounds(value); return *this;}

    /**
     * <p>The bounds options (north, south, west, east) of the geospatial window
     * options.</p>
     */
    inline GeospatialWindowOptions& WithBounds(GeospatialCoordinateBounds&& value) { SetBounds(std::move(value)); return *this;}


    /**
     * <p>The map zoom modes (manual, auto) of the geospatial window options.</p>
     */
    inline const MapZoomMode& GetMapZoomMode() const{ return m_mapZoomMode; }

    /**
     * <p>The map zoom modes (manual, auto) of the geospatial window options.</p>
     */
    inline bool MapZoomModeHasBeenSet() const { return m_mapZoomModeHasBeenSet; }

    /**
     * <p>The map zoom modes (manual, auto) of the geospatial window options.</p>
     */
    inline void SetMapZoomMode(const MapZoomMode& value) { m_mapZoomModeHasBeenSet = true; m_mapZoomMode = value; }

    /**
     * <p>The map zoom modes (manual, auto) of the geospatial window options.</p>
     */
    inline void SetMapZoomMode(MapZoomMode&& value) { m_mapZoomModeHasBeenSet = true; m_mapZoomMode = std::move(value); }

    /**
     * <p>The map zoom modes (manual, auto) of the geospatial window options.</p>
     */
    inline GeospatialWindowOptions& WithMapZoomMode(const MapZoomMode& value) { SetMapZoomMode(value); return *this;}

    /**
     * <p>The map zoom modes (manual, auto) of the geospatial window options.</p>
     */
    inline GeospatialWindowOptions& WithMapZoomMode(MapZoomMode&& value) { SetMapZoomMode(std::move(value)); return *this;}

  private:

    GeospatialCoordinateBounds m_bounds;
    bool m_boundsHasBeenSet = false;

    MapZoomMode m_mapZoomMode;
    bool m_mapZoomModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
