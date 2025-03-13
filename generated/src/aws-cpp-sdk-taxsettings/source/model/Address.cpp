/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/Address.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

Address::Address(JsonView jsonValue)
{
  *this = jsonValue;
}

Address& Address::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addressLine1"))
  {
    m_addressLine1 = jsonValue.GetString("addressLine1");
    m_addressLine1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("addressLine2"))
  {
    m_addressLine2 = jsonValue.GetString("addressLine2");
    m_addressLine2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("addressLine3"))
  {
    m_addressLine3 = jsonValue.GetString("addressLine3");
    m_addressLine3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("city"))
  {
    m_city = jsonValue.GetString("city");
    m_cityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("countryCode"))
  {
    m_countryCode = jsonValue.GetString("countryCode");
    m_countryCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("districtOrCounty"))
  {
    m_districtOrCounty = jsonValue.GetString("districtOrCounty");
    m_districtOrCountyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("postalCode"))
  {
    m_postalCode = jsonValue.GetString("postalCode");
    m_postalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateOrRegion"))
  {
    m_stateOrRegion = jsonValue.GetString("stateOrRegion");
    m_stateOrRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue Address::Jsonize() const
{
  JsonValue payload;

  if(m_addressLine1HasBeenSet)
  {
   payload.WithString("addressLine1", m_addressLine1);

  }

  if(m_addressLine2HasBeenSet)
  {
   payload.WithString("addressLine2", m_addressLine2);

  }

  if(m_addressLine3HasBeenSet)
  {
   payload.WithString("addressLine3", m_addressLine3);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("city", m_city);

  }

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("countryCode", m_countryCode);

  }

  if(m_districtOrCountyHasBeenSet)
  {
   payload.WithString("districtOrCounty", m_districtOrCounty);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("postalCode", m_postalCode);

  }

  if(m_stateOrRegionHasBeenSet)
  {
   payload.WithString("stateOrRegion", m_stateOrRegion);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
