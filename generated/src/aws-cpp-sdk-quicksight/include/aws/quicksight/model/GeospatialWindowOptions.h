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
    AWS_QUICKSIGHT_API GeospatialWindowOptions() = default;
    AWS_QUICKSIGHT_API GeospatialWindowOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialWindowOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bounds options (north, south, west, east) of the geospatial window
     * options.</p>
     */
    inline const GeospatialCoordinateBounds& GetBounds() const { return m_bounds; }
    inline bool BoundsHasBeenSet() const { return m_boundsHasBeenSet; }
    template<typename BoundsT = GeospatialCoordinateBounds>
    void SetBounds(BoundsT&& value) { m_boundsHasBeenSet = true; m_bounds = std::forward<BoundsT>(value); }
    template<typename BoundsT = GeospatialCoordinateBounds>
    GeospatialWindowOptions& WithBounds(BoundsT&& value) { SetBounds(std::forward<BoundsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map zoom modes (manual, auto) of the geospatial window options.</p>
     */
    inline MapZoomMode GetMapZoomMode() const { return m_mapZoomMode; }
    inline bool MapZoomModeHasBeenSet() const { return m_mapZoomModeHasBeenSet; }
    inline void SetMapZoomMode(MapZoomMode value) { m_mapZoomModeHasBeenSet = true; m_mapZoomMode = value; }
    inline GeospatialWindowOptions& WithMapZoomMode(MapZoomMode value) { SetMapZoomMode(value); return *this;}
    ///@}
  private:

    GeospatialCoordinateBounds m_bounds;
    bool m_boundsHasBeenSet = false;

    MapZoomMode m_mapZoomMode{MapZoomMode::NOT_SET};
    bool m_mapZoomModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
