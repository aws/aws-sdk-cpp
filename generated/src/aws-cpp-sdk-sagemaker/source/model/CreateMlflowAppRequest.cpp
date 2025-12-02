/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateMlflowAppRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMlflowAppRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_artifactStoreUriHasBeenSet) {
    payload.WithString("ArtifactStoreUri", m_artifactStoreUri);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_modelRegistrationModeHasBeenSet) {
    payload.WithString("ModelRegistrationMode", ModelRegistrationModeMapper::GetNameForModelRegistrationMode(m_modelRegistrationMode));
  }

  if (m_weeklyMaintenanceWindowStartHasBeenSet) {
    payload.WithString("WeeklyMaintenanceWindowStart", m_weeklyMaintenanceWindowStart);
  }

  if (m_accountDefaultStatusHasBeenSet) {
    payload.WithString("AccountDefaultStatus", AccountDefaultStatusMapper::GetNameForAccountDefaultStatus(m_accountDefaultStatus));
  }

  if (m_defaultDomainIdListHasBeenSet) {
    Aws::Utils::Array<JsonValue> defaultDomainIdListJsonList(m_defaultDomainIdList.size());
    for (unsigned defaultDomainIdListIndex = 0; defaultDomainIdListIndex < defaultDomainIdListJsonList.GetLength();
         ++defaultDomainIdListIndex) {
      defaultDomainIdListJsonList[defaultDomainIdListIndex].AsString(m_defaultDomainIdList[defaultDomainIdListIndex]);
    }
    payload.WithArray("DefaultDomainIdList", std::move(defaultDomainIdListJsonList));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateMlflowAppRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateMlflowApp"));
  return headers;
}
