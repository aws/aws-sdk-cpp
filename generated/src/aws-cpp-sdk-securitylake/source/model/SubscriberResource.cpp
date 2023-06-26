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
    m_createdAtHasBeenSet(false),
    m_resourceShareArnHasBeenSet(false),
    m_resourceShareNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_subscriberArnHasBeenSet(false),
    m_subscriberDescriptionHasBeenSet(false),
    m_subscriberEndpointHasBeenSet(false),
    m_subscriberIdHasBeenSet(false),
    m_subscriberIdentityHasBeenSet(false),
    m_subscriberNameHasBeenSet(false),
    m_subscriberStatus(SubscriberStatus::NOT_SET),
    m_subscriberStatusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

SubscriberResource::SubscriberResource(JsonView jsonValue) : 
    m_accessTypesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_resourceShareArnHasBeenSet(false),
    m_resourceShareNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_subscriberArnHasBeenSet(false),
    m_subscriberDescriptionHasBeenSet(false),
    m_subscriberEndpointHasBeenSet(false),
    m_subscriberIdHasBeenSet(false),
    m_subscriberIdentityHasBeenSet(false),
    m_subscriberNameHasBeenSet(false),
    m_subscriberStatus(SubscriberStatus::NOT_SET),
    m_subscriberStatusHasBeenSet(false),
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

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceShareArn"))
  {
    m_resourceShareArn = jsonValue.GetString("resourceShareArn");

    m_resourceShareArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceShareName"))
  {
    m_resourceShareName = jsonValue.GetString("resourceShareName");

    m_resourceShareNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriberArn"))
  {
    m_subscriberArn = jsonValue.GetString("subscriberArn");

    m_subscriberArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriberDescription"))
  {
    m_subscriberDescription = jsonValue.GetString("subscriberDescription");

    m_subscriberDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriberEndpoint"))
  {
    m_subscriberEndpoint = jsonValue.GetString("subscriberEndpoint");

    m_subscriberEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriberId"))
  {
    m_subscriberId = jsonValue.GetString("subscriberId");

    m_subscriberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriberIdentity"))
  {
    m_subscriberIdentity = jsonValue.GetObject("subscriberIdentity");

    m_subscriberIdentityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriberName"))
  {
    m_subscriberName = jsonValue.GetString("subscriberName");

    m_subscriberNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriberStatus"))
  {
    m_subscriberStatus = SubscriberStatusMapper::GetSubscriberStatusForName(jsonValue.GetString("subscriberStatus"));

    m_subscriberStatusHasBeenSet = true;
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

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_resourceShareArnHasBeenSet)
  {
   payload.WithString("resourceShareArn", m_resourceShareArn);

  }

  if(m_resourceShareNameHasBeenSet)
  {
   payload.WithString("resourceShareName", m_resourceShareName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_s3BucketArnHasBeenSet)
  {
   payload.WithString("s3BucketArn", m_s3BucketArn);

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  if(m_subscriberArnHasBeenSet)
  {
   payload.WithString("subscriberArn", m_subscriberArn);

  }

  if(m_subscriberDescriptionHasBeenSet)
  {
   payload.WithString("subscriberDescription", m_subscriberDescription);

  }

  if(m_subscriberEndpointHasBeenSet)
  {
   payload.WithString("subscriberEndpoint", m_subscriberEndpoint);

  }

  if(m_subscriberIdHasBeenSet)
  {
   payload.WithString("subscriberId", m_subscriberId);

  }

  if(m_subscriberIdentityHasBeenSet)
  {
   payload.WithObject("subscriberIdentity", m_subscriberIdentity.Jsonize());

  }

  if(m_subscriberNameHasBeenSet)
  {
   payload.WithString("subscriberName", m_subscriberName);

  }

  if(m_subscriberStatusHasBeenSet)
  {
   payload.WithString("subscriberStatus", SubscriberStatusMapper::GetNameForSubscriberStatus(m_subscriberStatus));
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
