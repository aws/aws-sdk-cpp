/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/ClusterStatus.h>
#include <aws/timestream-influxdb/model/ClusterDeploymentType.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/timestream-influxdb/model/NetworkType.h>
#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <aws/timestream-influxdb/model/LogDeliveryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/model/FailoverMode.h>
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
  class GetDbClusterResult
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API GetDbClusterResult();
    AWS_TIMESTREAMINFLUXDB_API GetDbClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API GetDbClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Service-generated unique identifier of the DB cluster to retrieve.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetDbClusterResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetDbClusterResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetDbClusterResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer-supplied name of the Timestream for InfluxDB cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDbClusterResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDbClusterResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDbClusterResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetDbClusterResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetDbClusterResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetDbClusterResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB cluster.</p>
     */
    inline const ClusterStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ClusterStatus& value) { m_status = value; }
    inline void SetStatus(ClusterStatus&& value) { m_status = std::move(value); }
    inline GetDbClusterResult& WithStatus(const ClusterStatus& value) { SetStatus(value); return *this;}
    inline GetDbClusterResult& WithStatus(ClusterStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint used to connect to the Timestream for InfluxDB cluster for write
     * and read operations.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }
    inline GetDbClusterResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline GetDbClusterResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline GetDbClusterResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint used to connect to the Timestream for InfluxDB cluster for
     * read-only operations.</p>
     */
    inline const Aws::String& GetReaderEndpoint() const{ return m_readerEndpoint; }
    inline void SetReaderEndpoint(const Aws::String& value) { m_readerEndpoint = value; }
    inline void SetReaderEndpoint(Aws::String&& value) { m_readerEndpoint = std::move(value); }
    inline void SetReaderEndpoint(const char* value) { m_readerEndpoint.assign(value); }
    inline GetDbClusterResult& WithReaderEndpoint(const Aws::String& value) { SetReaderEndpoint(value); return *this;}
    inline GetDbClusterResult& WithReaderEndpoint(Aws::String&& value) { SetReaderEndpoint(std::move(value)); return *this;}
    inline GetDbClusterResult& WithReaderEndpoint(const char* value) { SetReaderEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which InfluxDB accepts connections.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline void SetPort(int value) { m_port = value; }
    inline GetDbClusterResult& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deployment type of the DB cluster.</p>
     */
    inline const ClusterDeploymentType& GetDeploymentType() const{ return m_deploymentType; }
    inline void SetDeploymentType(const ClusterDeploymentType& value) { m_deploymentType = value; }
    inline void SetDeploymentType(ClusterDeploymentType&& value) { m_deploymentType = std::move(value); }
    inline GetDbClusterResult& WithDeploymentType(const ClusterDeploymentType& value) { SetDeploymentType(value); return *this;}
    inline GetDbClusterResult& WithDeploymentType(ClusterDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB instance type that InfluxDB runs on.</p>
     */
    inline const DbInstanceType& GetDbInstanceType() const{ return m_dbInstanceType; }
    inline void SetDbInstanceType(const DbInstanceType& value) { m_dbInstanceType = value; }
    inline void SetDbInstanceType(DbInstanceType&& value) { m_dbInstanceType = std::move(value); }
    inline GetDbClusterResult& WithDbInstanceType(const DbInstanceType& value) { SetDbInstanceType(value); return *this;}
    inline GetDbClusterResult& WithDbInstanceType(DbInstanceType&& value) { SetDbInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the network type of the Timestream for InfluxDB cluster is
     * IPv4, which can communicate over IPv4 protocol only, or DUAL, which can
     * communicate over both IPv4 and IPv6 protocols.</p>
     */
    inline const NetworkType& GetNetworkType() const{ return m_networkType; }
    inline void SetNetworkType(const NetworkType& value) { m_networkType = value; }
    inline void SetNetworkType(NetworkType&& value) { m_networkType = std::move(value); }
    inline GetDbClusterResult& WithNetworkType(const NetworkType& value) { SetNetworkType(value); return *this;}
    inline GetDbClusterResult& WithNetworkType(NetworkType&& value) { SetNetworkType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB DB storage type that InfluxDB stores data on.</p>
     */
    inline const DbStorageType& GetDbStorageType() const{ return m_dbStorageType; }
    inline void SetDbStorageType(const DbStorageType& value) { m_dbStorageType = value; }
    inline void SetDbStorageType(DbStorageType&& value) { m_dbStorageType = std::move(value); }
    inline GetDbClusterResult& WithDbStorageType(const DbStorageType& value) { SetDbStorageType(value); return *this;}
    inline GetDbClusterResult& WithDbStorageType(DbStorageType&& value) { SetDbStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage allocated for your DB storage type (in gibibytes).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorage = value; }
    inline GetDbClusterResult& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the DB cluster has a public IP to facilitate access from outside
     * the VPC.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessible = value; }
    inline GetDbClusterResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the DB parameter group assigned to your DB cluster.</p>
     */
    inline const Aws::String& GetDbParameterGroupIdentifier() const{ return m_dbParameterGroupIdentifier; }
    inline void SetDbParameterGroupIdentifier(const Aws::String& value) { m_dbParameterGroupIdentifier = value; }
    inline void SetDbParameterGroupIdentifier(Aws::String&& value) { m_dbParameterGroupIdentifier = std::move(value); }
    inline void SetDbParameterGroupIdentifier(const char* value) { m_dbParameterGroupIdentifier.assign(value); }
    inline GetDbClusterResult& WithDbParameterGroupIdentifier(const Aws::String& value) { SetDbParameterGroupIdentifier(value); return *this;}
    inline GetDbClusterResult& WithDbParameterGroupIdentifier(Aws::String&& value) { SetDbParameterGroupIdentifier(std::move(value)); return *this;}
    inline GetDbClusterResult& WithDbParameterGroupIdentifier(const char* value) { SetDbParameterGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for sending InfluxDB engine logs to send to specified S3
     * bucket.</p>
     */
    inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const{ return m_logDeliveryConfiguration; }
    inline void SetLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { m_logDeliveryConfiguration = value; }
    inline void SetLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { m_logDeliveryConfiguration = std::move(value); }
    inline GetDbClusterResult& WithLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { SetLogDeliveryConfiguration(value); return *this;}
    inline GetDbClusterResult& WithLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { SetLogDeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Secrets Manager secret containing the
     * initial InfluxDB authorization parameters. The secret value is a JSON formatted
     * key-value pair holding InfluxDB authorization values: organization, bucket,
     * username, and password.</p>
     */
    inline const Aws::String& GetInfluxAuthParametersSecretArn() const{ return m_influxAuthParametersSecretArn; }
    inline void SetInfluxAuthParametersSecretArn(const Aws::String& value) { m_influxAuthParametersSecretArn = value; }
    inline void SetInfluxAuthParametersSecretArn(Aws::String&& value) { m_influxAuthParametersSecretArn = std::move(value); }
    inline void SetInfluxAuthParametersSecretArn(const char* value) { m_influxAuthParametersSecretArn.assign(value); }
    inline GetDbClusterResult& WithInfluxAuthParametersSecretArn(const Aws::String& value) { SetInfluxAuthParametersSecretArn(value); return *this;}
    inline GetDbClusterResult& WithInfluxAuthParametersSecretArn(Aws::String&& value) { SetInfluxAuthParametersSecretArn(std::move(value)); return *this;}
    inline GetDbClusterResult& WithInfluxAuthParametersSecretArn(const char* value) { SetInfluxAuthParametersSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC subnet IDs associated with the DB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const{ return m_vpcSubnetIds; }
    inline void SetVpcSubnetIds(const Aws::Vector<Aws::String>& value) { m_vpcSubnetIds = value; }
    inline void SetVpcSubnetIds(Aws::Vector<Aws::String>&& value) { m_vpcSubnetIds = std::move(value); }
    inline GetDbClusterResult& WithVpcSubnetIds(const Aws::Vector<Aws::String>& value) { SetVpcSubnetIds(value); return *this;}
    inline GetDbClusterResult& WithVpcSubnetIds(Aws::Vector<Aws::String>&& value) { SetVpcSubnetIds(std::move(value)); return *this;}
    inline GetDbClusterResult& AddVpcSubnetIds(const Aws::String& value) { m_vpcSubnetIds.push_back(value); return *this; }
    inline GetDbClusterResult& AddVpcSubnetIds(Aws::String&& value) { m_vpcSubnetIds.push_back(std::move(value)); return *this; }
    inline GetDbClusterResult& AddVpcSubnetIds(const char* value) { m_vpcSubnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of VPC security group IDs associated with the DB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIds = std::move(value); }
    inline GetDbClusterResult& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline GetDbClusterResult& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline GetDbClusterResult& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline GetDbClusterResult& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline GetDbClusterResult& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configured failover mode for the DB cluster.</p>
     */
    inline const FailoverMode& GetFailoverMode() const{ return m_failoverMode; }
    inline void SetFailoverMode(const FailoverMode& value) { m_failoverMode = value; }
    inline void SetFailoverMode(FailoverMode&& value) { m_failoverMode = std::move(value); }
    inline GetDbClusterResult& WithFailoverMode(const FailoverMode& value) { SetFailoverMode(value); return *this;}
    inline GetDbClusterResult& WithFailoverMode(FailoverMode&& value) { SetFailoverMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDbClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDbClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDbClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    ClusterStatus m_status;

    Aws::String m_endpoint;

    Aws::String m_readerEndpoint;

    int m_port;

    ClusterDeploymentType m_deploymentType;

    DbInstanceType m_dbInstanceType;

    NetworkType m_networkType;

    DbStorageType m_dbStorageType;

    int m_allocatedStorage;

    bool m_publiclyAccessible;

    Aws::String m_dbParameterGroupIdentifier;

    LogDeliveryConfiguration m_logDeliveryConfiguration;

    Aws::String m_influxAuthParametersSecretArn;

    Aws::Vector<Aws::String> m_vpcSubnetIds;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;

    FailoverMode m_failoverMode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
