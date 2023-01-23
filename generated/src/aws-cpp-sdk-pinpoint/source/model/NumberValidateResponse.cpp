/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/NumberValidateResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

NumberValidateResponse::NumberValidateResponse() : 
    m_carrierHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_cleansedPhoneNumberE164HasBeenSet(false),
    m_cleansedPhoneNumberNationalHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_countryCodeIso2HasBeenSet(false),
    m_countryCodeNumericHasBeenSet(false),
    m_countyHasBeenSet(false),
    m_originalCountryCodeIso2HasBeenSet(false),
    m_originalPhoneNumberHasBeenSet(false),
    m_phoneTypeHasBeenSet(false),
    m_phoneTypeCode(0),
    m_phoneTypeCodeHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_zipCodeHasBeenSet(false)
{
}

NumberValidateResponse::NumberValidateResponse(JsonView jsonValue) : 
    m_carrierHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_cleansedPhoneNumberE164HasBeenSet(false),
    m_cleansedPhoneNumberNationalHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_countryCodeIso2HasBeenSet(false),
    m_countryCodeNumericHasBeenSet(false),
    m_countyHasBeenSet(false),
    m_originalCountryCodeIso2HasBeenSet(false),
    m_originalPhoneNumberHasBeenSet(false),
    m_phoneTypeHasBeenSet(false),
    m_phoneTypeCode(0),
    m_phoneTypeCodeHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_zipCodeHasBeenSet(false)
{
  *this = jsonValue;
}

NumberValidateResponse& NumberValidateResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Carrier"))
  {
    m_carrier = jsonValue.GetString("Carrier");

    m_carrierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");

    m_cityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CleansedPhoneNumberE164"))
  {
    m_cleansedPhoneNumberE164 = jsonValue.GetString("CleansedPhoneNumberE164");

    m_cleansedPhoneNumberE164HasBeenSet = true;
  }

  if(jsonValue.ValueExists("CleansedPhoneNumberNational"))
  {
    m_cleansedPhoneNumberNational = jsonValue.GetString("CleansedPhoneNumberNational");

    m_cleansedPhoneNumberNationalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountryCodeIso2"))
  {
    m_countryCodeIso2 = jsonValue.GetString("CountryCodeIso2");

    m_countryCodeIso2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountryCodeNumeric"))
  {
    m_countryCodeNumeric = jsonValue.GetString("CountryCodeNumeric");

    m_countryCodeNumericHasBeenSet = true;
  }

  if(jsonValue.ValueExists("County"))
  {
    m_county = jsonValue.GetString("County");

    m_countyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginalCountryCodeIso2"))
  {
    m_originalCountryCodeIso2 = jsonValue.GetString("OriginalCountryCodeIso2");

    m_originalCountryCodeIso2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginalPhoneNumber"))
  {
    m_originalPhoneNumber = jsonValue.GetString("OriginalPhoneNumber");

    m_originalPhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneType"))
  {
    m_phoneType = jsonValue.GetString("PhoneType");

    m_phoneTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneTypeCode"))
  {
    m_phoneTypeCode = jsonValue.GetInteger("PhoneTypeCode");

    m_phoneTypeCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZipCode"))
  {
    m_zipCode = jsonValue.GetString("ZipCode");

    m_zipCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue NumberValidateResponse::Jsonize() const
{
  JsonValue payload;

  if(m_carrierHasBeenSet)
  {
   payload.WithString("Carrier", m_carrier);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_cleansedPhoneNumberE164HasBeenSet)
  {
   payload.WithString("CleansedPhoneNumberE164", m_cleansedPhoneNumberE164);

  }

  if(m_cleansedPhoneNumberNationalHasBeenSet)
  {
   payload.WithString("CleansedPhoneNumberNational", m_cleansedPhoneNumberNational);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_countryCodeIso2HasBeenSet)
  {
   payload.WithString("CountryCodeIso2", m_countryCodeIso2);

  }

  if(m_countryCodeNumericHasBeenSet)
  {
   payload.WithString("CountryCodeNumeric", m_countryCodeNumeric);

  }

  if(m_countyHasBeenSet)
  {
   payload.WithString("County", m_county);

  }

  if(m_originalCountryCodeIso2HasBeenSet)
  {
   payload.WithString("OriginalCountryCodeIso2", m_originalCountryCodeIso2);

  }

  if(m_originalPhoneNumberHasBeenSet)
  {
   payload.WithString("OriginalPhoneNumber", m_originalPhoneNumber);

  }

  if(m_phoneTypeHasBeenSet)
  {
   payload.WithString("PhoneType", m_phoneType);

  }

  if(m_phoneTypeCodeHasBeenSet)
  {
   payload.WithInteger("PhoneTypeCode", m_phoneTypeCode);

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  if(m_zipCodeHasBeenSet)
  {
   payload.WithString("ZipCode", m_zipCode);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
