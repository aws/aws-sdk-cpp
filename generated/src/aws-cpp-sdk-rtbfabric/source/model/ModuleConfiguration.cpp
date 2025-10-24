/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/ModuleConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

ModuleConfiguration::ModuleConfiguration(JsonView jsonValue) { *this = jsonValue; }

ModuleConfiguration& ModuleConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dependsOn")) {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("dependsOn");
    for (unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex) {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsString());
    }
    m_dependsOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("moduleParameters")) {
    m_moduleParameters = jsonValue.GetObject("moduleParameters");
    m_moduleParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue ModuleConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_dependsOnHasBeenSet) {
    Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
    for (unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex) {
      dependsOnJsonList[dependsOnIndex].AsString(m_dependsOn[dependsOnIndex]);
    }
    payload.WithArray("dependsOn", std::move(dependsOnJsonList));
  }

  if (m_moduleParametersHasBeenSet) {
    payload.WithObject("moduleParameters", m_moduleParameters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
