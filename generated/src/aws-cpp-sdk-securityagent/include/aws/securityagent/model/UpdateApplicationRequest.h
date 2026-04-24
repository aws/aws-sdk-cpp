/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 */
class UpdateApplicationRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API UpdateApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Application ID</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  UpdateApplicationRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
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
  UpdateApplicationRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Default KMS key identifier. Use an empty string to remove the default KMS
   * key.</p>
   */
  inline const Aws::String& GetDefaultKmsKeyId() const { return m_defaultKmsKeyId; }
  inline bool DefaultKmsKeyIdHasBeenSet() const { return m_defaultKmsKeyIdHasBeenSet; }
  template <typename DefaultKmsKeyIdT = Aws::String>
  void SetDefaultKmsKeyId(DefaultKmsKeyIdT&& value) {
    m_defaultKmsKeyIdHasBeenSet = true;
    m_defaultKmsKeyId = std::forward<DefaultKmsKeyIdT>(value);
  }
  template <typename DefaultKmsKeyIdT = Aws::String>
  UpdateApplicationRequest& WithDefaultKmsKeyId(DefaultKmsKeyIdT&& value) {
    SetDefaultKmsKeyId(std::forward<DefaultKmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_roleArn;

  Aws::String m_defaultKmsKeyId;
  bool m_applicationIdHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_defaultKmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
