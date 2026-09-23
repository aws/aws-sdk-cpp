/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/DeploymentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

DeploymentSummary::DeploymentSummary(JsonView jsonValue) { *this = jsonValue; }

DeploymentSummary& DeploymentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deploymentId")) {
    m_deploymentId = jsonValue.GetString("deploymentId");
    m_deploymentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentArn")) {
    m_deploymentArn = jsonValue.GetString("deploymentArn");
    m_deploymentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentName")) {
    m_deploymentName = jsonValue.GetString("deploymentName");
    m_deploymentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasPublishedVersion")) {
    m_hasPublishedVersion = jsonValue.GetBool("hasPublishedVersion");
    m_hasPublishedVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentSummary::Jsonize() const {
  JsonValue payload;

  if (m_deploymentIdHasBeenSet) {
    payload.WithString("deploymentId", m_deploymentId);
  }

  if (m_deploymentArnHasBeenSet) {
    payload.WithString("deploymentArn", m_deploymentArn);
  }

  if (m_deploymentNameHasBeenSet) {
    payload.WithString("deploymentName", m_deploymentName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EntityStatusMapper::GetNameForEntityStatus(m_status));
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_hasPublishedVersionHasBeenSet) {
    payload.WithBool("hasPublishedVersion", m_hasPublishedVersion);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
