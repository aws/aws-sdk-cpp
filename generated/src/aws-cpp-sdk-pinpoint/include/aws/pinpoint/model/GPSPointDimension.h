/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/GPSCoordinates.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies GPS-based criteria for including or excluding endpoints from a
   * segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GPSPointDimension">AWS
   * API Reference</a></p>
   */
  class GPSPointDimension
  {
  public:
    AWS_PINPOINT_API GPSPointDimension();
    AWS_PINPOINT_API GPSPointDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API GPSPointDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The GPS coordinates to measure distance from.</p>
     */
    inline const GPSCoordinates& GetCoordinates() const{ return m_coordinates; }
    inline bool CoordinatesHasBeenSet() const { return m_coordinatesHasBeenSet; }
    inline void SetCoordinates(const GPSCoordinates& value) { m_coordinatesHasBeenSet = true; m_coordinates = value; }
    inline void SetCoordinates(GPSCoordinates&& value) { m_coordinatesHasBeenSet = true; m_coordinates = std::move(value); }
    inline GPSPointDimension& WithCoordinates(const GPSCoordinates& value) { SetCoordinates(value); return *this;}
    inline GPSPointDimension& WithCoordinates(GPSCoordinates&& value) { SetCoordinates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range, in kilometers, from the GPS coordinates.</p>
     */
    inline double GetRangeInKilometers() const{ return m_rangeInKilometers; }
    inline bool RangeInKilometersHasBeenSet() const { return m_rangeInKilometersHasBeenSet; }
    inline void SetRangeInKilometers(double value) { m_rangeInKilometersHasBeenSet = true; m_rangeInKilometers = value; }
    inline GPSPointDimension& WithRangeInKilometers(double value) { SetRangeInKilometers(value); return *this;}
    ///@}
  private:

    GPSCoordinates m_coordinates;
    bool m_coordinatesHasBeenSet = false;

    double m_rangeInKilometers;
    bool m_rangeInKilometersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
