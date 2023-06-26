/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ActionRemoteIpDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ActionRemoteIpDetails::ActionRemoteIpDetails() : 
    m_ipAddressV4HasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_geoLocationHasBeenSet(false)
{
}

ActionRemoteIpDetails::ActionRemoteIpDetails(JsonView jsonValue) : 
    m_ipAddressV4HasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_geoLocationHasBeenSet(false)
{
  *this = jsonValue;
}

ActionRemoteIpDetails& ActionRemoteIpDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpAddressV4"))
  {
    m_ipAddressV4 = jsonValue.GetString("IpAddressV4");

    m_ipAddressV4HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Organization"))
  {
    m_organization = jsonValue.GetObject("Organization");

    m_organizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetObject("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetObject("City");

    m_cityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeoLocation"))
  {
    m_geoLocation = jsonValue.GetObject("GeoLocation");

    m_geoLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionRemoteIpDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressV4HasBeenSet)
  {
   payload.WithString("IpAddressV4", m_ipAddressV4);

  }

  if(m_organizationHasBeenSet)
  {
   payload.WithObject("Organization", m_organization.Jsonize());

  }

  if(m_countryHasBeenSet)
  {
   payload.WithObject("Country", m_country.Jsonize());

  }

  if(m_cityHasBeenSet)
  {
   payload.WithObject("City", m_city.Jsonize());

  }

  if(m_geoLocationHasBeenSet)
  {
   payload.WithObject("GeoLocation", m_geoLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
