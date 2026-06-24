/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>The configuration of the Oracle Cloud Infrastructure (OCI) Vault encryption
 * key used for an Autonomous Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/OciEncryptionKeyConfiguration">AWS
 * API Reference</a></p>
 */
class OciEncryptionKeyConfiguration {
 public:
  AWS_ODB_API OciEncryptionKeyConfiguration() = default;
  AWS_ODB_API OciEncryptionKeyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API OciEncryptionKeyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Oracle Cloud Identifier (OCID) of the OCI Vault key to use for
   * encryption.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  OciEncryptionKeyConfiguration& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Cloud Identifier (OCID) of the OCI Vault that contains the
   * encryption key.</p>
   */
  inline const Aws::String& GetVaultId() const { return m_vaultId; }
  inline bool VaultIdHasBeenSet() const { return m_vaultIdHasBeenSet; }
  template <typename VaultIdT = Aws::String>
  void SetVaultId(VaultIdT&& value) {
    m_vaultIdHasBeenSet = true;
    m_vaultId = std::forward<VaultIdT>(value);
  }
  template <typename VaultIdT = Aws::String>
  OciEncryptionKeyConfiguration& WithVaultId(VaultIdT&& value) {
    SetVaultId(std::forward<VaultIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyId;

  Aws::String m_vaultId;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_vaultIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
