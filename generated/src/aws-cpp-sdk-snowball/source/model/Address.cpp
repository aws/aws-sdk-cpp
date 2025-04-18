﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/Address.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

Address::Address(JsonView jsonValue)
{
  *this = jsonValue;
}

Address& Address::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddressId"))
  {
    m_addressId = jsonValue.GetString("AddressId");
    m_addressIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Company"))
  {
    m_company = jsonValue.GetString("Company");
    m_companyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Street1"))
  {
    m_street1 = jsonValue.GetString("Street1");
    m_street1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Street2"))
  {
    m_street2 = jsonValue.GetString("Street2");
    m_street2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Street3"))
  {
    m_street3 = jsonValue.GetString("Street3");
    m_street3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");
    m_cityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateOrProvince"))
  {
    m_stateOrProvince = jsonValue.GetString("StateOrProvince");
    m_stateOrProvinceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrefectureOrDistrict"))
  {
    m_prefectureOrDistrict = jsonValue.GetString("PrefectureOrDistrict");
    m_prefectureOrDistrictHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Landmark"))
  {
    m_landmark = jsonValue.GetString("Landmark");
    m_landmarkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");
    m_postalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");
    m_phoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsRestricted"))
  {
    m_isRestricted = jsonValue.GetBool("IsRestricted");
    m_isRestrictedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = AddressTypeMapper::GetAddressTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue Address::Jsonize() const
{
  JsonValue payload;

  if(m_addressIdHasBeenSet)
  {
   payload.WithString("AddressId", m_addressId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_companyHasBeenSet)
  {
   payload.WithString("Company", m_company);

  }

  if(m_street1HasBeenSet)
  {
   payload.WithString("Street1", m_street1);

  }

  if(m_street2HasBeenSet)
  {
   payload.WithString("Street2", m_street2);

  }

  if(m_street3HasBeenSet)
  {
   payload.WithString("Street3", m_street3);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_stateOrProvinceHasBeenSet)
  {
   payload.WithString("StateOrProvince", m_stateOrProvince);

  }

  if(m_prefectureOrDistrictHasBeenSet)
  {
   payload.WithString("PrefectureOrDistrict", m_prefectureOrDistrict);

  }

  if(m_landmarkHasBeenSet)
  {
   payload.WithString("Landmark", m_landmark);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_isRestrictedHasBeenSet)
  {
   payload.WithBool("IsRestricted", m_isRestricted);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AddressTypeMapper::GetNameForAddressType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
