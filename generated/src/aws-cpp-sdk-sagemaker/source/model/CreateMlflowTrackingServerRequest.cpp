/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateMlflowTrackingServerRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMlflowTrackingServerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_trackingServerNameHasBeenSet) {
    payload.WithString("TrackingServerName", m_trackingServerName);
  }

  if (m_artifactStoreUriHasBeenSet) {
    payload.WithString("ArtifactStoreUri", m_artifactStoreUri);
  }

  if (m_trackingServerSizeHasBeenSet) {
    payload.WithString("TrackingServerSize", TrackingServerSizeMapper::GetNameForTrackingServerSize(m_trackingServerSize));
  }

  if (m_mlflowVersionHasBeenSet) {
    payload.WithString("MlflowVersion", m_mlflowVersion);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_automaticModelRegistrationHasBeenSet) {
    payload.WithBool("AutomaticModelRegistration", m_automaticModelRegistration);
  }

  if (m_weeklyMaintenanceWindowStartHasBeenSet) {
    payload.WithString("WeeklyMaintenanceWindowStart", m_weeklyMaintenanceWindowStart);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_s3BucketOwnerAccountIdHasBeenSet) {
    payload.WithString("S3BucketOwnerAccountId", m_s3BucketOwnerAccountId);
  }

  if (m_s3BucketOwnerVerificationHasBeenSet) {
    payload.WithBool("S3BucketOwnerVerification", m_s3BucketOwnerVerification);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateMlflowTrackingServerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateMlflowTrackingServer"));
  return headers;
}
