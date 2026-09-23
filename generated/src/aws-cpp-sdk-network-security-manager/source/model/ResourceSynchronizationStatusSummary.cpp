/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/ResourceSynchronizationStatusSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

ResourceSynchronizationStatusSummary::ResourceSynchronizationStatusSummary(JsonView jsonValue) { *this = jsonValue; }

ResourceSynchronizationStatusSummary& ResourceSynchronizationStatusSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("synchronizationStatus")) {
    m_synchronizationStatus = SynchronizationStatusMapper::GetSynchronizationStatusForName(jsonValue.GetString("synchronizationStatus"));
    m_synchronizationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentArn")) {
    m_deploymentArn = jsonValue.GetString("deploymentArn");
    m_deploymentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outOfSyncReasons")) {
    m_outOfSyncReasons = jsonValue.GetObject("outOfSyncReasons");
    m_outOfSyncReasonsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediationIssues")) {
    m_remediationIssues = jsonValue.GetObject("remediationIssues");
    m_remediationIssuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatedAt")) {
    m_evaluatedAt = jsonValue.GetString("evaluatedAt");
    m_evaluatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceSynchronizationStatusSummary::Jsonize() const {
  JsonValue payload;

  if (m_synchronizationStatusHasBeenSet) {
    payload.WithString("synchronizationStatus", SynchronizationStatusMapper::GetNameForSynchronizationStatus(m_synchronizationStatus));
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  if (m_deploymentArnHasBeenSet) {
    payload.WithString("deploymentArn", m_deploymentArn);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_outOfSyncReasonsHasBeenSet) {
    payload.WithObject("outOfSyncReasons", m_outOfSyncReasons.Jsonize());
  }

  if (m_remediationIssuesHasBeenSet) {
    payload.WithObject("remediationIssues", m_remediationIssues.Jsonize());
  }

  if (m_evaluatedAtHasBeenSet) {
    payload.WithString("evaluatedAt", m_evaluatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
