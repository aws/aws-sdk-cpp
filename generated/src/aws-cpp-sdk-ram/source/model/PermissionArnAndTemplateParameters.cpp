/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ram/model/PermissionArnAndTemplateParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RAM {
namespace Model {

PermissionArnAndTemplateParameters::PermissionArnAndTemplateParameters(JsonView jsonValue) { *this = jsonValue; }

PermissionArnAndTemplateParameters& PermissionArnAndTemplateParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("permissionArn")) {
    m_permissionArn = jsonValue.GetString("permissionArn");
    m_permissionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permissionTemplateParameters")) {
    Aws::Utils::Array<JsonView> permissionTemplateParametersJsonList = jsonValue.GetArray("permissionTemplateParameters");
    for (unsigned permissionTemplateParametersIndex = 0;
         permissionTemplateParametersIndex < permissionTemplateParametersJsonList.GetLength(); ++permissionTemplateParametersIndex) {
      m_permissionTemplateParameters.push_back(permissionTemplateParametersJsonList[permissionTemplateParametersIndex].AsObject());
    }
    m_permissionTemplateParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue PermissionArnAndTemplateParameters::Jsonize() const {
  JsonValue payload;

  if (m_permissionArnHasBeenSet) {
    payload.WithString("permissionArn", m_permissionArn);
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

  return payload;
}

}  // namespace Model
}  // namespace RAM
}  // namespace Aws
