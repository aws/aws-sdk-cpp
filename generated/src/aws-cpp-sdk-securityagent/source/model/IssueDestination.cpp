/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/IssueDestination.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

IssueDestination::IssueDestination(JsonView jsonValue) { *this = jsonValue; }

IssueDestination& IssueDestination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("integrationId")) {
    m_integrationId = jsonValue.GetString("integrationId");
    m_integrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectKey")) {
    m_projectKey = jsonValue.GetString("projectKey");
    m_projectKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue IssueDestination::Jsonize() const {
  JsonValue payload;

  if (m_integrationIdHasBeenSet) {
    payload.WithString("integrationId", m_integrationId);
  }

  if (m_projectKeyHasBeenSet) {
    payload.WithString("projectKey", m_projectKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
