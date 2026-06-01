/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CreateFlowRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateFlowRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_flowDefinitionHasBeenSet) {
    if (!m_flowDefinition.View().IsNull()) {
      payload.WithObject("FlowDefinition", JsonValue(m_flowDefinition.View()));
    }
  }

  if (m_permissionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
    for (unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex) {
      permissionsJsonList[permissionsIndex].AsObject(m_permissions[permissionsIndex].Jsonize());
    }
    payload.WithArray("Permissions", std::move(permissionsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
