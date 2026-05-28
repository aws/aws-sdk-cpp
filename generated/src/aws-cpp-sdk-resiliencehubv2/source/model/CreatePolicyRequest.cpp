/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/CreatePolicyRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_availabilitySloHasBeenSet) {
    payload.WithObject("availabilitySlo", m_availabilitySlo.Jsonize());
  }

  if (m_multiAzHasBeenSet) {
    payload.WithObject("multiAz", m_multiAz.Jsonize());
  }

  if (m_multiRegionHasBeenSet) {
    payload.WithObject("multiRegion", m_multiRegion.Jsonize());
  }

  if (m_dataRecoveryHasBeenSet) {
    payload.WithObject("dataRecovery", m_dataRecovery.Jsonize());
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
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
