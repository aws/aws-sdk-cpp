/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/ReplicationPeer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

ReplicationPeer::ReplicationPeer(JsonView jsonValue) { *this = jsonValue; }

ReplicationPeer& ReplicationPeer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PeerDomainArn")) {
    m_peerDomainArn = jsonValue.GetString("PeerDomainArn");
    m_peerDomainArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PeerRole")) {
    m_peerRole = ReplicationRoleMapper::GetReplicationRoleForName(jsonValue.GetString("PeerRole"));
    m_peerRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ReplicationStatusMapper::GetReplicationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationPeer::Jsonize() const {
  JsonValue payload;

  if (m_peerDomainArnHasBeenSet) {
    payload.WithString("PeerDomainArn", m_peerDomainArn);
  }

  if (m_peerRoleHasBeenSet) {
    payload.WithString("PeerRole", ReplicationRoleMapper::GetNameForReplicationRole(m_peerRole));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ReplicationStatusMapper::GetNameForReplicationStatus(m_status));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("StatusMessage", m_statusMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
