/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecretsManager {
namespace Model {

/**
 */
class DisassociateCrossAccountReplicaRequest : public SecretsManagerRequest {
 public:
  AWS_SECRETSMANAGER_API DisassociateCrossAccountReplicaRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateCrossAccountReplica"; }

  AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

  AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN or name of the primary secret in your account.</p> <p>For an ARN, we
   * recommend that you specify a complete ARN rather than a partial ARN. See <a
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
  DisassociateCrossAccountReplicaRequest& WithSecretId(SecretIdT&& value) {
    SetSecretId(std::forward<SecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the cross-account replica secret to unlink from the primary
   * secret.</p>
   */
  inline const Aws::String& GetCrossAccountReplicaARN() const { return m_crossAccountReplicaARN; }
  inline bool CrossAccountReplicaARNHasBeenSet() const { return m_crossAccountReplicaARNHasBeenSet; }
  template <typename CrossAccountReplicaARNT = Aws::String>
  void SetCrossAccountReplicaARN(CrossAccountReplicaARNT&& value) {
    m_crossAccountReplicaARNHasBeenSet = true;
    m_crossAccountReplicaARN = std::forward<CrossAccountReplicaARNT>(value);
  }
  template <typename CrossAccountReplicaARNT = Aws::String>
  DisassociateCrossAccountReplicaRequest& WithCrossAccountReplicaARN(CrossAccountReplicaARNT&& value) {
    SetCrossAccountReplicaARN(std::forward<CrossAccountReplicaARNT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretId;

  Aws::String m_crossAccountReplicaARN;
  bool m_secretIdHasBeenSet = false;
  bool m_crossAccountReplicaARNHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
