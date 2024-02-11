/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsDmsReplicationInstanceReplicationSubnetGroupDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsDmsReplicationInstanceVpcSecurityGroupsDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about an Database Migration Service (DMS) replication
   * instance. DMS uses a replication instance to connect to your source data store,
   * read the source data, and format the data for consumption by the target data
   * store. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDmsReplicationInstanceDetails">AWS
   * API Reference</a></p>
   */
  class AwsDmsReplicationInstanceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceDetails();
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The amount of storage (in gigabytes) that is allocated for the replication
     * instance. </p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p> The amount of storage (in gigabytes) that is allocated for the replication
     * instance. </p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p> The amount of storage (in gigabytes) that is allocated for the replication
     * instance. </p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p> The amount of storage (in gigabytes) that is allocated for the replication
     * instance. </p>
     */
    inline AwsDmsReplicationInstanceDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p> Indicates whether minor engine upgrades are applied automatically to the
     * replication instance during the maintenance window. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p> Indicates whether minor engine upgrades are applied automatically to the
     * replication instance during the maintenance window. </p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p> Indicates whether minor engine upgrades are applied automatically to the
     * replication instance during the maintenance window. </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p> Indicates whether minor engine upgrades are applied automatically to the
     * replication instance during the maintenance window. </p>
     */
    inline AwsDmsReplicationInstanceDetails& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p> The Availability Zone that the replication instance is created in. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, such as <code>us-east-1d</code>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p> The Availability Zone that the replication instance is created in. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, such as <code>us-east-1d</code>.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p> The Availability Zone that the replication instance is created in. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, such as <code>us-east-1d</code>.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> The Availability Zone that the replication instance is created in. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, such as <code>us-east-1d</code>.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p> The Availability Zone that the replication instance is created in. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, such as <code>us-east-1d</code>.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p> The Availability Zone that the replication instance is created in. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, such as <code>us-east-1d</code>.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The Availability Zone that the replication instance is created in. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, such as <code>us-east-1d</code>.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p> The Availability Zone that the replication instance is created in. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, such as <code>us-east-1d</code>.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p> The engine version number of the replication instance. If an engine version
     * number is not specified when a replication instance is created, the default is
     * the latest engine version available. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p> The engine version number of the replication instance. If an engine version
     * number is not specified when a replication instance is created, the default is
     * the latest engine version available. </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p> The engine version number of the replication instance. If an engine version
     * number is not specified when a replication instance is created, the default is
     * the latest engine version available. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> The engine version number of the replication instance. If an engine version
     * number is not specified when a replication instance is created, the default is
     * the latest engine version available. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p> The engine version number of the replication instance. If an engine version
     * number is not specified when a replication instance is created, the default is
     * the latest engine version available. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p> The engine version number of the replication instance. If an engine version
     * number is not specified when a replication instance is created, the default is
     * the latest engine version available. </p>
     */
    inline AwsDmsReplicationInstanceDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> The engine version number of the replication instance. If an engine version
     * number is not specified when a replication instance is created, the default is
     * the latest engine version available. </p>
     */
    inline AwsDmsReplicationInstanceDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p> The engine version number of the replication instance. If an engine version
     * number is not specified when a replication instance is created, the default is
     * the latest engine version available. </p>
     */
    inline AwsDmsReplicationInstanceDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p> An KMS key identifier that is used to encrypt the data on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * DMS uses your default encryption key. KMS creates the default encryption key for
     * your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> An KMS key identifier that is used to encrypt the data on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * DMS uses your default encryption key. KMS creates the default encryption key for
     * your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p> An KMS key identifier that is used to encrypt the data on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * DMS uses your default encryption key. KMS creates the default encryption key for
     * your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> An KMS key identifier that is used to encrypt the data on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * DMS uses your default encryption key. KMS creates the default encryption key for
     * your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p> An KMS key identifier that is used to encrypt the data on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * DMS uses your default encryption key. KMS creates the default encryption key for
     * your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> An KMS key identifier that is used to encrypt the data on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * DMS uses your default encryption key. KMS creates the default encryption key for
     * your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> An KMS key identifier that is used to encrypt the data on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * DMS uses your default encryption key. KMS creates the default encryption key for
     * your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> An KMS key identifier that is used to encrypt the data on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * DMS uses your default encryption key. KMS creates the default encryption key for
     * your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p> Specifies whether the replication instance is deployed across multiple
     * Availability Zones (AZs). You can't set the <code>AvailabilityZone</code>
     * parameter if the <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p> Specifies whether the replication instance is deployed across multiple
     * Availability Zones (AZs). You can't set the <code>AvailabilityZone</code>
     * parameter if the <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p> Specifies whether the replication instance is deployed across multiple
     * Availability Zones (AZs). You can't set the <code>AvailabilityZone</code>
     * parameter if the <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p> Specifies whether the replication instance is deployed across multiple
     * Availability Zones (AZs). You can't set the <code>AvailabilityZone</code>
     * parameter if the <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p> The maintenance window times for the replication instance. Upgrades to the
     * replication instance are performed during this time.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p> The maintenance window times for the replication instance. Upgrades to the
     * replication instance are performed during this time.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p> The maintenance window times for the replication instance. Upgrades to the
     * replication instance are performed during this time.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p> The maintenance window times for the replication instance. Upgrades to the
     * replication instance are performed during this time.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p> The maintenance window times for the replication instance. Upgrades to the
     * replication instance are performed during this time.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p> The maintenance window times for the replication instance. Upgrades to the
     * replication instance are performed during this time.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> The maintenance window times for the replication instance. Upgrades to the
     * replication instance are performed during this time.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p> The maintenance window times for the replication instance. Upgrades to the
     * replication instance are performed during this time.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p> Specifies the accessibility options for the replication instance. A value of
     * <code>true</code> represents an instance with a public IP address. A value of
     * <code>false</code> represents an instance with a private IP address. The default
     * value is <code>true</code>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p> Specifies the accessibility options for the replication instance. A value of
     * <code>true</code> represents an instance with a public IP address. A value of
     * <code>false</code> represents an instance with a private IP address. The default
     * value is <code>true</code>.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p> Specifies the accessibility options for the replication instance. A value of
     * <code>true</code> represents an instance with a public IP address. A value of
     * <code>false</code> represents an instance with a private IP address. The default
     * value is <code>true</code>.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p> Specifies the accessibility options for the replication instance. A value of
     * <code>true</code> represents an instance with a public IP address. A value of
     * <code>false</code> represents an instance with a private IP address. The default
     * value is <code>true</code>.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p> The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const{ return m_replicationInstanceClass; }

    /**
     * <p> The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. </p>
     */
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }

    /**
     * <p> The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. </p>
     */
    inline void SetReplicationInstanceClass(const Aws::String& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = value; }

    /**
     * <p> The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. </p>
     */
    inline void SetReplicationInstanceClass(Aws::String&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::move(value); }

    /**
     * <p> The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. </p>
     */
    inline void SetReplicationInstanceClass(const char* value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass.assign(value); }

    /**
     * <p> The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. </p>
     */
    inline AwsDmsReplicationInstanceDetails& WithReplicationInstanceClass(const Aws::String& value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p> The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. </p>
     */
    inline AwsDmsReplicationInstanceDetails& WithReplicationInstanceClass(Aws::String&& value) { SetReplicationInstanceClass(std::move(value)); return *this;}

    /**
     * <p> The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. </p>
     */
    inline AwsDmsReplicationInstanceDetails& WithReplicationInstanceClass(const char* value) { SetReplicationInstanceClass(value); return *this;}


    /**
     * <p> The replication instance identifier.</p>
     */
    inline const Aws::String& GetReplicationInstanceIdentifier() const{ return m_replicationInstanceIdentifier; }

    /**
     * <p> The replication instance identifier.</p>
     */
    inline bool ReplicationInstanceIdentifierHasBeenSet() const { return m_replicationInstanceIdentifierHasBeenSet; }

    /**
     * <p> The replication instance identifier.</p>
     */
    inline void SetReplicationInstanceIdentifier(const Aws::String& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = value; }

    /**
     * <p> The replication instance identifier.</p>
     */
    inline void SetReplicationInstanceIdentifier(Aws::String&& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = std::move(value); }

    /**
     * <p> The replication instance identifier.</p>
     */
    inline void SetReplicationInstanceIdentifier(const char* value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier.assign(value); }

    /**
     * <p> The replication instance identifier.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithReplicationInstanceIdentifier(const Aws::String& value) { SetReplicationInstanceIdentifier(value); return *this;}

    /**
     * <p> The replication instance identifier.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithReplicationInstanceIdentifier(Aws::String&& value) { SetReplicationInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p> The replication instance identifier.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithReplicationInstanceIdentifier(const char* value) { SetReplicationInstanceIdentifier(value); return *this;}


    /**
     * <p> The subnet group for the replication instance.</p>
     */
    inline const AwsDmsReplicationInstanceReplicationSubnetGroupDetails& GetReplicationSubnetGroup() const{ return m_replicationSubnetGroup; }

    /**
     * <p> The subnet group for the replication instance.</p>
     */
    inline bool ReplicationSubnetGroupHasBeenSet() const { return m_replicationSubnetGroupHasBeenSet; }

    /**
     * <p> The subnet group for the replication instance.</p>
     */
    inline void SetReplicationSubnetGroup(const AwsDmsReplicationInstanceReplicationSubnetGroupDetails& value) { m_replicationSubnetGroupHasBeenSet = true; m_replicationSubnetGroup = value; }

    /**
     * <p> The subnet group for the replication instance.</p>
     */
    inline void SetReplicationSubnetGroup(AwsDmsReplicationInstanceReplicationSubnetGroupDetails&& value) { m_replicationSubnetGroupHasBeenSet = true; m_replicationSubnetGroup = std::move(value); }

    /**
     * <p> The subnet group for the replication instance.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithReplicationSubnetGroup(const AwsDmsReplicationInstanceReplicationSubnetGroupDetails& value) { SetReplicationSubnetGroup(value); return *this;}

    /**
     * <p> The subnet group for the replication instance.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithReplicationSubnetGroup(AwsDmsReplicationInstanceReplicationSubnetGroupDetails&& value) { SetReplicationSubnetGroup(std::move(value)); return *this;}


    /**
     * <p> The virtual private cloud (VPC) security group for the replication
     * instance.</p>
     */
    inline const Aws::Vector<AwsDmsReplicationInstanceVpcSecurityGroupsDetails>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p> The virtual private cloud (VPC) security group for the replication
     * instance.</p>
     */
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }

    /**
     * <p> The virtual private cloud (VPC) security group for the replication
     * instance.</p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<AwsDmsReplicationInstanceVpcSecurityGroupsDetails>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p> The virtual private cloud (VPC) security group for the replication
     * instance.</p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<AwsDmsReplicationInstanceVpcSecurityGroupsDetails>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }

    /**
     * <p> The virtual private cloud (VPC) security group for the replication
     * instance.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithVpcSecurityGroups(const Aws::Vector<AwsDmsReplicationInstanceVpcSecurityGroupsDetails>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p> The virtual private cloud (VPC) security group for the replication
     * instance.</p>
     */
    inline AwsDmsReplicationInstanceDetails& WithVpcSecurityGroups(Aws::Vector<AwsDmsReplicationInstanceVpcSecurityGroupsDetails>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}

    /**
     * <p> The virtual private cloud (VPC) security group for the replication
     * instance.</p>
     */
    inline AwsDmsReplicationInstanceDetails& AddVpcSecurityGroups(const AwsDmsReplicationInstanceVpcSecurityGroupsDetails& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p> The virtual private cloud (VPC) security group for the replication
     * instance.</p>
     */
    inline AwsDmsReplicationInstanceDetails& AddVpcSecurityGroups(AwsDmsReplicationInstanceVpcSecurityGroupsDetails&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }

  private:

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet = false;

    Aws::String m_replicationInstanceIdentifier;
    bool m_replicationInstanceIdentifierHasBeenSet = false;

    AwsDmsReplicationInstanceReplicationSubnetGroupDetails m_replicationSubnetGroup;
    bool m_replicationSubnetGroupHasBeenSet = false;

    Aws::Vector<AwsDmsReplicationInstanceVpcSecurityGroupsDetails> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
