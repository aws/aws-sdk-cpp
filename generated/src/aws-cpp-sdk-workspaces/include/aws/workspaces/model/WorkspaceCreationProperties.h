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
   * <p>Describes the default properties that are used for creating WorkSpaces. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-directory-details.html">Update
   * Directory Details for Your WorkSpaces</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceCreationProperties">AWS
   * API Reference</a></p>
   */
  class WorkspaceCreationProperties
  {
  public:
    AWS_WORKSPACES_API WorkspaceCreationProperties() = default;
    AWS_WORKSPACES_API WorkspaceCreationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceCreationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether internet access is enabled for your WorkSpaces.</p>
     */
    inline bool GetEnableInternetAccess() const { return m_enableInternetAccess; }
    inline bool EnableInternetAccessHasBeenSet() const { return m_enableInternetAccessHasBeenSet; }
    inline void SetEnableInternetAccess(bool value) { m_enableInternetAccessHasBeenSet = true; m_enableInternetAccess = value; }
    inline WorkspaceCreationProperties& WithEnableInternetAccess(bool value) { SetEnableInternetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default organizational unit (OU) for your WorkSpaces directories. This
     * string must be the full Lightweight Directory Access Protocol (LDAP)
     * distinguished name for the target domain and OU. It must be in the form
     * <code>"OU=<i>value</i>,DC=<i>value</i>,DC=<i>value</i>"</code>, where
     * <i>value</i> is any string of characters, and the number of domain components
     * (DCs) is two or more. For example,
     * <code>OU=WorkSpaces_machines,DC=machines,DC=example,DC=com</code>. </p>
     *  <ul> <li> <p>To avoid errors, certain characters in the
     * distinguished name must be escaped. For more information, see <a
     * href="https://docs.microsoft.com/previous-versions/windows/desktop/ldap/distinguished-names">
     * Distinguished Names</a> in the Microsoft documentation.</p> </li> <li> <p>The
     * API doesn't validate whether the OU exists.</p> </li> </ul> 
     */
    inline const Aws::String& GetDefaultOu() const { return m_defaultOu; }
    inline bool DefaultOuHasBeenSet() const { return m_defaultOuHasBeenSet; }
    template<typename DefaultOuT = Aws::String>
    void SetDefaultOu(DefaultOuT&& value) { m_defaultOuHasBeenSet = true; m_defaultOu = std::forward<DefaultOuT>(value); }
    template<typename DefaultOuT = Aws::String>
    WorkspaceCreationProperties& WithDefaultOu(DefaultOuT&& value) { SetDefaultOu(std::forward<DefaultOuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline const Aws::String& GetCustomSecurityGroupId() const { return m_customSecurityGroupId; }
    inline bool CustomSecurityGroupIdHasBeenSet() const { return m_customSecurityGroupIdHasBeenSet; }
    template<typename CustomSecurityGroupIdT = Aws::String>
    void SetCustomSecurityGroupId(CustomSecurityGroupIdT&& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = std::forward<CustomSecurityGroupIdT>(value); }
    template<typename CustomSecurityGroupIdT = Aws::String>
    WorkspaceCreationProperties& WithCustomSecurityGroupId(CustomSecurityGroupIdT&& value) { SetCustomSecurityGroupId(std::forward<CustomSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users are local administrators of their WorkSpaces.</p>
     */
    inline bool GetUserEnabledAsLocalAdministrator() const { return m_userEnabledAsLocalAdministrator; }
    inline bool UserEnabledAsLocalAdministratorHasBeenSet() const { return m_userEnabledAsLocalAdministratorHasBeenSet; }
    inline void SetUserEnabledAsLocalAdministrator(bool value) { m_userEnabledAsLocalAdministratorHasBeenSet = true; m_userEnabledAsLocalAdministrator = value; }
    inline WorkspaceCreationProperties& WithUserEnabledAsLocalAdministrator(bool value) { SetUserEnabledAsLocalAdministrator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether maintenance mode is enabled for your WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>. </p>
     */
    inline bool GetEnableMaintenanceMode() const { return m_enableMaintenanceMode; }
    inline bool EnableMaintenanceModeHasBeenSet() const { return m_enableMaintenanceModeHasBeenSet; }
    inline void SetEnableMaintenanceMode(bool value) { m_enableMaintenanceModeHasBeenSet = true; m_enableMaintenanceMode = value; }
    inline WorkspaceCreationProperties& WithEnableMaintenanceMode(bool value) { SetEnableMaintenanceMode(value); return *this;}
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
    WorkspaceCreationProperties& WithInstanceIamRoleArn(InstanceIamRoleArnT&& value) { SetInstanceIamRoleArn(std::forward<InstanceIamRoleArnT>(value)); return *this;}
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
