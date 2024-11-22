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
    AWS_QUICKSIGHT_API GeospatialMapState();
    AWS_QUICKSIGHT_API GeospatialMapState(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialMapState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const GeospatialCoordinateBounds& GetBounds() const{ return m_bounds; }
    inline bool BoundsHasBeenSet() const { return m_boundsHasBeenSet; }
    inline void SetBounds(const GeospatialCoordinateBounds& value) { m_boundsHasBeenSet = true; m_bounds = value; }
    inline void SetBounds(GeospatialCoordinateBounds&& value) { m_boundsHasBeenSet = true; m_bounds = std::move(value); }
    inline GeospatialMapState& WithBounds(const GeospatialCoordinateBounds& value) { SetBounds(value); return *this;}
    inline GeospatialMapState& WithBounds(GeospatialCoordinateBounds&& value) { SetBounds(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables map navigation for a map.</p>
     */
    inline const GeospatialMapNavigation& GetMapNavigation() const{ return m_mapNavigation; }
    inline bool MapNavigationHasBeenSet() const { return m_mapNavigationHasBeenSet; }
    inline void SetMapNavigation(const GeospatialMapNavigation& value) { m_mapNavigationHasBeenSet = true; m_mapNavigation = value; }
    inline void SetMapNavigation(GeospatialMapNavigation&& value) { m_mapNavigationHasBeenSet = true; m_mapNavigation = std::move(value); }
    inline GeospatialMapState& WithMapNavigation(const GeospatialMapNavigation& value) { SetMapNavigation(value); return *this;}
    inline GeospatialMapState& WithMapNavigation(GeospatialMapNavigation&& value) { SetMapNavigation(std::move(value)); return *this;}
    ///@}
  private:

    GeospatialCoordinateBounds m_bounds;
    bool m_boundsHasBeenSet = false;

    GeospatialMapNavigation m_mapNavigation;
    bool m_mapNavigationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
