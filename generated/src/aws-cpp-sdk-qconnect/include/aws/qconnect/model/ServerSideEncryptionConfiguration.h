/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ReplicaKmsKey.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>The configuration information for the customer managed key used for
 * encryption.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ServerSideEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class ServerSideEncryptionConfiguration {
 public:
  AWS_QCONNECT_API ServerSideEncryptionConfiguration() = default;
  AWS_QCONNECT_API ServerSideEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ServerSideEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The customer managed key used for encryption. For more information about
   * setting up a customer managed key for Amazon Q in Connect, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
   * Amazon Q in Connect for your instance</a>. For information about valid ID
   * values, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
   * identifiers (KeyId)</a>.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  ServerSideEncryptionConfiguration& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of KMS keys used to encrypt data for this resource's replicas in
   * other Amazon Web Services Regions. Each entry corresponds to a Region where a
   * replica is configured.</p>
   */
  inline const Aws::Vector<ReplicaKmsKey>& GetReplicaKmsKeys() const { return m_replicaKmsKeys; }
  inline bool ReplicaKmsKeysHasBeenSet() const { return m_replicaKmsKeysHasBeenSet; }
  template <typename ReplicaKmsKeysT = Aws::Vector<ReplicaKmsKey>>
  void SetReplicaKmsKeys(ReplicaKmsKeysT&& value) {
    m_replicaKmsKeysHasBeenSet = true;
    m_replicaKmsKeys = std::forward<ReplicaKmsKeysT>(value);
  }
  template <typename ReplicaKmsKeysT = Aws::Vector<ReplicaKmsKey>>
  ServerSideEncryptionConfiguration& WithReplicaKmsKeys(ReplicaKmsKeysT&& value) {
    SetReplicaKmsKeys(std::forward<ReplicaKmsKeysT>(value));
    return *this;
  }
  template <typename ReplicaKmsKeysT = ReplicaKmsKey>
  ServerSideEncryptionConfiguration& AddReplicaKmsKeys(ReplicaKmsKeysT&& value) {
    m_replicaKmsKeysHasBeenSet = true;
    m_replicaKmsKeys.emplace_back(std::forward<ReplicaKmsKeysT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyId;

  Aws::Vector<ReplicaKmsKey> m_replicaKmsKeys;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_replicaKmsKeysHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
