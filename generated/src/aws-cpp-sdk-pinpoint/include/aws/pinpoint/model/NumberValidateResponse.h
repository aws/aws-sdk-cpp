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
    AWS_PINPOINT_API NumberValidateResponse() = default;
    AWS_PINPOINT_API NumberValidateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API NumberValidateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The carrier or service provider that the phone number is currently registered
     * with. In some countries and regions, this value may be the carrier or service
     * provider that the phone number was originally registered with.</p>
     */
    inline const Aws::String& GetCarrier() const { return m_carrier; }
    inline bool CarrierHasBeenSet() const { return m_carrierHasBeenSet; }
    template<typename CarrierT = Aws::String>
    void SetCarrier(CarrierT&& value) { m_carrierHasBeenSet = true; m_carrier = std::forward<CarrierT>(value); }
    template<typename CarrierT = Aws::String>
    NumberValidateResponse& WithCarrier(CarrierT&& value) { SetCarrier(std::forward<CarrierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the city where the phone number was originally registered.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    NumberValidateResponse& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cleansed phone number, in E.164 format, for the location where the phone
     * number was originally registered.</p>
     */
    inline const Aws::String& GetCleansedPhoneNumberE164() const { return m_cleansedPhoneNumberE164; }
    inline bool CleansedPhoneNumberE164HasBeenSet() const { return m_cleansedPhoneNumberE164HasBeenSet; }
    template<typename CleansedPhoneNumberE164T = Aws::String>
    void SetCleansedPhoneNumberE164(CleansedPhoneNumberE164T&& value) { m_cleansedPhoneNumberE164HasBeenSet = true; m_cleansedPhoneNumberE164 = std::forward<CleansedPhoneNumberE164T>(value); }
    template<typename CleansedPhoneNumberE164T = Aws::String>
    NumberValidateResponse& WithCleansedPhoneNumberE164(CleansedPhoneNumberE164T&& value) { SetCleansedPhoneNumberE164(std::forward<CleansedPhoneNumberE164T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cleansed phone number, in the format for the location where the phone
     * number was originally registered.</p>
     */
    inline const Aws::String& GetCleansedPhoneNumberNational() const { return m_cleansedPhoneNumberNational; }
    inline bool CleansedPhoneNumberNationalHasBeenSet() const { return m_cleansedPhoneNumberNationalHasBeenSet; }
    template<typename CleansedPhoneNumberNationalT = Aws::String>
    void SetCleansedPhoneNumberNational(CleansedPhoneNumberNationalT&& value) { m_cleansedPhoneNumberNationalHasBeenSet = true; m_cleansedPhoneNumberNational = std::forward<CleansedPhoneNumberNationalT>(value); }
    template<typename CleansedPhoneNumberNationalT = Aws::String>
    NumberValidateResponse& WithCleansedPhoneNumberNational(CleansedPhoneNumberNationalT&& value) { SetCleansedPhoneNumberNational(std::forward<CleansedPhoneNumberNationalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the country or region where the phone number was originally
     * registered.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    NumberValidateResponse& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline const Aws::String& GetCountryCodeIso2() const { return m_countryCodeIso2; }
    inline bool CountryCodeIso2HasBeenSet() const { return m_countryCodeIso2HasBeenSet; }
    template<typename CountryCodeIso2T = Aws::String>
    void SetCountryCodeIso2(CountryCodeIso2T&& value) { m_countryCodeIso2HasBeenSet = true; m_countryCodeIso2 = std::forward<CountryCodeIso2T>(value); }
    template<typename CountryCodeIso2T = Aws::String>
    NumberValidateResponse& WithCountryCodeIso2(CountryCodeIso2T&& value) { SetCountryCodeIso2(std::forward<CountryCodeIso2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric code for the country or region where the phone number was
     * originally registered.</p>
     */
    inline const Aws::String& GetCountryCodeNumeric() const { return m_countryCodeNumeric; }
    inline bool CountryCodeNumericHasBeenSet() const { return m_countryCodeNumericHasBeenSet; }
    template<typename CountryCodeNumericT = Aws::String>
    void SetCountryCodeNumeric(CountryCodeNumericT&& value) { m_countryCodeNumericHasBeenSet = true; m_countryCodeNumeric = std::forward<CountryCodeNumericT>(value); }
    template<typename CountryCodeNumericT = Aws::String>
    NumberValidateResponse& WithCountryCodeNumeric(CountryCodeNumericT&& value) { SetCountryCodeNumeric(std::forward<CountryCodeNumericT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the county where the phone number was originally registered.</p>
     */
    inline const Aws::String& GetCounty() const { return m_county; }
    inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }
    template<typename CountyT = Aws::String>
    void SetCounty(CountyT&& value) { m_countyHasBeenSet = true; m_county = std::forward<CountyT>(value); }
    template<typename CountyT = Aws::String>
    NumberValidateResponse& WithCounty(CountyT&& value) { SetCounty(std::forward<CountyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, that was sent in the
     * request body.</p>
     */
    inline const Aws::String& GetOriginalCountryCodeIso2() const { return m_originalCountryCodeIso2; }
    inline bool OriginalCountryCodeIso2HasBeenSet() const { return m_originalCountryCodeIso2HasBeenSet; }
    template<typename OriginalCountryCodeIso2T = Aws::String>
    void SetOriginalCountryCodeIso2(OriginalCountryCodeIso2T&& value) { m_originalCountryCodeIso2HasBeenSet = true; m_originalCountryCodeIso2 = std::forward<OriginalCountryCodeIso2T>(value); }
    template<typename OriginalCountryCodeIso2T = Aws::String>
    NumberValidateResponse& WithOriginalCountryCodeIso2(OriginalCountryCodeIso2T&& value) { SetOriginalCountryCodeIso2(std::forward<OriginalCountryCodeIso2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number that was sent in the request body.</p>
     */
    inline const Aws::String& GetOriginalPhoneNumber() const { return m_originalPhoneNumber; }
    inline bool OriginalPhoneNumberHasBeenSet() const { return m_originalPhoneNumberHasBeenSet; }
    template<typename OriginalPhoneNumberT = Aws::String>
    void SetOriginalPhoneNumber(OriginalPhoneNumberT&& value) { m_originalPhoneNumberHasBeenSet = true; m_originalPhoneNumber = std::forward<OriginalPhoneNumberT>(value); }
    template<typename OriginalPhoneNumberT = Aws::String>
    NumberValidateResponse& WithOriginalPhoneNumber(OriginalPhoneNumberT&& value) { SetOriginalPhoneNumber(std::forward<OriginalPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the phone type. Valid values are: MOBILE, LANDLINE, VOIP,

     *                  INVALID, PREPAID, and OTHER.</p>
     */
    inline const Aws::String& GetPhoneType() const { return m_phoneType; }
    inline bool PhoneTypeHasBeenSet() const { return m_phoneTypeHasBeenSet; }
    template<typename PhoneTypeT = Aws::String>
    void SetPhoneType(PhoneTypeT&& value) { m_phoneTypeHasBeenSet = true; m_phoneType = std::forward<PhoneTypeT>(value); }
    template<typename PhoneTypeT = Aws::String>
    NumberValidateResponse& WithPhoneType(PhoneTypeT&& value) { SetPhoneType(std::forward<PhoneTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone type, represented by an integer. Valid values are: 0 (mobile), 1
     * (landline), 2 (VoIP), 3 (invalid), 4 (other), and 5 (prepaid).</p>
     */
    inline int GetPhoneTypeCode() const { return m_phoneTypeCode; }
    inline bool PhoneTypeCodeHasBeenSet() const { return m_phoneTypeCodeHasBeenSet; }
    inline void SetPhoneTypeCode(int value) { m_phoneTypeCodeHasBeenSet = true; m_phoneTypeCode = value; }
    inline NumberValidateResponse& WithPhoneTypeCode(int value) { SetPhoneTypeCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone for the location where the phone number was originally
     * registered.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    NumberValidateResponse& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal or ZIP code for the location where the phone number was originally
     * registered.</p>
     */
    inline const Aws::String& GetZipCode() const { return m_zipCode; }
    inline bool ZipCodeHasBeenSet() const { return m_zipCodeHasBeenSet; }
    template<typename ZipCodeT = Aws::String>
    void SetZipCode(ZipCodeT&& value) { m_zipCodeHasBeenSet = true; m_zipCode = std::forward<ZipCodeT>(value); }
    template<typename ZipCodeT = Aws::String>
    NumberValidateResponse& WithZipCode(ZipCodeT&& value) { SetZipCode(std::forward<ZipCodeT>(value)); return *this;}
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

    int m_phoneTypeCode{0};
    bool m_phoneTypeCodeHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    Aws::String m_zipCode;
    bool m_zipCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
