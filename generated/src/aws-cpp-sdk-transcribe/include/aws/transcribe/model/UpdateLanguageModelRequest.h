/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/EncryptionConfiguration.h>

#include <utility>

namespace Aws {
namespace TranscribeService {
namespace Model {

/**
 */
class UpdateLanguageModelRequest : public TranscribeServiceRequest {
 public:
  AWS_TRANSCRIBESERVICE_API UpdateLanguageModelRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLanguageModel"; }

  AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

  AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the custom language model you want to update. Model names are
   * case sensitive.</p>
   */
  inline const Aws::String& GetModelName() const { return m_modelName; }
  inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
  template <typename ModelNameT = Aws::String>
  void SetModelName(ModelNameT&& value) {
    m_modelNameHasBeenSet = true;
    m_modelName = std::forward<ModelNameT>(value);
  }
  template <typename ModelNameT = Aws::String>
  UpdateLanguageModelRequest& WithModelName(ModelNameT&& value) {
    SetModelName(std::forward<ModelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of an IAM role. If you include
   * <code>EncryptionConfiguration</code> in your request, this role must have
   * permissions to access the specified KMS key. If the role that you specify
   * doesn't have the appropriate permissions, your request fails.</p> <p>IAM role
   * ARNs have the format
   * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
   * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
   * ARNs</a>.</p>
   */
  inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
  inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
  template <typename DataAccessRoleArnT = Aws::String>
  void SetDataAccessRoleArn(DataAccessRoleArnT&& value) {
    m_dataAccessRoleArnHasBeenSet = true;
    m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value);
  }
  template <typename DataAccessRoleArnT = Aws::String>
  UpdateLanguageModelRequest& WithDataAccessRoleArn(DataAccessRoleArnT&& value) {
    SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the new encryption configuration for your custom language model.
   * The model artifacts are re-encrypted in place using the specified KMS key or
   * with an AWS-owned key if a key is not supplied.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  UpdateLanguageModelRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelName;

  Aws::String m_dataAccessRoleArn;

  EncryptionConfiguration m_encryptionConfiguration;
  bool m_modelNameHasBeenSet = false;
  bool m_dataAccessRoleArnHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
