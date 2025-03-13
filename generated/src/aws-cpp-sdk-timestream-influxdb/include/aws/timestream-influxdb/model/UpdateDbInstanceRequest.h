/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/LogDeliveryConfiguration.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/timestream-influxdb/model/DeploymentType.h>
#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <utility>

namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   */
  class UpdateDbInstanceRequest : public TimestreamInfluxDBRequest
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API UpdateDbInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDbInstance"; }

    AWS_TIMESTREAMINFLUXDB_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMINFLUXDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The id of the DB instance.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateDbInstanceRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for sending InfluxDB engine logs to send to specified S3
     * bucket.</p>
     */
    inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const { return m_logDeliveryConfiguration; }
    inline bool LogDeliveryConfigurationHasBeenSet() const { return m_logDeliveryConfigurationHasBeenSet; }
    template<typename LogDeliveryConfigurationT = LogDeliveryConfiguration>
    void SetLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) { m_logDeliveryConfigurationHasBeenSet = true; m_logDeliveryConfiguration = std::forward<LogDeliveryConfigurationT>(value); }
    template<typename LogDeliveryConfigurationT = LogDeliveryConfiguration>
    UpdateDbInstanceRequest& WithLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) { SetLogDeliveryConfiguration(std::forward<LogDeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the DB parameter group to assign to your DB instance. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline const Aws::String& GetDbParameterGroupIdentifier() const { return m_dbParameterGroupIdentifier; }
    inline bool DbParameterGroupIdentifierHasBeenSet() const { return m_dbParameterGroupIdentifierHasBeenSet; }
    template<typename DbParameterGroupIdentifierT = Aws::String>
    void SetDbParameterGroupIdentifier(DbParameterGroupIdentifierT&& value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier = std::forward<DbParameterGroupIdentifierT>(value); }
    template<typename DbParameterGroupIdentifierT = Aws::String>
    UpdateDbInstanceRequest& WithDbParameterGroupIdentifier(DbParameterGroupIdentifierT&& value) { SetDbParameterGroupIdentifier(std::forward<DbParameterGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which InfluxDB accepts connections.</p> <p>If you change
     * the Port value, your database restarts immediately.</p> <p>Valid Values:
     * 1024-65535</p> <p>Default: 8086</p> <p>Constraints: The value can't be
     * 2375-2376, 7788-7799, 8090, or 51678-51680</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline UpdateDbInstanceRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB DB instance type to run InfluxDB on.</p>
     */
    inline DbInstanceType GetDbInstanceType() const { return m_dbInstanceType; }
    inline bool DbInstanceTypeHasBeenSet() const { return m_dbInstanceTypeHasBeenSet; }
    inline void SetDbInstanceType(DbInstanceType value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = value; }
    inline UpdateDbInstanceRequest& WithDbInstanceType(DbInstanceType value) { SetDbInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance will be deployed as a standalone instance
     * or with a Multi-AZ standby for high availability.</p>
     */
    inline DeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(DeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline UpdateDbInstanceRequest& WithDeploymentType(DeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB DB storage type that InfluxDB stores data on.</p>
     */
    inline DbStorageType GetDbStorageType() const { return m_dbStorageType; }
    inline bool DbStorageTypeHasBeenSet() const { return m_dbStorageTypeHasBeenSet; }
    inline void SetDbStorageType(DbStorageType value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = value; }
    inline UpdateDbInstanceRequest& WithDbStorageType(DbStorageType value) { SetDbStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage to allocate for your DB storage type (in
     * gibibytes).</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline UpdateDbInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    LogDeliveryConfiguration m_logDeliveryConfiguration;
    bool m_logDeliveryConfigurationHasBeenSet = false;

    Aws::String m_dbParameterGroupIdentifier;
    bool m_dbParameterGroupIdentifierHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    DbInstanceType m_dbInstanceType{DbInstanceType::NOT_SET};
    bool m_dbInstanceTypeHasBeenSet = false;

    DeploymentType m_deploymentType{DeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    DbStorageType m_dbStorageType{DbStorageType::NOT_SET};
    bool m_dbStorageTypeHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
