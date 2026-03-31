/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 */
class CreateApplicationRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API CreateApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>ARN of the IAM Identity Center instance used for user authentication.
   * Optional for non-IdC applications</p>
   */
  inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
  inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
  template <typename IdcInstanceArnT = Aws::String>
  void SetIdcInstanceArn(IdcInstanceArnT&& value) {
    m_idcInstanceArnHasBeenSet = true;
    m_idcInstanceArn = std::forward<IdcInstanceArnT>(value);
  }
  template <typename IdcInstanceArnT = Aws::String>
  CreateApplicationRequest& WithIdcInstanceArn(IdcInstanceArnT&& value) {
    SetIdcInstanceArn(std::forward<IdcInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN of the IAM role that the application uses to access AWS resources on your
   * behalf</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateApplicationRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Default KMS key identifier used to encrypt application data</p>
   */
  inline const Aws::String& GetDefaultKmsKeyId() const { return m_defaultKmsKeyId; }
  inline bool DefaultKmsKeyIdHasBeenSet() const { return m_defaultKmsKeyIdHasBeenSet; }
  template <typename DefaultKmsKeyIdT = Aws::String>
  void SetDefaultKmsKeyId(DefaultKmsKeyIdT&& value) {
    m_defaultKmsKeyIdHasBeenSet = true;
    m_defaultKmsKeyId = std::forward<DefaultKmsKeyIdT>(value);
  }
  template <typename DefaultKmsKeyIdT = Aws::String>
  CreateApplicationRequest& WithDefaultKmsKeyId(DefaultKmsKeyIdT&& value) {
    SetDefaultKmsKeyId(std::forward<DefaultKmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to associate with the application</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateApplicationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateApplicationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_idcInstanceArn;

  Aws::String m_roleArn;

  Aws::String m_defaultKmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_idcInstanceArnHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_defaultKmsKeyIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
