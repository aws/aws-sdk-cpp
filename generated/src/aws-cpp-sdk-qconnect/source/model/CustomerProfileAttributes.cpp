/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/CustomerProfileAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

CustomerProfileAttributes::CustomerProfileAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomerProfileAttributes& CustomerProfileAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("profileId"))
  {
    m_profileId = jsonValue.GetString("profileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profileARN"))
  {
    m_profileARN = jsonValue.GetString("profileARN");
    m_profileARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("firstName"))
  {
    m_firstName = jsonValue.GetString("firstName");
    m_firstNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("middleName"))
  {
    m_middleName = jsonValue.GetString("middleName");
    m_middleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastName"))
  {
    m_lastName = jsonValue.GetString("lastName");
    m_lastNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountNumber"))
  {
    m_accountNumber = jsonValue.GetString("accountNumber");
    m_accountNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("emailAddress"))
  {
    m_emailAddress = jsonValue.GetString("emailAddress");
    m_emailAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("phoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("phoneNumber");
    m_phoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalInformation"))
  {
    m_additionalInformation = jsonValue.GetString("additionalInformation");
    m_additionalInformationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("partyType"))
  {
    m_partyType = jsonValue.GetString("partyType");
    m_partyTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("businessName"))
  {
    m_businessName = jsonValue.GetString("businessName");
    m_businessNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("birthDate"))
  {
    m_birthDate = jsonValue.GetString("birthDate");
    m_birthDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gender"))
  {
    m_gender = jsonValue.GetString("gender");
    m_genderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mobilePhoneNumber"))
  {
    m_mobilePhoneNumber = jsonValue.GetString("mobilePhoneNumber");
    m_mobilePhoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("homePhoneNumber"))
  {
    m_homePhoneNumber = jsonValue.GetString("homePhoneNumber");
    m_homePhoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("businessPhoneNumber"))
  {
    m_businessPhoneNumber = jsonValue.GetString("businessPhoneNumber");
    m_businessPhoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("businessEmailAddress"))
  {
    m_businessEmailAddress = jsonValue.GetString("businessEmailAddress");
    m_businessEmailAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("address1"))
  {
    m_address1 = jsonValue.GetString("address1");
    m_address1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("address2"))
  {
    m_address2 = jsonValue.GetString("address2");
    m_address2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("address3"))
  {
    m_address3 = jsonValue.GetString("address3");
    m_address3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("address4"))
  {
    m_address4 = jsonValue.GetString("address4");
    m_address4HasBeenSet = true;
  }
  if(jsonValue.ValueExists("city"))
  {
    m_city = jsonValue.GetString("city");
    m_cityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("county"))
  {
    m_county = jsonValue.GetString("county");
    m_countyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("country"))
  {
    m_country = jsonValue.GetString("country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("postalCode"))
  {
    m_postalCode = jsonValue.GetString("postalCode");
    m_postalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("province"))
  {
    m_province = jsonValue.GetString("province");
    m_provinceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetString("state");
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shippingAddress1"))
  {
    m_shippingAddress1 = jsonValue.GetString("shippingAddress1");
    m_shippingAddress1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("shippingAddress2"))
  {
    m_shippingAddress2 = jsonValue.GetString("shippingAddress2");
    m_shippingAddress2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("shippingAddress3"))
  {
    m_shippingAddress3 = jsonValue.GetString("shippingAddress3");
    m_shippingAddress3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("shippingAddress4"))
  {
    m_shippingAddress4 = jsonValue.GetString("shippingAddress4");
    m_shippingAddress4HasBeenSet = true;
  }
  if(jsonValue.ValueExists("shippingCity"))
  {
    m_shippingCity = jsonValue.GetString("shippingCity");
    m_shippingCityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shippingCounty"))
  {
    m_shippingCounty = jsonValue.GetString("shippingCounty");
    m_shippingCountyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shippingCountry"))
  {
    m_shippingCountry = jsonValue.GetString("shippingCountry");
    m_shippingCountryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shippingPostalCode"))
  {
    m_shippingPostalCode = jsonValue.GetString("shippingPostalCode");
    m_shippingPostalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shippingProvince"))
  {
    m_shippingProvince = jsonValue.GetString("shippingProvince");
    m_shippingProvinceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shippingState"))
  {
    m_shippingState = jsonValue.GetString("shippingState");
    m_shippingStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mailingAddress1"))
  {
    m_mailingAddress1 = jsonValue.GetString("mailingAddress1");
    m_mailingAddress1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("mailingAddress2"))
  {
    m_mailingAddress2 = jsonValue.GetString("mailingAddress2");
    m_mailingAddress2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("mailingAddress3"))
  {
    m_mailingAddress3 = jsonValue.GetString("mailingAddress3");
    m_mailingAddress3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("mailingAddress4"))
  {
    m_mailingAddress4 = jsonValue.GetString("mailingAddress4");
    m_mailingAddress4HasBeenSet = true;
  }
  if(jsonValue.ValueExists("mailingCity"))
  {
    m_mailingCity = jsonValue.GetString("mailingCity");
    m_mailingCityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mailingCounty"))
  {
    m_mailingCounty = jsonValue.GetString("mailingCounty");
    m_mailingCountyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mailingCountry"))
  {
    m_mailingCountry = jsonValue.GetString("mailingCountry");
    m_mailingCountryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mailingPostalCode"))
  {
    m_mailingPostalCode = jsonValue.GetString("mailingPostalCode");
    m_mailingPostalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mailingProvince"))
  {
    m_mailingProvince = jsonValue.GetString("mailingProvince");
    m_mailingProvinceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mailingState"))
  {
    m_mailingState = jsonValue.GetString("mailingState");
    m_mailingStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingAddress1"))
  {
    m_billingAddress1 = jsonValue.GetString("billingAddress1");
    m_billingAddress1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingAddress2"))
  {
    m_billingAddress2 = jsonValue.GetString("billingAddress2");
    m_billingAddress2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingAddress3"))
  {
    m_billingAddress3 = jsonValue.GetString("billingAddress3");
    m_billingAddress3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingAddress4"))
  {
    m_billingAddress4 = jsonValue.GetString("billingAddress4");
    m_billingAddress4HasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingCity"))
  {
    m_billingCity = jsonValue.GetString("billingCity");
    m_billingCityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingCounty"))
  {
    m_billingCounty = jsonValue.GetString("billingCounty");
    m_billingCountyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingCountry"))
  {
    m_billingCountry = jsonValue.GetString("billingCountry");
    m_billingCountryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingPostalCode"))
  {
    m_billingPostalCode = jsonValue.GetString("billingPostalCode");
    m_billingPostalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingProvince"))
  {
    m_billingProvince = jsonValue.GetString("billingProvince");
    m_billingProvinceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingState"))
  {
    m_billingState = jsonValue.GetString("billingState");
    m_billingStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("custom"))
  {
    Aws::Map<Aws::String, JsonView> customJsonMap = jsonValue.GetObject("custom").GetAllObjects();
    for(auto& customItem : customJsonMap)
    {
      m_custom[customItem.first] = customItem.second.AsString();
    }
    m_customHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerProfileAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("profileId", m_profileId);

  }

  if(m_profileARNHasBeenSet)
  {
   payload.WithString("profileARN", m_profileARN);

  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("firstName", m_firstName);

  }

  if(m_middleNameHasBeenSet)
  {
   payload.WithString("middleName", m_middleName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("lastName", m_lastName);

  }

  if(m_accountNumberHasBeenSet)
  {
   payload.WithString("accountNumber", m_accountNumber);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("emailAddress", m_emailAddress);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("phoneNumber", m_phoneNumber);

  }

  if(m_additionalInformationHasBeenSet)
  {
   payload.WithString("additionalInformation", m_additionalInformation);

  }

  if(m_partyTypeHasBeenSet)
  {
   payload.WithString("partyType", m_partyType);

  }

  if(m_businessNameHasBeenSet)
  {
   payload.WithString("businessName", m_businessName);

  }

  if(m_birthDateHasBeenSet)
  {
   payload.WithString("birthDate", m_birthDate);

  }

  if(m_genderHasBeenSet)
  {
   payload.WithString("gender", m_gender);

  }

  if(m_mobilePhoneNumberHasBeenSet)
  {
   payload.WithString("mobilePhoneNumber", m_mobilePhoneNumber);

  }

  if(m_homePhoneNumberHasBeenSet)
  {
   payload.WithString("homePhoneNumber", m_homePhoneNumber);

  }

  if(m_businessPhoneNumberHasBeenSet)
  {
   payload.WithString("businessPhoneNumber", m_businessPhoneNumber);

  }

  if(m_businessEmailAddressHasBeenSet)
  {
   payload.WithString("businessEmailAddress", m_businessEmailAddress);

  }

  if(m_address1HasBeenSet)
  {
   payload.WithString("address1", m_address1);

  }

  if(m_address2HasBeenSet)
  {
   payload.WithString("address2", m_address2);

  }

  if(m_address3HasBeenSet)
  {
   payload.WithString("address3", m_address3);

  }

  if(m_address4HasBeenSet)
  {
   payload.WithString("address4", m_address4);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("city", m_city);

  }

  if(m_countyHasBeenSet)
  {
   payload.WithString("county", m_county);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("country", m_country);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("postalCode", m_postalCode);

  }

  if(m_provinceHasBeenSet)
  {
   payload.WithString("province", m_province);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", m_state);

  }

  if(m_shippingAddress1HasBeenSet)
  {
   payload.WithString("shippingAddress1", m_shippingAddress1);

  }

  if(m_shippingAddress2HasBeenSet)
  {
   payload.WithString("shippingAddress2", m_shippingAddress2);

  }

  if(m_shippingAddress3HasBeenSet)
  {
   payload.WithString("shippingAddress3", m_shippingAddress3);

  }

  if(m_shippingAddress4HasBeenSet)
  {
   payload.WithString("shippingAddress4", m_shippingAddress4);

  }

  if(m_shippingCityHasBeenSet)
  {
   payload.WithString("shippingCity", m_shippingCity);

  }

  if(m_shippingCountyHasBeenSet)
  {
   payload.WithString("shippingCounty", m_shippingCounty);

  }

  if(m_shippingCountryHasBeenSet)
  {
   payload.WithString("shippingCountry", m_shippingCountry);

  }

  if(m_shippingPostalCodeHasBeenSet)
  {
   payload.WithString("shippingPostalCode", m_shippingPostalCode);

  }

  if(m_shippingProvinceHasBeenSet)
  {
   payload.WithString("shippingProvince", m_shippingProvince);

  }

  if(m_shippingStateHasBeenSet)
  {
   payload.WithString("shippingState", m_shippingState);

  }

  if(m_mailingAddress1HasBeenSet)
  {
   payload.WithString("mailingAddress1", m_mailingAddress1);

  }

  if(m_mailingAddress2HasBeenSet)
  {
   payload.WithString("mailingAddress2", m_mailingAddress2);

  }

  if(m_mailingAddress3HasBeenSet)
  {
   payload.WithString("mailingAddress3", m_mailingAddress3);

  }

  if(m_mailingAddress4HasBeenSet)
  {
   payload.WithString("mailingAddress4", m_mailingAddress4);

  }

  if(m_mailingCityHasBeenSet)
  {
   payload.WithString("mailingCity", m_mailingCity);

  }

  if(m_mailingCountyHasBeenSet)
  {
   payload.WithString("mailingCounty", m_mailingCounty);

  }

  if(m_mailingCountryHasBeenSet)
  {
   payload.WithString("mailingCountry", m_mailingCountry);

  }

  if(m_mailingPostalCodeHasBeenSet)
  {
   payload.WithString("mailingPostalCode", m_mailingPostalCode);

  }

  if(m_mailingProvinceHasBeenSet)
  {
   payload.WithString("mailingProvince", m_mailingProvince);

  }

  if(m_mailingStateHasBeenSet)
  {
   payload.WithString("mailingState", m_mailingState);

  }

  if(m_billingAddress1HasBeenSet)
  {
   payload.WithString("billingAddress1", m_billingAddress1);

  }

  if(m_billingAddress2HasBeenSet)
  {
   payload.WithString("billingAddress2", m_billingAddress2);

  }

  if(m_billingAddress3HasBeenSet)
  {
   payload.WithString("billingAddress3", m_billingAddress3);

  }

  if(m_billingAddress4HasBeenSet)
  {
   payload.WithString("billingAddress4", m_billingAddress4);

  }

  if(m_billingCityHasBeenSet)
  {
   payload.WithString("billingCity", m_billingCity);

  }

  if(m_billingCountyHasBeenSet)
  {
   payload.WithString("billingCounty", m_billingCounty);

  }

  if(m_billingCountryHasBeenSet)
  {
   payload.WithString("billingCountry", m_billingCountry);

  }

  if(m_billingPostalCodeHasBeenSet)
  {
   payload.WithString("billingPostalCode", m_billingPostalCode);

  }

  if(m_billingProvinceHasBeenSet)
  {
   payload.WithString("billingProvince", m_billingProvince);

  }

  if(m_billingStateHasBeenSet)
  {
   payload.WithString("billingState", m_billingState);

  }

  if(m_customHasBeenSet)
  {
   JsonValue customJsonMap;
   for(auto& customItem : m_custom)
   {
     customJsonMap.WithString(customItem.first, customItem.second);
   }
   payload.WithObject("custom", std::move(customJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
