/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

UpdateAttributesRequest::UpdateAttributesRequest() : 
    m_blacklistHasBeenSet(false)
{
}

UpdateAttributesRequest::UpdateAttributesRequest(JsonView jsonValue) : 
    m_blacklistHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateAttributesRequest& UpdateAttributesRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Blacklist"))
  {
    Aws::Utils::Array<JsonView> blacklistJsonList = jsonValue.GetArray("Blacklist");
    for(unsigned blacklistIndex = 0; blacklistIndex < blacklistJsonList.GetLength(); ++blacklistIndex)
    {
      m_blacklist.push_back(blacklistJsonList[blacklistIndex].AsString());
    }
    m_blacklistHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateAttributesRequest::Jsonize() const
{
  JsonValue payload;

  if(m_blacklistHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blacklistJsonList(m_blacklist.size());
   for(unsigned blacklistIndex = 0; blacklistIndex < blacklistJsonList.GetLength(); ++blacklistIndex)
   {
     blacklistJsonList[blacklistIndex].AsString(m_blacklist[blacklistIndex]);
   }
   payload.WithArray("Blacklist", std::move(blacklistJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
