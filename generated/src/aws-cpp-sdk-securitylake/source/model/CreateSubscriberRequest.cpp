/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateSubscriberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSubscriberRequest::CreateSubscriberRequest() : 
    m_accessTypesHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_sourceTypesHasBeenSet(false),
    m_subscriberDescriptionHasBeenSet(false),
    m_subscriberNameHasBeenSet(false)
{
}

Aws::String CreateSubscriberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessTypesJsonList(m_accessTypes.size());
   for(unsigned accessTypesIndex = 0; accessTypesIndex < accessTypesJsonList.GetLength(); ++accessTypesIndex)
   {
     accessTypesJsonList[accessTypesIndex].AsString(AccessTypeMapper::GetNameForAccessType(m_accessTypes[accessTypesIndex]));
   }
   payload.WithArray("accessTypes", std::move(accessTypesJsonList));

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_sourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceTypesJsonList(m_sourceTypes.size());
   for(unsigned sourceTypesIndex = 0; sourceTypesIndex < sourceTypesJsonList.GetLength(); ++sourceTypesIndex)
   {
     sourceTypesJsonList[sourceTypesIndex].AsObject(m_sourceTypes[sourceTypesIndex].Jsonize());
   }
   payload.WithArray("sourceTypes", std::move(sourceTypesJsonList));

  }

  if(m_subscriberDescriptionHasBeenSet)
  {
   payload.WithString("subscriberDescription", m_subscriberDescription);

  }

  if(m_subscriberNameHasBeenSet)
  {
   payload.WithString("subscriberName", m_subscriberName);

  }

  return payload.View().WriteReadable();
}




