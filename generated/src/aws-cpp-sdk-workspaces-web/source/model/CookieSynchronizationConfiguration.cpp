/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/CookieSynchronizationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

CookieSynchronizationConfiguration::CookieSynchronizationConfiguration() : 
    m_allowlistHasBeenSet(false),
    m_blocklistHasBeenSet(false)
{
}

CookieSynchronizationConfiguration::CookieSynchronizationConfiguration(JsonView jsonValue) : 
    m_allowlistHasBeenSet(false),
    m_blocklistHasBeenSet(false)
{
  *this = jsonValue;
}

CookieSynchronizationConfiguration& CookieSynchronizationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowlist"))
  {
    Aws::Utils::Array<JsonView> allowlistJsonList = jsonValue.GetArray("allowlist");
    for(unsigned allowlistIndex = 0; allowlistIndex < allowlistJsonList.GetLength(); ++allowlistIndex)
    {
      m_allowlist.push_back(allowlistJsonList[allowlistIndex].AsObject());
    }
    m_allowlistHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blocklist"))
  {
    Aws::Utils::Array<JsonView> blocklistJsonList = jsonValue.GetArray("blocklist");
    for(unsigned blocklistIndex = 0; blocklistIndex < blocklistJsonList.GetLength(); ++blocklistIndex)
    {
      m_blocklist.push_back(blocklistJsonList[blocklistIndex].AsObject());
    }
    m_blocklistHasBeenSet = true;
  }

  return *this;
}

JsonValue CookieSynchronizationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_allowlistHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowlistJsonList(m_allowlist.size());
   for(unsigned allowlistIndex = 0; allowlistIndex < allowlistJsonList.GetLength(); ++allowlistIndex)
   {
     allowlistJsonList[allowlistIndex].AsObject(m_allowlist[allowlistIndex].Jsonize());
   }
   payload.WithArray("allowlist", std::move(allowlistJsonList));

  }

  if(m_blocklistHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blocklistJsonList(m_blocklist.size());
   for(unsigned blocklistIndex = 0; blocklistIndex < blocklistJsonList.GetLength(); ++blocklistIndex)
   {
     blocklistJsonList[blocklistIndex].AsObject(m_blocklist[blocklistIndex].Jsonize());
   }
   payload.WithArray("blocklist", std::move(blocklistJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
