/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/UpdateSubscriptionNotificationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSubscriptionNotificationConfigurationRequest::UpdateSubscriptionNotificationConfigurationRequest() : 
    m_createSqs(false),
    m_createSqsHasBeenSet(false),
    m_httpsApiKeyNameHasBeenSet(false),
    m_httpsApiKeyValueHasBeenSet(false),
    m_httpsMethod(HttpsMethod::NOT_SET),
    m_httpsMethodHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_subscriptionEndpointHasBeenSet(false),
    m_subscriptionIdHasBeenSet(false)
{
}

Aws::String UpdateSubscriptionNotificationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_createSqsHasBeenSet)
  {
   payload.WithBool("createSqs", m_createSqs);

  }

  if(m_httpsApiKeyNameHasBeenSet)
  {
   payload.WithString("httpsApiKeyName", m_httpsApiKeyName);

  }

  if(m_httpsApiKeyValueHasBeenSet)
  {
   payload.WithString("httpsApiKeyValue", m_httpsApiKeyValue);

  }

  if(m_httpsMethodHasBeenSet)
  {
   payload.WithString("httpsMethod", HttpsMethodMapper::GetNameForHttpsMethod(m_httpsMethod));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_subscriptionEndpointHasBeenSet)
  {
   payload.WithString("subscriptionEndpoint", m_subscriptionEndpoint);

  }

  return payload.View().WriteReadable();
}




