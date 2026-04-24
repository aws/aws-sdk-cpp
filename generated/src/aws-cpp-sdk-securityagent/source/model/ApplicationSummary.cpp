/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ApplicationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ApplicationSummary::ApplicationSummary(JsonView jsonValue) { *this = jsonValue; }

ApplicationSummary& ApplicationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("applicationId")) {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationName")) {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domain")) {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultKmsKeyId")) {
    m_defaultKmsKeyId = jsonValue.GetString("defaultKmsKeyId");
    m_defaultKmsKeyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationSummary::Jsonize() const {
  JsonValue payload;

  if (m_applicationIdHasBeenSet) {
    payload.WithString("applicationId", m_applicationId);
  }

  if (m_applicationNameHasBeenSet) {
    payload.WithString("applicationName", m_applicationName);
  }

  if (m_domainHasBeenSet) {
    payload.WithString("domain", m_domain);
  }

  if (m_defaultKmsKeyIdHasBeenSet) {
    payload.WithString("defaultKmsKeyId", m_defaultKmsKeyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
