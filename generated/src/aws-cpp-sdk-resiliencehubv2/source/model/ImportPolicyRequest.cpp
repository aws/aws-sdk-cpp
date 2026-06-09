/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ImportPolicyRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_v1PolicyArnHasBeenSet) {
    payload.WithString("v1PolicyArn", m_v1PolicyArn);
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  if (m_availabilitySloHasBeenSet) {
    payload.WithObject("availabilitySlo", m_availabilitySlo.Jsonize());
  }

  if (m_multiAzDisasterRecoveryApproachHasBeenSet) {
    payload.WithString("multiAzDisasterRecoveryApproach",
                       MultiAzDisasterRecoveryApproachMapper::GetNameForMultiAzDisasterRecoveryApproach(m_multiAzDisasterRecoveryApproach));
  }

  if (m_multiRegionDisasterRecoveryApproachHasBeenSet) {
    payload.WithString(
        "multiRegionDisasterRecoveryApproach",
        MultiRegionDisasterRecoveryApproachMapper::GetNameForMultiRegionDisasterRecoveryApproach(m_multiRegionDisasterRecoveryApproach));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
