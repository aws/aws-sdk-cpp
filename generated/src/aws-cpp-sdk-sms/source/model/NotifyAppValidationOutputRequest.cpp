/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/NotifyAppValidationOutputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

NotifyAppValidationOutputRequest::NotifyAppValidationOutputRequest() : 
    m_appIdHasBeenSet(false),
    m_notificationContextHasBeenSet(false)
{
}

Aws::String NotifyAppValidationOutputRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_notificationContextHasBeenSet)
  {
   payload.WithObject("notificationContext", m_notificationContext.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection NotifyAppValidationOutputRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.NotifyAppValidationOutput"));
  return headers;

}




