/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about an address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_PRIVATENETWORKS_API Address() = default;
    AWS_PRIVATENETWORKS_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The city for this address.</p>
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
     * <p>The company name for this address.</p>
     */
    inline const Aws::String& GetCompany() const { return m_company; }
    inline bool CompanyHasBeenSet() const { return m_companyHasBeenSet; }
    template<typename CompanyT = Aws::String>
    void SetCompany(CompanyT&& value) { m_companyHasBeenSet = true; m_company = std::forward<CompanyT>(value); }
    template<typename CompanyT = Aws::String>
    Address& WithCompany(CompanyT&& value) { SetCompany(std::forward<CompanyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country for this address.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    Address& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipient's email address.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    Address& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipient's name for this address.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Address& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipient's phone number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    Address& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code for this address.</p>
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
     * <p>The state or province for this address.</p>
     */
    inline const Aws::String& GetStateOrProvince() const { return m_stateOrProvince; }
    inline bool StateOrProvinceHasBeenSet() const { return m_stateOrProvinceHasBeenSet; }
    template<typename StateOrProvinceT = Aws::String>
    void SetStateOrProvince(StateOrProvinceT&& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = std::forward<StateOrProvinceT>(value); }
    template<typename StateOrProvinceT = Aws::String>
    Address& WithStateOrProvince(StateOrProvinceT&& value) { SetStateOrProvince(std::forward<StateOrProvinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line of the street address.</p>
     */
    inline const Aws::String& GetStreet1() const { return m_street1; }
    inline bool Street1HasBeenSet() const { return m_street1HasBeenSet; }
    template<typename Street1T = Aws::String>
    void SetStreet1(Street1T&& value) { m_street1HasBeenSet = true; m_street1 = std::forward<Street1T>(value); }
    template<typename Street1T = Aws::String>
    Address& WithStreet1(Street1T&& value) { SetStreet1(std::forward<Street1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of the street address.</p>
     */
    inline const Aws::String& GetStreet2() const { return m_street2; }
    inline bool Street2HasBeenSet() const { return m_street2HasBeenSet; }
    template<typename Street2T = Aws::String>
    void SetStreet2(Street2T&& value) { m_street2HasBeenSet = true; m_street2 = std::forward<Street2T>(value); }
    template<typename Street2T = Aws::String>
    Address& WithStreet2(Street2T&& value) { SetStreet2(std::forward<Street2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of the street address.</p>
     */
    inline const Aws::String& GetStreet3() const { return m_street3; }
    inline bool Street3HasBeenSet() const { return m_street3HasBeenSet; }
    template<typename Street3T = Aws::String>
    void SetStreet3(Street3T&& value) { m_street3HasBeenSet = true; m_street3 = std::forward<Street3T>(value); }
    template<typename Street3T = Aws::String>
    Address& WithStreet3(Street3T&& value) { SetStreet3(std::forward<Street3T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_company;
    bool m_companyHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_stateOrProvince;
    bool m_stateOrProvinceHasBeenSet = false;

    Aws::String m_street1;
    bool m_street1HasBeenSet = false;

    Aws::String m_street2;
    bool m_street2HasBeenSet = false;

    Aws::String m_street3;
    bool m_street3HasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
