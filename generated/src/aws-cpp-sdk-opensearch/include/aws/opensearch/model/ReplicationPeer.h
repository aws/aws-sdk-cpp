/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ReplicationRole.h>
#include <aws/opensearch/model/ReplicationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>A domain that another domain replicates with, and the state of that
 * relationship.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ReplicationPeer">AWS
 * API Reference</a></p>
 */
class ReplicationPeer {
 public:
  AWS_OPENSEARCHSERVICE_API ReplicationPeer() = default;
  AWS_OPENSEARCHSERVICE_API ReplicationPeer(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API ReplicationPeer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the peer domain.</p>
   */
  inline const Aws::String& GetPeerDomainArn() const { return m_peerDomainArn; }
  inline bool PeerDomainArnHasBeenSet() const { return m_peerDomainArnHasBeenSet; }
  template <typename PeerDomainArnT = Aws::String>
  void SetPeerDomainArn(PeerDomainArnT&& value) {
    m_peerDomainArnHasBeenSet = true;
    m_peerDomainArn = std::forward<PeerDomainArnT>(value);
  }
  template <typename PeerDomainArnT = Aws::String>
  ReplicationPeer& WithPeerDomainArn(PeerDomainArnT&& value) {
    SetPeerDomainArn(std::forward<PeerDomainArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The peer's role in the relationship, either <code>PRIMARY</code> or
   * <code>SECONDARY</code>.</p>
   */
  inline ReplicationRole GetPeerRole() const { return m_peerRole; }
  inline bool PeerRoleHasBeenSet() const { return m_peerRoleHasBeenSet; }
  inline void SetPeerRole(ReplicationRole value) {
    m_peerRoleHasBeenSet = true;
    m_peerRole = value;
  }
  inline ReplicationPeer& WithPeerRole(ReplicationRole value) {
    SetPeerRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the relationship:</p> <ul> <li> <p> <code>PENDING_SETUP</code> -
   * replication is being established.</p> </li> <li> <p> <code>ACTIVE</code> -
   * replication is running.</p> </li> <li> <p> <code>SWITCHING_OVER</code> - a
   * planned promotion is in progress.</p> </li> <li> <p> <code>FAILING_OVER</code> -
   * an unplanned promotion is in progress.</p> </li> <li> <p>
   * <code>PENDING_REMOVAL</code> - replication is being stopped.</p> </li> <li> <p>
   * <code>DETACHED</code> - the relationship has ended.</p> </li> <li> <p>
   * <code>EJECTED</code> - a failover promoted the other domain. The former primary
   * keeps the data it had when it was ejected and stays read-only until you remove
   * the peer, or discard that data and pair again.</p> </li> <li> <p>
   * <code>FAILED</code> - setup or teardown could not complete. You can still remove
   * the relationship.</p> </li> </ul> <p>A relationship that is removed successfully
   * no longer appears in <code>Peers</code>.</p>
   */
  inline ReplicationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ReplicationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ReplicationPeer& WithStatus(ReplicationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An explanation of why the relationship is in its current state, when more
   * detail is available.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  ReplicationPeer& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_peerDomainArn;

  ReplicationRole m_peerRole{ReplicationRole::NOT_SET};

  ReplicationStatus m_status{ReplicationStatus::NOT_SET};

  Aws::String m_statusMessage;
  bool m_peerDomainArnHasBeenSet = false;
  bool m_peerRoleHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
