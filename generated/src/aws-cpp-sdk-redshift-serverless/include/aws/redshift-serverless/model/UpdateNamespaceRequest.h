/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/LogExport.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class UpdateNamespaceRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateNamespaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNamespace"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * namespace's admin credentials secret. You can only use this parameter if
     * <code>manageAdminPassword</code> is true.</p>
     */
    inline const Aws::String& GetAdminPasswordSecretKmsKeyId() const { return m_adminPasswordSecretKmsKeyId; }
    inline bool AdminPasswordSecretKmsKeyIdHasBeenSet() const { return m_adminPasswordSecretKmsKeyIdHasBeenSet; }
    template<typename AdminPasswordSecretKmsKeyIdT = Aws::String>
    void SetAdminPasswordSecretKmsKeyId(AdminPasswordSecretKmsKeyIdT&& value) { m_adminPasswordSecretKmsKeyIdHasBeenSet = true; m_adminPasswordSecretKmsKeyId = std::forward<AdminPasswordSecretKmsKeyIdT>(value); }
    template<typename AdminPasswordSecretKmsKeyIdT = Aws::String>
    UpdateNamespaceRequest& WithAdminPasswordSecretKmsKeyId(AdminPasswordSecretKmsKeyIdT&& value) { SetAdminPasswordSecretKmsKeyId(std::forward<AdminPasswordSecretKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password of the administrator for the first database created in the
     * namespace. This parameter must be updated together with
     * <code>adminUsername</code>.</p> <p>You can't use <code>adminUserPassword</code>
     * if <code>manageAdminPassword</code> is true. </p>
     */
    inline const Aws::String& GetAdminUserPassword() const { return m_adminUserPassword; }
    inline bool AdminUserPasswordHasBeenSet() const { return m_adminUserPasswordHasBeenSet; }
    template<typename AdminUserPasswordT = Aws::String>
    void SetAdminUserPassword(AdminUserPasswordT&& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = std::forward<AdminUserPasswordT>(value); }
    template<typename AdminUserPasswordT = Aws::String>
    UpdateNamespaceRequest& WithAdminUserPassword(AdminUserPasswordT&& value) { SetAdminUserPassword(std::forward<AdminUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the administrator for the first database created in the
     * namespace. This parameter must be updated together with
     * <code>adminUserPassword</code>.</p>
     */
    inline const Aws::String& GetAdminUsername() const { return m_adminUsername; }
    inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }
    template<typename AdminUsernameT = Aws::String>
    void SetAdminUsername(AdminUsernameT&& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = std::forward<AdminUsernameT>(value); }
    template<typename AdminUsernameT = Aws::String>
    UpdateNamespaceRequest& WithAdminUsername(AdminUsernameT&& value) { SetAdminUsername(std::forward<AdminUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace. This parameter must be updated together with
     * <code>iamRoles</code>.</p>
     */
    inline const Aws::String& GetDefaultIamRoleArn() const { return m_defaultIamRoleArn; }
    inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }
    template<typename DefaultIamRoleArnT = Aws::String>
    void SetDefaultIamRoleArn(DefaultIamRoleArnT&& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = std::forward<DefaultIamRoleArnT>(value); }
    template<typename DefaultIamRoleArnT = Aws::String>
    UpdateNamespaceRequest& WithDefaultIamRoleArn(DefaultIamRoleArnT&& value) { SetDefaultIamRoleArn(std::forward<DefaultIamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IAM roles to associate with the namespace. This parameter must be
     * updated together with <code>defaultIamRoleArn</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIamRoles() const { return m_iamRoles; }
    inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
    template<typename IamRolesT = Aws::Vector<Aws::String>>
    void SetIamRoles(IamRolesT&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = std::forward<IamRolesT>(value); }
    template<typename IamRolesT = Aws::Vector<Aws::String>>
    UpdateNamespaceRequest& WithIamRoles(IamRolesT&& value) { SetIamRoles(std::forward<IamRolesT>(value)); return *this;}
    template<typename IamRolesT = Aws::String>
    UpdateNamespaceRequest& AddIamRoles(IamRolesT&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.emplace_back(std::forward<IamRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    UpdateNamespaceRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of logs the namespace can export. The export types are
     * <code>userlog</code>, <code>connectionlog</code>, and
     * <code>useractivitylog</code>.</p>
     */
    inline const Aws::Vector<LogExport>& GetLogExports() const { return m_logExports; }
    inline bool LogExportsHasBeenSet() const { return m_logExportsHasBeenSet; }
    template<typename LogExportsT = Aws::Vector<LogExport>>
    void SetLogExports(LogExportsT&& value) { m_logExportsHasBeenSet = true; m_logExports = std::forward<LogExportsT>(value); }
    template<typename LogExportsT = Aws::Vector<LogExport>>
    UpdateNamespaceRequest& WithLogExports(LogExportsT&& value) { SetLogExports(std::forward<LogExportsT>(value)); return *this;}
    inline UpdateNamespaceRequest& AddLogExports(LogExport value) { m_logExportsHasBeenSet = true; m_logExports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, Amazon Redshift uses Secrets Manager to manage the
     * namespace's admin credentials. You can't use <code>adminUserPassword</code> if
     * <code>manageAdminPassword</code> is true. If <code>manageAdminPassword</code> is
     * false or not set, Amazon Redshift uses <code>adminUserPassword</code> for the
     * admin user account's password. </p>
     */
    inline bool GetManageAdminPassword() const { return m_manageAdminPassword; }
    inline bool ManageAdminPasswordHasBeenSet() const { return m_manageAdminPasswordHasBeenSet; }
    inline void SetManageAdminPassword(bool value) { m_manageAdminPasswordHasBeenSet = true; m_manageAdminPassword = value; }
    inline UpdateNamespaceRequest& WithManageAdminPassword(bool value) { SetManageAdminPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace to update. You can't update the name of a namespace
     * once it is created.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    UpdateNamespaceRequest& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adminPasswordSecretKmsKeyId;
    bool m_adminPasswordSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_adminUserPassword;
    bool m_adminUserPasswordHasBeenSet = false;

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet = false;

    Aws::String m_defaultIamRoleArn;
    bool m_defaultIamRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_iamRoles;
    bool m_iamRolesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<LogExport> m_logExports;
    bool m_logExportsHasBeenSet = false;

    bool m_manageAdminPassword{false};
    bool m_manageAdminPasswordHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
