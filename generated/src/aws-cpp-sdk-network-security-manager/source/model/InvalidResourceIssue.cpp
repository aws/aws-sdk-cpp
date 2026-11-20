/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/InvalidResourceIssue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

InvalidResourceIssue::InvalidResourceIssue(JsonView jsonValue) { *this = jsonValue; }

InvalidResourceIssue& InvalidResourceIssue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedValue")) {
    m_expectedValue = jsonValue.GetString("expectedValue");
    m_expectedValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actualValue")) {
    m_actualValue = jsonValue.GetString("actualValue");
    m_actualValueHasBeenSet = true;
  }
  return *this;
}

JsonValue InvalidResourceIssue::Jsonize() const {
  JsonValue payload;

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_expectedValueHasBeenSet) {
    payload.WithString("expectedValue", m_expectedValue);
  }

  if (m_actualValueHasBeenSet) {
    payload.WithString("actualValue", m_actualValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
