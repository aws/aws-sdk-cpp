/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SelfUpgradeRequestDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SelfUpgradeRequestDetail::SelfUpgradeRequestDetail(JsonView jsonValue) { *this = jsonValue; }

SelfUpgradeRequestDetail& SelfUpgradeRequestDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("UpgradeRequestId")) {
    m_upgradeRequestId = jsonValue.GetString("UpgradeRequestId");
    m_upgradeRequestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserName")) {
    m_userName = jsonValue.GetString("UserName");
    m_userNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OriginalRole")) {
    m_originalRole = UserRoleMapper::GetUserRoleForName(jsonValue.GetString("OriginalRole"));
    m_originalRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestedRole")) {
    m_requestedRole = UserRoleMapper::GetUserRoleForName(jsonValue.GetString("RequestedRole"));
    m_requestedRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestNote")) {
    m_requestNote = jsonValue.GetString("RequestNote");
    m_requestNoteHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetInt64("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestStatus")) {
    m_requestStatus = SelfUpgradeRequestStatusMapper::GetSelfUpgradeRequestStatusForName(jsonValue.GetString("RequestStatus"));
    m_requestStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdateAttemptTime")) {
    m_lastUpdateAttemptTime = jsonValue.GetInt64("lastUpdateAttemptTime");
    m_lastUpdateAttemptTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdateFailureReason")) {
    m_lastUpdateFailureReason = jsonValue.GetString("lastUpdateFailureReason");
    m_lastUpdateFailureReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfUpgradeRequestDetail::Jsonize() const {
  JsonValue payload;

  if (m_upgradeRequestIdHasBeenSet) {
    payload.WithString("UpgradeRequestId", m_upgradeRequestId);
  }

  if (m_userNameHasBeenSet) {
    payload.WithString("UserName", m_userName);
  }

  if (m_originalRoleHasBeenSet) {
    payload.WithString("OriginalRole", UserRoleMapper::GetNameForUserRole(m_originalRole));
  }

  if (m_requestedRoleHasBeenSet) {
    payload.WithString("RequestedRole", UserRoleMapper::GetNameForUserRole(m_requestedRole));
  }

  if (m_requestNoteHasBeenSet) {
    payload.WithString("RequestNote", m_requestNote);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithInt64("CreationTime", m_creationTime);
  }

  if (m_requestStatusHasBeenSet) {
    payload.WithString("RequestStatus", SelfUpgradeRequestStatusMapper::GetNameForSelfUpgradeRequestStatus(m_requestStatus));
  }

  if (m_lastUpdateAttemptTimeHasBeenSet) {
    payload.WithInt64("lastUpdateAttemptTime", m_lastUpdateAttemptTime);
  }

  if (m_lastUpdateFailureReasonHasBeenSet) {
    payload.WithString("lastUpdateFailureReason", m_lastUpdateFailureReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
