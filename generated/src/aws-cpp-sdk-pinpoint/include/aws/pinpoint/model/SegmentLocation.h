/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SetDimension.h>
#include <aws/pinpoint/model/GPSPointDimension.h>
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
   * <p>Specifies geographical dimension settings for a segment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentLocation">AWS
   * API Reference</a></p>
   */
  class SegmentLocation
  {
  public:
    AWS_PINPOINT_API SegmentLocation() = default;
    AWS_PINPOINT_API SegmentLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The country or region code, in ISO 3166-1 alpha-2 format, for the
     * segment.</p>
     */
    inline const SetDimension& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = SetDimension>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = SetDimension>
    SegmentLocation& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The GPS location and range for the segment.</p>
     */
    inline const GPSPointDimension& GetGPSPoint() const { return m_gPSPoint; }
    inline bool GPSPointHasBeenSet() const { return m_gPSPointHasBeenSet; }
    template<typename GPSPointT = GPSPointDimension>
    void SetGPSPoint(GPSPointT&& value) { m_gPSPointHasBeenSet = true; m_gPSPoint = std::forward<GPSPointT>(value); }
    template<typename GPSPointT = GPSPointDimension>
    SegmentLocation& WithGPSPoint(GPSPointT&& value) { SetGPSPoint(std::forward<GPSPointT>(value)); return *this;}
    ///@}
  private:

    SetDimension m_country;
    bool m_countryHasBeenSet = false;

    GPSPointDimension m_gPSPoint;
    bool m_gPSPointHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
