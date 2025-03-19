/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The bound options (north, south, west, east) of the geospatial window
   * options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialCoordinateBounds">AWS
   * API Reference</a></p>
   */
  class GeospatialCoordinateBounds
  {
  public:
    AWS_QUICKSIGHT_API GeospatialCoordinateBounds() = default;
    AWS_QUICKSIGHT_API GeospatialCoordinateBounds(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialCoordinateBounds& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latitude of the north bound of the geospatial coordinate bounds.</p>
     */
    inline double GetNorth() const { return m_north; }
    inline bool NorthHasBeenSet() const { return m_northHasBeenSet; }
    inline void SetNorth(double value) { m_northHasBeenSet = true; m_north = value; }
    inline GeospatialCoordinateBounds& WithNorth(double value) { SetNorth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latitude of the south bound of the geospatial coordinate bounds.</p>
     */
    inline double GetSouth() const { return m_south; }
    inline bool SouthHasBeenSet() const { return m_southHasBeenSet; }
    inline void SetSouth(double value) { m_southHasBeenSet = true; m_south = value; }
    inline GeospatialCoordinateBounds& WithSouth(double value) { SetSouth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude of the west bound of the geospatial coordinate bounds.</p>
     */
    inline double GetWest() const { return m_west; }
    inline bool WestHasBeenSet() const { return m_westHasBeenSet; }
    inline void SetWest(double value) { m_westHasBeenSet = true; m_west = value; }
    inline GeospatialCoordinateBounds& WithWest(double value) { SetWest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude of the east bound of the geospatial coordinate bounds.</p>
     */
    inline double GetEast() const { return m_east; }
    inline bool EastHasBeenSet() const { return m_eastHasBeenSet; }
    inline void SetEast(double value) { m_eastHasBeenSet = true; m_east = value; }
    inline GeospatialCoordinateBounds& WithEast(double value) { SetEast(value); return *this;}
    ///@}
  private:

    double m_north{0.0};
    bool m_northHasBeenSet = false;

    double m_south{0.0};
    bool m_southHasBeenSet = false;

    double m_west{0.0};
    bool m_westHasBeenSet = false;

    double m_east{0.0};
    bool m_eastHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
