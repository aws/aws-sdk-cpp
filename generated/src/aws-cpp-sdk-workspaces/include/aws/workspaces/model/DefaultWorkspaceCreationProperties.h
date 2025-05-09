/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the default values that are used to create WorkSpaces. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-directory-details.html">Update
   * Directory Details for Your WorkSpaces</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DefaultWorkspaceCreationProperties">AWS
   * API Reference</a></p>
   */
  class DefaultWorkspaceCreationProperties
  {
  public:
    AWS_WORKSPACES_API DefaultWorkspaceCreationProperties() = default;
    AWS_WORKSPACES_API DefaultWorkspaceCreationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API DefaultWorkspaceCreationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to automatically assign an Elastic public IP address to
     * WorkSpaces in this directory by default. If enabled, the Elastic public IP
     * address allows outbound internet access from your WorkSpaces when you’re using
     * an internet gateway in the Amazon VPC in which your WorkSpaces are located. If
     * you're using a Network Address Translation (NAT) gateway for outbound internet
     * access from your VPC, or if your WorkSpaces are in public subnets and you
     * manually assign them Elastic IP addresses, you should disable this setting. This
     * setting applies to new WorkSpaces that you launch or to existing WorkSpaces that
     * you rebuild. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-vpc.html">
     * Configure a VPC for Amazon WorkSpaces</a>.</p>
     */
    inline bool GetEnableInternetAccess() const { return m_enableInternetAccess; }
    inline bool EnableInternetAccessHasBeenSet() const { return m_enableInternetAccessHasBeenSet; }
    inline void SetEnableInternetAccess(bool value) { m_enableInternetAccessHasBeenSet = true; m_enableInternetAccess = value; }
    inline DefaultWorkspaceCreationProperties& WithEnableInternetAccess(bool value) { SetEnableInternetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organizational unit (OU) in the directory for the WorkSpace machine
     * accounts.</p>
     */
    inline const Aws::String& GetDefaultOu() const { return m_defaultOu; }
    inline bool DefaultOuHasBeenSet() const { return m_defaultOuHasBeenSet; }
    template<typename DefaultOuT = Aws::String>
    void SetDefaultOu(DefaultOuT&& value) { m_defaultOuHasBeenSet = true; m_defaultOu = std::forward<DefaultOuT>(value); }
    template<typename DefaultOuT = Aws::String>
    DefaultWorkspaceCreationProperties& WithDefaultOu(DefaultOuT&& value) { SetDefaultOu(std::forward<DefaultOuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the default security group to apply to WorkSpaces when they
     * are created. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-security-groups.html">
     * Security Groups for Your WorkSpaces</a>.</p>
     */
    inline const Aws::String& GetCustomSecurityGroupId() const { return m_customSecurityGroupId; }
    inline bool CustomSecurityGroupIdHasBeenSet() const { return m_customSecurityGroupIdHasBeenSet; }
    template<typename CustomSecurityGroupIdT = Aws::String>
    void SetCustomSecurityGroupId(CustomSecurityGroupIdT&& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = std::forward<CustomSecurityGroupIdT>(value); }
    template<typename CustomSecurityGroupIdT = Aws::String>
    DefaultWorkspaceCreationProperties& WithCustomSecurityGroupId(CustomSecurityGroupIdT&& value) { SetCustomSecurityGroupId(std::forward<CustomSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether WorkSpace users are local administrators on their
     * WorkSpaces.</p>
     */
    inline bool GetUserEnabledAsLocalAdministrator() const { return m_userEnabledAsLocalAdministrator; }
    inline bool UserEnabledAsLocalAdministratorHasBeenSet() const { return m_userEnabledAsLocalAdministratorHasBeenSet; }
    inline void SetUserEnabledAsLocalAdministrator(bool value) { m_userEnabledAsLocalAdministratorHasBeenSet = true; m_userEnabledAsLocalAdministrator = value; }
    inline DefaultWorkspaceCreationProperties& WithUserEnabledAsLocalAdministrator(bool value) { SetUserEnabledAsLocalAdministrator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether maintenance mode is enabled for WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>.</p>
     */
    inline bool GetEnableMaintenanceMode() const { return m_enableMaintenanceMode; }
    inline bool EnableMaintenanceModeHasBeenSet() const { return m_enableMaintenanceModeHasBeenSet; }
    inline void SetEnableMaintenanceMode(bool value) { m_enableMaintenanceModeHasBeenSet = true; m_enableMaintenanceMode = value; }
    inline DefaultWorkspaceCreationProperties& WithEnableMaintenanceMode(bool value) { SetEnableMaintenanceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the IAM role ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceIamRoleArn() const { return m_instanceIamRoleArn; }
    inline bool InstanceIamRoleArnHasBeenSet() const { return m_instanceIamRoleArnHasBeenSet; }
    template<typename InstanceIamRoleArnT = Aws::String>
    void SetInstanceIamRoleArn(InstanceIamRoleArnT&& value) { m_instanceIamRoleArnHasBeenSet = true; m_instanceIamRoleArn = std::forward<InstanceIamRoleArnT>(value); }
    template<typename InstanceIamRoleArnT = Aws::String>
    DefaultWorkspaceCreationProperties& WithInstanceIamRoleArn(InstanceIamRoleArnT&& value) { SetInstanceIamRoleArn(std::forward<InstanceIamRoleArnT>(value)); return *this;}
    ///@}
  private:

    bool m_enableInternetAccess{false};
    bool m_enableInternetAccessHasBeenSet = false;

    Aws::String m_defaultOu;
    bool m_defaultOuHasBeenSet = false;

    Aws::String m_customSecurityGroupId;
    bool m_customSecurityGroupIdHasBeenSet = false;

    bool m_userEnabledAsLocalAdministrator{false};
    bool m_userEnabledAsLocalAdministratorHasBeenSet = false;

    bool m_enableMaintenanceMode{false};
    bool m_enableMaintenanceModeHasBeenSet = false;

    Aws::String m_instanceIamRoleArn;
    bool m_instanceIamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
