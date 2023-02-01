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
    AWS_WORKSPACES_API WorkspaceCreationProperties();
    AWS_WORKSPACES_API WorkspaceCreationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceCreationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether Amazon WorkDocs is enabled for your WorkSpaces.</p> 
     * <p>If WorkDocs is already enabled for a WorkSpaces directory and you disable it,
     * new WorkSpaces launched in the directory will not have WorkDocs enabled.
     * However, WorkDocs remains enabled for any existing WorkSpaces, unless you either
     * disable users' access to WorkDocs or you delete the WorkDocs site. To disable
     * users' access to WorkDocs, see <a
     * href="https://docs.aws.amazon.com/workdocs/latest/adminguide/inactive-user.html">Disabling
     * Users</a> in the <i>Amazon WorkDocs Administration Guide</i>. To delete a
     * WorkDocs site, see <a
     * href="https://docs.aws.amazon.com/workdocs/latest/adminguide/manage-sites.html">Deleting
     * a Site</a> in the <i>Amazon WorkDocs Administration Guide</i>.</p> <p>If you
     * enable WorkDocs on a directory that already has existing WorkSpaces, the
     * existing WorkSpaces and any new WorkSpaces that are launched in the directory
     * will have WorkDocs enabled.</p> 
     */
    inline bool GetEnableWorkDocs() const{ return m_enableWorkDocs; }

    /**
     * <p>Indicates whether Amazon WorkDocs is enabled for your WorkSpaces.</p> 
     * <p>If WorkDocs is already enabled for a WorkSpaces directory and you disable it,
     * new WorkSpaces launched in the directory will not have WorkDocs enabled.
     * However, WorkDocs remains enabled for any existing WorkSpaces, unless you either
     * disable users' access to WorkDocs or you delete the WorkDocs site. To disable
     * users' access to WorkDocs, see <a
     * href="https://docs.aws.amazon.com/workdocs/latest/adminguide/inactive-user.html">Disabling
     * Users</a> in the <i>Amazon WorkDocs Administration Guide</i>. To delete a
     * WorkDocs site, see <a
     * href="https://docs.aws.amazon.com/workdocs/latest/adminguide/manage-sites.html">Deleting
     * a Site</a> in the <i>Amazon WorkDocs Administration Guide</i>.</p> <p>If you
     * enable WorkDocs on a directory that already has existing WorkSpaces, the
     * existing WorkSpaces and any new WorkSpaces that are launched in the directory
     * will have WorkDocs enabled.</p> 
     */
    inline bool EnableWorkDocsHasBeenSet() const { return m_enableWorkDocsHasBeenSet; }

    /**
     * <p>Indicates whether Amazon WorkDocs is enabled for your WorkSpaces.</p> 
     * <p>If WorkDocs is already enabled for a WorkSpaces directory and you disable it,
     * new WorkSpaces launched in the directory will not have WorkDocs enabled.
     * However, WorkDocs remains enabled for any existing WorkSpaces, unless you either
     * disable users' access to WorkDocs or you delete the WorkDocs site. To disable
     * users' access to WorkDocs, see <a
     * href="https://docs.aws.amazon.com/workdocs/latest/adminguide/inactive-user.html">Disabling
     * Users</a> in the <i>Amazon WorkDocs Administration Guide</i>. To delete a
     * WorkDocs site, see <a
     * href="https://docs.aws.amazon.com/workdocs/latest/adminguide/manage-sites.html">Deleting
     * a Site</a> in the <i>Amazon WorkDocs Administration Guide</i>.</p> <p>If you
     * enable WorkDocs on a directory that already has existing WorkSpaces, the
     * existing WorkSpaces and any new WorkSpaces that are launched in the directory
     * will have WorkDocs enabled.</p> 
     */
    inline void SetEnableWorkDocs(bool value) { m_enableWorkDocsHasBeenSet = true; m_enableWorkDocs = value; }

    /**
     * <p>Indicates whether Amazon WorkDocs is enabled for your WorkSpaces.</p> 
     * <p>If WorkDocs is already enabled for a WorkSpaces directory and you disable it,
     * new WorkSpaces launched in the directory will not have WorkDocs enabled.
     * However, WorkDocs remains enabled for any existing WorkSpaces, unless you either
     * disable users' access to WorkDocs or you delete the WorkDocs site. To disable
     * users' access to WorkDocs, see <a
     * href="https://docs.aws.amazon.com/workdocs/latest/adminguide/inactive-user.html">Disabling
     * Users</a> in the <i>Amazon WorkDocs Administration Guide</i>. To delete a
     * WorkDocs site, see <a
     * href="https://docs.aws.amazon.com/workdocs/latest/adminguide/manage-sites.html">Deleting
     * a Site</a> in the <i>Amazon WorkDocs Administration Guide</i>.</p> <p>If you
     * enable WorkDocs on a directory that already has existing WorkSpaces, the
     * existing WorkSpaces and any new WorkSpaces that are launched in the directory
     * will have WorkDocs enabled.</p> 
     */
    inline WorkspaceCreationProperties& WithEnableWorkDocs(bool value) { SetEnableWorkDocs(value); return *this;}


    /**
     * <p>Indicates whether internet access is enabled for your WorkSpaces.</p>
     */
    inline bool GetEnableInternetAccess() const{ return m_enableInternetAccess; }

    /**
     * <p>Indicates whether internet access is enabled for your WorkSpaces.</p>
     */
    inline bool EnableInternetAccessHasBeenSet() const { return m_enableInternetAccessHasBeenSet; }

    /**
     * <p>Indicates whether internet access is enabled for your WorkSpaces.</p>
     */
    inline void SetEnableInternetAccess(bool value) { m_enableInternetAccessHasBeenSet = true; m_enableInternetAccess = value; }

    /**
     * <p>Indicates whether internet access is enabled for your WorkSpaces.</p>
     */
    inline WorkspaceCreationProperties& WithEnableInternetAccess(bool value) { SetEnableInternetAccess(value); return *this;}


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
    inline const Aws::String& GetDefaultOu() const{ return m_defaultOu; }

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
    inline bool DefaultOuHasBeenSet() const { return m_defaultOuHasBeenSet; }

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
    inline void SetDefaultOu(const Aws::String& value) { m_defaultOuHasBeenSet = true; m_defaultOu = value; }

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
    inline void SetDefaultOu(Aws::String&& value) { m_defaultOuHasBeenSet = true; m_defaultOu = std::move(value); }

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
    inline void SetDefaultOu(const char* value) { m_defaultOuHasBeenSet = true; m_defaultOu.assign(value); }

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
    inline WorkspaceCreationProperties& WithDefaultOu(const Aws::String& value) { SetDefaultOu(value); return *this;}

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
    inline WorkspaceCreationProperties& WithDefaultOu(Aws::String&& value) { SetDefaultOu(std::move(value)); return *this;}

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
    inline WorkspaceCreationProperties& WithDefaultOu(const char* value) { SetDefaultOu(value); return *this;}


    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline const Aws::String& GetCustomSecurityGroupId() const{ return m_customSecurityGroupId; }

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline bool CustomSecurityGroupIdHasBeenSet() const { return m_customSecurityGroupIdHasBeenSet; }

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline void SetCustomSecurityGroupId(const Aws::String& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = value; }

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline void SetCustomSecurityGroupId(Aws::String&& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = std::move(value); }

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline void SetCustomSecurityGroupId(const char* value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId.assign(value); }

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline WorkspaceCreationProperties& WithCustomSecurityGroupId(const Aws::String& value) { SetCustomSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline WorkspaceCreationProperties& WithCustomSecurityGroupId(Aws::String&& value) { SetCustomSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline WorkspaceCreationProperties& WithCustomSecurityGroupId(const char* value) { SetCustomSecurityGroupId(value); return *this;}


    /**
     * <p>Indicates whether users are local administrators of their WorkSpaces.</p>
     */
    inline bool GetUserEnabledAsLocalAdministrator() const{ return m_userEnabledAsLocalAdministrator; }

    /**
     * <p>Indicates whether users are local administrators of their WorkSpaces.</p>
     */
    inline bool UserEnabledAsLocalAdministratorHasBeenSet() const { return m_userEnabledAsLocalAdministratorHasBeenSet; }

    /**
     * <p>Indicates whether users are local administrators of their WorkSpaces.</p>
     */
    inline void SetUserEnabledAsLocalAdministrator(bool value) { m_userEnabledAsLocalAdministratorHasBeenSet = true; m_userEnabledAsLocalAdministrator = value; }

    /**
     * <p>Indicates whether users are local administrators of their WorkSpaces.</p>
     */
    inline WorkspaceCreationProperties& WithUserEnabledAsLocalAdministrator(bool value) { SetUserEnabledAsLocalAdministrator(value); return *this;}


    /**
     * <p>Indicates whether maintenance mode is enabled for your WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>. </p>
     */
    inline bool GetEnableMaintenanceMode() const{ return m_enableMaintenanceMode; }

    /**
     * <p>Indicates whether maintenance mode is enabled for your WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>. </p>
     */
    inline bool EnableMaintenanceModeHasBeenSet() const { return m_enableMaintenanceModeHasBeenSet; }

    /**
     * <p>Indicates whether maintenance mode is enabled for your WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>. </p>
     */
    inline void SetEnableMaintenanceMode(bool value) { m_enableMaintenanceModeHasBeenSet = true; m_enableMaintenanceMode = value; }

    /**
     * <p>Indicates whether maintenance mode is enabled for your WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>. </p>
     */
    inline WorkspaceCreationProperties& WithEnableMaintenanceMode(bool value) { SetEnableMaintenanceMode(value); return *this;}

  private:

    bool m_enableWorkDocs;
    bool m_enableWorkDocsHasBeenSet = false;

    bool m_enableInternetAccess;
    bool m_enableInternetAccessHasBeenSet = false;

    Aws::String m_defaultOu;
    bool m_defaultOuHasBeenSet = false;

    Aws::String m_customSecurityGroupId;
    bool m_customSecurityGroupIdHasBeenSet = false;

    bool m_userEnabledAsLocalAdministrator;
    bool m_userEnabledAsLocalAdministratorHasBeenSet = false;

    bool m_enableMaintenanceMode;
    bool m_enableMaintenanceModeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
