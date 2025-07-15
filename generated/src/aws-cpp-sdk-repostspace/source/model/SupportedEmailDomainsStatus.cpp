/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/SupportedEmailDomainsStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace repostspace
{
namespace Model
{

SupportedEmailDomainsStatus::SupportedEmailDomainsStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

SupportedEmailDomainsStatus& SupportedEmailDomainsStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = FeatureEnableStatusMapper::GetFeatureEnableStatusForName(jsonValue.GetString("enabled"));
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedDomains"))
  {
    Aws::Utils::Array<JsonView> allowedDomainsJsonList = jsonValue.GetArray("allowedDomains");
    for(unsigned allowedDomainsIndex = 0; allowedDomainsIndex < allowedDomainsJsonList.GetLength(); ++allowedDomainsIndex)
    {
      m_allowedDomains.push_back(allowedDomainsJsonList[allowedDomainsIndex].AsString());
    }
    m_allowedDomainsHasBeenSet = true;
  }
  return *this;
}

JsonValue SupportedEmailDomainsStatus::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithString("enabled", FeatureEnableStatusMapper::GetNameForFeatureEnableStatus(m_enabled));
  }

  if(m_allowedDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedDomainsJsonList(m_allowedDomains.size());
   for(unsigned allowedDomainsIndex = 0; allowedDomainsIndex < allowedDomainsJsonList.GetLength(); ++allowedDomainsIndex)
   {
     allowedDomainsJsonList[allowedDomainsIndex].AsString(m_allowedDomains[allowedDomainsIndex]);
   }
   payload.WithArray("allowedDomains", std::move(allowedDomainsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace repostspace
} // namespace Aws
