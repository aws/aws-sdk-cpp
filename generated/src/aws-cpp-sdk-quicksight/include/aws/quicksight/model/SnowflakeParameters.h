/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AuthenticationType.h>
#include <aws/quicksight/model/OAuthParameters.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters for Snowflake.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnowflakeParameters">AWS
   * API Reference</a></p>
   */
  class SnowflakeParameters
  {
  public:
    AWS_QUICKSIGHT_API SnowflakeParameters();
    AWS_QUICKSIGHT_API SnowflakeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnowflakeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Host.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }
    inline SnowflakeParameters& WithHost(const Aws::String& value) { SetHost(value); return *this;}
    inline SnowflakeParameters& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}
    inline SnowflakeParameters& WithHost(const char* value) { SetHost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Database.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline SnowflakeParameters& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline SnowflakeParameters& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline SnowflakeParameters& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Warehouse.</p>
     */
    inline const Aws::String& GetWarehouse() const{ return m_warehouse; }
    inline bool WarehouseHasBeenSet() const { return m_warehouseHasBeenSet; }
    inline void SetWarehouse(const Aws::String& value) { m_warehouseHasBeenSet = true; m_warehouse = value; }
    inline void SetWarehouse(Aws::String&& value) { m_warehouseHasBeenSet = true; m_warehouse = std::move(value); }
    inline void SetWarehouse(const char* value) { m_warehouseHasBeenSet = true; m_warehouse.assign(value); }
    inline SnowflakeParameters& WithWarehouse(const Aws::String& value) { SetWarehouse(value); return *this;}
    inline SnowflakeParameters& WithWarehouse(Aws::String&& value) { SetWarehouse(std::move(value)); return *this;}
    inline SnowflakeParameters& WithWarehouse(const char* value) { SetWarehouse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type that you want to use for your connection. This
     * parameter accepts OAuth and non-OAuth authentication types.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline SnowflakeParameters& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline SnowflakeParameters& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database access control role.</p>
     */
    inline const Aws::String& GetDatabaseAccessControlRole() const{ return m_databaseAccessControlRole; }
    inline bool DatabaseAccessControlRoleHasBeenSet() const { return m_databaseAccessControlRoleHasBeenSet; }
    inline void SetDatabaseAccessControlRole(const Aws::String& value) { m_databaseAccessControlRoleHasBeenSet = true; m_databaseAccessControlRole = value; }
    inline void SetDatabaseAccessControlRole(Aws::String&& value) { m_databaseAccessControlRoleHasBeenSet = true; m_databaseAccessControlRole = std::move(value); }
    inline void SetDatabaseAccessControlRole(const char* value) { m_databaseAccessControlRoleHasBeenSet = true; m_databaseAccessControlRole.assign(value); }
    inline SnowflakeParameters& WithDatabaseAccessControlRole(const Aws::String& value) { SetDatabaseAccessControlRole(value); return *this;}
    inline SnowflakeParameters& WithDatabaseAccessControlRole(Aws::String&& value) { SetDatabaseAccessControlRole(std::move(value)); return *this;}
    inline SnowflakeParameters& WithDatabaseAccessControlRole(const char* value) { SetDatabaseAccessControlRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information needed to create a data source connection
     * between an Amazon QuickSight account and Snowflake.</p>
     */
    inline const OAuthParameters& GetOAuthParameters() const{ return m_oAuthParameters; }
    inline bool OAuthParametersHasBeenSet() const { return m_oAuthParametersHasBeenSet; }
    inline void SetOAuthParameters(const OAuthParameters& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = value; }
    inline void SetOAuthParameters(OAuthParameters&& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = std::move(value); }
    inline SnowflakeParameters& WithOAuthParameters(const OAuthParameters& value) { SetOAuthParameters(value); return *this;}
    inline SnowflakeParameters& WithOAuthParameters(OAuthParameters&& value) { SetOAuthParameters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_warehouse;
    bool m_warehouseHasBeenSet = false;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_databaseAccessControlRole;
    bool m_databaseAccessControlRoleHasBeenSet = false;

    OAuthParameters m_oAuthParameters;
    bool m_oAuthParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
