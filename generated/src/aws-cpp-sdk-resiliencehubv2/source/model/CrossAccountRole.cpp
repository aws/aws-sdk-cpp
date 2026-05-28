/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/CrossAccountRole.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

CrossAccountRole::CrossAccountRole(JsonView jsonValue) { *this = jsonValue; }

CrossAccountRole& CrossAccountRole::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("crossAccountRoleArn")) {
    m_crossAccountRoleArn = jsonValue.GetString("crossAccountRoleArn");
    m_crossAccountRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("externalId")) {
    m_externalId = jsonValue.GetString("externalId");
    m_externalIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossAccountRole::Jsonize() const {
  JsonValue payload;

  if (m_crossAccountRoleArnHasBeenSet) {
    payload.WithString("crossAccountRoleArn", m_crossAccountRoleArn);
  }

  if (m_externalIdHasBeenSet) {
    payload.WithString("externalId", m_externalId);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
