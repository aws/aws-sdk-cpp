/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/Status.h>
#include <aws/timestream-influxdb/model/NetworkType.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <aws/timestream-influxdb/model/DeploymentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/model/LogDeliveryConfiguration.h>
#include <aws/timestream-influxdb/model/InstanceMode.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TimestreamInfluxDB
{
namespace Model
{
  class DeleteDbInstanceResult
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API DeleteDbInstanceResult() = default;
    AWS_TIMESTREAMINFLUXDB_API DeleteDbInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API DeleteDbInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeleteDbInstanceResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-supplied name that uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and CLI commands.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeleteDbInstanceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DeleteDbInstanceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB instance.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeleteDbInstanceResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    DeleteDbInstanceResult& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which InfluxDB accepts connections.</p>
     */
    inline int GetPort() const { return m_port; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DeleteDbInstanceResult& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the networkType of the Timestream for InfluxDB instance is
     * IPV4, which can communicate over IPv4 protocol only, or DUAL, which can
     * communicate over both IPv4 and IPv6 protocols.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline DeleteDbInstanceResult& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB instance type that InfluxDB runs on.</p>
     */
    inline DbInstanceType GetDbInstanceType() const { return m_dbInstanceType; }
    inline void SetDbInstanceType(DbInstanceType value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = value; }
    inline DeleteDbInstanceResult& WithDbInstanceType(DbInstanceType value) { SetDbInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB DB storage type that InfluxDB stores data on.</p>
     */
    inline DbStorageType GetDbStorageType() const { return m_dbStorageType; }
    inline void SetDbStorageType(DbStorageType value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = value; }
    inline DeleteDbInstanceResult& WithDbStorageType(DbStorageType value) { SetDbStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage allocated for your DB storage type (in gibibytes).</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DeleteDbInstanceResult& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the Timestream for InfluxDB is deployed as Single-AZ or
     * with a MultiAZ Standby for High availability.</p>
     */
    inline DeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline void SetDeploymentType(DeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline DeleteDbInstanceResult& WithDeploymentType(DeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC subnet IDs associated with the DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const { return m_vpcSubnetIds; }
    template<typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
    void SetVpcSubnetIds(VpcSubnetIdsT&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::forward<VpcSubnetIdsT>(value); }
    template<typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
    DeleteDbInstanceResult& WithVpcSubnetIds(VpcSubnetIdsT&& value) { SetVpcSubnetIds(std::forward<VpcSubnetIdsT>(value)); return *this;}
    template<typename VpcSubnetIdsT = Aws::String>
    DeleteDbInstanceResult& AddVpcSubnetIds(VpcSubnetIdsT&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.emplace_back(std::forward<VpcSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if the DB instance has a public IP to facilitate access.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline DeleteDbInstanceResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC security group IDs associated with the DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    DeleteDbInstanceResult& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    DeleteDbInstanceResult& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The id of the DB parameter group assigned to your DB instance.</p>
     */
    inline const Aws::String& GetDbParameterGroupIdentifier() const { return m_dbParameterGroupIdentifier; }
    template<typename DbParameterGroupIdentifierT = Aws::String>
    void SetDbParameterGroupIdentifier(DbParameterGroupIdentifierT&& value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier = std::forward<DbParameterGroupIdentifierT>(value); }
    template<typename DbParameterGroupIdentifierT = Aws::String>
    DeleteDbInstanceResult& WithDbParameterGroupIdentifier(DbParameterGroupIdentifierT&& value) { SetDbParameterGroupIdentifier(std::forward<DbParameterGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the DB instance resides.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    DeleteDbInstanceResult& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the standby instance is located when deploying
     * with a MultiAZ standby instance.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const { return m_secondaryAvailabilityZone; }
    template<typename SecondaryAvailabilityZoneT = Aws::String>
    void SetSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = std::forward<SecondaryAvailabilityZoneT>(value); }
    template<typename SecondaryAvailabilityZoneT = Aws::String>
    DeleteDbInstanceResult& WithSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) { SetSecondaryAvailabilityZone(std::forward<SecondaryAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for sending InfluxDB engine logs to send to specified S3
     * bucket.</p>
     */
    inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const { return m_logDeliveryConfiguration; }
    template<typename LogDeliveryConfigurationT = LogDeliveryConfiguration>
    void SetLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) { m_logDeliveryConfigurationHasBeenSet = true; m_logDeliveryConfiguration = std::forward<LogDeliveryConfigurationT>(value); }
    template<typename LogDeliveryConfigurationT = LogDeliveryConfiguration>
    DeleteDbInstanceResult& WithLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) { SetLogDeliveryConfiguration(std::forward<LogDeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Secrets Manager secret containing the
     * initial InfluxDB authorization parameters. The secret value is a JSON formatted
     * key-value pair holding InfluxDB authorization values: organization, bucket,
     * username, and password.</p>
     */
    inline const Aws::String& GetInfluxAuthParametersSecretArn() const { return m_influxAuthParametersSecretArn; }
    template<typename InfluxAuthParametersSecretArnT = Aws::String>
    void SetInfluxAuthParametersSecretArn(InfluxAuthParametersSecretArnT&& value) { m_influxAuthParametersSecretArnHasBeenSet = true; m_influxAuthParametersSecretArn = std::forward<InfluxAuthParametersSecretArnT>(value); }
    template<typename InfluxAuthParametersSecretArnT = Aws::String>
    DeleteDbInstanceResult& WithInfluxAuthParametersSecretArn(InfluxAuthParametersSecretArnT&& value) { SetInfluxAuthParametersSecretArn(std::forward<InfluxAuthParametersSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DbCluster to which this DbInstance belongs to.</p>
     */
    inline const Aws::String& GetDbClusterId() const { return m_dbClusterId; }
    template<typename DbClusterIdT = Aws::String>
    void SetDbClusterId(DbClusterIdT&& value) { m_dbClusterIdHasBeenSet = true; m_dbClusterId = std::forward<DbClusterIdT>(value); }
    template<typename DbClusterIdT = Aws::String>
    DeleteDbInstanceResult& WithDbClusterId(DbClusterIdT&& value) { SetDbClusterId(std::forward<DbClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DbInstance's role in the cluster.</p>
     */
    inline InstanceMode GetInstanceMode() const { return m_instanceMode; }
    inline void SetInstanceMode(InstanceMode value) { m_instanceModeHasBeenSet = true; m_instanceMode = value; }
    inline DeleteDbInstanceResult& WithInstanceMode(InstanceMode value) { SetInstanceMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteDbInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    DbInstanceType m_dbInstanceType{DbInstanceType::NOT_SET};
    bool m_dbInstanceTypeHasBeenSet = false;

    DbStorageType m_dbStorageType{DbStorageType::NOT_SET};
    bool m_dbStorageTypeHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    DeploymentType m_deploymentType{DeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_dbParameterGroupIdentifier;
    bool m_dbParameterGroupIdentifierHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet = false;

    LogDeliveryConfiguration m_logDeliveryConfiguration;
    bool m_logDeliveryConfigurationHasBeenSet = false;

    Aws::String m_influxAuthParametersSecretArn;
    bool m_influxAuthParametersSecretArnHasBeenSet = false;

    Aws::String m_dbClusterId;
    bool m_dbClusterIdHasBeenSet = false;

    InstanceMode m_instanceMode{InstanceMode::NOT_SET};
    bool m_instanceModeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
