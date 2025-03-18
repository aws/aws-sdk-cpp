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
    AWS_SECURITYHUB_API ActionRemoteIpDetails() = default;
    AWS_SECURITYHUB_API ActionRemoteIpDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActionRemoteIpDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetIpAddressV4() const { return m_ipAddressV4; }
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }
    template<typename IpAddressV4T = Aws::String>
    void SetIpAddressV4(IpAddressV4T&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::forward<IpAddressV4T>(value); }
    template<typename IpAddressV4T = Aws::String>
    ActionRemoteIpDetails& WithIpAddressV4(IpAddressV4T&& value) { SetIpAddressV4(std::forward<IpAddressV4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The internet service provider (ISP) organization associated with the remote
     * IP address.</p>
     */
    inline const IpOrganizationDetails& GetOrganization() const { return m_organization; }
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
    template<typename OrganizationT = IpOrganizationDetails>
    void SetOrganization(OrganizationT&& value) { m_organizationHasBeenSet = true; m_organization = std::forward<OrganizationT>(value); }
    template<typename OrganizationT = IpOrganizationDetails>
    ActionRemoteIpDetails& WithOrganization(OrganizationT&& value) { SetOrganization(std::forward<OrganizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country where the remote IP address is located.</p>
     */
    inline const Country& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Country>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Country>
    ActionRemoteIpDetails& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city where the remote IP address is located.</p>
     */
    inline const City& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = City>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = City>
    ActionRemoteIpDetails& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The coordinates of the location of the remote IP address.</p>
     */
    inline const GeoLocation& GetGeoLocation() const { return m_geoLocation; }
    inline bool GeoLocationHasBeenSet() const { return m_geoLocationHasBeenSet; }
    template<typename GeoLocationT = GeoLocation>
    void SetGeoLocation(GeoLocationT&& value) { m_geoLocationHasBeenSet = true; m_geoLocation = std::forward<GeoLocationT>(value); }
    template<typename GeoLocationT = GeoLocation>
    ActionRemoteIpDetails& WithGeoLocation(GeoLocationT&& value) { SetGeoLocation(std::forward<GeoLocationT>(value)); return *this;}
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
