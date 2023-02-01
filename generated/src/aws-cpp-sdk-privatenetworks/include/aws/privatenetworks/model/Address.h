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
    AWS_PRIVATENETWORKS_API Address();
    AWS_PRIVATENETWORKS_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The city for this address.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The city for this address.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The city for this address.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The city for this address.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The city for this address.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The city for this address.</p>
     */
    inline Address& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The city for this address.</p>
     */
    inline Address& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The city for this address.</p>
     */
    inline Address& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The company name for this address.</p>
     */
    inline const Aws::String& GetCompany() const{ return m_company; }

    /**
     * <p>The company name for this address.</p>
     */
    inline bool CompanyHasBeenSet() const { return m_companyHasBeenSet; }

    /**
     * <p>The company name for this address.</p>
     */
    inline void SetCompany(const Aws::String& value) { m_companyHasBeenSet = true; m_company = value; }

    /**
     * <p>The company name for this address.</p>
     */
    inline void SetCompany(Aws::String&& value) { m_companyHasBeenSet = true; m_company = std::move(value); }

    /**
     * <p>The company name for this address.</p>
     */
    inline void SetCompany(const char* value) { m_companyHasBeenSet = true; m_company.assign(value); }

    /**
     * <p>The company name for this address.</p>
     */
    inline Address& WithCompany(const Aws::String& value) { SetCompany(value); return *this;}

    /**
     * <p>The company name for this address.</p>
     */
    inline Address& WithCompany(Aws::String&& value) { SetCompany(std::move(value)); return *this;}

    /**
     * <p>The company name for this address.</p>
     */
    inline Address& WithCompany(const char* value) { SetCompany(value); return *this;}


    /**
     * <p>The country for this address.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The country for this address.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The country for this address.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The country for this address.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The country for this address.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The country for this address.</p>
     */
    inline Address& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The country for this address.</p>
     */
    inline Address& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>The country for this address.</p>
     */
    inline Address& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * <p>The recipient's name for this address.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The recipient's name for this address.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The recipient's name for this address.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The recipient's name for this address.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The recipient's name for this address.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The recipient's name for this address.</p>
     */
    inline Address& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The recipient's name for this address.</p>
     */
    inline Address& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The recipient's name for this address.</p>
     */
    inline Address& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The phone number for this address.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number for this address.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number for this address.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number for this address.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number for this address.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number for this address.</p>
     */
    inline Address& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number for this address.</p>
     */
    inline Address& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number for this address.</p>
     */
    inline Address& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The postal code for this address.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    /**
     * <p>The postal code for this address.</p>
     */
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    /**
     * <p>The postal code for this address.</p>
     */
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * <p>The postal code for this address.</p>
     */
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    /**
     * <p>The postal code for this address.</p>
     */
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    /**
     * <p>The postal code for this address.</p>
     */
    inline Address& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    /**
     * <p>The postal code for this address.</p>
     */
    inline Address& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    /**
     * <p>The postal code for this address.</p>
     */
    inline Address& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    /**
     * <p>The state or province for this address.</p>
     */
    inline const Aws::String& GetStateOrProvince() const{ return m_stateOrProvince; }

    /**
     * <p>The state or province for this address.</p>
     */
    inline bool StateOrProvinceHasBeenSet() const { return m_stateOrProvinceHasBeenSet; }

    /**
     * <p>The state or province for this address.</p>
     */
    inline void SetStateOrProvince(const Aws::String& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = value; }

    /**
     * <p>The state or province for this address.</p>
     */
    inline void SetStateOrProvince(Aws::String&& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = std::move(value); }

    /**
     * <p>The state or province for this address.</p>
     */
    inline void SetStateOrProvince(const char* value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince.assign(value); }

    /**
     * <p>The state or province for this address.</p>
     */
    inline Address& WithStateOrProvince(const Aws::String& value) { SetStateOrProvince(value); return *this;}

    /**
     * <p>The state or province for this address.</p>
     */
    inline Address& WithStateOrProvince(Aws::String&& value) { SetStateOrProvince(std::move(value)); return *this;}

    /**
     * <p>The state or province for this address.</p>
     */
    inline Address& WithStateOrProvince(const char* value) { SetStateOrProvince(value); return *this;}


    /**
     * <p>The first line of the street address.</p>
     */
    inline const Aws::String& GetStreet1() const{ return m_street1; }

    /**
     * <p>The first line of the street address.</p>
     */
    inline bool Street1HasBeenSet() const { return m_street1HasBeenSet; }

    /**
     * <p>The first line of the street address.</p>
     */
    inline void SetStreet1(const Aws::String& value) { m_street1HasBeenSet = true; m_street1 = value; }

    /**
     * <p>The first line of the street address.</p>
     */
    inline void SetStreet1(Aws::String&& value) { m_street1HasBeenSet = true; m_street1 = std::move(value); }

    /**
     * <p>The first line of the street address.</p>
     */
    inline void SetStreet1(const char* value) { m_street1HasBeenSet = true; m_street1.assign(value); }

    /**
     * <p>The first line of the street address.</p>
     */
    inline Address& WithStreet1(const Aws::String& value) { SetStreet1(value); return *this;}

    /**
     * <p>The first line of the street address.</p>
     */
    inline Address& WithStreet1(Aws::String&& value) { SetStreet1(std::move(value)); return *this;}

    /**
     * <p>The first line of the street address.</p>
     */
    inline Address& WithStreet1(const char* value) { SetStreet1(value); return *this;}


    /**
     * <p>The second line of the street address.</p>
     */
    inline const Aws::String& GetStreet2() const{ return m_street2; }

    /**
     * <p>The second line of the street address.</p>
     */
    inline bool Street2HasBeenSet() const { return m_street2HasBeenSet; }

    /**
     * <p>The second line of the street address.</p>
     */
    inline void SetStreet2(const Aws::String& value) { m_street2HasBeenSet = true; m_street2 = value; }

    /**
     * <p>The second line of the street address.</p>
     */
    inline void SetStreet2(Aws::String&& value) { m_street2HasBeenSet = true; m_street2 = std::move(value); }

    /**
     * <p>The second line of the street address.</p>
     */
    inline void SetStreet2(const char* value) { m_street2HasBeenSet = true; m_street2.assign(value); }

    /**
     * <p>The second line of the street address.</p>
     */
    inline Address& WithStreet2(const Aws::String& value) { SetStreet2(value); return *this;}

    /**
     * <p>The second line of the street address.</p>
     */
    inline Address& WithStreet2(Aws::String&& value) { SetStreet2(std::move(value)); return *this;}

    /**
     * <p>The second line of the street address.</p>
     */
    inline Address& WithStreet2(const char* value) { SetStreet2(value); return *this;}


    /**
     * <p>The third line of the street address.</p>
     */
    inline const Aws::String& GetStreet3() const{ return m_street3; }

    /**
     * <p>The third line of the street address.</p>
     */
    inline bool Street3HasBeenSet() const { return m_street3HasBeenSet; }

    /**
     * <p>The third line of the street address.</p>
     */
    inline void SetStreet3(const Aws::String& value) { m_street3HasBeenSet = true; m_street3 = value; }

    /**
     * <p>The third line of the street address.</p>
     */
    inline void SetStreet3(Aws::String&& value) { m_street3HasBeenSet = true; m_street3 = std::move(value); }

    /**
     * <p>The third line of the street address.</p>
     */
    inline void SetStreet3(const char* value) { m_street3HasBeenSet = true; m_street3.assign(value); }

    /**
     * <p>The third line of the street address.</p>
     */
    inline Address& WithStreet3(const Aws::String& value) { SetStreet3(value); return *this;}

    /**
     * <p>The third line of the street address.</p>
     */
    inline Address& WithStreet3(Aws::String&& value) { SetStreet3(std::move(value)); return *this;}

    /**
     * <p>The third line of the street address.</p>
     */
    inline Address& WithStreet3(const char* value) { SetStreet3(value); return *this;}

  private:

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_company;
    bool m_companyHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

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
