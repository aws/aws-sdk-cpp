/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/SubscriberResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

SubscriberResource::SubscriberResource() : 
    m_accessTypesHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_snsArnHasBeenSet(false),
    m_sourceTypesHasBeenSet(false),
    m_subscriberDescriptionHasBeenSet(false),
    m_subscriberNameHasBeenSet(false),
    m_subscriptionEndpointHasBeenSet(false),
    m_subscriptionIdHasBeenSet(false),
    m_subscriptionProtocol(EndpointProtocol::NOT_SET),
    m_subscriptionProtocolHasBeenSet(false),
    m_subscriptionStatus(SubscriptionStatus::NOT_SET),
    m_subscriptionStatusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

SubscriberResource::SubscriberResource(JsonView jsonValue) : 
    m_accessTypesHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_snsArnHasBeenSet(false),
    m_sourceTypesHasBeenSet(false),
    m_subscriberDescriptionHasBeenSet(false),
    m_subscriberNameHasBeenSet(false),
    m_subscriptionEndpointHasBeenSet(false),
    m_subscriptionIdHasBeenSet(false),
    m_subscriptionProtocol(EndpointProtocol::NOT_SET),
    m_subscriptionProtocolHasBeenSet(false),
    m_subscriptionStatus(SubscriptionStatus::NOT_SET),
    m_subscriptionStatusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

SubscriberResource& SubscriberResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessTypes"))
  {
    Aws::Utils::Array<JsonView> accessTypesJsonList = jsonValue.GetArray("accessTypes");
    for(unsigned accessTypesIndex = 0; accessTypesIndex < accessTypesJsonList.GetLength(); ++accessTypesIndex)
    {
      m_accessTypes.push_back(AccessTypeMapper::GetAccessTypeForName(accessTypesJsonList[accessTypesIndex].AsString()));
    }
    m_accessTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketArn"))
  {
    m_s3BucketArn = jsonValue.GetString("s3BucketArn");

    m_s3BucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snsArn"))
  {
    m_snsArn = jsonValue.GetString("snsArn");

    m_snsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceTypes"))
  {
    Aws::Utils::Array<JsonView> sourceTypesJsonList = jsonValue.GetArray("sourceTypes");
    for(unsigned sourceTypesIndex = 0; sourceTypesIndex < sourceTypesJsonList.GetLength(); ++sourceTypesIndex)
    {
      m_sourceTypes.push_back(sourceTypesJsonList[sourceTypesIndex].AsObject());
    }
    m_sourceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriberDescription"))
  {
    m_subscriberDescription = jsonValue.GetString("subscriberDescription");

    m_subscriberDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriberName"))
  {
    m_subscriberName = jsonValue.GetString("subscriberName");

    m_subscriberNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriptionEndpoint"))
  {
    m_subscriptionEndpoint = jsonValue.GetString("subscriptionEndpoint");

    m_subscriptionEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriptionId"))
  {
    m_subscriptionId = jsonValue.GetString("subscriptionId");

    m_subscriptionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriptionProtocol"))
  {
    m_subscriptionProtocol = EndpointProtocolMapper::GetEndpointProtocolForName(jsonValue.GetString("subscriptionProtocol"));

    m_subscriptionProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriptionStatus"))
  {
    m_subscriptionStatus = SubscriptionStatusMapper::GetSubscriptionStatusForName(jsonValue.GetString("subscriptionStatus"));

    m_subscriptionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscriberResource::Jsonize() const
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

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_s3BucketArnHasBeenSet)
  {
   payload.WithString("s3BucketArn", m_s3BucketArn);

  }

  if(m_snsArnHasBeenSet)
  {
   payload.WithString("snsArn", m_snsArn);

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

  if(m_subscriptionEndpointHasBeenSet)
  {
   payload.WithString("subscriptionEndpoint", m_subscriptionEndpoint);

  }

  if(m_subscriptionIdHasBeenSet)
  {
   payload.WithString("subscriptionId", m_subscriptionId);

  }

  if(m_subscriptionProtocolHasBeenSet)
  {
   payload.WithString("subscriptionProtocol", EndpointProtocolMapper::GetNameForEndpointProtocol(m_subscriptionProtocol));
  }

  if(m_subscriptionStatusHasBeenSet)
  {
   payload.WithString("subscriptionStatus", SubscriptionStatusMapper::GetNameForSubscriptionStatus(m_subscriptionStatus));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
