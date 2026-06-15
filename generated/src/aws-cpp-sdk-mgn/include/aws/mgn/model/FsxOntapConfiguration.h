/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>FSx for ONTAP storage configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/FsxOntapConfiguration">AWS
 * API Reference</a></p>
 */
class FsxOntapConfiguration {
 public:
  AWS_MGN_API FsxOntapConfiguration() = default;
  AWS_MGN_API FsxOntapConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API FsxOntapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>FSx ONTAP configuration storage virtual machine ID.</p>
   */
  inline const Aws::String& GetStorageVirtualMachineId() const { return m_storageVirtualMachineId; }
  inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }
  template <typename StorageVirtualMachineIdT = Aws::String>
  void SetStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    m_storageVirtualMachineIdHasBeenSet = true;
    m_storageVirtualMachineId = std::forward<StorageVirtualMachineIdT>(value);
  }
  template <typename StorageVirtualMachineIdT = Aws::String>
  FsxOntapConfiguration& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>FSx ONTAP configuration credentials secret ARN.</p>
   */
  inline const Aws::String& GetCredentialsSecretArn() const { return m_credentialsSecretArn; }
  inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }
  template <typename CredentialsSecretArnT = Aws::String>
  void SetCredentialsSecretArn(CredentialsSecretArnT&& value) {
    m_credentialsSecretArnHasBeenSet = true;
    m_credentialsSecretArn = std::forward<CredentialsSecretArnT>(value);
  }
  template <typename CredentialsSecretArnT = Aws::String>
  FsxOntapConfiguration& WithCredentialsSecretArn(CredentialsSecretArnT&& value) {
    SetCredentialsSecretArn(std::forward<CredentialsSecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_storageVirtualMachineId;

  Aws::String m_credentialsSecretArn;
  bool m_storageVirtualMachineIdHasBeenSet = false;
  bool m_credentialsSecretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
