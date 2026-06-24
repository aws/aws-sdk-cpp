/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ExternalIdType.h>

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
 * <p>The configuration of the Amazon Web Services Key Management Service (KMS)
 * encryption key used for an Autonomous Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AwsEncryptionKeyConfiguration">AWS
 * API Reference</a></p>
 */
class AwsEncryptionKeyConfiguration {
 public:
  AWS_ODB_API AwsEncryptionKeyConfiguration() = default;
  AWS_ODB_API AwsEncryptionKeyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AwsEncryptionKeyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
   * Management (IAM) role that grants access to the KMS key.</p>
   */
  inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
  inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
  template <typename IamRoleArnT = Aws::String>
  void SetIamRoleArn(IamRoleArnT&& value) {
    m_iamRoleArnHasBeenSet = true;
    m_iamRoleArn = std::forward<IamRoleArnT>(value);
  }
  template <typename IamRoleArnT = Aws::String>
  AwsEncryptionKeyConfiguration& WithIamRoleArn(IamRoleArnT&& value) {
    SetIamRoleArn(std::forward<IamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of external identifier associated with the encryption key.</p>
   */
  inline ExternalIdType GetExternalIdType() const { return m_externalIdType; }
  inline bool ExternalIdTypeHasBeenSet() const { return m_externalIdTypeHasBeenSet; }
  inline void SetExternalIdType(ExternalIdType value) {
    m_externalIdTypeHasBeenSet = true;
    m_externalIdType = value;
  }
  inline AwsEncryptionKeyConfiguration& WithExternalIdType(ExternalIdType value) {
    SetExternalIdType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier or ARN of the Amazon Web Services KMS key used for
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
  AwsEncryptionKeyConfiguration& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_iamRoleArn;

  ExternalIdType m_externalIdType{ExternalIdType::NOT_SET};

  Aws::String m_kmsKeyId;
  bool m_iamRoleArnHasBeenSet = false;
  bool m_externalIdTypeHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
