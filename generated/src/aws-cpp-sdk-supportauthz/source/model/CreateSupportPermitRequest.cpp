/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supportauthz/model/CreateSupportPermitRequest.h>

#include <utility>

using namespace Aws::SupportAuthZ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSupportPermitRequest::SerializePayload() const {
  JsonValue payload;

  if (m_permitHasBeenSet) {
    payload.WithObject("permit", m_permit.Jsonize());
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_signingKeyInfoHasBeenSet) {
    payload.WithObject("signingKeyInfo", m_signingKeyInfo.Jsonize());
  }

  if (m_supportCaseDisplayIdHasBeenSet) {
    payload.WithString("supportCaseDisplayId", m_supportCaseDisplayId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
