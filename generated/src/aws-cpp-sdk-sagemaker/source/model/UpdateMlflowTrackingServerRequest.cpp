/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateMlflowTrackingServerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMlflowTrackingServerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trackingServerNameHasBeenSet)
  {
   payload.WithString("TrackingServerName", m_trackingServerName);

  }

  if(m_artifactStoreUriHasBeenSet)
  {
   payload.WithString("ArtifactStoreUri", m_artifactStoreUri);

  }

  if(m_trackingServerSizeHasBeenSet)
  {
   payload.WithString("TrackingServerSize", TrackingServerSizeMapper::GetNameForTrackingServerSize(m_trackingServerSize));
  }

  if(m_automaticModelRegistrationHasBeenSet)
  {
   payload.WithBool("AutomaticModelRegistration", m_automaticModelRegistration);

  }

  if(m_weeklyMaintenanceWindowStartHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceWindowStart", m_weeklyMaintenanceWindowStart);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMlflowTrackingServerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateMlflowTrackingServer"));
  return headers;

}




