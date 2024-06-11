/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/IpOrganizationDetails.h>
#include <aws/securityhub/model/Country.h>
#include <aws/securityhub/model/City.h>
#include <aws/securityhub/model/GeoLocation.h>
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
   * <p>For <code>AwsApiAction</code>, <code>NetworkConnectionAction</code>, and
   * <code>PortProbeAction</code>, <code>RemoteIpDetails</code> provides information
   * about the remote IP address that was involved in the action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ActionRemoteIpDetails">AWS
   * API Reference</a></p>
   */
  class ActionRemoteIpDetails
  {
  public:
    AWS_SECURITYHUB_API ActionRemoteIpDetails();
    AWS_SECURITYHUB_API ActionRemoteIpDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActionRemoteIpDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetIpAddressV4() const{ return m_ipAddressV4; }
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }
    inline void SetIpAddressV4(const Aws::String& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = value; }
    inline void SetIpAddressV4(Aws::String&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::move(value); }
    inline void SetIpAddressV4(const char* value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4.assign(value); }
    inline ActionRemoteIpDetails& WithIpAddressV4(const Aws::String& value) { SetIpAddressV4(value); return *this;}
    inline ActionRemoteIpDetails& WithIpAddressV4(Aws::String&& value) { SetIpAddressV4(std::move(value)); return *this;}
    inline ActionRemoteIpDetails& WithIpAddressV4(const char* value) { SetIpAddressV4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The internet service provider (ISP) organization associated with the remote
     * IP address.</p>
     */
    inline const IpOrganizationDetails& GetOrganization() const{ return m_organization; }
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
    inline void SetOrganization(const IpOrganizationDetails& value) { m_organizationHasBeenSet = true; m_organization = value; }
    inline void SetOrganization(IpOrganizationDetails&& value) { m_organizationHasBeenSet = true; m_organization = std::move(value); }
    inline ActionRemoteIpDetails& WithOrganization(const IpOrganizationDetails& value) { SetOrganization(value); return *this;}
    inline ActionRemoteIpDetails& WithOrganization(IpOrganizationDetails&& value) { SetOrganization(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country where the remote IP address is located.</p>
     */
    inline const Country& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Country& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Country&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline ActionRemoteIpDetails& WithCountry(const Country& value) { SetCountry(value); return *this;}
    inline ActionRemoteIpDetails& WithCountry(Country&& value) { SetCountry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city where the remote IP address is located.</p>
     */
    inline const City& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const City& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(City&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline ActionRemoteIpDetails& WithCity(const City& value) { SetCity(value); return *this;}
    inline ActionRemoteIpDetails& WithCity(City&& value) { SetCity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The coordinates of the location of the remote IP address.</p>
     */
    inline const GeoLocation& GetGeoLocation() const{ return m_geoLocation; }
    inline bool GeoLocationHasBeenSet() const { return m_geoLocationHasBeenSet; }
    inline void SetGeoLocation(const GeoLocation& value) { m_geoLocationHasBeenSet = true; m_geoLocation = value; }
    inline void SetGeoLocation(GeoLocation&& value) { m_geoLocationHasBeenSet = true; m_geoLocation = std::move(value); }
    inline ActionRemoteIpDetails& WithGeoLocation(const GeoLocation& value) { SetGeoLocation(value); return *this;}
    inline ActionRemoteIpDetails& WithGeoLocation(GeoLocation&& value) { SetGeoLocation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipAddressV4;
    bool m_ipAddressV4HasBeenSet = false;

    IpOrganizationDetails m_organization;
    bool m_organizationHasBeenSet = false;

    Country m_country;
    bool m_countryHasBeenSet = false;

    City m_city;
    bool m_cityHasBeenSet = false;

    GeoLocation m_geoLocation;
    bool m_geoLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
