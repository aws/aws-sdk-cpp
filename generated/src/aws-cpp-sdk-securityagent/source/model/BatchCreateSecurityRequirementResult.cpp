/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchCreateSecurityRequirementResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

BatchCreateSecurityRequirementResult::BatchCreateSecurityRequirementResult(JsonView jsonValue) { *this = jsonValue; }

BatchCreateSecurityRequirementResult& BatchCreateSecurityRequirementResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("packId")) {
    m_packId = jsonValue.GetString("packId");
    m_packIdHasBeenSet = true;
  }
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
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchCreateSecurityRequirementResult::Jsonize() const {
  JsonValue payload;

  if (m_packIdHasBeenSet) {
    payload.WithString("packId", m_packId);
  }

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

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
