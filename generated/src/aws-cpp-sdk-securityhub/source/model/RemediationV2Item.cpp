/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationV2Item.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationV2Item::RemediationV2Item(JsonView jsonValue) { *this = jsonValue; }

RemediationV2Item& RemediationV2Item::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TargetUid")) {
    m_targetUid = jsonValue.GetString("TargetUid");
    m_targetUidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Outcome")) {
    m_outcome = jsonValue.GetObject("Outcome");
    m_outcomeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Priority")) {
    m_priority = RemediationPriorityMapper::GetRemediationPriorityForName(jsonValue.GetString("Priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RemediationSummary")) {
    m_remediationSummary = jsonValue.GetObject("RemediationSummary");
    m_remediationSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Resource")) {
    m_resource = jsonValue.GetObject("Resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RemediationStatusMapper::GetRemediationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Trait")) {
    m_trait = jsonValue.GetObject("Trait");
    m_traitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Guidance")) {
    m_guidance = jsonValue.GetObject("Guidance");
    m_guidanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationV2Item::Jsonize() const {
  JsonValue payload;

  if (m_targetUidHasBeenSet) {
    payload.WithString("TargetUid", m_targetUid);
  }

  if (m_outcomeHasBeenSet) {
    payload.WithObject("Outcome", m_outcome.Jsonize());
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("Priority", RemediationPriorityMapper::GetNameForRemediationPriority(m_priority));
  }

  if (m_remediationSummaryHasBeenSet) {
    payload.WithObject("RemediationSummary", m_remediationSummary.Jsonize());
  }

  if (m_resourceHasBeenSet) {
    payload.WithObject("Resource", m_resource.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", RemediationStatusMapper::GetNameForRemediationStatus(m_status));
  }

  if (m_traitHasBeenSet) {
    payload.WithObject("Trait", m_trait.Jsonize());
  }

  if (m_guidanceHasBeenSet) {
    payload.WithObject("Guidance", m_guidance.Jsonize());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
