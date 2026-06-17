/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/UpdateSecurityRequirementEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

UpdateSecurityRequirementEntry::UpdateSecurityRequirementEntry(JsonView jsonValue) { *this = jsonValue; }

UpdateSecurityRequirementEntry& UpdateSecurityRequirementEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domain")) {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluation")) {
    m_evaluation = jsonValue.GetString("evaluation");
    m_evaluationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediation")) {
    m_remediation = jsonValue.GetString("remediation");
    m_remediationHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateSecurityRequirementEntry::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_domainHasBeenSet) {
    payload.WithString("domain", m_domain);
  }

  if (m_evaluationHasBeenSet) {
    payload.WithString("evaluation", m_evaluation);
  }

  if (m_remediationHasBeenSet) {
    payload.WithString("remediation", m_remediation);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
