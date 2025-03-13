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
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceDetails() = default;
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The amount of storage (in gigabytes) that is allocated for the replication
     * instance. </p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline AwsDmsReplicationInstanceDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether minor engine upgrades are applied automatically to the
     * replication instance during the maintenance window. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline AwsDmsReplicationInstanceDetails& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Availability Zone that the replication instance is created in. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, such as <code>us-east-1d</code>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    AwsDmsReplicationInstanceDetails& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The engine version number of the replication instance. If an engine version
     * number is not specified when a replication instance is created, the default is
     * the latest engine version available. </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    AwsDmsReplicationInstanceDetails& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An KMS key identifier that is used to encrypt the data on the replication
     * instance. If you don't specify a value for the <code>KmsKeyId</code> parameter,
     * DMS uses your default encryption key. KMS creates the default encryption key for
     * your Amazon Web Services account. Your Amazon Web Services account has a
     * different default encryption key for each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AwsDmsReplicationInstanceDetails& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the replication instance is deployed across multiple
     * Availability Zones (AZs). You can't set the <code>AvailabilityZone</code>
     * parameter if the <code>MultiAZ</code> parameter is set to <code>true</code>.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline AwsDmsReplicationInstanceDetails& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maintenance window times for the replication instance. Upgrades to the
     * replication instance are performed during this time.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    AwsDmsReplicationInstanceDetails& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the accessibility options for the replication instance. A value of
     * <code>true</code> represents an instance with a public IP address. A value of
     * <code>false</code> represents an instance with a private IP address. The default
     * value is <code>true</code>.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline AwsDmsReplicationInstanceDetails& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const { return m_replicationInstanceClass; }
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }
    template<typename ReplicationInstanceClassT = Aws::String>
    void SetReplicationInstanceClass(ReplicationInstanceClassT&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::forward<ReplicationInstanceClassT>(value); }
    template<typename ReplicationInstanceClassT = Aws::String>
    AwsDmsReplicationInstanceDetails& WithReplicationInstanceClass(ReplicationInstanceClassT&& value) { SetReplicationInstanceClass(std::forward<ReplicationInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The replication instance identifier.</p>
     */
    inline const Aws::String& GetReplicationInstanceIdentifier() const { return m_replicationInstanceIdentifier; }
    inline bool ReplicationInstanceIdentifierHasBeenSet() const { return m_replicationInstanceIdentifierHasBeenSet; }
    template<typename ReplicationInstanceIdentifierT = Aws::String>
    void SetReplicationInstanceIdentifier(ReplicationInstanceIdentifierT&& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = std::forward<ReplicationInstanceIdentifierT>(value); }
    template<typename ReplicationInstanceIdentifierT = Aws::String>
    AwsDmsReplicationInstanceDetails& WithReplicationInstanceIdentifier(ReplicationInstanceIdentifierT&& value) { SetReplicationInstanceIdentifier(std::forward<ReplicationInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The subnet group for the replication instance.</p>
     */
    inline const AwsDmsReplicationInstanceReplicationSubnetGroupDetails& GetReplicationSubnetGroup() const { return m_replicationSubnetGroup; }
    inline bool ReplicationSubnetGroupHasBeenSet() const { return m_replicationSubnetGroupHasBeenSet; }
    template<typename ReplicationSubnetGroupT = AwsDmsReplicationInstanceReplicationSubnetGroupDetails>
    void SetReplicationSubnetGroup(ReplicationSubnetGroupT&& value) { m_replicationSubnetGroupHasBeenSet = true; m_replicationSubnetGroup = std::forward<ReplicationSubnetGroupT>(value); }
    template<typename ReplicationSubnetGroupT = AwsDmsReplicationInstanceReplicationSubnetGroupDetails>
    AwsDmsReplicationInstanceDetails& WithReplicationSubnetGroup(ReplicationSubnetGroupT&& value) { SetReplicationSubnetGroup(std::forward<ReplicationSubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The virtual private cloud (VPC) security group for the replication
     * instance.</p>
     */
    inline const Aws::Vector<AwsDmsReplicationInstanceVpcSecurityGroupsDetails>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<AwsDmsReplicationInstanceVpcSecurityGroupsDetails>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<AwsDmsReplicationInstanceVpcSecurityGroupsDetails>>
    AwsDmsReplicationInstanceDetails& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = AwsDmsReplicationInstanceVpcSecurityGroupsDetails>
    AwsDmsReplicationInstanceDetails& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}
  private:

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_publiclyAccessible{false};
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
