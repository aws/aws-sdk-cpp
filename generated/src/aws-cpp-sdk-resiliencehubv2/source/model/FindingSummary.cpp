/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/FindingSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

FindingSummary::FindingSummary(JsonView jsonValue) { *this = jsonValue; }

FindingSummary& FindingSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureCategory")) {
    m_failureCategory = FailureCategoryMapper::GetFailureCategoryForName(jsonValue.GetString("failureCategory"));
    m_failureCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = FindingSeverityMapper::GetFindingSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyComponent")) {
    m_policyComponent = PolicyComponentMapper::GetPolicyComponentForName(jsonValue.GetString("policyComponent"));
    m_policyComponentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingSummary::Jsonize() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_failureCategoryHasBeenSet) {
    payload.WithString("failureCategory", FailureCategoryMapper::GetNameForFailureCategory(m_failureCategory));
  }

  if (m_severityHasBeenSet) {
    payload.WithString("severity", FindingSeverityMapper::GetNameForFindingSeverity(m_severity));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", FindingStatusMapper::GetNameForFindingStatus(m_status));
  }

  if (m_policyComponentHasBeenSet) {
    payload.WithString("policyComponent", PolicyComponentMapper::GetNameForPolicyComponent(m_policyComponent));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
