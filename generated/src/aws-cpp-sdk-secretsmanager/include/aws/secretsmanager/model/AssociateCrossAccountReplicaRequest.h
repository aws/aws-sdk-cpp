/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/ReplicaRestrictionType.h>

#include <utility>

namespace Aws {
namespace SecretsManager {
namespace Model {

/**
 */
class AssociateCrossAccountReplicaRequest : public SecretsManagerRequest {
 public:
  AWS_SECRETSMANAGER_API AssociateCrossAccountReplicaRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateCrossAccountReplica"; }

  AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

  AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN or name of the primary secret in your account to replicate.</p>
   * <p>For an ARN, we recommend that you specify a complete ARN rather than a
   * partial ARN. See <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
   * a secret from a partial ARN</a>.</p>
   */
  inline const Aws::String& GetSecretId() const { return m_secretId; }
  inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
  template <typename SecretIdT = Aws::String>
  void SetSecretId(SecretIdT&& value) {
    m_secretIdHasBeenSet = true;
    m_secretId = std::forward<SecretIdT>(value);
  }
  template <typename SecretIdT = Aws::String>
  AssociateCrossAccountReplicaRequest& WithSecretId(SecretIdT&& value) {
    SetSecretId(std::forward<SecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the replica secret in the other Amazon Web Services account. The
   * replica secret must be in the same Region and partition as the primary secret.
   * Additionally, the replica account owner must have created the replica secret as
   * a cross-account replica of the primary secret. For more information see
   * <a>CreateSecret</a>.</p>
   */
  inline const Aws::String& GetCrossAccountReplicaARN() const { return m_crossAccountReplicaARN; }
  inline bool CrossAccountReplicaARNHasBeenSet() const { return m_crossAccountReplicaARNHasBeenSet; }
  template <typename CrossAccountReplicaARNT = Aws::String>
  void SetCrossAccountReplicaARN(CrossAccountReplicaARNT&& value) {
    m_crossAccountReplicaARNHasBeenSet = true;
    m_crossAccountReplicaARN = std::forward<CrossAccountReplicaARNT>(value);
  }
  template <typename CrossAccountReplicaARNT = Aws::String>
  AssociateCrossAccountReplicaRequest& WithCrossAccountReplicaARN(CrossAccountReplicaARNT&& value) {
    SetCrossAccountReplicaARN(std::forward<CrossAccountReplicaARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the replica account must belong to the same Amazon Web Services
   * organization as the primary account:</p> <ul> <li> <p> <code>SameOrg</code>,
   * which requires the replica account to be in the same organization as the primary
   * account. This is the default.</p> </li> <li> <p> <code>NoRestriction</code>,
   * which allows the replica account to be in any organization.</p> </li> </ul>
   */
  inline ReplicaRestrictionType GetReplicaRestriction() const { return m_replicaRestriction; }
  inline bool ReplicaRestrictionHasBeenSet() const { return m_replicaRestrictionHasBeenSet; }
  inline void SetReplicaRestriction(ReplicaRestrictionType value) {
    m_replicaRestrictionHasBeenSet = true;
    m_replicaRestriction = value;
  }
  inline AssociateCrossAccountReplicaRequest& WithReplicaRestriction(ReplicaRestrictionType value) {
    SetReplicaRestriction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of an IAM role in the primary account that Secrets Manager assumes to
   * perform replication. If you don't include this field, Secrets Manager replicates
   * using the credentials of caller who updates the primary secret. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/cross-account-replicate-permissions.html">
   * Cross-account replication permissions</a>.</p>
   */
  inline const Aws::String& GetReplicationRoleARN() const { return m_replicationRoleARN; }
  inline bool ReplicationRoleARNHasBeenSet() const { return m_replicationRoleARNHasBeenSet; }
  template <typename ReplicationRoleARNT = Aws::String>
  void SetReplicationRoleARN(ReplicationRoleARNT&& value) {
    m_replicationRoleARNHasBeenSet = true;
    m_replicationRoleARN = std::forward<ReplicationRoleARNT>(value);
  }
  template <typename ReplicationRoleARNT = Aws::String>
  AssociateCrossAccountReplicaRequest& WithReplicationRoleARN(ReplicationRoleARNT&& value) {
    SetReplicationRoleARN(std::forward<ReplicationRoleARNT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretId;

  Aws::String m_crossAccountReplicaARN;

  ReplicaRestrictionType m_replicaRestriction{ReplicaRestrictionType::NOT_SET};

  Aws::String m_replicationRoleARN;
  bool m_secretIdHasBeenSet = false;
  bool m_crossAccountReplicaARNHasBeenSet = false;
  bool m_replicaRestrictionHasBeenSet = false;
  bool m_replicationRoleARNHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
