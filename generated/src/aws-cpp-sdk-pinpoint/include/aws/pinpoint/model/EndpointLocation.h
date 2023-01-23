/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies geographic information about an endpoint.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointLocation">AWS
   * API Reference</a></p>
   */
  class EndpointLocation
  {
  public:
    AWS_PINPOINT_API EndpointLocation();
    AWS_PINPOINT_API EndpointLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EndpointLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the city where the endpoint is located.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The name of the city where the endpoint is located.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The name of the city where the endpoint is located.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The name of the city where the endpoint is located.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The name of the city where the endpoint is located.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The name of the city where the endpoint is located.</p>
     */
    inline EndpointLocation& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The name of the city where the endpoint is located.</p>
     */
    inline EndpointLocation& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The name of the city where the endpoint is located.</p>
     */
    inline EndpointLocation& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the endpoint is located. For example, US for the United States.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the endpoint is located. For example, US for the United States.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the endpoint is located. For example, US for the United States.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the endpoint is located. For example, US for the United States.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the endpoint is located. For example, US for the United States.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the endpoint is located. For example, US for the United States.</p>
     */
    inline EndpointLocation& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the endpoint is located. For example, US for the United States.</p>
     */
    inline EndpointLocation& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the endpoint is located. For example, US for the United States.</p>
     */
    inline EndpointLocation& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * <p>The latitude coordinate of the endpoint location, rounded to one decimal
     * place.</p>
     */
    inline double GetLatitude() const{ return m_latitude; }

    /**
     * <p>The latitude coordinate of the endpoint location, rounded to one decimal
     * place.</p>
     */
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }

    /**
     * <p>The latitude coordinate of the endpoint location, rounded to one decimal
     * place.</p>
     */
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }

    /**
     * <p>The latitude coordinate of the endpoint location, rounded to one decimal
     * place.</p>
     */
    inline EndpointLocation& WithLatitude(double value) { SetLatitude(value); return *this;}


    /**
     * <p>The longitude coordinate of the endpoint location, rounded to one decimal
     * place.</p>
     */
    inline double GetLongitude() const{ return m_longitude; }

    /**
     * <p>The longitude coordinate of the endpoint location, rounded to one decimal
     * place.</p>
     */
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }

    /**
     * <p>The longitude coordinate of the endpoint location, rounded to one decimal
     * place.</p>
     */
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }

    /**
     * <p>The longitude coordinate of the endpoint location, rounded to one decimal
     * place.</p>
     */
    inline EndpointLocation& WithLongitude(double value) { SetLongitude(value); return *this;}


    /**
     * <p>The postal or ZIP code for the area where the endpoint is located.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    /**
     * <p>The postal or ZIP code for the area where the endpoint is located.</p>
     */
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    /**
     * <p>The postal or ZIP code for the area where the endpoint is located.</p>
     */
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * <p>The postal or ZIP code for the area where the endpoint is located.</p>
     */
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    /**
     * <p>The postal or ZIP code for the area where the endpoint is located.</p>
     */
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    /**
     * <p>The postal or ZIP code for the area where the endpoint is located.</p>
     */
    inline EndpointLocation& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    /**
     * <p>The postal or ZIP code for the area where the endpoint is located.</p>
     */
    inline EndpointLocation& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    /**
     * <p>The postal or ZIP code for the area where the endpoint is located.</p>
     */
    inline EndpointLocation& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    /**
     * <p>The name of the region where the endpoint is located. For locations in the
     * United States, this value is the name of a state.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The name of the region where the endpoint is located. For locations in the
     * United States, this value is the name of a state.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The name of the region where the endpoint is located. For locations in the
     * United States, this value is the name of a state.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The name of the region where the endpoint is located. For locations in the
     * United States, this value is the name of a state.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The name of the region where the endpoint is located. For locations in the
     * United States, this value is the name of a state.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The name of the region where the endpoint is located. For locations in the
     * United States, this value is the name of a state.</p>
     */
    inline EndpointLocation& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The name of the region where the endpoint is located. For locations in the
     * United States, this value is the name of a state.</p>
     */
    inline EndpointLocation& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The name of the region where the endpoint is located. For locations in the
     * United States, this value is the name of a state.</p>
     */
    inline EndpointLocation& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    double m_latitude;
    bool m_latitudeHasBeenSet = false;

    double m_longitude;
    bool m_longitudeHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
