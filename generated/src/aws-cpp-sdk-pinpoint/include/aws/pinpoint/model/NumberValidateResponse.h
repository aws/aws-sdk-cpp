/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about a phone number.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/NumberValidateResponse">AWS
   * API Reference</a></p>
   */
  class NumberValidateResponse
  {
  public:
    AWS_PINPOINT_API NumberValidateResponse();
    AWS_PINPOINT_API NumberValidateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API NumberValidateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The carrier or service provider that the phone number is currently registered
     * with. In some countries and regions, this value may be the carrier or service
     * provider that the phone number was originally registered with.</p>
     */
    inline const Aws::String& GetCarrier() const{ return m_carrier; }
    inline bool CarrierHasBeenSet() const { return m_carrierHasBeenSet; }
    inline void SetCarrier(const Aws::String& value) { m_carrierHasBeenSet = true; m_carrier = value; }
    inline void SetCarrier(Aws::String&& value) { m_carrierHasBeenSet = true; m_carrier = std::move(value); }
    inline void SetCarrier(const char* value) { m_carrierHasBeenSet = true; m_carrier.assign(value); }
    inline NumberValidateResponse& WithCarrier(const Aws::String& value) { SetCarrier(value); return *this;}
    inline NumberValidateResponse& WithCarrier(Aws::String&& value) { SetCarrier(std::move(value)); return *this;}
    inline NumberValidateResponse& WithCarrier(const char* value) { SetCarrier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the city where the phone number was originally registered.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline NumberValidateResponse& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline NumberValidateResponse& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline NumberValidateResponse& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cleansed phone number, in E.164 format, for the location where the phone
     * number was originally registered.</p>
     */
    inline const Aws::String& GetCleansedPhoneNumberE164() const{ return m_cleansedPhoneNumberE164; }
    inline bool CleansedPhoneNumberE164HasBeenSet() const { return m_cleansedPhoneNumberE164HasBeenSet; }
    inline void SetCleansedPhoneNumberE164(const Aws::String& value) { m_cleansedPhoneNumberE164HasBeenSet = true; m_cleansedPhoneNumberE164 = value; }
    inline void SetCleansedPhoneNumberE164(Aws::String&& value) { m_cleansedPhoneNumberE164HasBeenSet = true; m_cleansedPhoneNumberE164 = std::move(value); }
    inline void SetCleansedPhoneNumberE164(const char* value) { m_cleansedPhoneNumberE164HasBeenSet = true; m_cleansedPhoneNumberE164.assign(value); }
    inline NumberValidateResponse& WithCleansedPhoneNumberE164(const Aws::String& value) { SetCleansedPhoneNumberE164(value); return *this;}
    inline NumberValidateResponse& WithCleansedPhoneNumberE164(Aws::String&& value) { SetCleansedPhoneNumberE164(std::move(value)); return *this;}
    inline NumberValidateResponse& WithCleansedPhoneNumberE164(const char* value) { SetCleansedPhoneNumberE164(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cleansed phone number, in the format for the location where the phone
     * number was originally registered.</p>
     */
    inline const Aws::String& GetCleansedPhoneNumberNational() const{ return m_cleansedPhoneNumberNational; }
    inline bool CleansedPhoneNumberNationalHasBeenSet() const { return m_cleansedPhoneNumberNationalHasBeenSet; }
    inline void SetCleansedPhoneNumberNational(const Aws::String& value) { m_cleansedPhoneNumberNationalHasBeenSet = true; m_cleansedPhoneNumberNational = value; }
    inline void SetCleansedPhoneNumberNational(Aws::String&& value) { m_cleansedPhoneNumberNationalHasBeenSet = true; m_cleansedPhoneNumberNational = std::move(value); }
    inline void SetCleansedPhoneNumberNational(const char* value) { m_cleansedPhoneNumberNationalHasBeenSet = true; m_cleansedPhoneNumberNational.assign(value); }
    inline NumberValidateResponse& WithCleansedPhoneNumberNational(const Aws::String& value) { SetCleansedPhoneNumberNational(value); return *this;}
    inline NumberValidateResponse& WithCleansedPhoneNumberNational(Aws::String&& value) { SetCleansedPhoneNumberNational(std::move(value)); return *this;}
    inline NumberValidateResponse& WithCleansedPhoneNumberNational(const char* value) { SetCleansedPhoneNumberNational(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the country or region where the phone number was originally
     * registered.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline NumberValidateResponse& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline NumberValidateResponse& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline NumberValidateResponse& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline const Aws::String& GetCountryCodeIso2() const{ return m_countryCodeIso2; }
    inline bool CountryCodeIso2HasBeenSet() const { return m_countryCodeIso2HasBeenSet; }
    inline void SetCountryCodeIso2(const Aws::String& value) { m_countryCodeIso2HasBeenSet = true; m_countryCodeIso2 = value; }
    inline void SetCountryCodeIso2(Aws::String&& value) { m_countryCodeIso2HasBeenSet = true; m_countryCodeIso2 = std::move(value); }
    inline void SetCountryCodeIso2(const char* value) { m_countryCodeIso2HasBeenSet = true; m_countryCodeIso2.assign(value); }
    inline NumberValidateResponse& WithCountryCodeIso2(const Aws::String& value) { SetCountryCodeIso2(value); return *this;}
    inline NumberValidateResponse& WithCountryCodeIso2(Aws::String&& value) { SetCountryCodeIso2(std::move(value)); return *this;}
    inline NumberValidateResponse& WithCountryCodeIso2(const char* value) { SetCountryCodeIso2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric code for the country or region where the phone number was
     * originally registered.</p>
     */
    inline const Aws::String& GetCountryCodeNumeric() const{ return m_countryCodeNumeric; }
    inline bool CountryCodeNumericHasBeenSet() const { return m_countryCodeNumericHasBeenSet; }
    inline void SetCountryCodeNumeric(const Aws::String& value) { m_countryCodeNumericHasBeenSet = true; m_countryCodeNumeric = value; }
    inline void SetCountryCodeNumeric(Aws::String&& value) { m_countryCodeNumericHasBeenSet = true; m_countryCodeNumeric = std::move(value); }
    inline void SetCountryCodeNumeric(const char* value) { m_countryCodeNumericHasBeenSet = true; m_countryCodeNumeric.assign(value); }
    inline NumberValidateResponse& WithCountryCodeNumeric(const Aws::String& value) { SetCountryCodeNumeric(value); return *this;}
    inline NumberValidateResponse& WithCountryCodeNumeric(Aws::String&& value) { SetCountryCodeNumeric(std::move(value)); return *this;}
    inline NumberValidateResponse& WithCountryCodeNumeric(const char* value) { SetCountryCodeNumeric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the county where the phone number was originally registered.</p>
     */
    inline const Aws::String& GetCounty() const{ return m_county; }
    inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }
    inline void SetCounty(const Aws::String& value) { m_countyHasBeenSet = true; m_county = value; }
    inline void SetCounty(Aws::String&& value) { m_countyHasBeenSet = true; m_county = std::move(value); }
    inline void SetCounty(const char* value) { m_countyHasBeenSet = true; m_county.assign(value); }
    inline NumberValidateResponse& WithCounty(const Aws::String& value) { SetCounty(value); return *this;}
    inline NumberValidateResponse& WithCounty(Aws::String&& value) { SetCounty(std::move(value)); return *this;}
    inline NumberValidateResponse& WithCounty(const char* value) { SetCounty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, that was sent in the
     * request body.</p>
     */
    inline const Aws::String& GetOriginalCountryCodeIso2() const{ return m_originalCountryCodeIso2; }
    inline bool OriginalCountryCodeIso2HasBeenSet() const { return m_originalCountryCodeIso2HasBeenSet; }
    inline void SetOriginalCountryCodeIso2(const Aws::String& value) { m_originalCountryCodeIso2HasBeenSet = true; m_originalCountryCodeIso2 = value; }
    inline void SetOriginalCountryCodeIso2(Aws::String&& value) { m_originalCountryCodeIso2HasBeenSet = true; m_originalCountryCodeIso2 = std::move(value); }
    inline void SetOriginalCountryCodeIso2(const char* value) { m_originalCountryCodeIso2HasBeenSet = true; m_originalCountryCodeIso2.assign(value); }
    inline NumberValidateResponse& WithOriginalCountryCodeIso2(const Aws::String& value) { SetOriginalCountryCodeIso2(value); return *this;}
    inline NumberValidateResponse& WithOriginalCountryCodeIso2(Aws::String&& value) { SetOriginalCountryCodeIso2(std::move(value)); return *this;}
    inline NumberValidateResponse& WithOriginalCountryCodeIso2(const char* value) { SetOriginalCountryCodeIso2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number that was sent in the request body.</p>
     */
    inline const Aws::String& GetOriginalPhoneNumber() const{ return m_originalPhoneNumber; }
    inline bool OriginalPhoneNumberHasBeenSet() const { return m_originalPhoneNumberHasBeenSet; }
    inline void SetOriginalPhoneNumber(const Aws::String& value) { m_originalPhoneNumberHasBeenSet = true; m_originalPhoneNumber = value; }
    inline void SetOriginalPhoneNumber(Aws::String&& value) { m_originalPhoneNumberHasBeenSet = true; m_originalPhoneNumber = std::move(value); }
    inline void SetOriginalPhoneNumber(const char* value) { m_originalPhoneNumberHasBeenSet = true; m_originalPhoneNumber.assign(value); }
    inline NumberValidateResponse& WithOriginalPhoneNumber(const Aws::String& value) { SetOriginalPhoneNumber(value); return *this;}
    inline NumberValidateResponse& WithOriginalPhoneNumber(Aws::String&& value) { SetOriginalPhoneNumber(std::move(value)); return *this;}
    inline NumberValidateResponse& WithOriginalPhoneNumber(const char* value) { SetOriginalPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the phone type. Valid values are: MOBILE, LANDLINE, VOIP,

     *                  INVALID, PREPAID, and OTHER.</p>
     */
    inline const Aws::String& GetPhoneType() const{ return m_phoneType; }
    inline bool PhoneTypeHasBeenSet() const { return m_phoneTypeHasBeenSet; }
    inline void SetPhoneType(const Aws::String& value) { m_phoneTypeHasBeenSet = true; m_phoneType = value; }
    inline void SetPhoneType(Aws::String&& value) { m_phoneTypeHasBeenSet = true; m_phoneType = std::move(value); }
    inline void SetPhoneType(const char* value) { m_phoneTypeHasBeenSet = true; m_phoneType.assign(value); }
    inline NumberValidateResponse& WithPhoneType(const Aws::String& value) { SetPhoneType(value); return *this;}
    inline NumberValidateResponse& WithPhoneType(Aws::String&& value) { SetPhoneType(std::move(value)); return *this;}
    inline NumberValidateResponse& WithPhoneType(const char* value) { SetPhoneType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone type, represented by an integer. Valid values are: 0 (mobile), 1
     * (landline), 2 (VoIP), 3 (invalid), 4 (other), and 5 (prepaid).</p>
     */
    inline int GetPhoneTypeCode() const{ return m_phoneTypeCode; }
    inline bool PhoneTypeCodeHasBeenSet() const { return m_phoneTypeCodeHasBeenSet; }
    inline void SetPhoneTypeCode(int value) { m_phoneTypeCodeHasBeenSet = true; m_phoneTypeCode = value; }
    inline NumberValidateResponse& WithPhoneTypeCode(int value) { SetPhoneTypeCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone for the location where the phone number was originally
     * registered.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }
    inline NumberValidateResponse& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline NumberValidateResponse& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline NumberValidateResponse& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal or ZIP code for the location where the phone number was originally
     * registered.</p>
     */
    inline const Aws::String& GetZipCode() const{ return m_zipCode; }
    inline bool ZipCodeHasBeenSet() const { return m_zipCodeHasBeenSet; }
    inline void SetZipCode(const Aws::String& value) { m_zipCodeHasBeenSet = true; m_zipCode = value; }
    inline void SetZipCode(Aws::String&& value) { m_zipCodeHasBeenSet = true; m_zipCode = std::move(value); }
    inline void SetZipCode(const char* value) { m_zipCodeHasBeenSet = true; m_zipCode.assign(value); }
    inline NumberValidateResponse& WithZipCode(const Aws::String& value) { SetZipCode(value); return *this;}
    inline NumberValidateResponse& WithZipCode(Aws::String&& value) { SetZipCode(std::move(value)); return *this;}
    inline NumberValidateResponse& WithZipCode(const char* value) { SetZipCode(value); return *this;}
    ///@}
  private:

    Aws::String m_carrier;
    bool m_carrierHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_cleansedPhoneNumberE164;
    bool m_cleansedPhoneNumberE164HasBeenSet = false;

    Aws::String m_cleansedPhoneNumberNational;
    bool m_cleansedPhoneNumberNationalHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_countryCodeIso2;
    bool m_countryCodeIso2HasBeenSet = false;

    Aws::String m_countryCodeNumeric;
    bool m_countryCodeNumericHasBeenSet = false;

    Aws::String m_county;
    bool m_countyHasBeenSet = false;

    Aws::String m_originalCountryCodeIso2;
    bool m_originalCountryCodeIso2HasBeenSet = false;

    Aws::String m_originalPhoneNumber;
    bool m_originalPhoneNumberHasBeenSet = false;

    Aws::String m_phoneType;
    bool m_phoneTypeHasBeenSet = false;

    int m_phoneTypeCode;
    bool m_phoneTypeCodeHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    Aws::String m_zipCode;
    bool m_zipCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
