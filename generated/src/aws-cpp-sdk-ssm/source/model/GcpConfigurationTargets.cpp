/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/GcpConfigurationTargets.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

GcpConfigurationTargets::GcpConfigurationTargets(JsonView jsonValue) { *this = jsonValue; }

GcpConfigurationTargets& GcpConfigurationTargets::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Projects")) {
    Aws::Utils::Array<JsonView> projectsJsonList = jsonValue.GetArray("Projects");
    for (unsigned projectsIndex = 0; projectsIndex < projectsJsonList.GetLength(); ++projectsIndex) {
      m_projects.push_back(projectsJsonList[projectsIndex].AsObject());
    }
    m_projectsHasBeenSet = true;
  }
  return *this;
}

JsonValue GcpConfigurationTargets::Jsonize() const {
  JsonValue payload;

  if (m_projectsHasBeenSet) {
    Aws::Utils::Array<JsonValue> projectsJsonList(m_projects.size());
    for (unsigned projectsIndex = 0; projectsIndex < projectsJsonList.GetLength(); ++projectsIndex) {
      projectsJsonList[projectsIndex].AsObject(m_projects[projectsIndex].Jsonize());
    }
    payload.WithArray("Projects", std::move(projectsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
