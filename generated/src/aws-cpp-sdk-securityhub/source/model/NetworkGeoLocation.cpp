/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NetworkGeoLocation.h>
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

NetworkGeoLocation::NetworkGeoLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkGeoLocation& NetworkGeoLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");
    m_cityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Lat"))
  {
    m_lat = jsonValue.GetDouble("Lat");
    m_latHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Lon"))
  {
    m_lon = jsonValue.GetDouble("Lon");
    m_lonHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkGeoLocation::Jsonize() const
{
  JsonValue payload;

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_latHasBeenSet)
  {
   payload.WithDouble("Lat", m_lat);

  }

  if(m_lonHasBeenSet)
  {
   payload.WithDouble("Lon", m_lon);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
