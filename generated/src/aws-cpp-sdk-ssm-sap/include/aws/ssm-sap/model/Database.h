/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/model/DatabaseType.h>
#include <aws/ssm-sap/model/DatabaseStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-sap/model/ApplicationCredential.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>The SAP HANA database of the application registered with AWS Systems Manager
   * for SAP.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/Database">AWS
   * API Reference</a></p>
   */
  class Database
  {
  public:
    AWS_SSMSAP_API Database();
    AWS_SSMSAP_API Database(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Database& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline Database& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline Database& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline Database& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the component.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }
    inline Database& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}
    inline Database& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}
    inline Database& WithComponentId(const char* value) { SetComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials of the database.</p>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const Aws::Vector<ApplicationCredential>& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(Aws::Vector<ApplicationCredential>&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline Database& WithCredentials(const Aws::Vector<ApplicationCredential>& value) { SetCredentials(value); return *this;}
    inline Database& WithCredentials(Aws::Vector<ApplicationCredential>&& value) { SetCredentials(std::move(value)); return *this;}
    inline Database& AddCredentials(const ApplicationCredential& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(value); return *this; }
    inline Database& AddCredentials(ApplicationCredential&& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the SAP HANA database.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }
    inline Database& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}
    inline Database& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}
    inline Database& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline Database& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline Database& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline Database& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the database.</p>
     */
    inline const DatabaseType& GetDatabaseType() const{ return m_databaseType; }
    inline bool DatabaseTypeHasBeenSet() const { return m_databaseTypeHasBeenSet; }
    inline void SetDatabaseType(const DatabaseType& value) { m_databaseTypeHasBeenSet = true; m_databaseType = value; }
    inline void SetDatabaseType(DatabaseType&& value) { m_databaseTypeHasBeenSet = true; m_databaseType = std::move(value); }
    inline Database& WithDatabaseType(const DatabaseType& value) { SetDatabaseType(value); return *this;}
    inline Database& WithDatabaseType(DatabaseType&& value) { SetDatabaseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Database& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Database& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Database& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the database.</p>
     */
    inline const DatabaseStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DatabaseStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DatabaseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Database& WithStatus(const DatabaseStatus& value) { SetStatus(value); return *this;}
    inline Database& WithStatus(DatabaseStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary host of the database.</p>
     */
    inline const Aws::String& GetPrimaryHost() const{ return m_primaryHost; }
    inline bool PrimaryHostHasBeenSet() const { return m_primaryHostHasBeenSet; }
    inline void SetPrimaryHost(const Aws::String& value) { m_primaryHostHasBeenSet = true; m_primaryHost = value; }
    inline void SetPrimaryHost(Aws::String&& value) { m_primaryHostHasBeenSet = true; m_primaryHost = std::move(value); }
    inline void SetPrimaryHost(const char* value) { m_primaryHostHasBeenSet = true; m_primaryHost.assign(value); }
    inline Database& WithPrimaryHost(const Aws::String& value) { SetPrimaryHost(value); return *this;}
    inline Database& WithPrimaryHost(Aws::String&& value) { SetPrimaryHost(std::move(value)); return *this;}
    inline Database& WithPrimaryHost(const char* value) { SetPrimaryHost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL port of the database.</p>
     */
    inline int GetSQLPort() const{ return m_sQLPort; }
    inline bool SQLPortHasBeenSet() const { return m_sQLPortHasBeenSet; }
    inline void SetSQLPort(int value) { m_sQLPortHasBeenSet = true; m_sQLPort = value; }
    inline Database& WithSQLPort(int value) { SetSQLPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the database was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }
    inline Database& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline Database& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names of the connected AWS Systems Manager for SAP
     * components.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectedComponentArns() const{ return m_connectedComponentArns; }
    inline bool ConnectedComponentArnsHasBeenSet() const { return m_connectedComponentArnsHasBeenSet; }
    inline void SetConnectedComponentArns(const Aws::Vector<Aws::String>& value) { m_connectedComponentArnsHasBeenSet = true; m_connectedComponentArns = value; }
    inline void SetConnectedComponentArns(Aws::Vector<Aws::String>&& value) { m_connectedComponentArnsHasBeenSet = true; m_connectedComponentArns = std::move(value); }
    inline Database& WithConnectedComponentArns(const Aws::Vector<Aws::String>& value) { SetConnectedComponentArns(value); return *this;}
    inline Database& WithConnectedComponentArns(Aws::Vector<Aws::String>&& value) { SetConnectedComponentArns(std::move(value)); return *this;}
    inline Database& AddConnectedComponentArns(const Aws::String& value) { m_connectedComponentArnsHasBeenSet = true; m_connectedComponentArns.push_back(value); return *this; }
    inline Database& AddConnectedComponentArns(Aws::String&& value) { m_connectedComponentArnsHasBeenSet = true; m_connectedComponentArns.push_back(std::move(value)); return *this; }
    inline Database& AddConnectedComponentArns(const char* value) { m_connectedComponentArnsHasBeenSet = true; m_connectedComponentArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::Vector<ApplicationCredential> m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    DatabaseType m_databaseType;
    bool m_databaseTypeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DatabaseStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_primaryHost;
    bool m_primaryHostHasBeenSet = false;

    int m_sQLPort;
    bool m_sQLPortHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectedComponentArns;
    bool m_connectedComponentArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
