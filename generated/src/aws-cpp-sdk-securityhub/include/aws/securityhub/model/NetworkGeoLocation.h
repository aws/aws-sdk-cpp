/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Contains information about the location of a network endpoint involved in an
   * Amazon GuardDuty Extended Threat Detection attack sequence. GuardDuty generates
   * an attack sequence finding when multiple events align to a potentially
   * suspicious activity. To receive GuardDuty attack sequence findings in Security
   * Hub, you must have GuardDuty enabled. For more information, see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NetworkGeoLocation">AWS
   * API Reference</a></p>
   */
  class NetworkGeoLocation
  {
  public:
    AWS_SECURITYHUB_API NetworkGeoLocation();
    AWS_SECURITYHUB_API NetworkGeoLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkGeoLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the city. </p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline NetworkGeoLocation& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline NetworkGeoLocation& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline NetworkGeoLocation& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the country. </p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline NetworkGeoLocation& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline NetworkGeoLocation& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline NetworkGeoLocation& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The latitude information of the endpoint location. </p>
     */
    inline double GetLat() const{ return m_lat; }
    inline bool LatHasBeenSet() const { return m_latHasBeenSet; }
    inline void SetLat(double value) { m_latHasBeenSet = true; m_lat = value; }
    inline NetworkGeoLocation& WithLat(double value) { SetLat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The longitude information of the endpoint location. </p>
     */
    inline double GetLon() const{ return m_lon; }
    inline bool LonHasBeenSet() const { return m_lonHasBeenSet; }
    inline void SetLon(double value) { m_lonHasBeenSet = true; m_lon = value; }
    inline NetworkGeoLocation& WithLon(double value) { SetLon(value); return *this;}
    ///@}
  private:

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    double m_lat;
    bool m_latHasBeenSet = false;

    double m_lon;
    bool m_lonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
