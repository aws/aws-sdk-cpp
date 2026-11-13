/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/GcpProject.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

GcpProject::GcpProject(JsonView jsonValue) { *this = jsonValue; }

GcpProject& GcpProject::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProjectId")) {
    m_projectId = jsonValue.GetString("ProjectId");
    m_projectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProjectDisplayName")) {
    m_projectDisplayName = jsonValue.GetString("ProjectDisplayName");
    m_projectDisplayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GcpProject::Jsonize() const {
  JsonValue payload;

  if (m_projectIdHasBeenSet) {
    payload.WithString("ProjectId", m_projectId);
  }

  if (m_projectDisplayNameHasBeenSet) {
    payload.WithString("ProjectDisplayName", m_projectDisplayName);
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
