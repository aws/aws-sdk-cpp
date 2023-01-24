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


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline Database& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline Database& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline Database& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The ID of the component.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }

    /**
     * <p>The ID of the component.</p>
     */
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }

    /**
     * <p>The ID of the component.</p>
     */
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }

    /**
     * <p>The ID of the component.</p>
     */
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }

    /**
     * <p>The ID of the component.</p>
     */
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }

    /**
     * <p>The ID of the component.</p>
     */
    inline Database& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}

    /**
     * <p>The ID of the component.</p>
     */
    inline Database& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component.</p>
     */
    inline Database& WithComponentId(const char* value) { SetComponentId(value); return *this;}


    /**
     * <p>The credentials of the database.</p>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The credentials of the database.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>The credentials of the database.</p>
     */
    inline void SetCredentials(const Aws::Vector<ApplicationCredential>& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>The credentials of the database.</p>
     */
    inline void SetCredentials(Aws::Vector<ApplicationCredential>&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>The credentials of the database.</p>
     */
    inline Database& WithCredentials(const Aws::Vector<ApplicationCredential>& value) { SetCredentials(value); return *this;}

    /**
     * <p>The credentials of the database.</p>
     */
    inline Database& WithCredentials(Aws::Vector<ApplicationCredential>&& value) { SetCredentials(std::move(value)); return *this;}

    /**
     * <p>The credentials of the database.</p>
     */
    inline Database& AddCredentials(const ApplicationCredential& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(value); return *this; }

    /**
     * <p>The credentials of the database.</p>
     */
    inline Database& AddCredentials(ApplicationCredential&& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the SAP HANA database.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }

    /**
     * <p>The ID of the SAP HANA database.</p>
     */
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }

    /**
     * <p>The ID of the SAP HANA database.</p>
     */
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }

    /**
     * <p>The ID of the SAP HANA database.</p>
     */
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }

    /**
     * <p>The ID of the SAP HANA database.</p>
     */
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }

    /**
     * <p>The ID of the SAP HANA database.</p>
     */
    inline Database& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}

    /**
     * <p>The ID of the SAP HANA database.</p>
     */
    inline Database& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SAP HANA database.</p>
     */
    inline Database& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}


    /**
     * <p>The name of the database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database.</p>
     */
    inline Database& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database.</p>
     */
    inline Database& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database.</p>
     */
    inline Database& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The type of the database.</p>
     */
    inline const DatabaseType& GetDatabaseType() const{ return m_databaseType; }

    /**
     * <p>The type of the database.</p>
     */
    inline bool DatabaseTypeHasBeenSet() const { return m_databaseTypeHasBeenSet; }

    /**
     * <p>The type of the database.</p>
     */
    inline void SetDatabaseType(const DatabaseType& value) { m_databaseTypeHasBeenSet = true; m_databaseType = value; }

    /**
     * <p>The type of the database.</p>
     */
    inline void SetDatabaseType(DatabaseType&& value) { m_databaseTypeHasBeenSet = true; m_databaseType = std::move(value); }

    /**
     * <p>The type of the database.</p>
     */
    inline Database& WithDatabaseType(const DatabaseType& value) { SetDatabaseType(value); return *this;}

    /**
     * <p>The type of the database.</p>
     */
    inline Database& WithDatabaseType(DatabaseType&& value) { SetDatabaseType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline Database& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline Database& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline Database& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the database.</p>
     */
    inline const DatabaseStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the database.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the database.</p>
     */
    inline void SetStatus(const DatabaseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the database.</p>
     */
    inline void SetStatus(DatabaseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the database.</p>
     */
    inline Database& WithStatus(const DatabaseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the database.</p>
     */
    inline Database& WithStatus(DatabaseStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The primary host of the database.</p>
     */
    inline const Aws::String& GetPrimaryHost() const{ return m_primaryHost; }

    /**
     * <p>The primary host of the database.</p>
     */
    inline bool PrimaryHostHasBeenSet() const { return m_primaryHostHasBeenSet; }

    /**
     * <p>The primary host of the database.</p>
     */
    inline void SetPrimaryHost(const Aws::String& value) { m_primaryHostHasBeenSet = true; m_primaryHost = value; }

    /**
     * <p>The primary host of the database.</p>
     */
    inline void SetPrimaryHost(Aws::String&& value) { m_primaryHostHasBeenSet = true; m_primaryHost = std::move(value); }

    /**
     * <p>The primary host of the database.</p>
     */
    inline void SetPrimaryHost(const char* value) { m_primaryHostHasBeenSet = true; m_primaryHost.assign(value); }

    /**
     * <p>The primary host of the database.</p>
     */
    inline Database& WithPrimaryHost(const Aws::String& value) { SetPrimaryHost(value); return *this;}

    /**
     * <p>The primary host of the database.</p>
     */
    inline Database& WithPrimaryHost(Aws::String&& value) { SetPrimaryHost(std::move(value)); return *this;}

    /**
     * <p>The primary host of the database.</p>
     */
    inline Database& WithPrimaryHost(const char* value) { SetPrimaryHost(value); return *this;}


    /**
     * <p>The SQL port of the database.</p>
     */
    inline int GetSQLPort() const{ return m_sQLPort; }

    /**
     * <p>The SQL port of the database.</p>
     */
    inline bool SQLPortHasBeenSet() const { return m_sQLPortHasBeenSet; }

    /**
     * <p>The SQL port of the database.</p>
     */
    inline void SetSQLPort(int value) { m_sQLPortHasBeenSet = true; m_sQLPort = value; }

    /**
     * <p>The SQL port of the database.</p>
     */
    inline Database& WithSQLPort(int value) { SetSQLPort(value); return *this;}


    /**
     * <p>The time at which the database was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The time at which the database was last updated.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The time at which the database was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The time at which the database was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The time at which the database was last updated.</p>
     */
    inline Database& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The time at which the database was last updated.</p>
     */
    inline Database& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
