/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/LogExport.h>
#include <aws/redshift-serverless/model/NamespaceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RedshiftServerless {
namespace Model {

/**
 * <p>A collection of database objects and users.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/Namespace">AWS
 * API Reference</a></p>
 */
class Namespace {
 public:
  AWS_REDSHIFTSERVERLESS_API Namespace() = default;
  AWS_REDSHIFTSERVERLESS_API Namespace(Aws::Utils::Json::JsonView jsonValue);
  AWS_REDSHIFTSERVERLESS_API Namespace& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the namespace's admin user credentials
   * secret.</p>
   */
  inline const Aws::String& GetAdminPasswordSecretArn() const { return m_adminPasswordSecretArn; }
  inline bool AdminPasswordSecretArnHasBeenSet() const { return m_adminPasswordSecretArnHasBeenSet; }
  template <typename AdminPasswordSecretArnT = Aws::String>
  void SetAdminPasswordSecretArn(AdminPasswordSecretArnT&& value) {
    m_adminPasswordSecretArnHasBeenSet = true;
    m_adminPasswordSecretArn = std::forward<AdminPasswordSecretArnT>(value);
  }
  template <typename AdminPasswordSecretArnT = Aws::String>
  Namespace& WithAdminPasswordSecretArn(AdminPasswordSecretArnT&& value) {
    SetAdminPasswordSecretArn(std::forward<AdminPasswordSecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
   * namespace's admin credentials secret.</p>
   */
  inline const Aws::String& GetAdminPasswordSecretKmsKeyId() const { return m_adminPasswordSecretKmsKeyId; }
  inline bool AdminPasswordSecretKmsKeyIdHasBeenSet() const { return m_adminPasswordSecretKmsKeyIdHasBeenSet; }
  template <typename AdminPasswordSecretKmsKeyIdT = Aws::String>
  void SetAdminPasswordSecretKmsKeyId(AdminPasswordSecretKmsKeyIdT&& value) {
    m_adminPasswordSecretKmsKeyIdHasBeenSet = true;
    m_adminPasswordSecretKmsKeyId = std::forward<AdminPasswordSecretKmsKeyIdT>(value);
  }
  template <typename AdminPasswordSecretKmsKeyIdT = Aws::String>
  Namespace& WithAdminPasswordSecretKmsKeyId(AdminPasswordSecretKmsKeyIdT&& value) {
    SetAdminPasswordSecretKmsKeyId(std::forward<AdminPasswordSecretKmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the administrator for the first database created in the
   * namespace.</p>
   */
  inline const Aws::String& GetAdminUsername() const { return m_adminUsername; }
  inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }
  template <typename AdminUsernameT = Aws::String>
  void SetAdminUsername(AdminUsernameT&& value) {
    m_adminUsernameHasBeenSet = true;
    m_adminUsername = std::forward<AdminUsernameT>(value);
  }
  template <typename AdminUsernameT = Aws::String>
  Namespace& WithAdminUsername(AdminUsernameT&& value) {
    SetAdminUsername(std::forward<AdminUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Glue Data Catalog associated with the
   * namespace enabled with Amazon Redshift federated permissions.</p>
   */
  inline const Aws::String& GetCatalogArn() const { return m_catalogArn; }
  inline bool CatalogArnHasBeenSet() const { return m_catalogArnHasBeenSet; }
  template <typename CatalogArnT = Aws::String>
  void SetCatalogArn(CatalogArnT&& value) {
    m_catalogArnHasBeenSet = true;
    m_catalogArn = std::forward<CatalogArnT>(value);
  }
  template <typename CatalogArnT = Aws::String>
  Namespace& WithCatalogArn(CatalogArnT&& value) {
    SetCatalogArn(std::forward<CatalogArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date of when the namespace was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
  inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
  template <typename CreationDateT = Aws::Utils::DateTime>
  void SetCreationDate(CreationDateT&& value) {
    m_creationDateHasBeenSet = true;
    m_creationDate = std::forward<CreationDateT>(value);
  }
  template <typename CreationDateT = Aws::Utils::DateTime>
  Namespace& WithCreationDate(CreationDateT&& value) {
    SetCreationDate(std::forward<CreationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the first database created in the namespace.</p>
   */
  inline const Aws::String& GetDbName() const { return m_dbName; }
  inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }
  template <typename DbNameT = Aws::String>
  void SetDbName(DbNameT&& value) {
    m_dbNameHasBeenSet = true;
    m_dbName = std::forward<DbNameT>(value);
  }
  template <typename DbNameT = Aws::String>
  Namespace& WithDbName(DbNameT&& value) {
    SetDbName(std::forward<DbNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
   * namespace.</p>
   */
  inline const Aws::String& GetDefaultIamRoleArn() const { return m_defaultIamRoleArn; }
  inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }
  template <typename DefaultIamRoleArnT = Aws::String>
  void SetDefaultIamRoleArn(DefaultIamRoleArnT&& value) {
    m_defaultIamRoleArnHasBeenSet = true;
    m_defaultIamRoleArn = std::forward<DefaultIamRoleArnT>(value);
  }
  template <typename DefaultIamRoleArnT = Aws::String>
  Namespace& WithDefaultIamRoleArn(DefaultIamRoleArnT&& value) {
    SetDefaultIamRoleArn(std::forward<DefaultIamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of IAM roles to associate with the namespace.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIamRoles() const { return m_iamRoles; }
  inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
  template <typename IamRolesT = Aws::Vector<Aws::String>>
  void SetIamRoles(IamRolesT&& value) {
    m_iamRolesHasBeenSet = true;
    m_iamRoles = std::forward<IamRolesT>(value);
  }
  template <typename IamRolesT = Aws::Vector<Aws::String>>
  Namespace& WithIamRoles(IamRolesT&& value) {
    SetIamRoles(std::forward<IamRolesT>(value));
    return *this;
  }
  template <typename IamRolesT = Aws::String>
  Namespace& AddIamRoles(IamRolesT&& value) {
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
  Namespace& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the lakehouse registration for the namespace. Indicates whether
   * the namespace is successfully registered with Amazon Redshift federated
   * permissions.</p>
   */
  inline const Aws::String& GetLakehouseRegistrationStatus() const { return m_lakehouseRegistrationStatus; }
  inline bool LakehouseRegistrationStatusHasBeenSet() const { return m_lakehouseRegistrationStatusHasBeenSet; }
  template <typename LakehouseRegistrationStatusT = Aws::String>
  void SetLakehouseRegistrationStatus(LakehouseRegistrationStatusT&& value) {
    m_lakehouseRegistrationStatusHasBeenSet = true;
    m_lakehouseRegistrationStatus = std::forward<LakehouseRegistrationStatusT>(value);
  }
  template <typename LakehouseRegistrationStatusT = Aws::String>
  Namespace& WithLakehouseRegistrationStatus(LakehouseRegistrationStatusT&& value) {
    SetLakehouseRegistrationStatus(std::forward<LakehouseRegistrationStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of logs the namespace can export. Available export types are User
   * log, Connection log, and User activity log.</p>
   */
  inline const Aws::Vector<LogExport>& GetLogExports() const { return m_logExports; }
  inline bool LogExportsHasBeenSet() const { return m_logExportsHasBeenSet; }
  template <typename LogExportsT = Aws::Vector<LogExport>>
  void SetLogExports(LogExportsT&& value) {
    m_logExportsHasBeenSet = true;
    m_logExports = std::forward<LogExportsT>(value);
  }
  template <typename LogExportsT = Aws::Vector<LogExport>>
  Namespace& WithLogExports(LogExportsT&& value) {
    SetLogExports(std::forward<LogExportsT>(value));
    return *this;
  }
  inline Namespace& AddLogExports(LogExport value) {
    m_logExportsHasBeenSet = true;
    m_logExports.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) associated with a namespace.</p>
   */
  inline const Aws::String& GetNamespaceArn() const { return m_namespaceArn; }
  inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }
  template <typename NamespaceArnT = Aws::String>
  void SetNamespaceArn(NamespaceArnT&& value) {
    m_namespaceArnHasBeenSet = true;
    m_namespaceArn = std::forward<NamespaceArnT>(value);
  }
  template <typename NamespaceArnT = Aws::String>
  Namespace& WithNamespaceArn(NamespaceArnT&& value) {
    SetNamespaceArn(std::forward<NamespaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of a namespace.</p>
   */
  inline const Aws::String& GetNamespaceId() const { return m_namespaceId; }
  inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
  template <typename NamespaceIdT = Aws::String>
  void SetNamespaceId(NamespaceIdT&& value) {
    m_namespaceIdHasBeenSet = true;
    m_namespaceId = std::forward<NamespaceIdT>(value);
  }
  template <typename NamespaceIdT = Aws::String>
  Namespace& WithNamespaceId(NamespaceIdT&& value) {
    SetNamespaceId(std::forward<NamespaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the namespace. Must be between 3-64 alphanumeric characters in
   * lowercase, and it cannot be a reserved word. A list of reserved words can be
   * found in <a
   * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
   * Words</a> in the Amazon Redshift Database Developer Guide.</p>
   */
  inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
  inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
  template <typename NamespaceNameT = Aws::String>
  void SetNamespaceName(NamespaceNameT&& value) {
    m_namespaceNameHasBeenSet = true;
    m_namespaceName = std::forward<NamespaceNameT>(value);
  }
  template <typename NamespaceNameT = Aws::String>
  Namespace& WithNamespaceName(NamespaceNameT&& value) {
    SetNamespaceName(std::forward<NamespaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the namespace.</p>
   */
  inline NamespaceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NamespaceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Namespace& WithStatus(NamespaceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_adminPasswordSecretArn;

  Aws::String m_adminPasswordSecretKmsKeyId;

  Aws::String m_adminUsername;

  Aws::String m_catalogArn;

  Aws::Utils::DateTime m_creationDate{};

  Aws::String m_dbName;

  Aws::String m_defaultIamRoleArn;

  Aws::Vector<Aws::String> m_iamRoles;

  Aws::String m_kmsKeyId;

  Aws::String m_lakehouseRegistrationStatus;

  Aws::Vector<LogExport> m_logExports;

  Aws::String m_namespaceArn;

  Aws::String m_namespaceId;

  Aws::String m_namespaceName;

  NamespaceStatus m_status{NamespaceStatus::NOT_SET};
  bool m_adminPasswordSecretArnHasBeenSet = false;
  bool m_adminPasswordSecretKmsKeyIdHasBeenSet = false;
  bool m_adminUsernameHasBeenSet = false;
  bool m_catalogArnHasBeenSet = false;
  bool m_creationDateHasBeenSet = false;
  bool m_dbNameHasBeenSet = false;
  bool m_defaultIamRoleArnHasBeenSet = false;
  bool m_iamRolesHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_lakehouseRegistrationStatusHasBeenSet = false;
  bool m_logExportsHasBeenSet = false;
  bool m_namespaceArnHasBeenSet = false;
  bool m_namespaceIdHasBeenSet = false;
  bool m_namespaceNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
