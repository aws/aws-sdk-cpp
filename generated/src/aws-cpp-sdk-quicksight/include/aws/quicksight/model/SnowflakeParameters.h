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
    AWS_QUICKSIGHT_API SnowflakeParameters() = default;
    AWS_QUICKSIGHT_API SnowflakeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnowflakeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Host.</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    SnowflakeParameters& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Database.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    SnowflakeParameters& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Warehouse.</p>
     */
    inline const Aws::String& GetWarehouse() const { return m_warehouse; }
    inline bool WarehouseHasBeenSet() const { return m_warehouseHasBeenSet; }
    template<typename WarehouseT = Aws::String>
    void SetWarehouse(WarehouseT&& value) { m_warehouseHasBeenSet = true; m_warehouse = std::forward<WarehouseT>(value); }
    template<typename WarehouseT = Aws::String>
    SnowflakeParameters& WithWarehouse(WarehouseT&& value) { SetWarehouse(std::forward<WarehouseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type that you want to use for your connection. This
     * parameter accepts OAuth and non-OAuth authentication types.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline SnowflakeParameters& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database access control role.</p>
     */
    inline const Aws::String& GetDatabaseAccessControlRole() const { return m_databaseAccessControlRole; }
    inline bool DatabaseAccessControlRoleHasBeenSet() const { return m_databaseAccessControlRoleHasBeenSet; }
    template<typename DatabaseAccessControlRoleT = Aws::String>
    void SetDatabaseAccessControlRole(DatabaseAccessControlRoleT&& value) { m_databaseAccessControlRoleHasBeenSet = true; m_databaseAccessControlRole = std::forward<DatabaseAccessControlRoleT>(value); }
    template<typename DatabaseAccessControlRoleT = Aws::String>
    SnowflakeParameters& WithDatabaseAccessControlRole(DatabaseAccessControlRoleT&& value) { SetDatabaseAccessControlRole(std::forward<DatabaseAccessControlRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information needed to create a data source connection
     * between an QuickSight account and Snowflake.</p>
     */
    inline const OAuthParameters& GetOAuthParameters() const { return m_oAuthParameters; }
    inline bool OAuthParametersHasBeenSet() const { return m_oAuthParametersHasBeenSet; }
    template<typename OAuthParametersT = OAuthParameters>
    void SetOAuthParameters(OAuthParametersT&& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = std::forward<OAuthParametersT>(value); }
    template<typename OAuthParametersT = OAuthParameters>
    SnowflakeParameters& WithOAuthParameters(OAuthParametersT&& value) { SetOAuthParameters(std::forward<OAuthParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_warehouse;
    bool m_warehouseHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_databaseAccessControlRole;
    bool m_databaseAccessControlRoleHasBeenSet = false;

    OAuthParameters m_oAuthParameters;
    bool m_oAuthParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
