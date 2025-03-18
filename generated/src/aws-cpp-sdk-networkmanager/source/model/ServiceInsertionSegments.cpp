/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ServiceInsertionSegments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

ServiceInsertionSegments::ServiceInsertionSegments(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceInsertionSegments& ServiceInsertionSegments::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SendVia"))
  {
    Aws::Utils::Array<JsonView> sendViaJsonList = jsonValue.GetArray("SendVia");
    for(unsigned sendViaIndex = 0; sendViaIndex < sendViaJsonList.GetLength(); ++sendViaIndex)
    {
      m_sendVia.push_back(sendViaJsonList[sendViaIndex].AsString());
    }
    m_sendViaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SendTo"))
  {
    Aws::Utils::Array<JsonView> sendToJsonList = jsonValue.GetArray("SendTo");
    for(unsigned sendToIndex = 0; sendToIndex < sendToJsonList.GetLength(); ++sendToIndex)
    {
      m_sendTo.push_back(sendToJsonList[sendToIndex].AsString());
    }
    m_sendToHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceInsertionSegments::Jsonize() const
{
  JsonValue payload;

  if(m_sendViaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sendViaJsonList(m_sendVia.size());
   for(unsigned sendViaIndex = 0; sendViaIndex < sendViaJsonList.GetLength(); ++sendViaIndex)
   {
     sendViaJsonList[sendViaIndex].AsString(m_sendVia[sendViaIndex]);
   }
   payload.WithArray("SendVia", std::move(sendViaJsonList));

  }

  if(m_sendToHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sendToJsonList(m_sendTo.size());
   for(unsigned sendToIndex = 0; sendToIndex < sendToJsonList.GetLength(); ++sendToIndex)
   {
     sendToJsonList[sendToIndex].AsString(m_sendTo[sendToIndex]);
   }
   payload.WithArray("SendTo", std::move(sendToJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
