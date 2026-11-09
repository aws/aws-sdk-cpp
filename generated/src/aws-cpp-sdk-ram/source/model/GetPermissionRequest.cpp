/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ram/model/GetPermissionRequest.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetPermissionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_permissionArnHasBeenSet) {
    payload.WithString("permissionArn", m_permissionArn);
  }

  if (m_permissionVersionHasBeenSet) {
    payload.WithInteger("permissionVersion", m_permissionVersion);
  }

  if (m_permissionTemplateParametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> permissionTemplateParametersJsonList(m_permissionTemplateParameters.size());
    for (unsigned permissionTemplateParametersIndex = 0;
         permissionTemplateParametersIndex < permissionTemplateParametersJsonList.GetLength(); ++permissionTemplateParametersIndex) {
      permissionTemplateParametersJsonList[permissionTemplateParametersIndex].AsObject(
          m_permissionTemplateParameters[permissionTemplateParametersIndex].Jsonize());
    }
    payload.WithArray("permissionTemplateParameters", std::move(permissionTemplateParametersJsonList));
  }

  return payload.View().WriteReadable();
}
