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
    AWS_QCONNECT_API CustomerProfileAttributes();
    AWS_QCONNECT_API CustomerProfileAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API CustomerProfileAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique account number that you have given to the customer.</p>
     */
    inline const Aws::String& GetAccountNumber() const{ return m_accountNumber; }
    inline bool AccountNumberHasBeenSet() const { return m_accountNumberHasBeenSet; }
    inline void SetAccountNumber(const Aws::String& value) { m_accountNumberHasBeenSet = true; m_accountNumber = value; }
    inline void SetAccountNumber(Aws::String&& value) { m_accountNumberHasBeenSet = true; m_accountNumber = std::move(value); }
    inline void SetAccountNumber(const char* value) { m_accountNumberHasBeenSet = true; m_accountNumber.assign(value); }
    inline CustomerProfileAttributes& WithAccountNumber(const Aws::String& value) { SetAccountNumber(value); return *this;}
    inline CustomerProfileAttributes& WithAccountNumber(Aws::String&& value) { SetAccountNumber(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithAccountNumber(const char* value) { SetAccountNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any additional information relevant to the customer's profile.</p>
     */
    inline const Aws::String& GetAdditionalInformation() const{ return m_additionalInformation; }
    inline bool AdditionalInformationHasBeenSet() const { return m_additionalInformationHasBeenSet; }
    inline void SetAdditionalInformation(const Aws::String& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = value; }
    inline void SetAdditionalInformation(Aws::String&& value) { m_additionalInformationHasBeenSet = true; m_additionalInformation = std::move(value); }
    inline void SetAdditionalInformation(const char* value) { m_additionalInformationHasBeenSet = true; m_additionalInformation.assign(value); }
    inline CustomerProfileAttributes& WithAdditionalInformation(const Aws::String& value) { SetAdditionalInformation(value); return *this;}
    inline CustomerProfileAttributes& WithAdditionalInformation(Aws::String&& value) { SetAdditionalInformation(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithAdditionalInformation(const char* value) { SetAdditionalInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line of a customer address.</p>
     */
    inline const Aws::String& GetAddress1() const{ return m_address1; }
    inline bool Address1HasBeenSet() const { return m_address1HasBeenSet; }
    inline void SetAddress1(const Aws::String& value) { m_address1HasBeenSet = true; m_address1 = value; }
    inline void SetAddress1(Aws::String&& value) { m_address1HasBeenSet = true; m_address1 = std::move(value); }
    inline void SetAddress1(const char* value) { m_address1HasBeenSet = true; m_address1.assign(value); }
    inline CustomerProfileAttributes& WithAddress1(const Aws::String& value) { SetAddress1(value); return *this;}
    inline CustomerProfileAttributes& WithAddress1(Aws::String&& value) { SetAddress1(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithAddress1(const char* value) { SetAddress1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of a customer address.</p>
     */
    inline const Aws::String& GetAddress2() const{ return m_address2; }
    inline bool Address2HasBeenSet() const { return m_address2HasBeenSet; }
    inline void SetAddress2(const Aws::String& value) { m_address2HasBeenSet = true; m_address2 = value; }
    inline void SetAddress2(Aws::String&& value) { m_address2HasBeenSet = true; m_address2 = std::move(value); }
    inline void SetAddress2(const char* value) { m_address2HasBeenSet = true; m_address2.assign(value); }
    inline CustomerProfileAttributes& WithAddress2(const Aws::String& value) { SetAddress2(value); return *this;}
    inline CustomerProfileAttributes& WithAddress2(Aws::String&& value) { SetAddress2(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithAddress2(const char* value) { SetAddress2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of a customer address.</p>
     */
    inline const Aws::String& GetAddress3() const{ return m_address3; }
    inline bool Address3HasBeenSet() const { return m_address3HasBeenSet; }
    inline void SetAddress3(const Aws::String& value) { m_address3HasBeenSet = true; m_address3 = value; }
    inline void SetAddress3(Aws::String&& value) { m_address3HasBeenSet = true; m_address3 = std::move(value); }
    inline void SetAddress3(const char* value) { m_address3HasBeenSet = true; m_address3.assign(value); }
    inline CustomerProfileAttributes& WithAddress3(const Aws::String& value) { SetAddress3(value); return *this;}
    inline CustomerProfileAttributes& WithAddress3(Aws::String&& value) { SetAddress3(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithAddress3(const char* value) { SetAddress3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fourth line of a customer address.</p>
     */
    inline const Aws::String& GetAddress4() const{ return m_address4; }
    inline bool Address4HasBeenSet() const { return m_address4HasBeenSet; }
    inline void SetAddress4(const Aws::String& value) { m_address4HasBeenSet = true; m_address4 = value; }
    inline void SetAddress4(Aws::String&& value) { m_address4HasBeenSet = true; m_address4 = std::move(value); }
    inline void SetAddress4(const char* value) { m_address4HasBeenSet = true; m_address4.assign(value); }
    inline CustomerProfileAttributes& WithAddress4(const Aws::String& value) { SetAddress4(value); return *this;}
    inline CustomerProfileAttributes& WithAddress4(Aws::String&& value) { SetAddress4(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithAddress4(const char* value) { SetAddress4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingAddress1() const{ return m_billingAddress1; }
    inline bool BillingAddress1HasBeenSet() const { return m_billingAddress1HasBeenSet; }
    inline void SetBillingAddress1(const Aws::String& value) { m_billingAddress1HasBeenSet = true; m_billingAddress1 = value; }
    inline void SetBillingAddress1(Aws::String&& value) { m_billingAddress1HasBeenSet = true; m_billingAddress1 = std::move(value); }
    inline void SetBillingAddress1(const char* value) { m_billingAddress1HasBeenSet = true; m_billingAddress1.assign(value); }
    inline CustomerProfileAttributes& WithBillingAddress1(const Aws::String& value) { SetBillingAddress1(value); return *this;}
    inline CustomerProfileAttributes& WithBillingAddress1(Aws::String&& value) { SetBillingAddress1(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBillingAddress1(const char* value) { SetBillingAddress1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingAddress2() const{ return m_billingAddress2; }
    inline bool BillingAddress2HasBeenSet() const { return m_billingAddress2HasBeenSet; }
    inline void SetBillingAddress2(const Aws::String& value) { m_billingAddress2HasBeenSet = true; m_billingAddress2 = value; }
    inline void SetBillingAddress2(Aws::String&& value) { m_billingAddress2HasBeenSet = true; m_billingAddress2 = std::move(value); }
    inline void SetBillingAddress2(const char* value) { m_billingAddress2HasBeenSet = true; m_billingAddress2.assign(value); }
    inline CustomerProfileAttributes& WithBillingAddress2(const Aws::String& value) { SetBillingAddress2(value); return *this;}
    inline CustomerProfileAttributes& WithBillingAddress2(Aws::String&& value) { SetBillingAddress2(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBillingAddress2(const char* value) { SetBillingAddress2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingAddress3() const{ return m_billingAddress3; }
    inline bool BillingAddress3HasBeenSet() const { return m_billingAddress3HasBeenSet; }
    inline void SetBillingAddress3(const Aws::String& value) { m_billingAddress3HasBeenSet = true; m_billingAddress3 = value; }
    inline void SetBillingAddress3(Aws::String&& value) { m_billingAddress3HasBeenSet = true; m_billingAddress3 = std::move(value); }
    inline void SetBillingAddress3(const char* value) { m_billingAddress3HasBeenSet = true; m_billingAddress3.assign(value); }
    inline CustomerProfileAttributes& WithBillingAddress3(const Aws::String& value) { SetBillingAddress3(value); return *this;}
    inline CustomerProfileAttributes& WithBillingAddress3(Aws::String&& value) { SetBillingAddress3(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBillingAddress3(const char* value) { SetBillingAddress3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fourth line of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingAddress4() const{ return m_billingAddress4; }
    inline bool BillingAddress4HasBeenSet() const { return m_billingAddress4HasBeenSet; }
    inline void SetBillingAddress4(const Aws::String& value) { m_billingAddress4HasBeenSet = true; m_billingAddress4 = value; }
    inline void SetBillingAddress4(Aws::String&& value) { m_billingAddress4HasBeenSet = true; m_billingAddress4 = std::move(value); }
    inline void SetBillingAddress4(const char* value) { m_billingAddress4HasBeenSet = true; m_billingAddress4.assign(value); }
    inline CustomerProfileAttributes& WithBillingAddress4(const Aws::String& value) { SetBillingAddress4(value); return *this;}
    inline CustomerProfileAttributes& WithBillingAddress4(Aws::String&& value) { SetBillingAddress4(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBillingAddress4(const char* value) { SetBillingAddress4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingCity() const{ return m_billingCity; }
    inline bool BillingCityHasBeenSet() const { return m_billingCityHasBeenSet; }
    inline void SetBillingCity(const Aws::String& value) { m_billingCityHasBeenSet = true; m_billingCity = value; }
    inline void SetBillingCity(Aws::String&& value) { m_billingCityHasBeenSet = true; m_billingCity = std::move(value); }
    inline void SetBillingCity(const char* value) { m_billingCityHasBeenSet = true; m_billingCity.assign(value); }
    inline CustomerProfileAttributes& WithBillingCity(const Aws::String& value) { SetBillingCity(value); return *this;}
    inline CustomerProfileAttributes& WithBillingCity(Aws::String&& value) { SetBillingCity(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBillingCity(const char* value) { SetBillingCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingCountry() const{ return m_billingCountry; }
    inline bool BillingCountryHasBeenSet() const { return m_billingCountryHasBeenSet; }
    inline void SetBillingCountry(const Aws::String& value) { m_billingCountryHasBeenSet = true; m_billingCountry = value; }
    inline void SetBillingCountry(Aws::String&& value) { m_billingCountryHasBeenSet = true; m_billingCountry = std::move(value); }
    inline void SetBillingCountry(const char* value) { m_billingCountryHasBeenSet = true; m_billingCountry.assign(value); }
    inline CustomerProfileAttributes& WithBillingCountry(const Aws::String& value) { SetBillingCountry(value); return *this;}
    inline CustomerProfileAttributes& WithBillingCountry(Aws::String&& value) { SetBillingCountry(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBillingCountry(const char* value) { SetBillingCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingCounty() const{ return m_billingCounty; }
    inline bool BillingCountyHasBeenSet() const { return m_billingCountyHasBeenSet; }
    inline void SetBillingCounty(const Aws::String& value) { m_billingCountyHasBeenSet = true; m_billingCounty = value; }
    inline void SetBillingCounty(Aws::String&& value) { m_billingCountyHasBeenSet = true; m_billingCounty = std::move(value); }
    inline void SetBillingCounty(const char* value) { m_billingCountyHasBeenSet = true; m_billingCounty.assign(value); }
    inline CustomerProfileAttributes& WithBillingCounty(const Aws::String& value) { SetBillingCounty(value); return *this;}
    inline CustomerProfileAttributes& WithBillingCounty(Aws::String&& value) { SetBillingCounty(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBillingCounty(const char* value) { SetBillingCounty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingPostalCode() const{ return m_billingPostalCode; }
    inline bool BillingPostalCodeHasBeenSet() const { return m_billingPostalCodeHasBeenSet; }
    inline void SetBillingPostalCode(const Aws::String& value) { m_billingPostalCodeHasBeenSet = true; m_billingPostalCode = value; }
    inline void SetBillingPostalCode(Aws::String&& value) { m_billingPostalCodeHasBeenSet = true; m_billingPostalCode = std::move(value); }
    inline void SetBillingPostalCode(const char* value) { m_billingPostalCodeHasBeenSet = true; m_billingPostalCode.assign(value); }
    inline CustomerProfileAttributes& WithBillingPostalCode(const Aws::String& value) { SetBillingPostalCode(value); return *this;}
    inline CustomerProfileAttributes& WithBillingPostalCode(Aws::String&& value) { SetBillingPostalCode(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBillingPostalCode(const char* value) { SetBillingPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingProvince() const{ return m_billingProvince; }
    inline bool BillingProvinceHasBeenSet() const { return m_billingProvinceHasBeenSet; }
    inline void SetBillingProvince(const Aws::String& value) { m_billingProvinceHasBeenSet = true; m_billingProvince = value; }
    inline void SetBillingProvince(Aws::String&& value) { m_billingProvinceHasBeenSet = true; m_billingProvince = std::move(value); }
    inline void SetBillingProvince(const char* value) { m_billingProvinceHasBeenSet = true; m_billingProvince.assign(value); }
    inline CustomerProfileAttributes& WithBillingProvince(const Aws::String& value) { SetBillingProvince(value); return *this;}
    inline CustomerProfileAttributes& WithBillingProvince(Aws::String&& value) { SetBillingProvince(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBillingProvince(const char* value) { SetBillingProvince(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a customer’s billing address.</p>
     */
    inline const Aws::String& GetBillingState() const{ return m_billingState; }
    inline bool BillingStateHasBeenSet() const { return m_billingStateHasBeenSet; }
    inline void SetBillingState(const Aws::String& value) { m_billingStateHasBeenSet = true; m_billingState = value; }
    inline void SetBillingState(Aws::String&& value) { m_billingStateHasBeenSet = true; m_billingState = std::move(value); }
    inline void SetBillingState(const char* value) { m_billingStateHasBeenSet = true; m_billingState.assign(value); }
    inline CustomerProfileAttributes& WithBillingState(const Aws::String& value) { SetBillingState(value); return *this;}
    inline CustomerProfileAttributes& WithBillingState(Aws::String&& value) { SetBillingState(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBillingState(const char* value) { SetBillingState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's birth date.</p>
     */
    inline const Aws::String& GetBirthDate() const{ return m_birthDate; }
    inline bool BirthDateHasBeenSet() const { return m_birthDateHasBeenSet; }
    inline void SetBirthDate(const Aws::String& value) { m_birthDateHasBeenSet = true; m_birthDate = value; }
    inline void SetBirthDate(Aws::String&& value) { m_birthDateHasBeenSet = true; m_birthDate = std::move(value); }
    inline void SetBirthDate(const char* value) { m_birthDateHasBeenSet = true; m_birthDate.assign(value); }
    inline CustomerProfileAttributes& WithBirthDate(const Aws::String& value) { SetBirthDate(value); return *this;}
    inline CustomerProfileAttributes& WithBirthDate(Aws::String&& value) { SetBirthDate(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBirthDate(const char* value) { SetBirthDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's business email address.</p>
     */
    inline const Aws::String& GetBusinessEmailAddress() const{ return m_businessEmailAddress; }
    inline bool BusinessEmailAddressHasBeenSet() const { return m_businessEmailAddressHasBeenSet; }
    inline void SetBusinessEmailAddress(const Aws::String& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = value; }
    inline void SetBusinessEmailAddress(Aws::String&& value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress = std::move(value); }
    inline void SetBusinessEmailAddress(const char* value) { m_businessEmailAddressHasBeenSet = true; m_businessEmailAddress.assign(value); }
    inline CustomerProfileAttributes& WithBusinessEmailAddress(const Aws::String& value) { SetBusinessEmailAddress(value); return *this;}
    inline CustomerProfileAttributes& WithBusinessEmailAddress(Aws::String&& value) { SetBusinessEmailAddress(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBusinessEmailAddress(const char* value) { SetBusinessEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the customer's business.</p>
     */
    inline const Aws::String& GetBusinessName() const{ return m_businessName; }
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }
    inline void SetBusinessName(const Aws::String& value) { m_businessNameHasBeenSet = true; m_businessName = value; }
    inline void SetBusinessName(Aws::String&& value) { m_businessNameHasBeenSet = true; m_businessName = std::move(value); }
    inline void SetBusinessName(const char* value) { m_businessNameHasBeenSet = true; m_businessName.assign(value); }
    inline CustomerProfileAttributes& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}
    inline CustomerProfileAttributes& WithBusinessName(Aws::String&& value) { SetBusinessName(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's business phone number.</p>
     */
    inline const Aws::String& GetBusinessPhoneNumber() const{ return m_businessPhoneNumber; }
    inline bool BusinessPhoneNumberHasBeenSet() const { return m_businessPhoneNumberHasBeenSet; }
    inline void SetBusinessPhoneNumber(const Aws::String& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = value; }
    inline void SetBusinessPhoneNumber(Aws::String&& value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber = std::move(value); }
    inline void SetBusinessPhoneNumber(const char* value) { m_businessPhoneNumberHasBeenSet = true; m_businessPhoneNumber.assign(value); }
    inline CustomerProfileAttributes& WithBusinessPhoneNumber(const Aws::String& value) { SetBusinessPhoneNumber(value); return *this;}
    inline CustomerProfileAttributes& WithBusinessPhoneNumber(Aws::String&& value) { SetBusinessPhoneNumber(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithBusinessPhoneNumber(const char* value) { SetBusinessPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city in which a customer lives.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline CustomerProfileAttributes& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline CustomerProfileAttributes& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country in which a customer lives.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline CustomerProfileAttributes& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline CustomerProfileAttributes& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county in which a customer lives.</p>
     */
    inline const Aws::String& GetCounty() const{ return m_county; }
    inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }
    inline void SetCounty(const Aws::String& value) { m_countyHasBeenSet = true; m_county = value; }
    inline void SetCounty(Aws::String&& value) { m_countyHasBeenSet = true; m_county = std::move(value); }
    inline void SetCounty(const char* value) { m_countyHasBeenSet = true; m_county.assign(value); }
    inline CustomerProfileAttributes& WithCounty(const Aws::String& value) { SetCounty(value); return *this;}
    inline CustomerProfileAttributes& WithCounty(Aws::String&& value) { SetCounty(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithCounty(const char* value) { SetCounty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom attributes in customer profile attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustom() const{ return m_custom; }
    inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
    inline void SetCustom(const Aws::Map<Aws::String, Aws::String>& value) { m_customHasBeenSet = true; m_custom = value; }
    inline void SetCustom(Aws::Map<Aws::String, Aws::String>&& value) { m_customHasBeenSet = true; m_custom = std::move(value); }
    inline CustomerProfileAttributes& WithCustom(const Aws::Map<Aws::String, Aws::String>& value) { SetCustom(value); return *this;}
    inline CustomerProfileAttributes& WithCustom(Aws::Map<Aws::String, Aws::String>&& value) { SetCustom(std::move(value)); return *this;}
    inline CustomerProfileAttributes& AddCustom(const Aws::String& key, const Aws::String& value) { m_customHasBeenSet = true; m_custom.emplace(key, value); return *this; }
    inline CustomerProfileAttributes& AddCustom(Aws::String&& key, const Aws::String& value) { m_customHasBeenSet = true; m_custom.emplace(std::move(key), value); return *this; }
    inline CustomerProfileAttributes& AddCustom(const Aws::String& key, Aws::String&& value) { m_customHasBeenSet = true; m_custom.emplace(key, std::move(value)); return *this; }
    inline CustomerProfileAttributes& AddCustom(Aws::String&& key, Aws::String&& value) { m_customHasBeenSet = true; m_custom.emplace(std::move(key), std::move(value)); return *this; }
    inline CustomerProfileAttributes& AddCustom(const char* key, Aws::String&& value) { m_customHasBeenSet = true; m_custom.emplace(key, std::move(value)); return *this; }
    inline CustomerProfileAttributes& AddCustom(Aws::String&& key, const char* value) { m_customHasBeenSet = true; m_custom.emplace(std::move(key), value); return *this; }
    inline CustomerProfileAttributes& AddCustom(const char* key, const char* value) { m_customHasBeenSet = true; m_custom.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The customer's email address, which has not been specified as a personal or
     * business address.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline CustomerProfileAttributes& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline CustomerProfileAttributes& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's first name.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline CustomerProfileAttributes& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline CustomerProfileAttributes& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's gender.</p>
     */
    inline const Aws::String& GetGender() const{ return m_gender; }
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
    inline void SetGender(const Aws::String& value) { m_genderHasBeenSet = true; m_gender = value; }
    inline void SetGender(Aws::String&& value) { m_genderHasBeenSet = true; m_gender = std::move(value); }
    inline void SetGender(const char* value) { m_genderHasBeenSet = true; m_gender.assign(value); }
    inline CustomerProfileAttributes& WithGender(const Aws::String& value) { SetGender(value); return *this;}
    inline CustomerProfileAttributes& WithGender(Aws::String&& value) { SetGender(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithGender(const char* value) { SetGender(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's mobile phone number.</p>
     */
    inline const Aws::String& GetHomePhoneNumber() const{ return m_homePhoneNumber; }
    inline bool HomePhoneNumberHasBeenSet() const { return m_homePhoneNumberHasBeenSet; }
    inline void SetHomePhoneNumber(const Aws::String& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = value; }
    inline void SetHomePhoneNumber(Aws::String&& value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber = std::move(value); }
    inline void SetHomePhoneNumber(const char* value) { m_homePhoneNumberHasBeenSet = true; m_homePhoneNumber.assign(value); }
    inline CustomerProfileAttributes& WithHomePhoneNumber(const Aws::String& value) { SetHomePhoneNumber(value); return *this;}
    inline CustomerProfileAttributes& WithHomePhoneNumber(Aws::String&& value) { SetHomePhoneNumber(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithHomePhoneNumber(const char* value) { SetHomePhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's last name.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline CustomerProfileAttributes& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline CustomerProfileAttributes& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingAddress1() const{ return m_mailingAddress1; }
    inline bool MailingAddress1HasBeenSet() const { return m_mailingAddress1HasBeenSet; }
    inline void SetMailingAddress1(const Aws::String& value) { m_mailingAddress1HasBeenSet = true; m_mailingAddress1 = value; }
    inline void SetMailingAddress1(Aws::String&& value) { m_mailingAddress1HasBeenSet = true; m_mailingAddress1 = std::move(value); }
    inline void SetMailingAddress1(const char* value) { m_mailingAddress1HasBeenSet = true; m_mailingAddress1.assign(value); }
    inline CustomerProfileAttributes& WithMailingAddress1(const Aws::String& value) { SetMailingAddress1(value); return *this;}
    inline CustomerProfileAttributes& WithMailingAddress1(Aws::String&& value) { SetMailingAddress1(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMailingAddress1(const char* value) { SetMailingAddress1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingAddress2() const{ return m_mailingAddress2; }
    inline bool MailingAddress2HasBeenSet() const { return m_mailingAddress2HasBeenSet; }
    inline void SetMailingAddress2(const Aws::String& value) { m_mailingAddress2HasBeenSet = true; m_mailingAddress2 = value; }
    inline void SetMailingAddress2(Aws::String&& value) { m_mailingAddress2HasBeenSet = true; m_mailingAddress2 = std::move(value); }
    inline void SetMailingAddress2(const char* value) { m_mailingAddress2HasBeenSet = true; m_mailingAddress2.assign(value); }
    inline CustomerProfileAttributes& WithMailingAddress2(const Aws::String& value) { SetMailingAddress2(value); return *this;}
    inline CustomerProfileAttributes& WithMailingAddress2(Aws::String&& value) { SetMailingAddress2(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMailingAddress2(const char* value) { SetMailingAddress2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingAddress3() const{ return m_mailingAddress3; }
    inline bool MailingAddress3HasBeenSet() const { return m_mailingAddress3HasBeenSet; }
    inline void SetMailingAddress3(const Aws::String& value) { m_mailingAddress3HasBeenSet = true; m_mailingAddress3 = value; }
    inline void SetMailingAddress3(Aws::String&& value) { m_mailingAddress3HasBeenSet = true; m_mailingAddress3 = std::move(value); }
    inline void SetMailingAddress3(const char* value) { m_mailingAddress3HasBeenSet = true; m_mailingAddress3.assign(value); }
    inline CustomerProfileAttributes& WithMailingAddress3(const Aws::String& value) { SetMailingAddress3(value); return *this;}
    inline CustomerProfileAttributes& WithMailingAddress3(Aws::String&& value) { SetMailingAddress3(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMailingAddress3(const char* value) { SetMailingAddress3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fourth line of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingAddress4() const{ return m_mailingAddress4; }
    inline bool MailingAddress4HasBeenSet() const { return m_mailingAddress4HasBeenSet; }
    inline void SetMailingAddress4(const Aws::String& value) { m_mailingAddress4HasBeenSet = true; m_mailingAddress4 = value; }
    inline void SetMailingAddress4(Aws::String&& value) { m_mailingAddress4HasBeenSet = true; m_mailingAddress4 = std::move(value); }
    inline void SetMailingAddress4(const char* value) { m_mailingAddress4HasBeenSet = true; m_mailingAddress4.assign(value); }
    inline CustomerProfileAttributes& WithMailingAddress4(const Aws::String& value) { SetMailingAddress4(value); return *this;}
    inline CustomerProfileAttributes& WithMailingAddress4(Aws::String&& value) { SetMailingAddress4(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMailingAddress4(const char* value) { SetMailingAddress4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingCity() const{ return m_mailingCity; }
    inline bool MailingCityHasBeenSet() const { return m_mailingCityHasBeenSet; }
    inline void SetMailingCity(const Aws::String& value) { m_mailingCityHasBeenSet = true; m_mailingCity = value; }
    inline void SetMailingCity(Aws::String&& value) { m_mailingCityHasBeenSet = true; m_mailingCity = std::move(value); }
    inline void SetMailingCity(const char* value) { m_mailingCityHasBeenSet = true; m_mailingCity.assign(value); }
    inline CustomerProfileAttributes& WithMailingCity(const Aws::String& value) { SetMailingCity(value); return *this;}
    inline CustomerProfileAttributes& WithMailingCity(Aws::String&& value) { SetMailingCity(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMailingCity(const char* value) { SetMailingCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingCountry() const{ return m_mailingCountry; }
    inline bool MailingCountryHasBeenSet() const { return m_mailingCountryHasBeenSet; }
    inline void SetMailingCountry(const Aws::String& value) { m_mailingCountryHasBeenSet = true; m_mailingCountry = value; }
    inline void SetMailingCountry(Aws::String&& value) { m_mailingCountryHasBeenSet = true; m_mailingCountry = std::move(value); }
    inline void SetMailingCountry(const char* value) { m_mailingCountryHasBeenSet = true; m_mailingCountry.assign(value); }
    inline CustomerProfileAttributes& WithMailingCountry(const Aws::String& value) { SetMailingCountry(value); return *this;}
    inline CustomerProfileAttributes& WithMailingCountry(Aws::String&& value) { SetMailingCountry(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMailingCountry(const char* value) { SetMailingCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingCounty() const{ return m_mailingCounty; }
    inline bool MailingCountyHasBeenSet() const { return m_mailingCountyHasBeenSet; }
    inline void SetMailingCounty(const Aws::String& value) { m_mailingCountyHasBeenSet = true; m_mailingCounty = value; }
    inline void SetMailingCounty(Aws::String&& value) { m_mailingCountyHasBeenSet = true; m_mailingCounty = std::move(value); }
    inline void SetMailingCounty(const char* value) { m_mailingCountyHasBeenSet = true; m_mailingCounty.assign(value); }
    inline CustomerProfileAttributes& WithMailingCounty(const Aws::String& value) { SetMailingCounty(value); return *this;}
    inline CustomerProfileAttributes& WithMailingCounty(Aws::String&& value) { SetMailingCounty(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMailingCounty(const char* value) { SetMailingCounty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingPostalCode() const{ return m_mailingPostalCode; }
    inline bool MailingPostalCodeHasBeenSet() const { return m_mailingPostalCodeHasBeenSet; }
    inline void SetMailingPostalCode(const Aws::String& value) { m_mailingPostalCodeHasBeenSet = true; m_mailingPostalCode = value; }
    inline void SetMailingPostalCode(Aws::String&& value) { m_mailingPostalCodeHasBeenSet = true; m_mailingPostalCode = std::move(value); }
    inline void SetMailingPostalCode(const char* value) { m_mailingPostalCodeHasBeenSet = true; m_mailingPostalCode.assign(value); }
    inline CustomerProfileAttributes& WithMailingPostalCode(const Aws::String& value) { SetMailingPostalCode(value); return *this;}
    inline CustomerProfileAttributes& WithMailingPostalCode(Aws::String&& value) { SetMailingPostalCode(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMailingPostalCode(const char* value) { SetMailingPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingProvince() const{ return m_mailingProvince; }
    inline bool MailingProvinceHasBeenSet() const { return m_mailingProvinceHasBeenSet; }
    inline void SetMailingProvince(const Aws::String& value) { m_mailingProvinceHasBeenSet = true; m_mailingProvince = value; }
    inline void SetMailingProvince(Aws::String&& value) { m_mailingProvinceHasBeenSet = true; m_mailingProvince = std::move(value); }
    inline void SetMailingProvince(const char* value) { m_mailingProvinceHasBeenSet = true; m_mailingProvince.assign(value); }
    inline CustomerProfileAttributes& WithMailingProvince(const Aws::String& value) { SetMailingProvince(value); return *this;}
    inline CustomerProfileAttributes& WithMailingProvince(Aws::String&& value) { SetMailingProvince(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMailingProvince(const char* value) { SetMailingProvince(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a customer’s mailing address.</p>
     */
    inline const Aws::String& GetMailingState() const{ return m_mailingState; }
    inline bool MailingStateHasBeenSet() const { return m_mailingStateHasBeenSet; }
    inline void SetMailingState(const Aws::String& value) { m_mailingStateHasBeenSet = true; m_mailingState = value; }
    inline void SetMailingState(Aws::String&& value) { m_mailingStateHasBeenSet = true; m_mailingState = std::move(value); }
    inline void SetMailingState(const char* value) { m_mailingStateHasBeenSet = true; m_mailingState.assign(value); }
    inline CustomerProfileAttributes& WithMailingState(const Aws::String& value) { SetMailingState(value); return *this;}
    inline CustomerProfileAttributes& WithMailingState(Aws::String&& value) { SetMailingState(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMailingState(const char* value) { SetMailingState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's middle name.</p>
     */
    inline const Aws::String& GetMiddleName() const{ return m_middleName; }
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }
    inline void SetMiddleName(const Aws::String& value) { m_middleNameHasBeenSet = true; m_middleName = value; }
    inline void SetMiddleName(Aws::String&& value) { m_middleNameHasBeenSet = true; m_middleName = std::move(value); }
    inline void SetMiddleName(const char* value) { m_middleNameHasBeenSet = true; m_middleName.assign(value); }
    inline CustomerProfileAttributes& WithMiddleName(const Aws::String& value) { SetMiddleName(value); return *this;}
    inline CustomerProfileAttributes& WithMiddleName(Aws::String&& value) { SetMiddleName(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMiddleName(const char* value) { SetMiddleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's mobile phone number.</p>
     */
    inline const Aws::String& GetMobilePhoneNumber() const{ return m_mobilePhoneNumber; }
    inline bool MobilePhoneNumberHasBeenSet() const { return m_mobilePhoneNumberHasBeenSet; }
    inline void SetMobilePhoneNumber(const Aws::String& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = value; }
    inline void SetMobilePhoneNumber(Aws::String&& value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber = std::move(value); }
    inline void SetMobilePhoneNumber(const char* value) { m_mobilePhoneNumberHasBeenSet = true; m_mobilePhoneNumber.assign(value); }
    inline CustomerProfileAttributes& WithMobilePhoneNumber(const Aws::String& value) { SetMobilePhoneNumber(value); return *this;}
    inline CustomerProfileAttributes& WithMobilePhoneNumber(Aws::String&& value) { SetMobilePhoneNumber(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithMobilePhoneNumber(const char* value) { SetMobilePhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's party type.</p>
     */
    inline const Aws::String& GetPartyType() const{ return m_partyType; }
    inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }
    inline void SetPartyType(const Aws::String& value) { m_partyTypeHasBeenSet = true; m_partyType = value; }
    inline void SetPartyType(Aws::String&& value) { m_partyTypeHasBeenSet = true; m_partyType = std::move(value); }
    inline void SetPartyType(const char* value) { m_partyTypeHasBeenSet = true; m_partyType.assign(value); }
    inline CustomerProfileAttributes& WithPartyType(const Aws::String& value) { SetPartyType(value); return *this;}
    inline CustomerProfileAttributes& WithPartyType(Aws::String&& value) { SetPartyType(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithPartyType(const char* value) { SetPartyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's phone number, which has not been specified as a mobile, home,
     * or business number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }
    inline CustomerProfileAttributes& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline CustomerProfileAttributes& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of a customer address.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline CustomerProfileAttributes& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline CustomerProfileAttributes& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a customer profile.</p>
     */
    inline const Aws::String& GetProfileARN() const{ return m_profileARN; }
    inline bool ProfileARNHasBeenSet() const { return m_profileARNHasBeenSet; }
    inline void SetProfileARN(const Aws::String& value) { m_profileARNHasBeenSet = true; m_profileARN = value; }
    inline void SetProfileARN(Aws::String&& value) { m_profileARNHasBeenSet = true; m_profileARN = std::move(value); }
    inline void SetProfileARN(const char* value) { m_profileARNHasBeenSet = true; m_profileARN.assign(value); }
    inline CustomerProfileAttributes& WithProfileARN(const Aws::String& value) { SetProfileARN(value); return *this;}
    inline CustomerProfileAttributes& WithProfileARN(Aws::String&& value) { SetProfileARN(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithProfileARN(const char* value) { SetProfileARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline CustomerProfileAttributes& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline CustomerProfileAttributes& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province in which a customer lives.</p>
     */
    inline const Aws::String& GetProvince() const{ return m_province; }
    inline bool ProvinceHasBeenSet() const { return m_provinceHasBeenSet; }
    inline void SetProvince(const Aws::String& value) { m_provinceHasBeenSet = true; m_province = value; }
    inline void SetProvince(Aws::String&& value) { m_provinceHasBeenSet = true; m_province = std::move(value); }
    inline void SetProvince(const char* value) { m_provinceHasBeenSet = true; m_province.assign(value); }
    inline CustomerProfileAttributes& WithProvince(const Aws::String& value) { SetProvince(value); return *this;}
    inline CustomerProfileAttributes& WithProvince(Aws::String&& value) { SetProvince(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithProvince(const char* value) { SetProvince(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingAddress1() const{ return m_shippingAddress1; }
    inline bool ShippingAddress1HasBeenSet() const { return m_shippingAddress1HasBeenSet; }
    inline void SetShippingAddress1(const Aws::String& value) { m_shippingAddress1HasBeenSet = true; m_shippingAddress1 = value; }
    inline void SetShippingAddress1(Aws::String&& value) { m_shippingAddress1HasBeenSet = true; m_shippingAddress1 = std::move(value); }
    inline void SetShippingAddress1(const char* value) { m_shippingAddress1HasBeenSet = true; m_shippingAddress1.assign(value); }
    inline CustomerProfileAttributes& WithShippingAddress1(const Aws::String& value) { SetShippingAddress1(value); return *this;}
    inline CustomerProfileAttributes& WithShippingAddress1(Aws::String&& value) { SetShippingAddress1(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithShippingAddress1(const char* value) { SetShippingAddress1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingAddress2() const{ return m_shippingAddress2; }
    inline bool ShippingAddress2HasBeenSet() const { return m_shippingAddress2HasBeenSet; }
    inline void SetShippingAddress2(const Aws::String& value) { m_shippingAddress2HasBeenSet = true; m_shippingAddress2 = value; }
    inline void SetShippingAddress2(Aws::String&& value) { m_shippingAddress2HasBeenSet = true; m_shippingAddress2 = std::move(value); }
    inline void SetShippingAddress2(const char* value) { m_shippingAddress2HasBeenSet = true; m_shippingAddress2.assign(value); }
    inline CustomerProfileAttributes& WithShippingAddress2(const Aws::String& value) { SetShippingAddress2(value); return *this;}
    inline CustomerProfileAttributes& WithShippingAddress2(Aws::String&& value) { SetShippingAddress2(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithShippingAddress2(const char* value) { SetShippingAddress2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingAddress3() const{ return m_shippingAddress3; }
    inline bool ShippingAddress3HasBeenSet() const { return m_shippingAddress3HasBeenSet; }
    inline void SetShippingAddress3(const Aws::String& value) { m_shippingAddress3HasBeenSet = true; m_shippingAddress3 = value; }
    inline void SetShippingAddress3(Aws::String&& value) { m_shippingAddress3HasBeenSet = true; m_shippingAddress3 = std::move(value); }
    inline void SetShippingAddress3(const char* value) { m_shippingAddress3HasBeenSet = true; m_shippingAddress3.assign(value); }
    inline CustomerProfileAttributes& WithShippingAddress3(const Aws::String& value) { SetShippingAddress3(value); return *this;}
    inline CustomerProfileAttributes& WithShippingAddress3(Aws::String&& value) { SetShippingAddress3(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithShippingAddress3(const char* value) { SetShippingAddress3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fourth line of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingAddress4() const{ return m_shippingAddress4; }
    inline bool ShippingAddress4HasBeenSet() const { return m_shippingAddress4HasBeenSet; }
    inline void SetShippingAddress4(const Aws::String& value) { m_shippingAddress4HasBeenSet = true; m_shippingAddress4 = value; }
    inline void SetShippingAddress4(Aws::String&& value) { m_shippingAddress4HasBeenSet = true; m_shippingAddress4 = std::move(value); }
    inline void SetShippingAddress4(const char* value) { m_shippingAddress4HasBeenSet = true; m_shippingAddress4.assign(value); }
    inline CustomerProfileAttributes& WithShippingAddress4(const Aws::String& value) { SetShippingAddress4(value); return *this;}
    inline CustomerProfileAttributes& WithShippingAddress4(Aws::String&& value) { SetShippingAddress4(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithShippingAddress4(const char* value) { SetShippingAddress4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingCity() const{ return m_shippingCity; }
    inline bool ShippingCityHasBeenSet() const { return m_shippingCityHasBeenSet; }
    inline void SetShippingCity(const Aws::String& value) { m_shippingCityHasBeenSet = true; m_shippingCity = value; }
    inline void SetShippingCity(Aws::String&& value) { m_shippingCityHasBeenSet = true; m_shippingCity = std::move(value); }
    inline void SetShippingCity(const char* value) { m_shippingCityHasBeenSet = true; m_shippingCity.assign(value); }
    inline CustomerProfileAttributes& WithShippingCity(const Aws::String& value) { SetShippingCity(value); return *this;}
    inline CustomerProfileAttributes& WithShippingCity(Aws::String&& value) { SetShippingCity(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithShippingCity(const char* value) { SetShippingCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingCountry() const{ return m_shippingCountry; }
    inline bool ShippingCountryHasBeenSet() const { return m_shippingCountryHasBeenSet; }
    inline void SetShippingCountry(const Aws::String& value) { m_shippingCountryHasBeenSet = true; m_shippingCountry = value; }
    inline void SetShippingCountry(Aws::String&& value) { m_shippingCountryHasBeenSet = true; m_shippingCountry = std::move(value); }
    inline void SetShippingCountry(const char* value) { m_shippingCountryHasBeenSet = true; m_shippingCountry.assign(value); }
    inline CustomerProfileAttributes& WithShippingCountry(const Aws::String& value) { SetShippingCountry(value); return *this;}
    inline CustomerProfileAttributes& WithShippingCountry(Aws::String&& value) { SetShippingCountry(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithShippingCountry(const char* value) { SetShippingCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingCounty() const{ return m_shippingCounty; }
    inline bool ShippingCountyHasBeenSet() const { return m_shippingCountyHasBeenSet; }
    inline void SetShippingCounty(const Aws::String& value) { m_shippingCountyHasBeenSet = true; m_shippingCounty = value; }
    inline void SetShippingCounty(Aws::String&& value) { m_shippingCountyHasBeenSet = true; m_shippingCounty = std::move(value); }
    inline void SetShippingCounty(const char* value) { m_shippingCountyHasBeenSet = true; m_shippingCounty.assign(value); }
    inline CustomerProfileAttributes& WithShippingCounty(const Aws::String& value) { SetShippingCounty(value); return *this;}
    inline CustomerProfileAttributes& WithShippingCounty(Aws::String&& value) { SetShippingCounty(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithShippingCounty(const char* value) { SetShippingCounty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingPostalCode() const{ return m_shippingPostalCode; }
    inline bool ShippingPostalCodeHasBeenSet() const { return m_shippingPostalCodeHasBeenSet; }
    inline void SetShippingPostalCode(const Aws::String& value) { m_shippingPostalCodeHasBeenSet = true; m_shippingPostalCode = value; }
    inline void SetShippingPostalCode(Aws::String&& value) { m_shippingPostalCodeHasBeenSet = true; m_shippingPostalCode = std::move(value); }
    inline void SetShippingPostalCode(const char* value) { m_shippingPostalCodeHasBeenSet = true; m_shippingPostalCode.assign(value); }
    inline CustomerProfileAttributes& WithShippingPostalCode(const Aws::String& value) { SetShippingPostalCode(value); return *this;}
    inline CustomerProfileAttributes& WithShippingPostalCode(Aws::String&& value) { SetShippingPostalCode(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithShippingPostalCode(const char* value) { SetShippingPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingProvince() const{ return m_shippingProvince; }
    inline bool ShippingProvinceHasBeenSet() const { return m_shippingProvinceHasBeenSet; }
    inline void SetShippingProvince(const Aws::String& value) { m_shippingProvinceHasBeenSet = true; m_shippingProvince = value; }
    inline void SetShippingProvince(Aws::String&& value) { m_shippingProvinceHasBeenSet = true; m_shippingProvince = std::move(value); }
    inline void SetShippingProvince(const char* value) { m_shippingProvinceHasBeenSet = true; m_shippingProvince.assign(value); }
    inline CustomerProfileAttributes& WithShippingProvince(const Aws::String& value) { SetShippingProvince(value); return *this;}
    inline CustomerProfileAttributes& WithShippingProvince(Aws::String&& value) { SetShippingProvince(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithShippingProvince(const char* value) { SetShippingProvince(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a customer’s shipping address.</p>
     */
    inline const Aws::String& GetShippingState() const{ return m_shippingState; }
    inline bool ShippingStateHasBeenSet() const { return m_shippingStateHasBeenSet; }
    inline void SetShippingState(const Aws::String& value) { m_shippingStateHasBeenSet = true; m_shippingState = value; }
    inline void SetShippingState(Aws::String&& value) { m_shippingStateHasBeenSet = true; m_shippingState = std::move(value); }
    inline void SetShippingState(const char* value) { m_shippingStateHasBeenSet = true; m_shippingState.assign(value); }
    inline CustomerProfileAttributes& WithShippingState(const Aws::String& value) { SetShippingState(value); return *this;}
    inline CustomerProfileAttributes& WithShippingState(Aws::String&& value) { SetShippingState(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithShippingState(const char* value) { SetShippingState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state in which a customer lives.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline CustomerProfileAttributes& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline CustomerProfileAttributes& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline CustomerProfileAttributes& WithState(const char* value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_accountNumber;
    bool m_accountNumberHasBeenSet = false;

    Aws::String m_additionalInformation;
    bool m_additionalInformationHasBeenSet = false;

    Aws::String m_address1;
    bool m_address1HasBeenSet = false;

    Aws::String m_address2;
    bool m_address2HasBeenSet = false;

    Aws::String m_address3;
    bool m_address3HasBeenSet = false;

    Aws::String m_address4;
    bool m_address4HasBeenSet = false;

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

    Aws::String m_billingCountry;
    bool m_billingCountryHasBeenSet = false;

    Aws::String m_billingCounty;
    bool m_billingCountyHasBeenSet = false;

    Aws::String m_billingPostalCode;
    bool m_billingPostalCodeHasBeenSet = false;

    Aws::String m_billingProvince;
    bool m_billingProvinceHasBeenSet = false;

    Aws::String m_billingState;
    bool m_billingStateHasBeenSet = false;

    Aws::String m_birthDate;
    bool m_birthDateHasBeenSet = false;

    Aws::String m_businessEmailAddress;
    bool m_businessEmailAddressHasBeenSet = false;

    Aws::String m_businessName;
    bool m_businessNameHasBeenSet = false;

    Aws::String m_businessPhoneNumber;
    bool m_businessPhoneNumberHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_county;
    bool m_countyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_custom;
    bool m_customHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_gender;
    bool m_genderHasBeenSet = false;

    Aws::String m_homePhoneNumber;
    bool m_homePhoneNumberHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

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

    Aws::String m_mailingCountry;
    bool m_mailingCountryHasBeenSet = false;

    Aws::String m_mailingCounty;
    bool m_mailingCountyHasBeenSet = false;

    Aws::String m_mailingPostalCode;
    bool m_mailingPostalCodeHasBeenSet = false;

    Aws::String m_mailingProvince;
    bool m_mailingProvinceHasBeenSet = false;

    Aws::String m_mailingState;
    bool m_mailingStateHasBeenSet = false;

    Aws::String m_middleName;
    bool m_middleNameHasBeenSet = false;

    Aws::String m_mobilePhoneNumber;
    bool m_mobilePhoneNumberHasBeenSet = false;

    Aws::String m_partyType;
    bool m_partyTypeHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_profileARN;
    bool m_profileARNHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_province;
    bool m_provinceHasBeenSet = false;

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

    Aws::String m_shippingCountry;
    bool m_shippingCountryHasBeenSet = false;

    Aws::String m_shippingCounty;
    bool m_shippingCountyHasBeenSet = false;

    Aws::String m_shippingPostalCode;
    bool m_shippingPostalCodeHasBeenSet = false;

    Aws::String m_shippingProvince;
    bool m_shippingProvinceHasBeenSet = false;

    Aws::String m_shippingState;
    bool m_shippingStateHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
