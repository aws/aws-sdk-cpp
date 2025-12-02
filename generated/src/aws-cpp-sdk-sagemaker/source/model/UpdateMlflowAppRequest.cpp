/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/UpdateMlflowAppRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMlflowAppRequest::SerializePayload() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_artifactStoreUriHasBeenSet) {
    payload.WithString("ArtifactStoreUri", m_artifactStoreUri);
  }

  if (m_modelRegistrationModeHasBeenSet) {
    payload.WithString("ModelRegistrationMode", ModelRegistrationModeMapper::GetNameForModelRegistrationMode(m_modelRegistrationMode));
  }

  if (m_weeklyMaintenanceWindowStartHasBeenSet) {
    payload.WithString("WeeklyMaintenanceWindowStart", m_weeklyMaintenanceWindowStart);
  }

  if (m_defaultDomainIdListHasBeenSet) {
    Aws::Utils::Array<JsonValue> defaultDomainIdListJsonList(m_defaultDomainIdList.size());
    for (unsigned defaultDomainIdListIndex = 0; defaultDomainIdListIndex < defaultDomainIdListJsonList.GetLength();
         ++defaultDomainIdListIndex) {
      defaultDomainIdListJsonList[defaultDomainIdListIndex].AsString(m_defaultDomainIdList[defaultDomainIdListIndex]);
    }
    payload.WithArray("DefaultDomainIdList", std::move(defaultDomainIdListJsonList));
  }

  if (m_accountDefaultStatusHasBeenSet) {
    payload.WithString("AccountDefaultStatus", AccountDefaultStatusMapper::GetNameForAccountDefaultStatus(m_accountDefaultStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMlflowAppRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateMlflowApp"));
  return headers;
}
