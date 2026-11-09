/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ram/model/AssociatedPermission.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RAM {
namespace Model {

AssociatedPermission::AssociatedPermission(JsonView jsonValue) { *this = jsonValue; }

AssociatedPermission& AssociatedPermission::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permissionVersion")) {
    m_permissionVersion = jsonValue.GetString("permissionVersion");
    m_permissionVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultVersion")) {
    m_defaultVersion = jsonValue.GetBool("defaultVersion");
    m_defaultVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("featureSet")) {
    m_featureSet = PermissionFeatureSetMapper::GetPermissionFeatureSetForName(jsonValue.GetString("featureSet"));
    m_featureSetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceShareArn")) {
    m_resourceShareArn = jsonValue.GetString("resourceShareArn");
    m_resourceShareArnHasBeenSet = true;
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

JsonValue AssociatedPermission::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_permissionVersionHasBeenSet) {
    payload.WithString("permissionVersion", m_permissionVersion);
  }

  if (m_defaultVersionHasBeenSet) {
    payload.WithBool("defaultVersion", m_defaultVersion);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", m_resourceType);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  if (m_featureSetHasBeenSet) {
    payload.WithString("featureSet", PermissionFeatureSetMapper::GetNameForPermissionFeatureSet(m_featureSet));
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_resourceShareArnHasBeenSet) {
    payload.WithString("resourceShareArn", m_resourceShareArn);
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
