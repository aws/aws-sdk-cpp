/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/Address.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

Address::Address() : 
    m_cityHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_stateOrProvinceHasBeenSet(false),
    m_street1HasBeenSet(false),
    m_street2HasBeenSet(false),
    m_street3HasBeenSet(false)
{
}

Address::Address(JsonView jsonValue) : 
    m_cityHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_stateOrProvinceHasBeenSet(false),
    m_street1HasBeenSet(false),
    m_street2HasBeenSet(false),
    m_street3HasBeenSet(false)
{
  *this = jsonValue;
}

Address& Address::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("city"))
  {
    m_city = jsonValue.GetString("city");

    m_cityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("company"))
  {
    m_company = jsonValue.GetString("company");

    m_companyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("country"))
  {
    m_country = jsonValue.GetString("country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("emailAddress"))
  {
    m_emailAddress = jsonValue.GetString("emailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("phoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("phoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postalCode"))
  {
    m_postalCode = jsonValue.GetString("postalCode");

    m_postalCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateOrProvince"))
  {
    m_stateOrProvince = jsonValue.GetString("stateOrProvince");

    m_stateOrProvinceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("street1"))
  {
    m_street1 = jsonValue.GetString("street1");

    m_street1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("street2"))
  {
    m_street2 = jsonValue.GetString("street2");

    m_street2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("street3"))
  {
    m_street3 = jsonValue.GetString("street3");

    m_street3HasBeenSet = true;
  }

  return *this;
}

JsonValue Address::Jsonize() const
{
  JsonValue payload;

  if(m_cityHasBeenSet)
  {
   payload.WithString("city", m_city);

  }

  if(m_companyHasBeenSet)
  {
   payload.WithString("company", m_company);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("country", m_country);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("emailAddress", m_emailAddress);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("phoneNumber", m_phoneNumber);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("postalCode", m_postalCode);

  }

  if(m_stateOrProvinceHasBeenSet)
  {
   payload.WithString("stateOrProvince", m_stateOrProvince);

  }

  if(m_street1HasBeenSet)
  {
   payload.WithString("street1", m_street1);

  }

  if(m_street2HasBeenSet)
  {
   payload.WithString("street2", m_street2);

  }

  if(m_street3HasBeenSet)
  {
   payload.WithString("street3", m_street3);

  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
