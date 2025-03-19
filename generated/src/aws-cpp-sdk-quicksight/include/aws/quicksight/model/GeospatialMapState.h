/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialCoordinateBounds.h>
#include <aws/quicksight/model/GeospatialMapNavigation.h>
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
   * <p>The map state properties for a map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialMapState">AWS
   * API Reference</a></p>
   */
  class GeospatialMapState
  {
  public:
    AWS_QUICKSIGHT_API GeospatialMapState() = default;
    AWS_QUICKSIGHT_API GeospatialMapState(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialMapState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const GeospatialCoordinateBounds& GetBounds() const { return m_bounds; }
    inline bool BoundsHasBeenSet() const { return m_boundsHasBeenSet; }
    template<typename BoundsT = GeospatialCoordinateBounds>
    void SetBounds(BoundsT&& value) { m_boundsHasBeenSet = true; m_bounds = std::forward<BoundsT>(value); }
    template<typename BoundsT = GeospatialCoordinateBounds>
    GeospatialMapState& WithBounds(BoundsT&& value) { SetBounds(std::forward<BoundsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables map navigation for a map.</p>
     */
    inline GeospatialMapNavigation GetMapNavigation() const { return m_mapNavigation; }
    inline bool MapNavigationHasBeenSet() const { return m_mapNavigationHasBeenSet; }
    inline void SetMapNavigation(GeospatialMapNavigation value) { m_mapNavigationHasBeenSet = true; m_mapNavigation = value; }
    inline GeospatialMapState& WithMapNavigation(GeospatialMapNavigation value) { SetMapNavigation(value); return *this;}
    ///@}
  private:

    GeospatialCoordinateBounds m_bounds;
    bool m_boundsHasBeenSet = false;

    GeospatialMapNavigation m_mapNavigation{GeospatialMapNavigation::NOT_SET};
    bool m_mapNavigationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
