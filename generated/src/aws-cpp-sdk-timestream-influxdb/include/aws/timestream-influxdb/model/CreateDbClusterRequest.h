/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <aws/timestream-influxdb/model/NetworkType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/model/ClusterDeploymentType.h>
#include <aws/timestream-influxdb/model/FailoverMode.h>
#include <aws/timestream-influxdb/model/LogDeliveryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   */
  class CreateDbClusterRequest : public TimestreamInfluxDBRequest
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API CreateDbClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDbCluster"; }

    AWS_TIMESTREAMINFLUXDB_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMINFLUXDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name that uniquely identifies the DB cluster when interacting with the
     * Amazon Timestream for InfluxDB API and CLI commands. This name will also be a
     * prefix included in the endpoint. DB cluster names must be unique per customer
     * and per region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDbClusterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDbClusterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDbClusterRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the initial admin user created in InfluxDB. Must start with a
     * letter and can't end with a hyphen or contain two consecutive hyphens. For
     * example, my-user1. This username will allow you to access the InfluxDB UI to
     * perform various administrative tasks and also use the InfluxDB CLI to create an
     * operator token. These attributes will be stored in a secret created in Secrets
     * Manager in your account.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline CreateDbClusterRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline CreateDbClusterRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline CreateDbClusterRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password of the initial admin user created in InfluxDB. This password
     * will allow you to access the InfluxDB UI to perform various administrative tasks
     * and also use the InfluxDB CLI to create an operator token. These attributes will
     * be stored in a secret created in Secrets Manager in your account.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline CreateDbClusterRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline CreateDbClusterRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline CreateDbClusterRequest& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the initial organization for the initial admin user in InfluxDB.
     * An InfluxDB organization is a workspace for a group of users.</p>
     */
    inline const Aws::String& GetOrganization() const{ return m_organization; }
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
    inline void SetOrganization(const Aws::String& value) { m_organizationHasBeenSet = true; m_organization = value; }
    inline void SetOrganization(Aws::String&& value) { m_organizationHasBeenSet = true; m_organization = std::move(value); }
    inline void SetOrganization(const char* value) { m_organizationHasBeenSet = true; m_organization.assign(value); }
    inline CreateDbClusterRequest& WithOrganization(const Aws::String& value) { SetOrganization(value); return *this;}
    inline CreateDbClusterRequest& WithOrganization(Aws::String&& value) { SetOrganization(std::move(value)); return *this;}
    inline CreateDbClusterRequest& WithOrganization(const char* value) { SetOrganization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the initial InfluxDB bucket. All InfluxDB data is stored in a
     * bucket. A bucket combines the concept of a database and a retention period (the
     * duration of time that each data point persists). A bucket belongs to an
     * organization.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline CreateDbClusterRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline CreateDbClusterRequest& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline CreateDbClusterRequest& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which InfluxDB accepts connections.</p> <p>Valid Values:
     * 1024-65535</p> <p>Default: 8086</p> <p>Constraints: The value can't be
     * 2375-2376, 7788-7799, 8090, or 51678-51680</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateDbClusterRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the DB parameter group to assign to your DB cluster. DB parameter
     * groups specify how the database is configured. For example, DB parameter groups
     * can specify the limit for query concurrency.</p>
     */
    inline const Aws::String& GetDbParameterGroupIdentifier() const{ return m_dbParameterGroupIdentifier; }
    inline bool DbParameterGroupIdentifierHasBeenSet() const { return m_dbParameterGroupIdentifierHasBeenSet; }
    inline void SetDbParameterGroupIdentifier(const Aws::String& value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier = value; }
    inline void SetDbParameterGroupIdentifier(Aws::String&& value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier = std::move(value); }
    inline void SetDbParameterGroupIdentifier(const char* value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier.assign(value); }
    inline CreateDbClusterRequest& WithDbParameterGroupIdentifier(const Aws::String& value) { SetDbParameterGroupIdentifier(value); return *this;}
    inline CreateDbClusterRequest& WithDbParameterGroupIdentifier(Aws::String&& value) { SetDbParameterGroupIdentifier(std::move(value)); return *this;}
    inline CreateDbClusterRequest& WithDbParameterGroupIdentifier(const char* value) { SetDbParameterGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB DB instance type to run InfluxDB on.</p>
     */
    inline const DbInstanceType& GetDbInstanceType() const{ return m_dbInstanceType; }
    inline bool DbInstanceTypeHasBeenSet() const { return m_dbInstanceTypeHasBeenSet; }
    inline void SetDbInstanceType(const DbInstanceType& value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = value; }
    inline void SetDbInstanceType(DbInstanceType&& value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = std::move(value); }
    inline CreateDbClusterRequest& WithDbInstanceType(const DbInstanceType& value) { SetDbInstanceType(value); return *this;}
    inline CreateDbClusterRequest& WithDbInstanceType(DbInstanceType&& value) { SetDbInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB DB storage type to read and write InfluxDB
     * data.</p> <p>You can choose between three different types of provisioned Influx
     * IOPS Included storage according to your workload requirements:</p> <ul> <li>
     * <p>Influx I/O Included 3000 IOPS</p> </li> <li> <p>Influx I/O Included 12000
     * IOPS</p> </li> <li> <p>Influx I/O Included 16000 IOPS</p> </li> </ul>
     */
    inline const DbStorageType& GetDbStorageType() const{ return m_dbStorageType; }
    inline bool DbStorageTypeHasBeenSet() const { return m_dbStorageTypeHasBeenSet; }
    inline void SetDbStorageType(const DbStorageType& value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = value; }
    inline void SetDbStorageType(DbStorageType&& value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = std::move(value); }
    inline CreateDbClusterRequest& WithDbStorageType(const DbStorageType& value) { SetDbStorageType(value); return *this;}
    inline CreateDbClusterRequest& WithDbStorageType(DbStorageType&& value) { SetDbStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage to allocate for your DB storage type in GiB
     * (gibibytes).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline CreateDbClusterRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the network type of the Timestream for InfluxDB cluster is
     * IPv4, which can communicate over IPv4 protocol only, or DUAL, which can
     * communicate over both IPv4 and IPv6 protocols.</p>
     */
    inline const NetworkType& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const NetworkType& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(NetworkType&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline CreateDbClusterRequest& WithNetworkType(const NetworkType& value) { SetNetworkType(value); return *this;}
    inline CreateDbClusterRequest& WithNetworkType(NetworkType&& value) { SetNetworkType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the Timestream for InfluxDB cluster with a public IP to facilitate
     * access from outside the VPC.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline CreateDbClusterRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC subnet IDs to associate with the DB cluster. Provide at least
     * two VPC subnet IDs in different Availability Zones when deploying with a
     * Multi-AZ standby.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const{ return m_vpcSubnetIds; }
    inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }
    inline void SetVpcSubnetIds(const Aws::Vector<Aws::String>& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = value; }
    inline void SetVpcSubnetIds(Aws::Vector<Aws::String>&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::move(value); }
    inline CreateDbClusterRequest& WithVpcSubnetIds(const Aws::Vector<Aws::String>& value) { SetVpcSubnetIds(value); return *this;}
    inline CreateDbClusterRequest& WithVpcSubnetIds(Aws::Vector<Aws::String>&& value) { SetVpcSubnetIds(std::move(value)); return *this;}
    inline CreateDbClusterRequest& AddVpcSubnetIds(const Aws::String& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }
    inline CreateDbClusterRequest& AddVpcSubnetIds(Aws::String&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(std::move(value)); return *this; }
    inline CreateDbClusterRequest& AddVpcSubnetIds(const char* value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of VPC security group IDs to associate with the Timestream for
     * InfluxDB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline CreateDbClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline CreateDbClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline CreateDbClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline CreateDbClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateDbClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the type of cluster to create.</p>
     */
    inline const ClusterDeploymentType& GetDeploymentType() const{ return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(const ClusterDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline void SetDeploymentType(ClusterDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }
    inline CreateDbClusterRequest& WithDeploymentType(const ClusterDeploymentType& value) { SetDeploymentType(value); return *this;}
    inline CreateDbClusterRequest& WithDeploymentType(ClusterDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the behavior of failure recovery when the primary node of the
     * cluster fails.</p>
     */
    inline const FailoverMode& GetFailoverMode() const{ return m_failoverMode; }
    inline bool FailoverModeHasBeenSet() const { return m_failoverModeHasBeenSet; }
    inline void SetFailoverMode(const FailoverMode& value) { m_failoverModeHasBeenSet = true; m_failoverMode = value; }
    inline void SetFailoverMode(FailoverMode&& value) { m_failoverModeHasBeenSet = true; m_failoverMode = std::move(value); }
    inline CreateDbClusterRequest& WithFailoverMode(const FailoverMode& value) { SetFailoverMode(value); return *this;}
    inline CreateDbClusterRequest& WithFailoverMode(FailoverMode&& value) { SetFailoverMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for sending InfluxDB engine logs to a specified S3 bucket.</p>
     */
    inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const{ return m_logDeliveryConfiguration; }
    inline bool LogDeliveryConfigurationHasBeenSet() const { return m_logDeliveryConfigurationHasBeenSet; }
    inline void SetLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { m_logDeliveryConfigurationHasBeenSet = true; m_logDeliveryConfiguration = value; }
    inline void SetLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { m_logDeliveryConfigurationHasBeenSet = true; m_logDeliveryConfiguration = std::move(value); }
    inline CreateDbClusterRequest& WithLogDeliveryConfiguration(const LogDeliveryConfiguration& value) { SetLogDeliveryConfiguration(value); return *this;}
    inline CreateDbClusterRequest& WithLogDeliveryConfiguration(LogDeliveryConfiguration&& value) { SetLogDeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDbClusterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateDbClusterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDbClusterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateDbClusterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDbClusterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDbClusterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDbClusterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDbClusterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDbClusterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_organization;
    bool m_organizationHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_dbParameterGroupIdentifier;
    bool m_dbParameterGroupIdentifierHasBeenSet = false;

    DbInstanceType m_dbInstanceType;
    bool m_dbInstanceTypeHasBeenSet = false;

    DbStorageType m_dbStorageType;
    bool m_dbStorageTypeHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    NetworkType m_networkType;
    bool m_networkTypeHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    ClusterDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    FailoverMode m_failoverMode;
    bool m_failoverModeHasBeenSet = false;

    LogDeliveryConfiguration m_logDeliveryConfiguration;
    bool m_logDeliveryConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
