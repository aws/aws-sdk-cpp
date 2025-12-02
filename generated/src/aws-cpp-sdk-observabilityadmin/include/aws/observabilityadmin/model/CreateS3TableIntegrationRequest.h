/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/Encryption.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class CreateS3TableIntegrationRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API CreateS3TableIntegrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateS3TableIntegration"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The encryption configuration for the S3 Table integration, including the
   * encryption algorithm and KMS key settings.</p>
   */
  inline const Encryption& GetEncryption() const { return m_encryption; }
  inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
  template <typename EncryptionT = Encryption>
  void SetEncryption(EncryptionT&& value) {
    m_encryptionHasBeenSet = true;
    m_encryption = std::forward<EncryptionT>(value);
  }
  template <typename EncryptionT = Encryption>
  CreateS3TableIntegrationRequest& WithEncryption(EncryptionT&& value) {
    SetEncryption(std::forward<EncryptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that grants permissions for
   * the S3 Table integration to access necessary resources.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateS3TableIntegrationRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key-value pairs to associate with the S3 Table integration resource for
   * categorization and management purposes.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateS3TableIntegrationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateS3TableIntegrationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Encryption m_encryption;
  bool m_encryptionHasBeenSet = false;

  Aws::String m_roleArn;
  bool m_roleArnHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
