/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/LogDestinationType.h>
#include <aws/redshift-serverless/model/LogExport.h>
#include <aws/redshift-serverless/model/S3TableAction.h>
#include <aws/redshift-serverless/model/S3TableGranularity.h>

#include <utility>

namespace Aws {
namespace RedshiftServerless {
namespace Model {

/**
 */
class UpdateNamespaceRequest : public RedshiftServerlessRequest {
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
  template <typename AdminPasswordSecretKmsKeyIdT = Aws::String>
  void SetAdminPasswordSecretKmsKeyId(AdminPasswordSecretKmsKeyIdT&& value) {
    m_adminPasswordSecretKmsKeyIdHasBeenSet = true;
    m_adminPasswordSecretKmsKeyId = std::forward<AdminPasswordSecretKmsKeyIdT>(value);
  }
  template <typename AdminPasswordSecretKmsKeyIdT = Aws::String>
  UpdateNamespaceRequest& WithAdminPasswordSecretKmsKeyId(AdminPasswordSecretKmsKeyIdT&& value) {
    SetAdminPasswordSecretKmsKeyId(std::forward<AdminPasswordSecretKmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The password of the administrator for the first database created in the
   * namespace. This parameter must be updated together with
   * <code>adminUsername</code>.</p> <p>You can't use <code>adminUserPassword</code>
   * if <code>manageAdminPassword</code> is true. </p> <p>If your admin user account
   * is locked, this operation also unlocks your account and resets the failed-login
   * counter. This option is available only when account lockout security is enabled
   * for the namespace.</p>
   */
  inline const Aws::String& GetAdminUserPassword() const { return m_adminUserPassword; }
  inline bool AdminUserPasswordHasBeenSet() const { return m_adminUserPasswordHasBeenSet; }
  template <typename AdminUserPasswordT = Aws::String>
  void SetAdminUserPassword(AdminUserPasswordT&& value) {
    m_adminUserPasswordHasBeenSet = true;
    m_adminUserPassword = std::forward<AdminUserPasswordT>(value);
  }
  template <typename AdminUserPasswordT = Aws::String>
  UpdateNamespaceRequest& WithAdminUserPassword(AdminUserPasswordT&& value) {
    SetAdminUserPassword(std::forward<AdminUserPasswordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the administrator for the first database created in the
   * namespace. This parameter must be updated together with
   * <code>adminUserPassword</code>.</p>
   */
  inline const Aws::String& GetAdminUsername() const { return m_adminUsername; }
  inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }
  template <typename AdminUsernameT = Aws::String>
  void SetAdminUsername(AdminUsernameT&& value) {
    m_adminUsernameHasBeenSet = true;
    m_adminUsername = std::forward<AdminUsernameT>(value);
  }
  template <typename AdminUsernameT = Aws::String>
  UpdateNamespaceRequest& WithAdminUsername(AdminUsernameT&& value) {
    SetAdminUsername(std::forward<AdminUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
   * namespace. This parameter must be updated together with
   * <code>iamRoles</code>.</p>
   */
  inline const Aws::String& GetDefaultIamRoleArn() const { return m_defaultIamRoleArn; }
  inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }
  template <typename DefaultIamRoleArnT = Aws::String>
  void SetDefaultIamRoleArn(DefaultIamRoleArnT&& value) {
    m_defaultIamRoleArnHasBeenSet = true;
    m_defaultIamRoleArn = std::forward<DefaultIamRoleArnT>(value);
  }
  template <typename DefaultIamRoleArnT = Aws::String>
  UpdateNamespaceRequest& WithDefaultIamRoleArn(DefaultIamRoleArnT&& value) {
    SetDefaultIamRoleArn(std::forward<DefaultIamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of IAM roles to associate with the namespace. This parameter must be
   * updated together with <code>defaultIamRoleArn</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIamRoles() const { return m_iamRoles; }
  inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
  template <typename IamRolesT = Aws::Vector<Aws::String>>
  void SetIamRoles(IamRolesT&& value) {
    m_iamRolesHasBeenSet = true;
    m_iamRoles = std::forward<IamRolesT>(value);
  }
  template <typename IamRolesT = Aws::Vector<Aws::String>>
  UpdateNamespaceRequest& WithIamRoles(IamRolesT&& value) {
    SetIamRoles(std::forward<IamRolesT>(value));
    return *this;
  }
  template <typename IamRolesT = Aws::String>
  UpdateNamespaceRequest& AddIamRoles(IamRolesT&& value) {
    m_iamRolesHasBeenSet = true;
    m_iamRoles.emplace_back(std::forward<IamRolesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
   * your data.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  UpdateNamespaceRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination for the log data. Valid values are <code>s3table</code> and
   * <code>cloudwatch</code>.</p> <p>Set this to <code>s3table</code> to manage
   * Amazon S3 Tables system-table publishing for the namespace.</p>
   */
  inline LogDestinationType GetLogDestinationType() const { return m_logDestinationType; }
  inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }
  inline void SetLogDestinationType(LogDestinationType value) {
    m_logDestinationTypeHasBeenSet = true;
    m_logDestinationType = value;
  }
  inline UpdateNamespaceRequest& WithLogDestinationType(LogDestinationType value) {
    SetLogDestinationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of logs the namespace can export. The export types are
   * <code>userlog</code>, <code>connectionlog</code>, and
   * <code>useractivitylog</code>.</p>
   */
  inline const Aws::Vector<LogExport>& GetLogExports() const { return m_logExports; }
  inline bool LogExportsHasBeenSet() const { return m_logExportsHasBeenSet; }
  template <typename LogExportsT = Aws::Vector<LogExport>>
  void SetLogExports(LogExportsT&& value) {
    m_logExportsHasBeenSet = true;
    m_logExports = std::forward<LogExportsT>(value);
  }
  template <typename LogExportsT = Aws::Vector<LogExport>>
  UpdateNamespaceRequest& WithLogExports(LogExportsT&& value) {
    SetLogExports(std::forward<LogExportsT>(value));
    return *this;
  }
  inline UpdateNamespaceRequest& AddLogExports(LogExport value) {
    m_logExportsHasBeenSet = true;
    m_logExports.push_back(value);
    return *this;
  }
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
  inline void SetManageAdminPassword(bool value) {
    m_manageAdminPasswordHasBeenSet = true;
    m_manageAdminPassword = value;
  }
  inline UpdateNamespaceRequest& WithManageAdminPassword(bool value) {
    SetManageAdminPassword(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the namespace to update. You can't update the name of a namespace
   * once it is created.</p>
   */
  inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
  inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
  template <typename NamespaceNameT = Aws::String>
  void SetNamespaceName(NamespaceNameT&& value) {
    m_namespaceNameHasBeenSet = true;
    m_namespaceName = std::forward<NamespaceNameT>(value);
  }
  template <typename NamespaceNameT = Aws::String>
  UpdateNamespaceRequest& WithNamespaceName(NamespaceNameT&& value) {
    SetNamespaceName(std::forward<NamespaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to enable or disable Amazon S3 Tables publishing. Valid values are
   * <code>Enable</code> and <code>Disable</code>, matched case-insensitively.</p>
   * <p>When omitted, defaults to <code>Enable</code>. Valid only when
   * <code>logDestinationType</code> is <code>s3table</code>.</p>
   */
  inline S3TableAction GetS3TableAction() const { return m_s3TableAction; }
  inline bool S3TableActionHasBeenSet() const { return m_s3TableActionHasBeenSet; }
  inline void SetS3TableAction(S3TableAction value) {
    m_s3TableActionHasBeenSet = true;
    m_s3TableAction = value;
  }
  inline UpdateNamespaceRequest& WithS3TableAction(S3TableAction value) {
    SetS3TableAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of the Amazon S3 Tables destination. Valid values are
   * <code>namespace</code> and <code>account</code>, matched case-insensitively.
   * <code>namespace</code> scopes the published tables to this namespace;
   * <code>account</code> scopes them to the Amazon Web Services account.</p>
   * <p>Required when enabling. Omitting this parameter or passing a blank value
   * fails with <code>ValidationException</code>. Valid only when
   * <code>logDestinationType</code> is <code>s3table</code>.</p>
   */
  inline S3TableGranularity GetS3TableGranularity() const { return m_s3TableGranularity; }
  inline bool S3TableGranularityHasBeenSet() const { return m_s3TableGranularityHasBeenSet; }
  inline void SetS3TableGranularity(S3TableGranularity value) {
    m_s3TableGranularityHasBeenSet = true;
    m_s3TableGranularity = value;
  }
  inline UpdateNamespaceRequest& WithS3TableGranularity(S3TableGranularity value) {
    SetS3TableGranularity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Key Management Service key used to encrypt the
   * published Amazon S3 Tables data. When omitted, the data is encrypted with SSE-S3
   * (Amazon S3 managed keys).</p> <p>Valid only when <code>logDestinationType</code>
   * is <code>s3table</code>.</p>
   */
  inline const Aws::String& GetS3TableKmsKeyId() const { return m_s3TableKmsKeyId; }
  inline bool S3TableKmsKeyIdHasBeenSet() const { return m_s3TableKmsKeyIdHasBeenSet; }
  template <typename S3TableKmsKeyIdT = Aws::String>
  void SetS3TableKmsKeyId(S3TableKmsKeyIdT&& value) {
    m_s3TableKmsKeyIdHasBeenSet = true;
    m_s3TableKmsKeyId = std::forward<S3TableKmsKeyIdT>(value);
  }
  template <typename S3TableKmsKeyIdT = Aws::String>
  UpdateNamespaceRequest& WithS3TableKmsKeyId(S3TableKmsKeyIdT&& value) {
    SetS3TableKmsKeyId(std::forward<S3TableKmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system tables to publish (on enable) or to stop publishing (on disable).
   * Each value is either a system table view name that begins with <code>sys_</code>
   * or the keyword <code>all</code>.</p> <p>Omitting this parameter, passing an
   * empty list, or including <code>all</code> each select every current and future
   * system table. Each name must be 1-128 characters, and the list can contain up to
   * 256 names.</p> <p>Valid only when <code>logDestinationType</code> is
   * <code>s3table</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetS3TableNames() const { return m_s3TableNames; }
  inline bool S3TableNamesHasBeenSet() const { return m_s3TableNamesHasBeenSet; }
  template <typename S3TableNamesT = Aws::Vector<Aws::String>>
  void SetS3TableNames(S3TableNamesT&& value) {
    m_s3TableNamesHasBeenSet = true;
    m_s3TableNames = std::forward<S3TableNamesT>(value);
  }
  template <typename S3TableNamesT = Aws::Vector<Aws::String>>
  UpdateNamespaceRequest& WithS3TableNames(S3TableNamesT&& value) {
    SetS3TableNames(std::forward<S3TableNamesT>(value));
    return *this;
  }
  template <typename S3TableNamesT = Aws::String>
  UpdateNamespaceRequest& AddS3TableNames(S3TableNamesT&& value) {
    m_s3TableNamesHasBeenSet = true;
    m_s3TableNames.emplace_back(std::forward<S3TableNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_adminPasswordSecretKmsKeyId;

  Aws::String m_adminUserPassword;

  Aws::String m_adminUsername;

  Aws::String m_defaultIamRoleArn;

  Aws::Vector<Aws::String> m_iamRoles;

  Aws::String m_kmsKeyId;

  LogDestinationType m_logDestinationType{LogDestinationType::NOT_SET};

  Aws::Vector<LogExport> m_logExports;

  bool m_manageAdminPassword{false};

  Aws::String m_namespaceName;

  S3TableAction m_s3TableAction{S3TableAction::NOT_SET};

  S3TableGranularity m_s3TableGranularity{S3TableGranularity::NOT_SET};

  Aws::String m_s3TableKmsKeyId;

  Aws::Vector<Aws::String> m_s3TableNames;
  bool m_adminPasswordSecretKmsKeyIdHasBeenSet = false;
  bool m_adminUserPasswordHasBeenSet = false;
  bool m_adminUsernameHasBeenSet = false;
  bool m_defaultIamRoleArnHasBeenSet = false;
  bool m_iamRolesHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_logDestinationTypeHasBeenSet = false;
  bool m_logExportsHasBeenSet = false;
  bool m_manageAdminPasswordHasBeenSet = false;
  bool m_namespaceNameHasBeenSet = false;
  bool m_s3TableActionHasBeenSet = false;
  bool m_s3TableGranularityHasBeenSet = false;
  bool m_s3TableKmsKeyIdHasBeenSet = false;
  bool m_s3TableNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
