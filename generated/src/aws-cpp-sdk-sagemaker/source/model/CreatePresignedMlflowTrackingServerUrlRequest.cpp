/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreatePresignedMlflowTrackingServerUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePresignedMlflowTrackingServerUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trackingServerNameHasBeenSet)
  {
   payload.WithString("TrackingServerName", m_trackingServerName);

  }

  if(m_expiresInSecondsHasBeenSet)
  {
   payload.WithInteger("ExpiresInSeconds", m_expiresInSeconds);

  }

  if(m_sessionExpirationDurationInSecondsHasBeenSet)
  {
   payload.WithInteger("SessionExpirationDurationInSeconds", m_sessionExpirationDurationInSeconds);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePresignedMlflowTrackingServerUrlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreatePresignedMlflowTrackingServerUrl"));
  return headers;

}




