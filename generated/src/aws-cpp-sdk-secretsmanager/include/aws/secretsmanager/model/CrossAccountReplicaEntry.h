/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/StatusType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecretsManager {
namespace Model {

/**
 * <p>Information about a cross-account replica secret. This information is only
 * available for cross-account primary secrets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/CrossAccountReplicaEntry">AWS
 * API Reference</a></p>
 */
class CrossAccountReplicaEntry {
 public:
  AWS_SECRETSMANAGER_API CrossAccountReplicaEntry() = default;
  AWS_SECRETSMANAGER_API CrossAccountReplicaEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECRETSMANAGER_API CrossAccountReplicaEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the replica secret.</p>
   */
  inline const Aws::String& GetReplicaSecretARN() const { return m_replicaSecretARN; }
  inline bool ReplicaSecretARNHasBeenSet() const { return m_replicaSecretARNHasBeenSet; }
  template <typename ReplicaSecretARNT = Aws::String>
  void SetReplicaSecretARN(ReplicaSecretARNT&& value) {
    m_replicaSecretARNHasBeenSet = true;
    m_replicaSecretARN = std::forward<ReplicaSecretARNT>(value);
  }
  template <typename ReplicaSecretARNT = Aws::String>
  CrossAccountReplicaEntry& WithReplicaSecretARN(ReplicaSecretARNT&& value) {
    SetReplicaSecretARN(std::forward<ReplicaSecretARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that Secrets Manager assumes to replicate to this
   * replica, if one was specified when the replica was associated.</p>
   */
  inline const Aws::String& GetReplicationRoleARN() const { return m_replicationRoleARN; }
  inline bool ReplicationRoleARNHasBeenSet() const { return m_replicationRoleARNHasBeenSet; }
  template <typename ReplicationRoleARNT = Aws::String>
  void SetReplicationRoleARN(ReplicationRoleARNT&& value) {
    m_replicationRoleARNHasBeenSet = true;
    m_replicationRoleARN = std::forward<ReplicationRoleARNT>(value);
  }
  template <typename ReplicationRoleARNT = Aws::String>
  CrossAccountReplicaEntry& WithReplicationRoleARN(ReplicationRoleARNT&& value) {
    SetReplicationRoleARN(std::forward<ReplicationRoleARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of replication from this primary secret. The status can be:</p>
   * <ul> <li> <p> <code>InSync</code>: Replication from the primary secret is
   * complete.</p> </li> <li> <p> <code>Failed</code>: Replication from the primary
   * secret was unable to be completed.</p> </li> <li> <p> <code>InProgress</code>:
   * Replication from the primary secret has started but is not complete.</p> </li>
   * <li> <p> <code>Detached</code>: Replication from the primary secret was stopped
   * by the replica.</p> </li> </ul>
   */
  inline StatusType GetReplicationStatus() const { return m_replicationStatus; }
  inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
  inline void SetReplicationStatus(StatusType value) {
    m_replicationStatusHasBeenSet = true;
    m_replicationStatus = value;
  }
  inline CrossAccountReplicaEntry& WithReplicationStatus(StatusType value) {
    SetReplicationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that describes the replication status, if Secrets Manager has more
   * information to provide.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  CrossAccountReplicaEntry& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_replicaSecretARN;

  Aws::String m_replicationRoleARN;

  StatusType m_replicationStatus{StatusType::NOT_SET};

  Aws::String m_statusMessage;
  bool m_replicaSecretARNHasBeenSet = false;
  bool m_replicationRoleARNHasBeenSet = false;
  bool m_replicationStatusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
