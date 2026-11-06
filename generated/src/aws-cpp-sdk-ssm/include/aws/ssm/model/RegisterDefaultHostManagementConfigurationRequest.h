/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DHMCPermissionModel.h>

#include <utility>

namespace Aws {
namespace SSM {
namespace Model {

/**
 */
class RegisterDefaultHostManagementConfigurationRequest : public SSMRequest {
 public:
  AWS_SSM_API RegisterDefaultHostManagementConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RegisterDefaultHostManagementConfiguration"; }

  AWS_SSM_API Aws::String SerializePayload() const override;

  AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The permission model that determines how the IAM role for Default Host
   * Management Configuration is provided.</p> <p>The permission model can be one of
   * the following values:</p> <dl> <dt>SERVICE_MANAGED</dt> <dd> <p>Amazon Web
   * Services Systems Manager creates and manages the role on your behalf.</p> </dd>
   * <dt>SELF_MANAGED</dt> <dd> <p>You provide the role to register in
   * <code>RoleArn</code>.</p> </dd> </dl>
   */
  inline DHMCPermissionModel GetPermissionModel() const { return m_permissionModel; }
  inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
  inline void SetPermissionModel(DHMCPermissionModel value) {
    m_permissionModelHasBeenSet = true;
    m_permissionModel = value;
  }
  inline RegisterDefaultHostManagementConfigurationRequest& WithPermissionModel(DHMCPermissionModel value) {
    SetPermissionModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the self-managed IAM role that you register
   * for Default Host Management Configuration. The requirement for this value
   * depends on the permission model:</p> <ul> <li> <p>If
   * <code>PermissionModel</code> is <code>SELF_MANAGED</code>, this value is
   * required.</p> </li> <li> <p>If <code>PermissionModel</code> is
   * <code>SERVICE_MANAGED</code>, this value must not be set.</p> </li> </ul>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  RegisterDefaultHostManagementConfigurationRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to override the role that is currently registered for
   * Default Host Management Configuration. The default is <code>false</code>, which
   * acts as a guardrail against accidentally replacing an existing configuration.
   * Set this to <code>true</code> to replace the currently registered role.</p>
   */
  inline bool GetOverwrite() const { return m_overwrite; }
  inline bool OverwriteHasBeenSet() const { return m_overwriteHasBeenSet; }
  inline void SetOverwrite(bool value) {
    m_overwriteHasBeenSet = true;
    m_overwrite = value;
  }
  inline RegisterDefaultHostManagementConfigurationRequest& WithOverwrite(bool value) {
    SetOverwrite(value);
    return *this;
  }
  ///@}
 private:
  DHMCPermissionModel m_permissionModel{DHMCPermissionModel::NOT_SET};

  Aws::String m_roleArn;

  bool m_overwrite{false};
  bool m_permissionModelHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_overwriteHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
