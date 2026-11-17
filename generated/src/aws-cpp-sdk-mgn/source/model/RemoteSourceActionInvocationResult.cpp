/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/RemoteSourceActionInvocationResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

RemoteSourceActionInvocationResult::RemoteSourceActionInvocationResult(JsonView jsonValue) { *this = jsonValue; }

RemoteSourceActionInvocationResult& RemoteSourceActionInvocationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("remoteSourceActionID")) {
    m_remoteSourceActionID = jsonValue.GetString("remoteSourceActionID");
    m_remoteSourceActionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectorOwnerAccountID")) {
    m_connectorOwnerAccountID = jsonValue.GetString("connectorOwnerAccountID");
    m_connectorOwnerAccountIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RemoteSourceActionInvocationStatusMapper::GetRemoteSourceActionInvocationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetDouble("endedAt");
    m_endedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue RemoteSourceActionInvocationResult::Jsonize() const {
  JsonValue payload;

  if (m_remoteSourceActionIDHasBeenSet) {
    payload.WithString("remoteSourceActionID", m_remoteSourceActionID);
  }

  if (m_connectorOwnerAccountIDHasBeenSet) {
    payload.WithString("connectorOwnerAccountID", m_connectorOwnerAccountID);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RemoteSourceActionInvocationStatusMapper::GetNameForRemoteSourceActionInvocationStatus(m_status));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
