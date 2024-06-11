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
#include <aws/redshift-serverless/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class CreateNamespaceRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API CreateNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNamespace"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * namespace's admin credentials secret. You can only use this parameter if
     * <code>manageAdminPassword</code> is true.</p>
     */
    inline const Aws::String& GetAdminPasswordSecretKmsKeyId() const{ return m_adminPasswordSecretKmsKeyId; }
    inline bool AdminPasswordSecretKmsKeyIdHasBeenSet() const { return m_adminPasswordSecretKmsKeyIdHasBeenSet; }
    inline void SetAdminPasswordSecretKmsKeyId(const Aws::String& value) { m_adminPasswordSecretKmsKeyIdHasBeenSet = true; m_adminPasswordSecretKmsKeyId = value; }
    inline void SetAdminPasswordSecretKmsKeyId(Aws::String&& value) { m_adminPasswordSecretKmsKeyIdHasBeenSet = true; m_adminPasswordSecretKmsKeyId = std::move(value); }
    inline void SetAdminPasswordSecretKmsKeyId(const char* value) { m_adminPasswordSecretKmsKeyIdHasBeenSet = true; m_adminPasswordSecretKmsKeyId.assign(value); }
    inline CreateNamespaceRequest& WithAdminPasswordSecretKmsKeyId(const Aws::String& value) { SetAdminPasswordSecretKmsKeyId(value); return *this;}
    inline CreateNamespaceRequest& WithAdminPasswordSecretKmsKeyId(Aws::String&& value) { SetAdminPasswordSecretKmsKeyId(std::move(value)); return *this;}
    inline CreateNamespaceRequest& WithAdminPasswordSecretKmsKeyId(const char* value) { SetAdminPasswordSecretKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password of the administrator for the first database created in the
     * namespace.</p> <p>You can't use <code>adminUserPassword</code> if
     * <code>manageAdminPassword</code> is true. </p>
     */
    inline const Aws::String& GetAdminUserPassword() const{ return m_adminUserPassword; }
    inline bool AdminUserPasswordHasBeenSet() const { return m_adminUserPasswordHasBeenSet; }
    inline void SetAdminUserPassword(const Aws::String& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = value; }
    inline void SetAdminUserPassword(Aws::String&& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = std::move(value); }
    inline void SetAdminUserPassword(const char* value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword.assign(value); }
    inline CreateNamespaceRequest& WithAdminUserPassword(const Aws::String& value) { SetAdminUserPassword(value); return *this;}
    inline CreateNamespaceRequest& WithAdminUserPassword(Aws::String&& value) { SetAdminUserPassword(std::move(value)); return *this;}
    inline CreateNamespaceRequest& WithAdminUserPassword(const char* value) { SetAdminUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline const Aws::String& GetAdminUsername() const{ return m_adminUsername; }
    inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }
    inline void SetAdminUsername(const Aws::String& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = value; }
    inline void SetAdminUsername(Aws::String&& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = std::move(value); }
    inline void SetAdminUsername(const char* value) { m_adminUsernameHasBeenSet = true; m_adminUsername.assign(value); }
    inline CreateNamespaceRequest& WithAdminUsername(const Aws::String& value) { SetAdminUsername(value); return *this;}
    inline CreateNamespaceRequest& WithAdminUsername(Aws::String&& value) { SetAdminUsername(std::move(value)); return *this;}
    inline CreateNamespaceRequest& WithAdminUsername(const char* value) { SetAdminUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the first database created in the namespace.</p>
     */
    inline const Aws::String& GetDbName() const{ return m_dbName; }
    inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }
    inline void SetDbName(const Aws::String& value) { m_dbNameHasBeenSet = true; m_dbName = value; }
    inline void SetDbName(Aws::String&& value) { m_dbNameHasBeenSet = true; m_dbName = std::move(value); }
    inline void SetDbName(const char* value) { m_dbNameHasBeenSet = true; m_dbName.assign(value); }
    inline CreateNamespaceRequest& WithDbName(const Aws::String& value) { SetDbName(value); return *this;}
    inline CreateNamespaceRequest& WithDbName(Aws::String&& value) { SetDbName(std::move(value)); return *this;}
    inline CreateNamespaceRequest& WithDbName(const char* value) { SetDbName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline const Aws::String& GetDefaultIamRoleArn() const{ return m_defaultIamRoleArn; }
    inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }
    inline void SetDefaultIamRoleArn(const Aws::String& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = value; }
    inline void SetDefaultIamRoleArn(Aws::String&& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = std::move(value); }
    inline void SetDefaultIamRoleArn(const char* value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn.assign(value); }
    inline CreateNamespaceRequest& WithDefaultIamRoleArn(const Aws::String& value) { SetDefaultIamRoleArn(value); return *this;}
    inline CreateNamespaceRequest& WithDefaultIamRoleArn(Aws::String&& value) { SetDefaultIamRoleArn(std::move(value)); return *this;}
    inline CreateNamespaceRequest& WithDefaultIamRoleArn(const char* value) { SetDefaultIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIamRoles() const{ return m_iamRoles; }
    inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
    inline void SetIamRoles(const Aws::Vector<Aws::String>& value) { m_iamRolesHasBeenSet = true; m_iamRoles = value; }
    inline void SetIamRoles(Aws::Vector<Aws::String>&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = std::move(value); }
    inline CreateNamespaceRequest& WithIamRoles(const Aws::Vector<Aws::String>& value) { SetIamRoles(value); return *this;}
    inline CreateNamespaceRequest& WithIamRoles(Aws::Vector<Aws::String>&& value) { SetIamRoles(std::move(value)); return *this;}
    inline CreateNamespaceRequest& AddIamRoles(const Aws::String& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }
    inline CreateNamespaceRequest& AddIamRoles(Aws::String&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(std::move(value)); return *this; }
    inline CreateNamespaceRequest& AddIamRoles(const char* value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateNamespaceRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateNamespaceRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateNamespaceRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of logs the namespace can export. Available export types are
     * <code>userlog</code>, <code>connectionlog</code>, and
     * <code>useractivitylog</code>.</p>
     */
    inline const Aws::Vector<LogExport>& GetLogExports() const{ return m_logExports; }
    inline bool LogExportsHasBeenSet() const { return m_logExportsHasBeenSet; }
    inline void SetLogExports(const Aws::Vector<LogExport>& value) { m_logExportsHasBeenSet = true; m_logExports = value; }
    inline void SetLogExports(Aws::Vector<LogExport>&& value) { m_logExportsHasBeenSet = true; m_logExports = std::move(value); }
    inline CreateNamespaceRequest& WithLogExports(const Aws::Vector<LogExport>& value) { SetLogExports(value); return *this;}
    inline CreateNamespaceRequest& WithLogExports(Aws::Vector<LogExport>&& value) { SetLogExports(std::move(value)); return *this;}
    inline CreateNamespaceRequest& AddLogExports(const LogExport& value) { m_logExportsHasBeenSet = true; m_logExports.push_back(value); return *this; }
    inline CreateNamespaceRequest& AddLogExports(LogExport&& value) { m_logExportsHasBeenSet = true; m_logExports.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, Amazon Redshift uses Secrets Manager to manage the
     * namespace's admin credentials. You can't use <code>adminUserPassword</code> if
     * <code>manageAdminPassword</code> is true. If <code>manageAdminPassword</code> is
     * false or not set, Amazon Redshift uses <code>adminUserPassword</code> for the
     * admin user account's password. </p>
     */
    inline bool GetManageAdminPassword() const{ return m_manageAdminPassword; }
    inline bool ManageAdminPasswordHasBeenSet() const { return m_manageAdminPasswordHasBeenSet; }
    inline void SetManageAdminPassword(bool value) { m_manageAdminPasswordHasBeenSet = true; m_manageAdminPassword = value; }
    inline CreateNamespaceRequest& WithManageAdminPassword(bool value) { SetManageAdminPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }
    inline CreateNamespaceRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}
    inline CreateNamespaceRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}
    inline CreateNamespaceRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Redshift application that integrates with IAM Identity
     * Center.</p>
     */
    inline const Aws::String& GetRedshiftIdcApplicationArn() const{ return m_redshiftIdcApplicationArn; }
    inline bool RedshiftIdcApplicationArnHasBeenSet() const { return m_redshiftIdcApplicationArnHasBeenSet; }
    inline void SetRedshiftIdcApplicationArn(const Aws::String& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = value; }
    inline void SetRedshiftIdcApplicationArn(Aws::String&& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = std::move(value); }
    inline void SetRedshiftIdcApplicationArn(const char* value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn.assign(value); }
    inline CreateNamespaceRequest& WithRedshiftIdcApplicationArn(const Aws::String& value) { SetRedshiftIdcApplicationArn(value); return *this;}
    inline CreateNamespaceRequest& WithRedshiftIdcApplicationArn(Aws::String&& value) { SetRedshiftIdcApplicationArn(std::move(value)); return *this;}
    inline CreateNamespaceRequest& WithRedshiftIdcApplicationArn(const char* value) { SetRedshiftIdcApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateNamespaceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateNamespaceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateNamespaceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateNamespaceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_adminPasswordSecretKmsKeyId;
    bool m_adminPasswordSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_adminUserPassword;
    bool m_adminUserPasswordHasBeenSet = false;

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet = false;

    Aws::String m_dbName;
    bool m_dbNameHasBeenSet = false;

    Aws::String m_defaultIamRoleArn;
    bool m_defaultIamRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_iamRoles;
    bool m_iamRolesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<LogExport> m_logExports;
    bool m_logExportsHasBeenSet = false;

    bool m_manageAdminPassword;
    bool m_manageAdminPasswordHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_redshiftIdcApplicationArn;
    bool m_redshiftIdcApplicationArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
