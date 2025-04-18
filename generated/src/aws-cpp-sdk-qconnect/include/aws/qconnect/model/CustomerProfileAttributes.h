/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The customer profile attributes that are used with the message
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CustomerProfileAttributes">AWS
   * API Reference</a></p>
   */
  class CustomerProfileAttributes
  {
  public:
    AWS_QCONNECT_API CustomerProfileAttributes() = default;
    AWS_QCONNECT_API CustomerProfileAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API CustomerProfileAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    CustomerProfileAttributes& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a customer profile.</p>
     */
    inline const Aws::String& GetProfileARN() const { return m_profileARN; }
    inline bool ProfileARNHasBeenSet() const { return m_profileARNHasBeenSet; }
    template<typename ProfileARNT = Aws::String>
    void SetProfileARN(ProfileARNT&& value) { m_profileARNHasBeenSet = true; m_profileARN = std::forward<ProfileARNT>(value); }
    template<typename ProfileARNT = Aws::String>
    CustomerProfileAttributes& WithProfileARN(ProfileARNT&& value) { SetProfileARN(std::forward<ProfileARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's first name.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    CustomerProfileAttributes& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's middle name.</p>
     */
    inline const Aws::String& GetMiddleName() const { return m_middleName; }
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }
    template<typename MiddleNameT = Aws::String>
    void SetMiddleName(MiddleNameT&& value) { m_middleNameHasBeenSet = true; m_middleName = std::forward<MiddleNameT>(value); }
    template<typename MiddleNameT = Aws::String>
    CustomerProfileAttributes& WithMiddleName(MiddleNameT&& value) { SetMiddleName(std::forward<MiddleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's last name.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    CustomerProfileAttributes& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline const Aws::String& GetAccountNumber() const { return m_accountNumber; }
    inline bool AccountNumberHasBeenSet() const { return m_accountNumberHasBeenSet; }
    template<typename AccountNumberT = Aws::String>
    void SetAccountNumber(AccountNumberT&& value) { m_accountNumberHasBeenSet = true; m_accountNumber = std::forward<AccountNumberT>(value); }
    template<typename AccountNumberT = Aws::String>
    CustomerProfileAttributes& WithAccountNumber(AccountNumberT&& value) { SetAccountNumber(std::forward<AccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's email address, which has not been specified as a personal or
     * business address.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    CustomerProfileAttributes& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    CustomerProfileAttributes& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any additional information relevant to the customer's profile.</p>
     */
    inline const Aws::String& GetAdditionalInformation() const { return m_additionalInformation; }
    inline bool AdditionalInformationHasBeenSet() const { return m_additionalInformationHasBeenSet; }
    template<typename AdditionalInformationT = Aws::String>
    void SetAdditionalInformation(AdditionalInformationT&& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = std::forward<AdditionalInformationT>(value); }
    template<typename AdditionalInformationT = Aws::String>
    CustomerProfileAttributes& WithAdditionalInformation(AdditionalInformationT&& value) { SetAdditionalInformation(std::forward<AdditionalInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's party type.</p>
     */
    inline const Aws::String& GetPartyType() const { return m_partyType; }
    inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }
    template<typename PartyTypeT = Aws::String>
    void SetPartyType(PartyTypeT&& value) { m_partyTypeHasBeenSet = true; m_partyType = std::forward<PartyTypeT>(value); }
    template<typename PartyTypeT = Aws::String>
    CustomerProfileAttributes& WithPartyType(PartyTypeT&& value) { SetPartyType(std::forward<PartyTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the customer's business.</p>
     */
    inline const Aws::String& GetBusinessName() const { return m_businessName; }
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }
    template<typename BusinessNameT = Aws::String>
    void SetBusinessName(BusinessNameT&& value) { m_businessNameHasBeenSet = true; m_businessName = std::forward<BusinessNameT>(value); }
    template<typename BusinessNameT = Aws::String>
    CustomerProfileAttributes& WithBusinessName(BusinessNameT&& value) { SetBusinessName(std::forward<BusinessNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's birth date.</p>
     */
    inline const Aws::String& GetBirthDate() const { return m_birthDate; }
    inline bool BirthDateHasBeenSet() const { return m_birthDateHasBeenSet; }
    template<typename BirthDateT = Aws::String>
    void SetBirthDate(BirthDateT&& value) { m_birthDateHasBeenSet = true; m_birthDate = std::forward<BirthDateT>(value); }
    template<typename BirthDateT = Aws::String>
    CustomerProfileAttributes& WithBirthDate(BirthDateT&& value) { SetBirthDate(std::forward<BirthDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's gender.</p>
     */
    inline const Aws::String& GetGender() const { return m_gender; }
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
    template<typename GenderT = Aws::String>
    void SetGender(GenderT&& value) { m_genderHasBeenSet = true; m_gender = std::forward<GenderT>(value); }
    template<typename GenderT = Aws::String>
    CustomerProfileAttributes& WithGender(GenderT&& value) { SetGender(std::forward<GenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's mobile phone number.</p>
     */
    inline const Aws::String& GetMobilePhoneNumber() const { return m_mobilePhoneNumber; }
    inline bool MobilePhoneNumberHasBeenSet() const { return m_mobilePhoneNumberHasBeenSet; }
    template<typename MobilePhoneNumberT = Aws::String>
    void SetMobilePhoneNumber(MobilePhoneNumberT&& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = std::forward<MobilePhoneNumberT>(value); }
    template<typename MobilePhoneNumberT = Aws::String>
    CustomerProfileAttributes& WithMobilePhoneNumber(MobilePhoneNumberT&& value) { SetMobilePhoneNumber(std::forward<MobilePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's mobile phone number.</p>
     */
    inline const Aws::String& GetHomePhoneNumber() const { return m_homePhoneNumber; }
    inline bool HomePhoneNumberHasBeenSet() const { return m_homePhoneNumberHasBeenSet; }
    template<typename HomePhoneNumberT = Aws::String>
    void SetHomePhoneNumber(HomePhoneNumberT&& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = std::forward<HomePhoneNumberT>(value); }
    template<typename HomePhoneNumberT = Aws::String>
    CustomerProfileAttributes& WithHomePhoneNumber(HomePhoneNumberT&& value) { SetHomePhoneNumber(std::forward<HomePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's business phone number.</p>
     */
    inline const Aws::String& GetBusinessPhoneNumber() const { return m_businessPhoneNumber; }
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }
    template<typename BusinessPhoneNumberT = Aws::String>
    void SetBusinessPhoneNumber(BusinessPhoneNumberT&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::forward<BusinessPhoneNumberT>(value); }
    template<typename BusinessPhoneNumberT = Aws::String>
    CustomerProfileAttributes& WithBusinessPhoneNumber(BusinessPhoneNumberT&& value) { SetBusinessPhoneNumber(std::forward<BusinessPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's business email address.</p>
     */
    inline const Aws::String& GetBusinessEmailAddress() const { return m_businessEmailAddress; }
    inline bool BusinessEmailAddressHasBeenSet() const { return m_businessEmailAddressHasBeenSet; }
    template<typename BusinessEmailAddressT = Aws::String>
    void SetBusinessEmailAddress(BusinessEmailAddressT&& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = std::forward<BusinessEmailAddressT>(value); }
    template<typename BusinessEmailAddressT = Aws::String>
    CustomerProfileAttributes& WithBusinessEmailAddress(BusinessEmailAddressT&& value) { SetBusinessEmailAddress(std::forward<BusinessEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line of a customer address.</p>
     */
    inline const Aws::String& GetAddress1() const { return m_address1; }
    inline bool Address1HasBeenSet() const { return m_address1HasBeenSet; }
    template<typename Address1T = Aws::String>
    void SetAddress1(Address1T&& value) { m_address1HasBeenSet = true; m_address1 = std::forward<Address1T>(value); }
    template<typename Address1T = Aws::String>
    CustomerProfileAttributes& WithAddress1(Address1T&& value) { SetAddress1(std::forward<Address1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of a customer address.</p>
     */
    inline const Aws::String& GetAddress2() const { return m_address2; }
    inline bool Address2HasBeenSet() const { return m_address2HasBeenSet; }
    template<typename Address2T = Aws::String>
    void SetAddress2(Address2T&& value) { m_address2HasBeenSet = true; m_address2 = std::forward<Address2T>(value); }
    template<typename Address2T = Aws::String>
    CustomerProfileAttributes& WithAddress2(Address2T&& value) { SetAddress2(std::forward<Address2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of a customer address.</p>
     */
    inline const Aws::String& GetAddress3() const { return m_address3; }
    inline bool Address3HasBeenSet() const { return m_address3HasBeenSet; }
    template<typename Address3T = Aws::String>
    void SetAddress3(Address3T&& value) { m_address3HasBeenSet = true; m_address3 = std::forward<Address3T>(value); }
    template<typename Address3T = Aws::String>
    CustomerProfileAttributes& WithAddress3(Address3T&& value) { SetAddress3(std::forward<Address3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fourth line of a customer address.</p>
     */
    inline const Aws::String& GetAddress4() const { return m_address4; }
    inline bool Address4HasBeenSet() const { return m_address4HasBeenSet; }
    template<typename Address4T = Aws::String>
    void SetAddress4(Address4T&& value) { m_address4HasBeenSet = true; m_address4 = std::forward<Address4T>(value); }
    template<typename Address4T = Aws::String>
    CustomerProfileAttributes& WithAddress4(Address4T&& value) { SetAddress4(std::forward<Address4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city in which a customer lives.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    CustomerProfileAttributes& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county in which a customer lives.</p>
     */
    inline const Aws::String& GetCounty() const { return m_county; }
    inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }
    template<typename CountyT = Aws::String>
    void SetCounty(CountyT&& value) { m_countyHasBeenSet = true; m_county = std::forward<CountyT>(value); }
    template<typename CountyT = Aws::String>
    CustomerProfileAttributes& WithCounty(CountyT&& value) { SetCounty(std::forward<CountyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country in which a customer lives.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    CustomerProfileAttributes& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of a customer address.</p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    CustomerProfileAttributes& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province in which a customer lives.</p>
     */
    inline const Aws::String& GetProvince() const { return m_province; }
    inline bool ProvinceHasBeenSet() const { return m_provinceHasBeenSet; }
    template<typename ProvinceT = Aws::String>
    void SetProvince(ProvinceT&& value) { m_provinceHasBeenSet = true; m_province = std::forward<ProvinceT>(value); }
    template<typename ProvinceT = Aws::String>
    CustomerProfileAttributes& WithProvince(ProvinceT&& value) { SetProvince(std::forward<ProvinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state in which a customer lives.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    CustomerProfileAttributes& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingAddress1() const { return m_shippingAddress1; }
    inline bool ShippingAddress1HasBeenSet() const { return m_shippingAddress1HasBeenSet; }
    template<typename ShippingAddress1T = Aws::String>
    void SetShippingAddress1(ShippingAddress1T&& value) { m_shippingAddress1HasBeenSet = true; m_shippingAddress1 = std::forward<ShippingAddress1T>(value); }
    template<typename ShippingAddress1T = Aws::String>
    CustomerProfileAttributes& WithShippingAddress1(ShippingAddress1T&& value) { SetShippingAddress1(std::forward<ShippingAddress1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingAddress2() const { return m_shippingAddress2; }
    inline bool ShippingAddress2HasBeenSet() const { return m_shippingAddress2HasBeenSet; }
    template<typename ShippingAddress2T = Aws::String>
    void SetShippingAddress2(ShippingAddress2T&& value) { m_shippingAddress2HasBeenSet = true; m_shippingAddress2 = std::forward<ShippingAddress2T>(value); }
    template<typename ShippingAddress2T = Aws::String>
    CustomerProfileAttributes& WithShippingAddress2(ShippingAddress2T&& value) { SetShippingAddress2(std::forward<ShippingAddress2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingAddress3() const { return m_shippingAddress3; }
    inline bool ShippingAddress3HasBeenSet() const { return m_shippingAddress3HasBeenSet; }
    template<typename ShippingAddress3T = Aws::String>
    void SetShippingAddress3(ShippingAddress3T&& value) { m_shippingAddress3HasBeenSet = true; m_shippingAddress3 = std::forward<ShippingAddress3T>(value); }
    template<typename ShippingAddress3T = Aws::String>
    CustomerProfileAttributes& WithShippingAddress3(ShippingAddress3T&& value) { SetShippingAddress3(std::forward<ShippingAddress3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fourth line of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingAddress4() const { return m_shippingAddress4; }
    inline bool ShippingAddress4HasBeenSet() const { return m_shippingAddress4HasBeenSet; }
    template<typename ShippingAddress4T = Aws::String>
    void SetShippingAddress4(ShippingAddress4T&& value) { m_shippingAddress4HasBeenSet = true; m_shippingAddress4 = std::forward<ShippingAddress4T>(value); }
    template<typename ShippingAddress4T = Aws::String>
    CustomerProfileAttributes& WithShippingAddress4(ShippingAddress4T&& value) { SetShippingAddress4(std::forward<ShippingAddress4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingCity() const { return m_shippingCity; }
    inline bool ShippingCityHasBeenSet() const { return m_shippingCityHasBeenSet; }
    template<typename ShippingCityT = Aws::String>
    void SetShippingCity(ShippingCityT&& value) { m_shippingCityHasBeenSet = true; m_shippingCity = std::forward<ShippingCityT>(value); }
    template<typename ShippingCityT = Aws::String>
    CustomerProfileAttributes& WithShippingCity(ShippingCityT&& value) { SetShippingCity(std::forward<ShippingCityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingCounty() const { return m_shippingCounty; }
    inline bool ShippingCountyHasBeenSet() const { return m_shippingCountyHasBeenSet; }
    template<typename ShippingCountyT = Aws::String>
    void SetShippingCounty(ShippingCountyT&& value) { m_shippingCountyHasBeenSet = true; m_shippingCounty = std::forward<ShippingCountyT>(value); }
    template<typename ShippingCountyT = Aws::String>
    CustomerProfileAttributes& WithShippingCounty(ShippingCountyT&& value) { SetShippingCounty(std::forward<ShippingCountyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingCountry() const { return m_shippingCountry; }
    inline bool ShippingCountryHasBeenSet() const { return m_shippingCountryHasBeenSet; }
    template<typename ShippingCountryT = Aws::String>
    void SetShippingCountry(ShippingCountryT&& value) { m_shippingCountryHasBeenSet = true; m_shippingCountry = std::forward<ShippingCountryT>(value); }
    template<typename ShippingCountryT = Aws::String>
    CustomerProfileAttributes& WithShippingCountry(ShippingCountryT&& value) { SetShippingCountry(std::forward<ShippingCountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingPostalCode() const { return m_shippingPostalCode; }
    inline bool ShippingPostalCodeHasBeenSet() const { return m_shippingPostalCodeHasBeenSet; }
    template<typename ShippingPostalCodeT = Aws::String>
    void SetShippingPostalCode(ShippingPostalCodeT&& value) { m_shippingPostalCodeHasBeenSet = true; m_shippingPostalCode = std::forward<ShippingPostalCodeT>(value); }
    template<typename ShippingPostalCodeT = Aws::String>
    CustomerProfileAttributes& WithShippingPostalCode(ShippingPostalCodeT&& value) { SetShippingPostalCode(std::forward<ShippingPostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingProvince() const { return m_shippingProvince; }
    inline bool ShippingProvinceHasBeenSet() const { return m_shippingProvinceHasBeenSet; }
    template<typename ShippingProvinceT = Aws::String>
    void SetShippingProvince(ShippingProvinceT&& value) { m_shippingProvinceHasBeenSet = true; m_shippingProvince = std::forward<ShippingProvinceT>(value); }
    template<typename ShippingProvinceT = Aws::String>
    CustomerProfileAttributes& WithShippingProvince(ShippingProvinceT&& value) { SetShippingProvince(std::forward<ShippingProvinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingState() const { return m_shippingState; }
    inline bool ShippingStateHasBeenSet() const { return m_shippingStateHasBeenSet; }
    template<typename ShippingStateT = Aws::String>
    void SetShippingState(ShippingStateT&& value) { m_shippingStateHasBeenSet = true; m_shippingState = std::forward<ShippingStateT>(value); }
    template<typename ShippingStateT = Aws::String>
    CustomerProfileAttributes& WithShippingState(ShippingStateT&& value) { SetShippingState(std::forward<ShippingStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingAddress1() const { return m_mailingAddress1; }
    inline bool MailingAddress1HasBeenSet() const { return m_mailingAddress1HasBeenSet; }
    template<typename MailingAddress1T = Aws::String>
    void SetMailingAddress1(MailingAddress1T&& value) { m_mailingAddress1HasBeenSet = true; m_mailingAddress1 = std::forward<MailingAddress1T>(value); }
    template<typename MailingAddress1T = Aws::String>
    CustomerProfileAttributes& WithMailingAddress1(MailingAddress1T&& value) { SetMailingAddress1(std::forward<MailingAddress1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingAddress2() const { return m_mailingAddress2; }
    inline bool MailingAddress2HasBeenSet() const { return m_mailingAddress2HasBeenSet; }
    template<typename MailingAddress2T = Aws::String>
    void SetMailingAddress2(MailingAddress2T&& value) { m_mailingAddress2HasBeenSet = true; m_mailingAddress2 = std::forward<MailingAddress2T>(value); }
    template<typename MailingAddress2T = Aws::String>
    CustomerProfileAttributes& WithMailingAddress2(MailingAddress2T&& value) { SetMailingAddress2(std::forward<MailingAddress2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingAddress3() const { return m_mailingAddress3; }
    inline bool MailingAddress3HasBeenSet() const { return m_mailingAddress3HasBeenSet; }
    template<typename MailingAddress3T = Aws::String>
    void SetMailingAddress3(MailingAddress3T&& value) { m_mailingAddress3HasBeenSet = true; m_mailingAddress3 = std::forward<MailingAddress3T>(value); }
    template<typename MailingAddress3T = Aws::String>
    CustomerProfileAttributes& WithMailingAddress3(MailingAddress3T&& value) { SetMailingAddress3(std::forward<MailingAddress3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fourth line of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingAddress4() const { return m_mailingAddress4; }
    inline bool MailingAddress4HasBeenSet() const { return m_mailingAddress4HasBeenSet; }
    template<typename MailingAddress4T = Aws::String>
    void SetMailingAddress4(MailingAddress4T&& value) { m_mailingAddress4HasBeenSet = true; m_mailingAddress4 = std::forward<MailingAddress4T>(value); }
    template<typename MailingAddress4T = Aws::String>
    CustomerProfileAttributes& WithMailingAddress4(MailingAddress4T&& value) { SetMailingAddress4(std::forward<MailingAddress4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingCity() const { return m_mailingCity; }
    inline bool MailingCityHasBeenSet() const { return m_mailingCityHasBeenSet; }
    template<typename MailingCityT = Aws::String>
    void SetMailingCity(MailingCityT&& value) { m_mailingCityHasBeenSet = true; m_mailingCity = std::forward<MailingCityT>(value); }
    template<typename MailingCityT = Aws::String>
    CustomerProfileAttributes& WithMailingCity(MailingCityT&& value) { SetMailingCity(std::forward<MailingCityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingCounty() const { return m_mailingCounty; }
    inline bool MailingCountyHasBeenSet() const { return m_mailingCountyHasBeenSet; }
    template<typename MailingCountyT = Aws::String>
    void SetMailingCounty(MailingCountyT&& value) { m_mailingCountyHasBeenSet = true; m_mailingCounty = std::forward<MailingCountyT>(value); }
    template<typename MailingCountyT = Aws::String>
    CustomerProfileAttributes& WithMailingCounty(MailingCountyT&& value) { SetMailingCounty(std::forward<MailingCountyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingCountry() const { return m_mailingCountry; }
    inline bool MailingCountryHasBeenSet() const { return m_mailingCountryHasBeenSet; }
    template<typename MailingCountryT = Aws::String>
    void SetMailingCountry(MailingCountryT&& value) { m_mailingCountryHasBeenSet = true; m_mailingCountry = std::forward<MailingCountryT>(value); }
    template<typename MailingCountryT = Aws::String>
    CustomerProfileAttributes& WithMailingCountry(MailingCountryT&& value) { SetMailingCountry(std::forward<MailingCountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingPostalCode() const { return m_mailingPostalCode; }
    inline bool MailingPostalCodeHasBeenSet() const { return m_mailingPostalCodeHasBeenSet; }
    template<typename MailingPostalCodeT = Aws::String>
    void SetMailingPostalCode(MailingPostalCodeT&& value) { m_mailingPostalCodeHasBeenSet = true; m_mailingPostalCode = std::forward<MailingPostalCodeT>(value); }
    template<typename MailingPostalCodeT = Aws::String>
    CustomerProfileAttributes& WithMailingPostalCode(MailingPostalCodeT&& value) { SetMailingPostalCode(std::forward<MailingPostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingProvince() const { return m_mailingProvince; }
    inline bool MailingProvinceHasBeenSet() const { return m_mailingProvinceHasBeenSet; }
    template<typename MailingProvinceT = Aws::String>
    void SetMailingProvince(MailingProvinceT&& value) { m_mailingProvinceHasBeenSet = true; m_mailingProvince = std::forward<MailingProvinceT>(value); }
    template<typename MailingProvinceT = Aws::String>
    CustomerProfileAttributes& WithMailingProvince(MailingProvinceT&& value) { SetMailingProvince(std::forward<MailingProvinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingState() const { return m_mailingState; }
    inline bool MailingStateHasBeenSet() const { return m_mailingStateHasBeenSet; }
    template<typename MailingStateT = Aws::String>
    void SetMailingState(MailingStateT&& value) { m_mailingStateHasBeenSet = true; m_mailingState = std::forward<MailingStateT>(value); }
    template<typename MailingStateT = Aws::String>
    CustomerProfileAttributes& WithMailingState(MailingStateT&& value) { SetMailingState(std::forward<MailingStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingAddress1() const { return m_billingAddress1; }
    inline bool BillingAddress1HasBeenSet() const { return m_billingAddress1HasBeenSet; }
    template<typename BillingAddress1T = Aws::String>
    void SetBillingAddress1(BillingAddress1T&& value) { m_billingAddress1HasBeenSet = true; m_billingAddress1 = std::forward<BillingAddress1T>(value); }
    template<typename BillingAddress1T = Aws::String>
    CustomerProfileAttributes& WithBillingAddress1(BillingAddress1T&& value) { SetBillingAddress1(std::forward<BillingAddress1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingAddress2() const { return m_billingAddress2; }
    inline bool BillingAddress2HasBeenSet() const { return m_billingAddress2HasBeenSet; }
    template<typename BillingAddress2T = Aws::String>
    void SetBillingAddress2(BillingAddress2T&& value) { m_billingAddress2HasBeenSet = true; m_billingAddress2 = std::forward<BillingAddress2T>(value); }
    template<typename BillingAddress2T = Aws::String>
    CustomerProfileAttributes& WithBillingAddress2(BillingAddress2T&& value) { SetBillingAddress2(std::forward<BillingAddress2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingAddress3() const { return m_billingAddress3; }
    inline bool BillingAddress3HasBeenSet() const { return m_billingAddress3HasBeenSet; }
    template<typename BillingAddress3T = Aws::String>
    void SetBillingAddress3(BillingAddress3T&& value) { m_billingAddress3HasBeenSet = true; m_billingAddress3 = std::forward<BillingAddress3T>(value); }
    template<typename BillingAddress3T = Aws::String>
    CustomerProfileAttributes& WithBillingAddress3(BillingAddress3T&& value) { SetBillingAddress3(std::forward<BillingAddress3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fourth line of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingAddress4() const { return m_billingAddress4; }
    inline bool BillingAddress4HasBeenSet() const { return m_billingAddress4HasBeenSet; }
    template<typename BillingAddress4T = Aws::String>
    void SetBillingAddress4(BillingAddress4T&& value) { m_billingAddress4HasBeenSet = true; m_billingAddress4 = std::forward<BillingAddress4T>(value); }
    template<typename BillingAddress4T = Aws::String>
    CustomerProfileAttributes& WithBillingAddress4(BillingAddress4T&& value) { SetBillingAddress4(std::forward<BillingAddress4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingCity() const { return m_billingCity; }
    inline bool BillingCityHasBeenSet() const { return m_billingCityHasBeenSet; }
    template<typename BillingCityT = Aws::String>
    void SetBillingCity(BillingCityT&& value) { m_billingCityHasBeenSet = true; m_billingCity = std::forward<BillingCityT>(value); }
    template<typename BillingCityT = Aws::String>
    CustomerProfileAttributes& WithBillingCity(BillingCityT&& value) { SetBillingCity(std::forward<BillingCityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingCounty() const { return m_billingCounty; }
    inline bool BillingCountyHasBeenSet() const { return m_billingCountyHasBeenSet; }
    template<typename BillingCountyT = Aws::String>
    void SetBillingCounty(BillingCountyT&& value) { m_billingCountyHasBeenSet = true; m_billingCounty = std::forward<BillingCountyT>(value); }
    template<typename BillingCountyT = Aws::String>
    CustomerProfileAttributes& WithBillingCounty(BillingCountyT&& value) { SetBillingCounty(std::forward<BillingCountyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingCountry() const { return m_billingCountry; }
    inline bool BillingCountryHasBeenSet() const { return m_billingCountryHasBeenSet; }
    template<typename BillingCountryT = Aws::String>
    void SetBillingCountry(BillingCountryT&& value) { m_billingCountryHasBeenSet = true; m_billingCountry = std::forward<BillingCountryT>(value); }
    template<typename BillingCountryT = Aws::String>
    CustomerProfileAttributes& WithBillingCountry(BillingCountryT&& value) { SetBillingCountry(std::forward<BillingCountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingPostalCode() const { return m_billingPostalCode; }
    inline bool BillingPostalCodeHasBeenSet() const { return m_billingPostalCodeHasBeenSet; }
    template<typename BillingPostalCodeT = Aws::String>
    void SetBillingPostalCode(BillingPostalCodeT&& value) { m_billingPostalCodeHasBeenSet = true; m_billingPostalCode = std::forward<BillingPostalCodeT>(value); }
    template<typename BillingPostalCodeT = Aws::String>
    CustomerProfileAttributes& WithBillingPostalCode(BillingPostalCodeT&& value) { SetBillingPostalCode(std::forward<BillingPostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingProvince() const { return m_billingProvince; }
    inline bool BillingProvinceHasBeenSet() const { return m_billingProvinceHasBeenSet; }
    template<typename BillingProvinceT = Aws::String>
    void SetBillingProvince(BillingProvinceT&& value) { m_billingProvinceHasBeenSet = true; m_billingProvince = std::forward<BillingProvinceT>(value); }
    template<typename BillingProvinceT = Aws::String>
    CustomerProfileAttributes& WithBillingProvince(BillingProvinceT&& value) { SetBillingProvince(std::forward<BillingProvinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingState() const { return m_billingState; }
    inline bool BillingStateHasBeenSet() const { return m_billingStateHasBeenSet; }
    template<typename BillingStateT = Aws::String>
    void SetBillingState(BillingStateT&& value) { m_billingStateHasBeenSet = true; m_billingState = std::forward<BillingStateT>(value); }
    template<typename BillingStateT = Aws::String>
    CustomerProfileAttributes& WithBillingState(BillingStateT&& value) { SetBillingState(std::forward<BillingStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom attributes in customer profile attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustom() const { return m_custom; }
    inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
    template<typename CustomT = Aws::Map<Aws::String, Aws::String>>
    void SetCustom(CustomT&& value) { m_customHasBeenSet = true; m_custom = std::forward<CustomT>(value); }
    template<typename CustomT = Aws::Map<Aws::String, Aws::String>>
    CustomerProfileAttributes& WithCustom(CustomT&& value) { SetCustom(std::forward<CustomT>(value)); return *this;}
    template<typename CustomKeyT = Aws::String, typename CustomValueT = Aws::String>
    CustomerProfileAttributes& AddCustom(CustomKeyT&& key, CustomValueT&& value) {
      m_customHasBeenSet = true; m_custom.emplace(std::forward<CustomKeyT>(key), std::forward<CustomValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_profileARN;
    bool m_profileARNHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_middleName;
    bool m_middleNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::String m_accountNumber;
    bool m_accountNumberHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_additionalInformation;
    bool m_additionalInformationHasBeenSet = false;

    Aws::String m_partyType;
    bool m_partyTypeHasBeenSet = false;

    Aws::String m_businessName;
    bool m_businessNameHasBeenSet = false;

    Aws::String m_birthDate;
    bool m_birthDateHasBeenSet = false;

    Aws::String m_gender;
    bool m_genderHasBeenSet = false;

    Aws::String m_mobilePhoneNumber;
    bool m_mobilePhoneNumberHasBeenSet = false;

    Aws::String m_homePhoneNumber;
    bool m_homePhoneNumberHasBeenSet = false;

    Aws::String m_businessPhoneNumber;
    bool m_businessPhoneNumberHasBeenSet = false;

    Aws::String m_businessEmailAddress;
    bool m_businessEmailAddressHasBeenSet = false;

    Aws::String m_address1;
    bool m_address1HasBeenSet = false;

    Aws::String m_address2;
    bool m_address2HasBeenSet = false;

    Aws::String m_address3;
    bool m_address3HasBeenSet = false;

    Aws::String m_address4;
    bool m_address4HasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_county;
    bool m_countyHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_province;
    bool m_provinceHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_shippingAddress1;
    bool m_shippingAddress1HasBeenSet = false;

    Aws::String m_shippingAddress2;
    bool m_shippingAddress2HasBeenSet = false;

    Aws::String m_shippingAddress3;
    bool m_shippingAddress3HasBeenSet = false;

    Aws::String m_shippingAddress4;
    bool m_shippingAddress4HasBeenSet = false;

    Aws::String m_shippingCity;
    bool m_shippingCityHasBeenSet = false;

    Aws::String m_shippingCounty;
    bool m_shippingCountyHasBeenSet = false;

    Aws::String m_shippingCountry;
    bool m_shippingCountryHasBeenSet = false;

    Aws::String m_shippingPostalCode;
    bool m_shippingPostalCodeHasBeenSet = false;

    Aws::String m_shippingProvince;
    bool m_shippingProvinceHasBeenSet = false;

    Aws::String m_shippingState;
    bool m_shippingStateHasBeenSet = false;

    Aws::String m_mailingAddress1;
    bool m_mailingAddress1HasBeenSet = false;

    Aws::String m_mailingAddress2;
    bool m_mailingAddress2HasBeenSet = false;

    Aws::String m_mailingAddress3;
    bool m_mailingAddress3HasBeenSet = false;

    Aws::String m_mailingAddress4;
    bool m_mailingAddress4HasBeenSet = false;

    Aws::String m_mailingCity;
    bool m_mailingCityHasBeenSet = false;

    Aws::String m_mailingCounty;
    bool m_mailingCountyHasBeenSet = false;

    Aws::String m_mailingCountry;
    bool m_mailingCountryHasBeenSet = false;

    Aws::String m_mailingPostalCode;
    bool m_mailingPostalCodeHasBeenSet = false;

    Aws::String m_mailingProvince;
    bool m_mailingProvinceHasBeenSet = false;

    Aws::String m_mailingState;
    bool m_mailingStateHasBeenSet = false;

    Aws::String m_billingAddress1;
    bool m_billingAddress1HasBeenSet = false;

    Aws::String m_billingAddress2;
    bool m_billingAddress2HasBeenSet = false;

    Aws::String m_billingAddress3;
    bool m_billingAddress3HasBeenSet = false;

    Aws::String m_billingAddress4;
    bool m_billingAddress4HasBeenSet = false;

    Aws::String m_billingCity;
    bool m_billingCityHasBeenSet = false;

    Aws::String m_billingCounty;
    bool m_billingCountyHasBeenSet = false;

    Aws::String m_billingCountry;
    bool m_billingCountryHasBeenSet = false;

    Aws::String m_billingPostalCode;
    bool m_billingPostalCodeHasBeenSet = false;

    Aws::String m_billingProvince;
    bool m_billingProvinceHasBeenSet = false;

    Aws::String m_billingState;
    bool m_billingStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_custom;
    bool m_customHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
