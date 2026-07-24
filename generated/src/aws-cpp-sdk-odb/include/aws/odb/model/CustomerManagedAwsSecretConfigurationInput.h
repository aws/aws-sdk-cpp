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
 * <p>The input configuration for a customer-managed Amazon Web Services Secrets
 * Manager secret used to supply a password.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CustomerManagedAwsSecretConfigurationInput">AWS
 * API Reference</a></p>
 */
class CustomerManagedAwsSecretConfigurationInput {
 public:
  AWS_ODB_API CustomerManagedAwsSecretConfigurationInput() = default;
  AWS_ODB_API CustomerManagedAwsSecretConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API CustomerManagedAwsSecretConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier or ARN of the Amazon Web Services Secrets Manager secret that
   * contains the password.</p>
   */
  inline const Aws::String& GetSecretId() const { return m_secretId; }
  inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
  template <typename SecretIdT = Aws::String>
  void SetSecretId(SecretIdT&& value) {
    m_secretIdHasBeenSet = true;
    m_secretId = std::forward<SecretIdT>(value);
  }
  template <typename SecretIdT = Aws::String>
  CustomerManagedAwsSecretConfigurationInput& WithSecretId(SecretIdT&& value) {
    SetSecretId(std::forward<SecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
   * Management (IAM) role that OCI assumes to retrieve the secret value.</p>
   */
  inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
  inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
  template <typename IamRoleArnT = Aws::String>
  void SetIamRoleArn(IamRoleArnT&& value) {
    m_iamRoleArnHasBeenSet = true;
    m_iamRoleArn = std::forward<IamRoleArnT>(value);
  }
  template <typename IamRoleArnT = Aws::String>
  CustomerManagedAwsSecretConfigurationInput& WithIamRoleArn(IamRoleArnT&& value) {
    SetIamRoleArn(std::forward<IamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of Oracle Cloud Identifier (OCID) used as the external ID when
   * assuming the IAM role.</p> <p>The valid values depend on the operation. For the
   * <code>CreateAutonomousDatabase</code> operation, only
   * <code>compartment_ocid</code> and <code>tenant_ocid</code> are allowed. For the
   * <code>UpdateAutonomousDatabase</code> and
   * <code>CreateAutonomousDatabaseWallet</code> operations,
   * <code>database_ocid</code>, <code>compartment_ocid</code>, and
   * <code>tenant_ocid</code> are all allowed.</p>
   */
  inline ExternalIdType GetExternalIdType() const { return m_externalIdType; }
  inline bool ExternalIdTypeHasBeenSet() const { return m_externalIdTypeHasBeenSet; }
  inline void SetExternalIdType(ExternalIdType value) {
    m_externalIdTypeHasBeenSet = true;
    m_externalIdType = value;
  }
  inline CustomerManagedAwsSecretConfigurationInput& WithExternalIdType(ExternalIdType value) {
    SetExternalIdType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretId;

  Aws::String m_iamRoleArn;

  ExternalIdType m_externalIdType{ExternalIdType::NOT_SET};
  bool m_secretIdHasBeenSet = false;
  bool m_iamRoleArnHasBeenSet = false;
  bool m_externalIdTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
