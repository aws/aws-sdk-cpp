/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/RemoteSourceActionInvocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

RemoteSourceActionInvocation::RemoteSourceActionInvocation(JsonView jsonValue) { *this = jsonValue; }

RemoteSourceActionInvocation& RemoteSourceActionInvocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceServerArn")) {
    m_sourceServerArn = jsonValue.GetString("sourceServerArn");
    m_sourceServerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remoteSourceActionArn")) {
    m_remoteSourceActionArn = jsonValue.GetString("remoteSourceActionArn");
    m_remoteSourceActionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ssmCommandInvocationID")) {
    m_ssmCommandInvocationID = jsonValue.GetString("ssmCommandInvocationID");
    m_ssmCommandInvocationIDHasBeenSet = true;
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

JsonValue RemoteSourceActionInvocation::Jsonize() const {
  JsonValue payload;

  if (m_sourceServerArnHasBeenSet) {
    payload.WithString("sourceServerArn", m_sourceServerArn);
  }

  if (m_remoteSourceActionArnHasBeenSet) {
    payload.WithString("remoteSourceActionArn", m_remoteSourceActionArn);
  }

  if (m_ssmCommandInvocationIDHasBeenSet) {
    payload.WithString("ssmCommandInvocationID", m_ssmCommandInvocationID);
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
