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
   * <p>The geospatial radius for a circle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialCircleRadius">AWS
   * API Reference</a></p>
   */
  class GeospatialCircleRadius
  {
  public:
    AWS_QUICKSIGHT_API GeospatialCircleRadius() = default;
    AWS_QUICKSIGHT_API GeospatialCircleRadius(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialCircleRadius& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The positive value for the radius of a circle.</p>
     */
    inline double GetRadius() const { return m_radius; }
    inline bool RadiusHasBeenSet() const { return m_radiusHasBeenSet; }
    inline void SetRadius(double value) { m_radiusHasBeenSet = true; m_radius = value; }
    inline GeospatialCircleRadius& WithRadius(double value) { SetRadius(value); return *this;}
    ///@}
  private:

    double m_radius{0.0};
    bool m_radiusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
