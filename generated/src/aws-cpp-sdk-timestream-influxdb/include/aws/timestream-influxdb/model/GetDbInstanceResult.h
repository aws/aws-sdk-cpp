/**
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
  class GetDbInstanceResult
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API GetDbInstanceResult();
    AWS_TIMESTREAMINFLUXDB_API GetDbInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API GetDbInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline GetDbInstanceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline GetDbInstanceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline GetDbInstanceResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The customer-supplied name that uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and CLI commands.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The customer-supplied name that uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and CLI commands.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The customer-supplied name that uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and CLI commands.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The customer-supplied name that uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and CLI commands.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The customer-supplied name that uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and CLI commands.</p>
     */
    inline GetDbInstanceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The customer-supplied name that uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and CLI commands.</p>
     */
    inline GetDbInstanceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The customer-supplied name that uniquely identifies the DB instance when
     * interacting with the Amazon Timestream for InfluxDB API and CLI commands.</p>
     */
    inline GetDbInstanceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline GetDbInstanceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline GetDbInstanceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline GetDbInstanceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the DB instance.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DB instance.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The status of the DB instance.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the DB instance.</p>
     */
    inline GetDbInstanceResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DB instance.</p>
     */
    inline GetDbInstanceResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline GetDbInstanceResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline GetDbInstanceResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline GetDbInstanceResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The Timestream for InfluxDB instance type that InfluxDB runs on.</p>
     */
    inline const DbInstanceType& GetDbInstanceType() const{ return m_dbInstanceType; }

    /**
     * <p>The Timestream for InfluxDB instance type that InfluxDB runs on.</p>
     */
    inline void SetDbInstanceType(const DbInstanceType& value) { m_dbInstanceType = value; }

    /**
     * <p>The Timestream for InfluxDB instance type that InfluxDB runs on.</p>
     */
    inline void SetDbInstanceType(DbInstanceType&& value) { m_dbInstanceType = std::move(value); }

    /**
     * <p>The Timestream for InfluxDB instance type that InfluxDB runs on.</p>
     */
    inline GetDbInstanceResult& WithDbInstanceType(const DbInstanceType& value) { SetDbInstanceType(value); return *this;}

    /**
     * <p>The Timestream for InfluxDB instance type that InfluxDB runs on.</p>
     */
    inline GetDbInstanceResult& WithDbInstanceType(DbInstanceType&& value) { SetDbInstanceType(std::move(value)); return *this;}


    /**
     * <p>The Timestream for InfluxDB DB storage type that InfluxDB stores data on.</p>
     */
    inline const DbStorageType& GetDbStorageType() const{ return m_dbStorageType; }

    /**
     * <p>The Timestream for InfluxDB DB storage type that InfluxDB stores data on.</p>
     */
    inline void SetDbStorageType(const DbStorageType& value) { m_dbStorageType = value; }

    /**
     * <p>The Timestream for InfluxDB DB storage type that InfluxDB stores data on.</p>
     */
    inline void SetDbStorageType(DbStorageType&& value) { m_dbStorageType = std::move(value); }

    /**
     * <p>The Timestream for InfluxDB DB storage type that InfluxDB stores data on.</p>
     */
    inline GetDbInstanceResult& WithDbStorageType(const DbStorageType& value) { SetDbStorageType(value); return *this;}

    /**
     * <p>The Timestream for InfluxDB DB storage type that InfluxDB stores data on.</p>
     */
    inline GetDbInstanceResult& WithDbStorageType(DbStorageType&& value) { SetDbStorageType(std::move(value)); return *this;}


    /**
     * <p>The amount of storage allocated for your DB storage type (in gibibytes).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage allocated for your DB storage type (in gibibytes).</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorage = value; }

    /**
     * <p>The amount of storage allocated for your DB storage type (in gibibytes).</p>
     */
    inline GetDbInstanceResult& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Specifies whether the Timestream for InfluxDB is deployed as Single-AZ or
     * with a MultiAZ Standby for High availability.</p>
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Specifies whether the Timestream for InfluxDB is deployed as Single-AZ or
     * with a MultiAZ Standby for High availability.</p>
     */
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentType = value; }

    /**
     * <p>Specifies whether the Timestream for InfluxDB is deployed as Single-AZ or
     * with a MultiAZ Standby for High availability.</p>
     */
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentType = std::move(value); }

    /**
     * <p>Specifies whether the Timestream for InfluxDB is deployed as Single-AZ or
     * with a MultiAZ Standby for High availability.</p>
     */
    inline GetDbInstanceResult& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Specifies whether the Timestream for InfluxDB is deployed as Single-AZ or
     * with a MultiAZ Standby for High availability.</p>
     */
    inline GetDbInstanceResult& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>A list of VPC subnet IDs associated with the DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const{ return m_vpcSubnetIds; }

    /**
     * <p>A list of VPC subnet IDs associated with the DB instance.</p>
     */
    inline void SetVpcSubnetIds(const Aws::Vector<Aws::String>& value) { m_vpcSubnetIds = value; }

    /**
     * <p>A list of VPC subnet IDs associated with the DB instance.</p>
     */
    inline void SetVpcSubnetIds(Aws::Vector<Aws::String>&& value) { m_vpcSubnetIds = std::move(value); }

    /**
     * <p>A list of VPC subnet IDs associated with the DB instance.</p>
     */
    inline GetDbInstanceResult& WithVpcSubnetIds(const Aws::Vector<Aws::String>& value) { SetVpcSubnetIds(value); return *this;}

    /**
     * <p>A list of VPC subnet IDs associated with the DB instance.</p>
     */
    inline GetDbInstanceResult& WithVpcSubnetIds(Aws::Vector<Aws::String>&& value) { SetVpcSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC subnet IDs associated with the DB instance.</p>
     */
    inline GetDbInstanceResult& AddVpcSubnetIds(const Aws::String& value) { m_vpcSubnetIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC subnet IDs associated with the DB instance.</p>
     */
    inline GetDbInstanceResult& AddVpcSubnetIds(Aws::String&& value) { m_vpcSubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC subnet IDs associated with the DB instance.</p>
     */
    inline GetDbInstanceResult& AddVpcSubnetIds(const char* value) { m_vpcSubnetIds.push_back(value); return *this; }


    /**
     * <p>Indicates if the DB instance has a public IP to facilitate access.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Indicates if the DB instance has a public IP to facilitate access.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessible = value; }

    /**
     * <p>Indicates if the DB instance has a public IP to facilitate access.</p>
     */
    inline GetDbInstanceResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>A list of VPC security group IDs associated with the DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of VPC security group IDs associated with the DB instance.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of VPC security group IDs associated with the DB instance.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of VPC security group IDs associated with the DB instance.</p>
     */
    inline GetDbInstanceResult& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of VPC security group IDs associated with the DB instance.</p>
     */
    inline GetDbInstanceResult& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC security group IDs associated with the DB instance.</p>
     */
    inline GetDbInstanceResult& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC security group IDs associated with the DB instance.</p>
     */
    inline GetDbInstanceResult& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC security group IDs associated with the DB instance.</p>
     */
    inline GetDbInstanceResult& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The id of the DB parameter group assigned to your DB instance.</p>
     */
    inline const Aws::String& GetDbParameterGroupIdentifier() const{ return m_dbParameterGroupIdentifier; }

    /**
     * <p>The id of the DB parameter group assigned to your DB instance.</p>
     */
    inline void SetDbParameterGroupIdentifier(const Aws::String& value) { m_dbParameterGroupIdentifier = value; }

    /**
     * <p>The id of the DB parameter group assigned to your DB instance.</p>
     */
    inline void SetDbParameterGroupIdentifier(Aws::String&& value) { m_dbParameterGroupIdentifier = std::move(value); }

    /**
     * <p>The id of the DB parameter group assigned to your DB instance.</p>
     */
    inline void SetDbParameterGroupIdentifier(const char* value) { m_dbParameterGroupIdentifier.assign(value); }

    /**
     * <p>The id of the DB parameter group assigned to your DB instance.</p>
     */
    inline GetDbInstanceResult& WithDbParameterGroupIdentifier(const Aws::String& value) { SetDbParameterGroupIdentifier(value); return *this;}

    /**
     * <p>The id of the DB parameter group assigned to your DB instance.</p>
     */
    inline GetDbInstanceResult& WithDbParameterGroupIdentifier(Aws::String&& value) { SetDbParameterGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The id of the DB parameter group assigned to your DB instance.</p>
     */
    inline GetDbInstanceResult& WithDbParameterGroupIdentifier(const char* value) { SetDbParameterGroupIdentifier(value); return *this;}


    /**
     * <p>The Availability Zone in which the DB instance resides.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which the DB instance resides.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the DB instance resides.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the DB instance resides.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the DB instance resides.</p>
     */
    inline GetDbInstanceResult& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the DB instance resides.</p>
     */
    inline GetDbInstanceResult& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the DB instance resides.</p>
     */
    inline GetDbInstanceResult& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The Availability Zone in which the standby instance is located when deploying
     * with a MultiAZ standby instance.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const{ return m_secondaryAvailabilityZone; }

    /**
     * <p>The Availability Zone in which the standby instance is located when deploying
     * with a MultiAZ standby instance.</p>
     */
    inline void SetSecondaryAvailabilityZone(const Aws::String& value) { m_secondaryAvailabilityZone = value; }

    /**
     * <p>The Availability Zone in which the standby instance is located when deploying
     * with a MultiAZ standby instance.</p>
     */
    inline void SetSecondaryAvailabilityZone(Aws::String&& value) { m_secondaryAvailabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the standby instance is located when deploying
     * with a MultiAZ standby instance.</p>
     */
    inline void SetSecondaryAvailabilityZone(const char* value) { m_secondaryAvailabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the standby instance is located when deploying
     * with a MultiAZ standby instance.</p>
     */
    inline GetDbInstanceResult& WithSecondaryAvailabilityZone(const Aws::String& value) { SetSecondaryAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the standby instance is located when deploying
     * with a MultiAZ standby instance.</p>
     */
    inline GetDbInstanceResult& WithSecondaryAvailabilityZone(Aws::String&& value) { SetSecondaryAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the standby instance is located when deploying
     * with a MultiAZ standby instance.</p>
     */
    inline GetDbInstanceResult& WithSecondaryAvailabilityZone(const char* value) { SetSecondaryAvailabilityZone(value); return *this;}


    /**
     * <p>Configuration for sending InfluxDB engine logs to send to specified S3
     * bucket.</p>
     */
    inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const{ return m_logDeliveryConfiguration; }

    /**
     * <p>Configuration for sending InfluxDB engine logs to send to specified S3
     * bucket.</p>
     */
    inline void SetLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { m_logDeliveryConfiguration = value; }

    /**
     * <p>Configuration for sending InfluxDB engine logs to send to specified S3
     * bucket.</p>
     */
    inline void SetLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { m_logDeliveryConfiguration = std::move(value); }

    /**
     * <p>Configuration for sending InfluxDB engine logs to send to specified S3
     * bucket.</p>
     */
    inline GetDbInstanceResult& WithLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { SetLogDeliveryConfiguration(value); return *this;}

    /**
     * <p>Configuration for sending InfluxDB engine logs to send to specified S3
     * bucket.</p>
     */
    inline GetDbInstanceResult& WithLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { SetLogDeliveryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret containing
     * the initial InfluxDB authorization parameters. The secret value is a JSON
     * formatted key-value pair holding InfluxDB authorization values: organization,
     * bucket, username, and password.</p>
     */
    inline const Aws::String& GetInfluxAuthParametersSecretArn() const{ return m_influxAuthParametersSecretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret containing
     * the initial InfluxDB authorization parameters. The secret value is a JSON
     * formatted key-value pair holding InfluxDB authorization values: organization,
     * bucket, username, and password.</p>
     */
    inline void SetInfluxAuthParametersSecretArn(const Aws::String& value) { m_influxAuthParametersSecretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret containing
     * the initial InfluxDB authorization parameters. The secret value is a JSON
     * formatted key-value pair holding InfluxDB authorization values: organization,
     * bucket, username, and password.</p>
     */
    inline void SetInfluxAuthParametersSecretArn(Aws::String&& value) { m_influxAuthParametersSecretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret containing
     * the initial InfluxDB authorization parameters. The secret value is a JSON
     * formatted key-value pair holding InfluxDB authorization values: organization,
     * bucket, username, and password.</p>
     */
    inline void SetInfluxAuthParametersSecretArn(const char* value) { m_influxAuthParametersSecretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret containing
     * the initial InfluxDB authorization parameters. The secret value is a JSON
     * formatted key-value pair holding InfluxDB authorization values: organization,
     * bucket, username, and password.</p>
     */
    inline GetDbInstanceResult& WithInfluxAuthParametersSecretArn(const Aws::String& value) { SetInfluxAuthParametersSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret containing
     * the initial InfluxDB authorization parameters. The secret value is a JSON
     * formatted key-value pair holding InfluxDB authorization values: organization,
     * bucket, username, and password.</p>
     */
    inline GetDbInstanceResult& WithInfluxAuthParametersSecretArn(Aws::String&& value) { SetInfluxAuthParametersSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret containing
     * the initial InfluxDB authorization parameters. The secret value is a JSON
     * formatted key-value pair holding InfluxDB authorization values: organization,
     * bucket, username, and password.</p>
     */
    inline GetDbInstanceResult& WithInfluxAuthParametersSecretArn(const char* value) { SetInfluxAuthParametersSecretArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDbInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDbInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDbInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
