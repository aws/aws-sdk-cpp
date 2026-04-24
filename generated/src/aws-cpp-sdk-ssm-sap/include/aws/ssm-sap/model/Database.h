/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/ApplicationCredential.h>
#include <aws/ssm-sap/model/DatabaseStatus.h>
#include <aws/ssm-sap/model/DatabaseType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SsmSap {
namespace Model {

/**
 * <p>The SAP HANA database of the application registered with AWS Systems Manager
 * for SAP.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/Database">AWS
 * API Reference</a></p>
 */
class Database {
 public:
  AWS_SSMSAP_API Database() = default;
  AWS_SSMSAP_API Database(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSMSAP_API Database& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the application.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  Database& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the component.</p>
   */
  inline const Aws::String& GetComponentId() const { return m_componentId; }
  inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
  template <typename ComponentIdT = Aws::String>
  void SetComponentId(ComponentIdT&& value) {
    m_componentIdHasBeenSet = true;
    m_componentId = std::forward<ComponentIdT>(value);
  }
  template <typename ComponentIdT = Aws::String>
  Database& WithComponentId(ComponentIdT&& value) {
    SetComponentId(std::forward<ComponentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The credentials of the database.</p>
   */
  inline const Aws::Vector<ApplicationCredential>& GetCredentials() const { return m_credentials; }
  inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
  template <typename CredentialsT = Aws::Vector<ApplicationCredential>>
  void SetCredentials(CredentialsT&& value) {
    m_credentialsHasBeenSet = true;
    m_credentials = std::forward<CredentialsT>(value);
  }
  template <typename CredentialsT = Aws::Vector<ApplicationCredential>>
  Database& WithCredentials(CredentialsT&& value) {
    SetCredentials(std::forward<CredentialsT>(value));
    return *this;
  }
  template <typename CredentialsT = ApplicationCredential>
  Database& AddCredentials(CredentialsT&& value) {
    m_credentialsHasBeenSet = true;
    m_credentials.emplace_back(std::forward<CredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the SAP HANA database.</p>
   */
  inline const Aws::String& GetDatabaseId() const { return m_databaseId; }
  inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }
  template <typename DatabaseIdT = Aws::String>
  void SetDatabaseId(DatabaseIdT&& value) {
    m_databaseIdHasBeenSet = true;
    m_databaseId = std::forward<DatabaseIdT>(value);
  }
  template <typename DatabaseIdT = Aws::String>
  Database& WithDatabaseId(DatabaseIdT&& value) {
    SetDatabaseId(std::forward<DatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the database.</p>
   */
  inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
  inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
  template <typename DatabaseNameT = Aws::String>
  void SetDatabaseName(DatabaseNameT&& value) {
    m_databaseNameHasBeenSet = true;
    m_databaseName = std::forward<DatabaseNameT>(value);
  }
  template <typename DatabaseNameT = Aws::String>
  Database& WithDatabaseName(DatabaseNameT&& value) {
    SetDatabaseName(std::forward<DatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the database.</p>
   */
  inline DatabaseType GetDatabaseType() const { return m_databaseType; }
  inline bool DatabaseTypeHasBeenSet() const { return m_databaseTypeHasBeenSet; }
  inline void SetDatabaseType(DatabaseType value) {
    m_databaseTypeHasBeenSet = true;
    m_databaseType = value;
  }
  inline Database& WithDatabaseType(DatabaseType value) {
    SetDatabaseType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the database.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Database& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the database.</p>
   */
  inline DatabaseStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DatabaseStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Database& WithStatus(DatabaseStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary host of the database.</p>
   */
  inline const Aws::String& GetPrimaryHost() const { return m_primaryHost; }
  inline bool PrimaryHostHasBeenSet() const { return m_primaryHostHasBeenSet; }
  template <typename PrimaryHostT = Aws::String>
  void SetPrimaryHost(PrimaryHostT&& value) {
    m_primaryHostHasBeenSet = true;
    m_primaryHost = std::forward<PrimaryHostT>(value);
  }
  template <typename PrimaryHostT = Aws::String>
  Database& WithPrimaryHost(PrimaryHostT&& value) {
    SetPrimaryHost(std::forward<PrimaryHostT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SQL port of the database.</p>
   */
  inline int GetSQLPort() const { return m_sQLPort; }
  inline bool SQLPortHasBeenSet() const { return m_sQLPortHasBeenSet; }
  inline void SetSQLPort(int value) {
    m_sQLPortHasBeenSet = true;
    m_sQLPort = value;
  }
  inline Database& WithSQLPort(int value) {
    SetSQLPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the database was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
  inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
  template <typename LastUpdatedT = Aws::Utils::DateTime>
  void SetLastUpdated(LastUpdatedT&& value) {
    m_lastUpdatedHasBeenSet = true;
    m_lastUpdated = std::forward<LastUpdatedT>(value);
  }
  template <typename LastUpdatedT = Aws::Utils::DateTime>
  Database& WithLastUpdated(LastUpdatedT&& value) {
    SetLastUpdated(std::forward<LastUpdatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names of the connected AWS Systems Manager for SAP
   * components.</p>
   */
  inline const Aws::Vector<Aws::String>& GetConnectedComponentArns() const { return m_connectedComponentArns; }
  inline bool ConnectedComponentArnsHasBeenSet() const { return m_connectedComponentArnsHasBeenSet; }
  template <typename ConnectedComponentArnsT = Aws::Vector<Aws::String>>
  void SetConnectedComponentArns(ConnectedComponentArnsT&& value) {
    m_connectedComponentArnsHasBeenSet = true;
    m_connectedComponentArns = std::forward<ConnectedComponentArnsT>(value);
  }
  template <typename ConnectedComponentArnsT = Aws::Vector<Aws::String>>
  Database& WithConnectedComponentArns(ConnectedComponentArnsT&& value) {
    SetConnectedComponentArns(std::forward<ConnectedComponentArnsT>(value));
    return *this;
  }
  template <typename ConnectedComponentArnsT = Aws::String>
  Database& AddConnectedComponentArns(ConnectedComponentArnsT&& value) {
    m_connectedComponentArnsHasBeenSet = true;
    m_connectedComponentArns.emplace_back(std::forward<ConnectedComponentArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_componentId;

  Aws::Vector<ApplicationCredential> m_credentials;

  Aws::String m_databaseId;

  Aws::String m_databaseName;

  DatabaseType m_databaseType{DatabaseType::NOT_SET};

  Aws::String m_arn;

  DatabaseStatus m_status{DatabaseStatus::NOT_SET};

  Aws::String m_primaryHost;

  int m_sQLPort{0};

  Aws::Utils::DateTime m_lastUpdated{};

  Aws::Vector<Aws::String> m_connectedComponentArns;
  bool m_applicationIdHasBeenSet = false;
  bool m_componentIdHasBeenSet = false;
  bool m_credentialsHasBeenSet = false;
  bool m_databaseIdHasBeenSet = false;
  bool m_databaseNameHasBeenSet = false;
  bool m_databaseTypeHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_primaryHostHasBeenSet = false;
  bool m_sQLPortHasBeenSet = false;
  bool m_lastUpdatedHasBeenSet = false;
  bool m_connectedComponentArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SsmSap
}  // namespace Aws
