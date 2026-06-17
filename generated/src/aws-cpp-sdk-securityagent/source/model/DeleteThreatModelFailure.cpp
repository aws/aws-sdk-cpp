/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/DeleteThreatModelFailure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

DeleteThreatModelFailure::DeleteThreatModelFailure(JsonView jsonValue) { *this = jsonValue; }

DeleteThreatModelFailure& DeleteThreatModelFailure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("threatModelId")) {
    m_threatModelId = jsonValue.GetString("threatModelId");
    m_threatModelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue DeleteThreatModelFailure::Jsonize() const {
  JsonValue payload;

  if (m_threatModelIdHasBeenSet) {
    payload.WithString("threatModelId", m_threatModelId);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
