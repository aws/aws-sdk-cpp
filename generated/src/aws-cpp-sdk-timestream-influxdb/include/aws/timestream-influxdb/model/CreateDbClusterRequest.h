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
    AWS_TIMESTREAMINFLUXDB_API CreateDbClusterRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDbClusterRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    CreateDbClusterRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password of the initial admin user created in InfluxDB. This password
     * will allow you to access the InfluxDB UI to perform various administrative tasks
     * and also use the InfluxDB CLI to create an operator token. These attributes will
     * be stored in a secret created in Secrets Manager in your account.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    CreateDbClusterRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the initial organization for the initial admin user in InfluxDB.
     * An InfluxDB organization is a workspace for a group of users.</p>
     */
    inline const Aws::String& GetOrganization() const { return m_organization; }
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
    template<typename OrganizationT = Aws::String>
    void SetOrganization(OrganizationT&& value) { m_organizationHasBeenSet = true; m_organization = std::forward<OrganizationT>(value); }
    template<typename OrganizationT = Aws::String>
    CreateDbClusterRequest& WithOrganization(OrganizationT&& value) { SetOrganization(std::forward<OrganizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the initial InfluxDB bucket. All InfluxDB data is stored in a
     * bucket. A bucket combines the concept of a database and a retention period (the
     * duration of time that each data point persists). A bucket belongs to an
     * organization.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    CreateDbClusterRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which InfluxDB accepts connections.</p> <p>Valid Values:
     * 1024-65535</p> <p>Default: 8086</p> <p>Constraints: The value can't be
     * 2375-2376, 7788-7799, 8090, or 51678-51680</p>
     */
    inline int GetPort() const { return m_port; }
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
    inline const Aws::String& GetDbParameterGroupIdentifier() const { return m_dbParameterGroupIdentifier; }
    inline bool DbParameterGroupIdentifierHasBeenSet() const { return m_dbParameterGroupIdentifierHasBeenSet; }
    template<typename DbParameterGroupIdentifierT = Aws::String>
    void SetDbParameterGroupIdentifier(DbParameterGroupIdentifierT&& value) { m_dbParameterGroupIdentifierHasBeenSet = true; m_dbParameterGroupIdentifier = std::forward<DbParameterGroupIdentifierT>(value); }
    template<typename DbParameterGroupIdentifierT = Aws::String>
    CreateDbClusterRequest& WithDbParameterGroupIdentifier(DbParameterGroupIdentifierT&& value) { SetDbParameterGroupIdentifier(std::forward<DbParameterGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB DB instance type to run InfluxDB on.</p>
     */
    inline DbInstanceType GetDbInstanceType() const { return m_dbInstanceType; }
    inline bool DbInstanceTypeHasBeenSet() const { return m_dbInstanceTypeHasBeenSet; }
    inline void SetDbInstanceType(DbInstanceType value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = value; }
    inline CreateDbClusterRequest& WithDbInstanceType(DbInstanceType value) { SetDbInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB DB storage type to read and write InfluxDB
     * data.</p> <p>You can choose between three different types of provisioned Influx
     * IOPS Included storage according to your workload requirements:</p> <ul> <li>
     * <p>Influx I/O Included 3000 IOPS</p> </li> <li> <p>Influx I/O Included 12000
     * IOPS</p> </li> <li> <p>Influx I/O Included 16000 IOPS</p> </li> </ul>
     */
    inline DbStorageType GetDbStorageType() const { return m_dbStorageType; }
    inline bool DbStorageTypeHasBeenSet() const { return m_dbStorageTypeHasBeenSet; }
    inline void SetDbStorageType(DbStorageType value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = value; }
    inline CreateDbClusterRequest& WithDbStorageType(DbStorageType value) { SetDbStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage to allocate for your DB storage type in GiB
     * (gibibytes).</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
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
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline CreateDbClusterRequest& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the Timestream for InfluxDB cluster with a public IP to facilitate
     * access from outside the VPC.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
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
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const { return m_vpcSubnetIds; }
    inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }
    template<typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
    void SetVpcSubnetIds(VpcSubnetIdsT&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::forward<VpcSubnetIdsT>(value); }
    template<typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
    CreateDbClusterRequest& WithVpcSubnetIds(VpcSubnetIdsT&& value) { SetVpcSubnetIds(std::forward<VpcSubnetIdsT>(value)); return *this;}
    template<typename VpcSubnetIdsT = Aws::String>
    CreateDbClusterRequest& AddVpcSubnetIds(VpcSubnetIdsT&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.emplace_back(std::forward<VpcSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of VPC security group IDs to associate with the Timestream for
     * InfluxDB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateDbClusterRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    CreateDbClusterRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the type of cluster to create.</p>
     */
    inline ClusterDeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(ClusterDeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline CreateDbClusterRequest& WithDeploymentType(ClusterDeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the behavior of failure recovery when the primary node of the
     * cluster fails.</p>
     */
    inline FailoverMode GetFailoverMode() const { return m_failoverMode; }
    inline bool FailoverModeHasBeenSet() const { return m_failoverModeHasBeenSet; }
    inline void SetFailoverMode(FailoverMode value) { m_failoverModeHasBeenSet = true; m_failoverMode = value; }
    inline CreateDbClusterRequest& WithFailoverMode(FailoverMode value) { SetFailoverMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for sending InfluxDB engine logs to a specified S3 bucket.</p>
     */
    inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const { return m_logDeliveryConfiguration; }
    inline bool LogDeliveryConfigurationHasBeenSet() const { return m_logDeliveryConfigurationHasBeenSet; }
    template<typename LogDeliveryConfigurationT = LogDeliveryConfiguration>
    void SetLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) { m_logDeliveryConfigurationHasBeenSet = true; m_logDeliveryConfiguration = std::forward<LogDeliveryConfigurationT>(value); }
    template<typename LogDeliveryConfigurationT = LogDeliveryConfiguration>
    CreateDbClusterRequest& WithLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) { SetLogDeliveryConfiguration(std::forward<LogDeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to associate with the DB instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDbClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDbClusterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_dbParameterGroupIdentifier;
    bool m_dbParameterGroupIdentifierHasBeenSet = false;

    DbInstanceType m_dbInstanceType{DbInstanceType::NOT_SET};
    bool m_dbInstanceTypeHasBeenSet = false;

    DbStorageType m_dbStorageType{DbStorageType::NOT_SET};
    bool m_dbStorageTypeHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    ClusterDeploymentType m_deploymentType{ClusterDeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    FailoverMode m_failoverMode{FailoverMode::NOT_SET};
    bool m_failoverModeHasBeenSet = false;

    LogDeliveryConfiguration m_logDeliveryConfiguration;
    bool m_logDeliveryConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
