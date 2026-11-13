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
 * <p>Contains information about the primary secret that a cross-account replica
 * secret replicates from, including its ARN and replication status. This
 * information is only available for cross-account replica secrets.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/CrossAccountPrimaryType">AWS
 * API Reference</a></p>
 */
class CrossAccountPrimaryType {
 public:
  AWS_SECRETSMANAGER_API CrossAccountPrimaryType() = default;
  AWS_SECRETSMANAGER_API CrossAccountPrimaryType(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECRETSMANAGER_API CrossAccountPrimaryType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the primary secret replicating into this replica secret.</p>
   */
  inline const Aws::String& GetPrimarySecretARN() const { return m_primarySecretARN; }
  inline bool PrimarySecretARNHasBeenSet() const { return m_primarySecretARNHasBeenSet; }
  template <typename PrimarySecretARNT = Aws::String>
  void SetPrimarySecretARN(PrimarySecretARNT&& value) {
    m_primarySecretARNHasBeenSet = true;
    m_primarySecretARN = std::forward<PrimarySecretARNT>(value);
  }
  template <typename PrimarySecretARNT = Aws::String>
  CrossAccountPrimaryType& WithPrimarySecretARN(PrimarySecretARNT&& value) {
    SetPrimarySecretARN(std::forward<PrimarySecretARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of replication from the primary secret to this replica. The status
   * can be:</p> <ul> <li> <p> <code>InSync</code>: Replication to the replica secret
   * is complete.</p> </li> <li> <p> <code>Failed</code>: Replication to the replica
   * secret was unable to be completed.</p> </li> <li> <p> <code>InProgress</code>:
   * Replication to the replica secret has started but is not complete.</p> </li>
   * <li> <p> <code>Pending</code>: Replication has not yet started for the replica
   * secret.</p> </li> <li> <p> <code>Detached</code>: Replication to the replica
   * secret was stopped by the primary.</p> </li> </ul>
   */
  inline StatusType GetReplicationStatus() const { return m_replicationStatus; }
  inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
  inline void SetReplicationStatus(StatusType value) {
    m_replicationStatusHasBeenSet = true;
    m_replicationStatus = value;
  }
  inline CrossAccountPrimaryType& WithReplicationStatus(StatusType value) {
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
  CrossAccountPrimaryType& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_primarySecretARN;

  StatusType m_replicationStatus{StatusType::NOT_SET};

  Aws::String m_statusMessage;
  bool m_primarySecretARNHasBeenSet = false;
  bool m_replicationStatusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
