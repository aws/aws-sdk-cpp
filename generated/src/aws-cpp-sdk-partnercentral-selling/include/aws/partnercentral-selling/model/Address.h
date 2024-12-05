/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/CountryCode.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Specifies the end <code>Customer</code>'s address details associated with the
   * <code>Opportunity</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_PARTNERCENTRALSELLING_API Address();
    AWS_PARTNERCENTRALSELLING_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s city associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline Address& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline Address& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline Address& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s country associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const CountryCode& GetCountryCode() const{ return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(const CountryCode& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline void SetCountryCode(CountryCode&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }
    inline Address& WithCountryCode(const CountryCode& value) { SetCountryCode(value); return *this;}
    inline Address& WithCountryCode(CountryCode&& value) { SetCountryCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s postal code associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline Address& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline Address& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline Address& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s state or region associated with the
     * <code>Opportunity</code>.</p> <p>Valid values: <code>Alabama | Alaska | American
     * Samoa | Arizona | Arkansas | California | Colorado | Connecticut | Delaware |
     * Dist. of Columbia | Federated States of Micronesia | Florida | Georgia | Guam |
     * Hawaii | Idaho | Illinois | Indiana | Iowa | Kansas | Kentucky | Louisiana |
     * Maine | Marshall Islands | Maryland | Massachusetts | Michigan | Minnesota |
     * Mississippi | Missouri | Montana | Nebraska | Nevada | New Hampshire | New
     * Jersey | New Mexico | New York | North Carolina | North Dakota | Northern
     * Mariana Islands | Ohio | Oklahoma | Oregon | Palau | Pennsylvania | Puerto Rico
     * | Rhode Island | South Carolina | South Dakota | Tennessee | Texas | Utah |
     * Vermont | Virginia | Virgin Islands | Washington | West Virginia | Wisconsin |
     * Wyoming | APO/AE | AFO/FPO | FPO, AP</code> </p>
     */
    inline const Aws::String& GetStateOrRegion() const{ return m_stateOrRegion; }
    inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }
    inline void SetStateOrRegion(const Aws::String& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = value; }
    inline void SetStateOrRegion(Aws::String&& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = std::move(value); }
    inline void SetStateOrRegion(const char* value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion.assign(value); }
    inline Address& WithStateOrRegion(const Aws::String& value) { SetStateOrRegion(value); return *this;}
    inline Address& WithStateOrRegion(Aws::String&& value) { SetStateOrRegion(std::move(value)); return *this;}
    inline Address& WithStateOrRegion(const char* value) { SetStateOrRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s street address associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetStreetAddress() const{ return m_streetAddress; }
    inline bool StreetAddressHasBeenSet() const { return m_streetAddressHasBeenSet; }
    inline void SetStreetAddress(const Aws::String& value) { m_streetAddressHasBeenSet = true; m_streetAddress = value; }
    inline void SetStreetAddress(Aws::String&& value) { m_streetAddressHasBeenSet = true; m_streetAddress = std::move(value); }
    inline void SetStreetAddress(const char* value) { m_streetAddressHasBeenSet = true; m_streetAddress.assign(value); }
    inline Address& WithStreetAddress(const Aws::String& value) { SetStreetAddress(value); return *this;}
    inline Address& WithStreetAddress(Aws::String&& value) { SetStreetAddress(std::move(value)); return *this;}
    inline Address& WithStreetAddress(const char* value) { SetStreetAddress(value); return *this;}
    ///@}
  private:

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    CountryCode m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_stateOrRegion;
    bool m_stateOrRegionHasBeenSet = false;

    Aws::String m_streetAddress;
    bool m_streetAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
