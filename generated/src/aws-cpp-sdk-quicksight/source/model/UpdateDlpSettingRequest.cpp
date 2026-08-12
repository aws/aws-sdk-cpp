/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateDlpSettingRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDlpSettingRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_providerTypeHasBeenSet) {
    payload.WithString("ProviderType", DlpProviderTypeMapper::GetNameForDlpProviderType(m_providerType));
  }

  if (m_providerConfigHasBeenSet) {
    payload.WithObject("ProviderConfig", m_providerConfig.Jsonize());
  }

  if (m_providerOutageActionHasBeenSet) {
    payload.WithString("ProviderOutageAction", DlpActionMapper::GetNameForDlpAction(m_providerOutageAction));
  }

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  return payload.View().WriteReadable();
}
