/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/Jurisdiction.h>
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

Jurisdiction::Jurisdiction(JsonView jsonValue)
{
  *this = jsonValue;
}

Jurisdiction& Jurisdiction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("countryCode"))
  {
    m_countryCode = jsonValue.GetString("countryCode");
    m_countryCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateOrRegion"))
  {
    m_stateOrRegion = jsonValue.GetString("stateOrRegion");
    m_stateOrRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue Jurisdiction::Jsonize() const
{
  JsonValue payload;

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("countryCode", m_countryCode);

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
