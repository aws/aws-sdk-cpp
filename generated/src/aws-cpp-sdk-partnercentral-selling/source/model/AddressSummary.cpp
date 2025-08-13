/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AddressSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

AddressSummary::AddressSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AddressSummary& AddressSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");
    m_cityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");
    m_postalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateOrRegion"))
  {
    m_stateOrRegion = jsonValue.GetString("StateOrRegion");
    m_stateOrRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = CountryCodeMapper::GetCountryCodeForName(jsonValue.GetString("CountryCode"));
    m_countryCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue AddressSummary::Jsonize() const
{
  JsonValue payload;

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  if(m_stateOrRegionHasBeenSet)
  {
   payload.WithString("StateOrRegion", m_stateOrRegion);

  }

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", CountryCodeMapper::GetNameForCountryCode(m_countryCode));
  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
