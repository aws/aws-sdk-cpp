﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/Status.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <aws/timestream-influxdb/model/DeploymentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/model/LogDeliveryConfiguration.h>
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
    AWS_TIMESTREAMINFLUXDB_API DeleteDbInstanceResult();
    AWS_TIMESTREAMINFLUXDB_API DeleteDbInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API DeleteDbInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DeleteDbInstanceResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteDbInstanceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-supplied name that uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and CLI commands.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DeleteDbInstanceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteDbInstanceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteDbInstanceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteDbInstanceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB instance.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline DeleteDbInstanceResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline DeleteDbInstanceResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }
    inline DeleteDbInstanceResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline DeleteDbInstanceResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB instance type that InfluxDB runs on.</p>
     */
    inline const DbInstanceType& GetDbInstanceType() const{ return m_dbInstanceType; }
    inline void SetDbInstanceType(const DbInstanceType& value) { m_dbInstanceType = value; }
    inline void SetDbInstanceType(DbInstanceType&& value) { m_dbInstanceType = std::move(value); }
    inline DeleteDbInstanceResult& WithDbInstanceType(const DbInstanceType& value) { SetDbInstanceType(value); return *this;}
    inline DeleteDbInstanceResult& WithDbInstanceType(DbInstanceType&& value) { SetDbInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB DB storage type that InfluxDB stores data on.</p>
     */
    inline const DbStorageType& GetDbStorageType() const{ return m_dbStorageType; }
    inline void SetDbStorageType(const DbStorageType& value) { m_dbStorageType = value; }
    inline void SetDbStorageType(DbStorageType&& value) { m_dbStorageType = std::move(value); }
    inline DeleteDbInstanceResult& WithDbStorageType(const DbStorageType& value) { SetDbStorageType(value); return *this;}
    inline DeleteDbInstanceResult& WithDbStorageType(DbStorageType&& value) { SetDbStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage allocated for your DB storage type (in gibibytes).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorage = value; }
    inline DeleteDbInstanceResult& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the Timestream for InfluxDB is deployed as Single-AZ or
     * with a MultiAZ Standby for High availability.</p>
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentType = value; }
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentType = std::move(value); }
    inline DeleteDbInstanceResult& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}
    inline DeleteDbInstanceResult& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC subnet IDs associated with the DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const{ return m_vpcSubnetIds; }
    inline void SetVpcSubnetIds(const Aws::Vector<Aws::String>& value) { m_vpcSubnetIds = value; }
    inline void SetVpcSubnetIds(Aws::Vector<Aws::String>&& value) { m_vpcSubnetIds = std::move(value); }
    inline DeleteDbInstanceResult& WithVpcSubnetIds(const Aws::Vector<Aws::String>& value) { SetVpcSubnetIds(value); return *this;}
    inline DeleteDbInstanceResult& WithVpcSubnetIds(Aws::Vector<Aws::String>&& value) { SetVpcSubnetIds(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& AddVpcSubnetIds(const Aws::String& value) { m_vpcSubnetIds.push_back(value); return *this; }
    inline DeleteDbInstanceResult& AddVpcSubnetIds(Aws::String&& value) { m_vpcSubnetIds.push_back(std::move(value)); return *this; }
    inline DeleteDbInstanceResult& AddVpcSubnetIds(const char* value) { m_vpcSubnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if the DB instance has a public IP to facilitate access.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessible = value; }
    inline DeleteDbInstanceResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC security group IDs associated with the DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIds = std::move(value); }
    inline DeleteDbInstanceResult& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline DeleteDbInstanceResult& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline DeleteDbInstanceResult& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline DeleteDbInstanceResult& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The id of the DB parameter group assigned to your DB instance.</p>
     */
    inline const Aws::String& GetDbParameterGroupIdentifier() const{ return m_dbParameterGroupIdentifier; }
    inline void SetDbParameterGroupIdentifier(const Aws::String& value) { m_dbParameterGroupIdentifier = value; }
    inline void SetDbParameterGroupIdentifier(Aws::String&& value) { m_dbParameterGroupIdentifier = std::move(value); }
    inline void SetDbParameterGroupIdentifier(const char* value) { m_dbParameterGroupIdentifier.assign(value); }
    inline DeleteDbInstanceResult& WithDbParameterGroupIdentifier(const Aws::String& value) { SetDbParameterGroupIdentifier(value); return *this;}
    inline DeleteDbInstanceResult& WithDbParameterGroupIdentifier(Aws::String&& value) { SetDbParameterGroupIdentifier(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& WithDbParameterGroupIdentifier(const char* value) { SetDbParameterGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the DB instance resides.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZone.assign(value); }
    inline DeleteDbInstanceResult& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline DeleteDbInstanceResult& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the standby instance is located when deploying
     * with a MultiAZ standby instance.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const{ return m_secondaryAvailabilityZone; }
    inline void SetSecondaryAvailabilityZone(const Aws::String& value) { m_secondaryAvailabilityZone = value; }
    inline void SetSecondaryAvailabilityZone(Aws::String&& value) { m_secondaryAvailabilityZone = std::move(value); }
    inline void SetSecondaryAvailabilityZone(const char* value) { m_secondaryAvailabilityZone.assign(value); }
    inline DeleteDbInstanceResult& WithSecondaryAvailabilityZone(const Aws::String& value) { SetSecondaryAvailabilityZone(value); return *this;}
    inline DeleteDbInstanceResult& WithSecondaryAvailabilityZone(Aws::String&& value) { SetSecondaryAvailabilityZone(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& WithSecondaryAvailabilityZone(const char* value) { SetSecondaryAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for sending InfluxDB engine logs to send to specified S3
     * bucket.</p>
     */
    inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const{ return m_logDeliveryConfiguration; }
    inline void SetLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { m_logDeliveryConfiguration = value; }
    inline void SetLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { m_logDeliveryConfiguration = std::move(value); }
    inline DeleteDbInstanceResult& WithLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { SetLogDeliveryConfiguration(value); return *this;}
    inline DeleteDbInstanceResult& WithLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { SetLogDeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret containing
     * the initial InfluxDB authorization parameters. The secret value is a JSON
     * formatted key-value pair holding InfluxDB authorization values: organization,
     * bucket, username, and password.</p>
     */
    inline const Aws::String& GetInfluxAuthParametersSecretArn() const{ return m_influxAuthParametersSecretArn; }
    inline void SetInfluxAuthParametersSecretArn(const Aws::String& value) { m_influxAuthParametersSecretArn = value; }
    inline void SetInfluxAuthParametersSecretArn(Aws::String&& value) { m_influxAuthParametersSecretArn = std::move(value); }
    inline void SetInfluxAuthParametersSecretArn(const char* value) { m_influxAuthParametersSecretArn.assign(value); }
    inline DeleteDbInstanceResult& WithInfluxAuthParametersSecretArn(const Aws::String& value) { SetInfluxAuthParametersSecretArn(value); return *this;}
    inline DeleteDbInstanceResult& WithInfluxAuthParametersSecretArn(Aws::String&& value) { SetInfluxAuthParametersSecretArn(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& WithInfluxAuthParametersSecretArn(const char* value) { SetInfluxAuthParametersSecretArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteDbInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteDbInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteDbInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    Status m_status;

    Aws::String m_endpoint;

    DbInstanceType m_dbInstanceType;

    DbStorageType m_dbStorageType;

    int m_allocatedStorage;

    DeploymentType m_deploymentType;

    Aws::Vector<Aws::String> m_vpcSubnetIds;

    bool m_publiclyAccessible;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;

    Aws::String m_dbParameterGroupIdentifier;

    Aws::String m_availabilityZone;

    Aws::String m_secondaryAvailabilityZone;

    LogDeliveryConfiguration m_logDeliveryConfiguration;

    Aws::String m_influxAuthParametersSecretArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
