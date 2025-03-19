/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about an address. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_OUTPOSTS_API Address() = default;
    AWS_OUTPOSTS_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the contact.</p>
     */
    inline const Aws::String& GetContactName() const { return m_contactName; }
    inline bool ContactNameHasBeenSet() const { return m_contactNameHasBeenSet; }
    template<typename ContactNameT = Aws::String>
    void SetContactName(ContactNameT&& value) { m_contactNameHasBeenSet = true; m_contactName = std::forward<ContactNameT>(value); }
    template<typename ContactNameT = Aws::String>
    Address& WithContactName(ContactNameT&& value) { SetContactName(std::forward<ContactNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number of the contact.</p>
     */
    inline const Aws::String& GetContactPhoneNumber() const { return m_contactPhoneNumber; }
    inline bool ContactPhoneNumberHasBeenSet() const { return m_contactPhoneNumberHasBeenSet; }
    template<typename ContactPhoneNumberT = Aws::String>
    void SetContactPhoneNumber(ContactPhoneNumberT&& value) { m_contactPhoneNumberHasBeenSet = true; m_contactPhoneNumber = std::forward<ContactPhoneNumberT>(value); }
    template<typename ContactPhoneNumberT = Aws::String>
    Address& WithContactPhoneNumber(ContactPhoneNumberT&& value) { SetContactPhoneNumber(std::forward<ContactPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line of the address.</p>
     */
    inline const Aws::String& GetAddressLine1() const { return m_addressLine1; }
    inline bool AddressLine1HasBeenSet() const { return m_addressLine1HasBeenSet; }
    template<typename AddressLine1T = Aws::String>
    void SetAddressLine1(AddressLine1T&& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = std::forward<AddressLine1T>(value); }
    template<typename AddressLine1T = Aws::String>
    Address& WithAddressLine1(AddressLine1T&& value) { SetAddressLine1(std::forward<AddressLine1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of the address.</p>
     */
    inline const Aws::String& GetAddressLine2() const { return m_addressLine2; }
    inline bool AddressLine2HasBeenSet() const { return m_addressLine2HasBeenSet; }
    template<typename AddressLine2T = Aws::String>
    void SetAddressLine2(AddressLine2T&& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = std::forward<AddressLine2T>(value); }
    template<typename AddressLine2T = Aws::String>
    Address& WithAddressLine2(AddressLine2T&& value) { SetAddressLine2(std::forward<AddressLine2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of the address.</p>
     */
    inline const Aws::String& GetAddressLine3() const { return m_addressLine3; }
    inline bool AddressLine3HasBeenSet() const { return m_addressLine3HasBeenSet; }
    template<typename AddressLine3T = Aws::String>
    void SetAddressLine3(AddressLine3T&& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = std::forward<AddressLine3T>(value); }
    template<typename AddressLine3T = Aws::String>
    Address& WithAddressLine3(AddressLine3T&& value) { SetAddressLine3(std::forward<AddressLine3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city for the address.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    Address& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state for the address.</p>
     */
    inline const Aws::String& GetStateOrRegion() const { return m_stateOrRegion; }
    inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }
    template<typename StateOrRegionT = Aws::String>
    void SetStateOrRegion(StateOrRegionT&& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = std::forward<StateOrRegionT>(value); }
    template<typename StateOrRegionT = Aws::String>
    Address& WithStateOrRegion(StateOrRegionT&& value) { SetStateOrRegion(std::forward<StateOrRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The district or county for the address.</p>
     */
    inline const Aws::String& GetDistrictOrCounty() const { return m_districtOrCounty; }
    inline bool DistrictOrCountyHasBeenSet() const { return m_districtOrCountyHasBeenSet; }
    template<typename DistrictOrCountyT = Aws::String>
    void SetDistrictOrCounty(DistrictOrCountyT&& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = std::forward<DistrictOrCountyT>(value); }
    template<typename DistrictOrCountyT = Aws::String>
    Address& WithDistrictOrCounty(DistrictOrCountyT&& value) { SetDistrictOrCounty(std::forward<DistrictOrCountyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code for the address.</p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    Address& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO-3166 two-letter country code for the address.</p>
     */
    inline const Aws::String& GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    template<typename CountryCodeT = Aws::String>
    void SetCountryCode(CountryCodeT&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::forward<CountryCodeT>(value); }
    template<typename CountryCodeT = Aws::String>
    Address& WithCountryCode(CountryCodeT&& value) { SetCountryCode(std::forward<CountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The municipality for the address.</p>
     */
    inline const Aws::String& GetMunicipality() const { return m_municipality; }
    inline bool MunicipalityHasBeenSet() const { return m_municipalityHasBeenSet; }
    template<typename MunicipalityT = Aws::String>
    void SetMunicipality(MunicipalityT&& value) { m_municipalityHasBeenSet = true; m_municipality = std::forward<MunicipalityT>(value); }
    template<typename MunicipalityT = Aws::String>
    Address& WithMunicipality(MunicipalityT&& value) { SetMunicipality(std::forward<MunicipalityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactName;
    bool m_contactNameHasBeenSet = false;

    Aws::String m_contactPhoneNumber;
    bool m_contactPhoneNumberHasBeenSet = false;

    Aws::String m_addressLine1;
    bool m_addressLine1HasBeenSet = false;

    Aws::String m_addressLine2;
    bool m_addressLine2HasBeenSet = false;

    Aws::String m_addressLine3;
    bool m_addressLine3HasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_stateOrRegion;
    bool m_stateOrRegionHasBeenSet = false;

    Aws::String m_districtOrCounty;
    bool m_districtOrCountyHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_municipality;
    bool m_municipalityHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
