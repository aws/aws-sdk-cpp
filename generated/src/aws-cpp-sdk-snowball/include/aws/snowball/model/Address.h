/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/AddressType.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>The address that you want the Snow device(s) associated with a specific job
   * to be shipped to. Addresses are validated at the time of creation. The address
   * you provide must be located within the serviceable area of your region. Although
   * no individual elements of the <code>Address</code> are required, if the address
   * is invalid or unsupported, then an exception is thrown.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_SNOWBALL_API Address() = default;
    AWS_SNOWBALL_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for an address.</p>
     */
    inline const Aws::String& GetAddressId() const { return m_addressId; }
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }
    template<typename AddressIdT = Aws::String>
    void SetAddressId(AddressIdT&& value) { m_addressIdHasBeenSet = true; m_addressId = std::forward<AddressIdT>(value); }
    template<typename AddressIdT = Aws::String>
    Address& WithAddressId(AddressIdT&& value) { SetAddressId(std::forward<AddressIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a person to receive a Snow device at an address.</p>
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
     * <p>The name of the company to receive a Snow device at an address.</p>
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
     * <p>The first line in a street address that a Snow device is to be delivered
     * to.</p>
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
     * <p>The second line in a street address that a Snow device is to be delivered
     * to.</p>
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
     * <p>The third line in a street address that a Snow device is to be delivered
     * to.</p>
     */
    inline const Aws::String& GetStreet3() const { return m_street3; }
    inline bool Street3HasBeenSet() const { return m_street3HasBeenSet; }
    template<typename Street3T = Aws::String>
    void SetStreet3(Street3T&& value) { m_street3HasBeenSet = true; m_street3 = std::forward<Street3T>(value); }
    template<typename Street3T = Aws::String>
    Address& WithStreet3(Street3T&& value) { SetStreet3(std::forward<Street3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city in an address that a Snow device is to be delivered to.</p>
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
     * <p>The state or province in an address that a Snow device is to be delivered
     * to.</p>
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
     * <p>This field is no longer used and the value is ignored.</p>
     */
    inline const Aws::String& GetPrefectureOrDistrict() const { return m_prefectureOrDistrict; }
    inline bool PrefectureOrDistrictHasBeenSet() const { return m_prefectureOrDistrictHasBeenSet; }
    template<typename PrefectureOrDistrictT = Aws::String>
    void SetPrefectureOrDistrict(PrefectureOrDistrictT&& value) { m_prefectureOrDistrictHasBeenSet = true; m_prefectureOrDistrict = std::forward<PrefectureOrDistrictT>(value); }
    template<typename PrefectureOrDistrictT = Aws::String>
    Address& WithPrefectureOrDistrict(PrefectureOrDistrictT&& value) { SetPrefectureOrDistrict(std::forward<PrefectureOrDistrictT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer used and the value is ignored.</p>
     */
    inline const Aws::String& GetLandmark() const { return m_landmark; }
    inline bool LandmarkHasBeenSet() const { return m_landmarkHasBeenSet; }
    template<typename LandmarkT = Aws::String>
    void SetLandmark(LandmarkT&& value) { m_landmarkHasBeenSet = true; m_landmark = std::forward<LandmarkT>(value); }
    template<typename LandmarkT = Aws::String>
    Address& WithLandmark(LandmarkT&& value) { SetLandmark(std::forward<LandmarkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country in an address that a Snow device is to be delivered to.</p>
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
     * <p>The postal code in an address that a Snow device is to be delivered to.</p>
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
     * <p>The phone number associated with an address that a Snow device is to be
     * delivered to.</p>
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
     * <p>If the address you are creating is a primary address, then set this option to
     * true. This field is not supported in most regions.</p>
     */
    inline bool GetIsRestricted() const { return m_isRestricted; }
    inline bool IsRestrictedHasBeenSet() const { return m_isRestrictedHasBeenSet; }
    inline void SetIsRestricted(bool value) { m_isRestrictedHasBeenSet = true; m_isRestricted = value; }
    inline Address& WithIsRestricted(bool value) { SetIsRestricted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Differentiates between delivery address and pickup address in the customer
     * account. Provided at job creation.</p>
     */
    inline AddressType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AddressType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Address& WithType(AddressType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_company;
    bool m_companyHasBeenSet = false;

    Aws::String m_street1;
    bool m_street1HasBeenSet = false;

    Aws::String m_street2;
    bool m_street2HasBeenSet = false;

    Aws::String m_street3;
    bool m_street3HasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_stateOrProvince;
    bool m_stateOrProvinceHasBeenSet = false;

    Aws::String m_prefectureOrDistrict;
    bool m_prefectureOrDistrictHasBeenSet = false;

    Aws::String m_landmark;
    bool m_landmarkHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    bool m_isRestricted{false};
    bool m_isRestrictedHasBeenSet = false;

    AddressType m_type{AddressType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
