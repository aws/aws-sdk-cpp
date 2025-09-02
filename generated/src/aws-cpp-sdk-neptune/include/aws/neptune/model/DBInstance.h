/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune/model/Endpoint.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/DBSubnetGroup.h>
#include <aws/neptune/model/PendingModifiedValues.h>
#include <aws/neptune/model/DBSecurityGroupMembership.h>
#include <aws/neptune/model/VpcSecurityGroupMembership.h>
#include <aws/neptune/model/DBParameterGroupStatus.h>
#include <aws/neptune/model/OptionGroupMembership.h>
#include <aws/neptune/model/DBInstanceStatusInfo.h>
#include <aws/neptune/model/DomainMembership.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the details of an Amazon Neptune DB instance.</p> <p>This data type
   * is used as a response element in the <a>DescribeDBInstances</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBInstance">AWS
   * API Reference</a></p>
   */
  class DBInstance
  {
  public:
    AWS_NEPTUNE_API DBInstance() = default;
    AWS_NEPTUNE_API DBInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    DBInstance& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    template<typename DBInstanceClassT = Aws::String>
    void SetDBInstanceClass(DBInstanceClassT&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::forward<DBInstanceClassT>(value); }
    template<typename DBInstanceClassT = Aws::String>
    DBInstance& WithDBInstanceClass(DBInstanceClassT&& value) { SetDBInstanceClass(std::forward<DBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the database engine to be used for this DB instance.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    DBInstance& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline const Aws::String& GetDBInstanceStatus() const { return m_dBInstanceStatus; }
    inline bool DBInstanceStatusHasBeenSet() const { return m_dBInstanceStatusHasBeenSet; }
    template<typename DBInstanceStatusT = Aws::String>
    void SetDBInstanceStatus(DBInstanceStatusT&& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = std::forward<DBInstanceStatusT>(value); }
    template<typename DBInstanceStatusT = Aws::String>
    DBInstance& WithDBInstanceStatus(DBInstanceStatusT&& value) { SetDBInstanceStatus(std::forward<DBInstanceStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    DBInstance& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name.</p>
     */
    inline const Aws::String& GetDBName() const { return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    template<typename DBNameT = Aws::String>
    void SetDBName(DBNameT&& value) { m_dBNameHasBeenSet = true; m_dBName = std::forward<DBNameT>(value); }
    template<typename DBNameT = Aws::String>
    DBInstance& WithDBName(DBNameT&& value) { SetDBName(std::forward<DBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline const Endpoint& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Endpoint>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Endpoint>
    DBInstance& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DBInstance& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const { return m_instanceCreateTime; }
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
    template<typename InstanceCreateTimeT = Aws::Utils::DateTime>
    void SetInstanceCreateTime(InstanceCreateTimeT&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::forward<InstanceCreateTimeT>(value); }
    template<typename InstanceCreateTimeT = Aws::Utils::DateTime>
    DBInstance& WithInstanceCreateTime(InstanceCreateTimeT&& value) { SetInstanceCreateTime(std::forward<InstanceCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    DBInstance& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline DBInstance& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides List of DB security group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements.</p>
     */
    inline const Aws::Vector<DBSecurityGroupMembership>& GetDBSecurityGroups() const { return m_dBSecurityGroups; }
    inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }
    template<typename DBSecurityGroupsT = Aws::Vector<DBSecurityGroupMembership>>
    void SetDBSecurityGroups(DBSecurityGroupsT&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::forward<DBSecurityGroupsT>(value); }
    template<typename DBSecurityGroupsT = Aws::Vector<DBSecurityGroupMembership>>
    DBInstance& WithDBSecurityGroups(DBSecurityGroupsT&& value) { SetDBSecurityGroups(std::forward<DBSecurityGroupsT>(value)); return *this;}
    template<typename DBSecurityGroupsT = DBSecurityGroupMembership>
    DBInstance& AddDBSecurityGroups(DBSecurityGroupsT&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.emplace_back(std::forward<DBSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<VpcSecurityGroupMembership>>
    DBInstance& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = VpcSecurityGroupMembership>
    DBInstance& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides the list of DB parameter groups applied to this DB instance.</p>
     */
    inline const Aws::Vector<DBParameterGroupStatus>& GetDBParameterGroups() const { return m_dBParameterGroups; }
    inline bool DBParameterGroupsHasBeenSet() const { return m_dBParameterGroupsHasBeenSet; }
    template<typename DBParameterGroupsT = Aws::Vector<DBParameterGroupStatus>>
    void SetDBParameterGroups(DBParameterGroupsT&& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups = std::forward<DBParameterGroupsT>(value); }
    template<typename DBParameterGroupsT = Aws::Vector<DBParameterGroupStatus>>
    DBInstance& WithDBParameterGroups(DBParameterGroupsT&& value) { SetDBParameterGroups(std::forward<DBParameterGroupsT>(value)); return *this;}
    template<typename DBParameterGroupsT = DBParameterGroupStatus>
    DBInstance& AddDBParameterGroups(DBParameterGroupsT&& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups.emplace_back(std::forward<DBParameterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Availability Zone the DB instance is located
     * in.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    DBInstance& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information on the subnet group associated with the DB instance,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline const DBSubnetGroup& GetDBSubnetGroup() const { return m_dBSubnetGroup; }
    inline bool DBSubnetGroupHasBeenSet() const { return m_dBSubnetGroupHasBeenSet; }
    template<typename DBSubnetGroupT = DBSubnetGroup>
    void SetDBSubnetGroup(DBSubnetGroupT&& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = std::forward<DBSubnetGroupT>(value); }
    template<typename DBSubnetGroupT = DBSubnetGroup>
    DBInstance& WithDBSubnetGroup(DBSubnetGroupT&& value) { SetDBSubnetGroup(std::forward<DBSubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    DBInstance& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that changes to the DB instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline const PendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    template<typename PendingModifiedValuesT = PendingModifiedValues>
    void SetPendingModifiedValues(PendingModifiedValuesT&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value); }
    template<typename PendingModifiedValuesT = PendingModifiedValues>
    DBInstance& WithPendingModifiedValues(PendingModifiedValuesT&& value) { SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const { return m_latestRestorableTime; }
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }
    template<typename LatestRestorableTimeT = Aws::Utils::DateTime>
    void SetLatestRestorableTime(LatestRestorableTimeT&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::forward<LatestRestorableTimeT>(value); }
    template<typename LatestRestorableTimeT = Aws::Utils::DateTime>
    DBInstance& WithLatestRestorableTime(LatestRestorableTimeT&& value) { SetLatestRestorableTime(std::forward<LatestRestorableTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline DBInstance& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    DBInstance& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that minor version patches are applied automatically.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline DBInstance& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the identifier of the source DB instance if this DB instance is a
     * Read Replica.</p>
     */
    inline const Aws::String& GetReadReplicaSourceDBInstanceIdentifier() const { return m_readReplicaSourceDBInstanceIdentifier; }
    inline bool ReadReplicaSourceDBInstanceIdentifierHasBeenSet() const { return m_readReplicaSourceDBInstanceIdentifierHasBeenSet; }
    template<typename ReadReplicaSourceDBInstanceIdentifierT = Aws::String>
    void SetReadReplicaSourceDBInstanceIdentifier(ReadReplicaSourceDBInstanceIdentifierT&& value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier = std::forward<ReadReplicaSourceDBInstanceIdentifierT>(value); }
    template<typename ReadReplicaSourceDBInstanceIdentifierT = Aws::String>
    DBInstance& WithReadReplicaSourceDBInstanceIdentifier(ReadReplicaSourceDBInstanceIdentifierT&& value) { SetReadReplicaSourceDBInstanceIdentifier(std::forward<ReadReplicaSourceDBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaDBInstanceIdentifiers() const { return m_readReplicaDBInstanceIdentifiers; }
    inline bool ReadReplicaDBInstanceIdentifiersHasBeenSet() const { return m_readReplicaDBInstanceIdentifiersHasBeenSet; }
    template<typename ReadReplicaDBInstanceIdentifiersT = Aws::Vector<Aws::String>>
    void SetReadReplicaDBInstanceIdentifiers(ReadReplicaDBInstanceIdentifiersT&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers = std::forward<ReadReplicaDBInstanceIdentifiersT>(value); }
    template<typename ReadReplicaDBInstanceIdentifiersT = Aws::Vector<Aws::String>>
    DBInstance& WithReadReplicaDBInstanceIdentifiers(ReadReplicaDBInstanceIdentifiersT&& value) { SetReadReplicaDBInstanceIdentifiers(std::forward<ReadReplicaDBInstanceIdentifiersT>(value)); return *this;}
    template<typename ReadReplicaDBInstanceIdentifiersT = Aws::String>
    DBInstance& AddReadReplicaDBInstanceIdentifiers(ReadReplicaDBInstanceIdentifiersT&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.emplace_back(std::forward<ReadReplicaDBInstanceIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains one or more identifiers of DB clusters that are Read Replicas of
     * this DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaDBClusterIdentifiers() const { return m_readReplicaDBClusterIdentifiers; }
    inline bool ReadReplicaDBClusterIdentifiersHasBeenSet() const { return m_readReplicaDBClusterIdentifiersHasBeenSet; }
    template<typename ReadReplicaDBClusterIdentifiersT = Aws::Vector<Aws::String>>
    void SetReadReplicaDBClusterIdentifiers(ReadReplicaDBClusterIdentifiersT&& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers = std::forward<ReadReplicaDBClusterIdentifiersT>(value); }
    template<typename ReadReplicaDBClusterIdentifiersT = Aws::Vector<Aws::String>>
    DBInstance& WithReadReplicaDBClusterIdentifiers(ReadReplicaDBClusterIdentifiersT&& value) { SetReadReplicaDBClusterIdentifiers(std::forward<ReadReplicaDBClusterIdentifiersT>(value)); return *this;}
    template<typename ReadReplicaDBClusterIdentifiersT = Aws::String>
    DBInstance& AddReadReplicaDBClusterIdentifiers(ReadReplicaDBClusterIdentifiersT&& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers.emplace_back(std::forward<ReadReplicaDBClusterIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>License model information for this DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    template<typename LicenseModelT = Aws::String>
    void SetLicenseModel(LicenseModelT&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::forward<LicenseModelT>(value); }
    template<typename LicenseModelT = Aws::String>
    DBInstance& WithLicenseModel(LicenseModelT&& value) { SetLicenseModel(std::forward<LicenseModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Provisioned IOPS (I/O operations per second) value.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline DBInstance& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::Vector<OptionGroupMembership>& GetOptionGroupMemberships() const { return m_optionGroupMemberships; }
    inline bool OptionGroupMembershipsHasBeenSet() const { return m_optionGroupMembershipsHasBeenSet; }
    template<typename OptionGroupMembershipsT = Aws::Vector<OptionGroupMembership>>
    void SetOptionGroupMemberships(OptionGroupMembershipsT&& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships = std::forward<OptionGroupMembershipsT>(value); }
    template<typename OptionGroupMembershipsT = Aws::Vector<OptionGroupMembership>>
    DBInstance& WithOptionGroupMemberships(OptionGroupMembershipsT&& value) { SetOptionGroupMemberships(std::forward<OptionGroupMembershipsT>(value)); return *this;}
    template<typename OptionGroupMembershipsT = OptionGroupMembership>
    DBInstance& AddOptionGroupMemberships(OptionGroupMembershipsT&& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships.emplace_back(std::forward<OptionGroupMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::String& GetCharacterSetName() const { return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    template<typename CharacterSetNameT = Aws::String>
    void SetCharacterSetName(CharacterSetNameT&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::forward<CharacterSetNameT>(value); }
    template<typename CharacterSetNameT = Aws::String>
    DBInstance& WithCharacterSetName(CharacterSetNameT&& value) { SetCharacterSetName(std::forward<CharacterSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const { return m_secondaryAvailabilityZone; }
    inline bool SecondaryAvailabilityZoneHasBeenSet() const { return m_secondaryAvailabilityZoneHasBeenSet; }
    template<typename SecondaryAvailabilityZoneT = Aws::String>
    void SetSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = std::forward<SecondaryAvailabilityZoneT>(value); }
    template<typename SecondaryAvailabilityZoneT = Aws::String>
    DBInstance& WithSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) { SetSecondaryAvailabilityZone(std::forward<SecondaryAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance is publicly accessible.</p> <p>When the DB
     * instance is publicly accessible and you connect from outside of the DB
     * instance's virtual private cloud (VPC), its Domain Name System (DNS) endpoint
     * resolves to the public IP address. When you connect from within the same VPC as
     * the DB instance, the endpoint resolves to the private IP address. Access to the
     * DB instance is ultimately controlled by the security group it uses. That public
     * access isn't permitted if the security group assigned to the DB cluster doesn't
     * permit it.</p> <p>When the DB instance isn't publicly accessible, it is an
     * internal DB instance with a DNS name that resolves to a private IP address.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline DBInstance& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a Read Replica. If the instance is not a Read Replica, this is
     * blank.</p>
     */
    inline const Aws::Vector<DBInstanceStatusInfo>& GetStatusInfos() const { return m_statusInfos; }
    inline bool StatusInfosHasBeenSet() const { return m_statusInfosHasBeenSet; }
    template<typename StatusInfosT = Aws::Vector<DBInstanceStatusInfo>>
    void SetStatusInfos(StatusInfosT&& value) { m_statusInfosHasBeenSet = true; m_statusInfos = std::forward<StatusInfosT>(value); }
    template<typename StatusInfosT = Aws::Vector<DBInstanceStatusInfo>>
    DBInstance& WithStatusInfos(StatusInfosT&& value) { SetStatusInfos(std::forward<StatusInfosT>(value)); return *this;}
    template<typename StatusInfosT = DBInstanceStatusInfo>
    DBInstance& AddStatusInfos(StatusInfosT&& value) { m_statusInfosHasBeenSet = true; m_statusInfos.emplace_back(std::forward<StatusInfosT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the storage type associated with the DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    DBInstance& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const { return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    template<typename TdeCredentialArnT = Aws::String>
    void SetTdeCredentialArn(TdeCredentialArnT&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::forward<TdeCredentialArnT>(value); }
    template<typename TdeCredentialArnT = Aws::String>
    DBInstance& WithTdeCredentialArn(TdeCredentialArnT&& value) { SetTdeCredentialArn(std::forward<TdeCredentialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the port that the DB instance listens on. If the DB instance is
     * part of a DB cluster, this can be a different port than the DB cluster port.</p>
     */
    inline int GetDbInstancePort() const { return m_dbInstancePort; }
    inline bool DbInstancePortHasBeenSet() const { return m_dbInstancePortHasBeenSet; }
    inline void SetDbInstancePort(int value) { m_dbInstancePortHasBeenSet = true; m_dbInstancePort = value; }
    inline DBInstance& WithDbInstancePort(int value) { SetDbInstancePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    DBInstance& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported: The encryption for DB instances is managed by the DB
     * cluster.</p>
     */
    inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline DBInstance& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Not supported: The encryption for DB instances is managed by the DB
     * cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DBInstance& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Region-unique, immutable identifier for the DB instance. This
     * identifier is found in Amazon CloudTrail log entries whenever the Amazon KMS key
     * for the DB instance is accessed.</p>
     */
    inline const Aws::String& GetDbiResourceId() const { return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    template<typename DbiResourceIdT = Aws::String>
    void SetDbiResourceId(DbiResourceIdT&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::forward<DbiResourceIdT>(value); }
    template<typename DbiResourceIdT = Aws::String>
    DBInstance& WithDbiResourceId(DbiResourceIdT&& value) { SetDbiResourceId(std::forward<DbiResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const { return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    template<typename CACertificateIdentifierT = Aws::String>
    void SetCACertificateIdentifier(CACertificateIdentifierT&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::forward<CACertificateIdentifierT>(value); }
    template<typename CACertificateIdentifierT = Aws::String>
    DBInstance& WithCACertificateIdentifier(CACertificateIdentifierT&& value) { SetCACertificateIdentifier(std::forward<CACertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported</p>
     */
    inline const Aws::Vector<DomainMembership>& GetDomainMemberships() const { return m_domainMemberships; }
    inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }
    template<typename DomainMembershipsT = Aws::Vector<DomainMembership>>
    void SetDomainMemberships(DomainMembershipsT&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = std::forward<DomainMembershipsT>(value); }
    template<typename DomainMembershipsT = Aws::Vector<DomainMembership>>
    DBInstance& WithDomainMemberships(DomainMembershipsT&& value) { SetDomainMemberships(std::forward<DomainMembershipsT>(value)); return *this;}
    template<typename DomainMembershipsT = DomainMembership>
    DBInstance& AddDomainMemberships(DomainMembershipsT&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.emplace_back(std::forward<DomainMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether tags are copied from the DB instance to snapshots of the DB
     * instance.</p>
     */
    inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline DBInstance& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance.</p>
     */
    inline int GetMonitoringInterval() const { return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline DBInstance& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log stream that
     * receives the Enhanced Monitoring metrics data for the DB instance.</p>
     */
    inline const Aws::String& GetEnhancedMonitoringResourceArn() const { return m_enhancedMonitoringResourceArn; }
    inline bool EnhancedMonitoringResourceArnHasBeenSet() const { return m_enhancedMonitoringResourceArnHasBeenSet; }
    template<typename EnhancedMonitoringResourceArnT = Aws::String>
    void SetEnhancedMonitoringResourceArn(EnhancedMonitoringResourceArnT&& value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn = std::forward<EnhancedMonitoringResourceArnT>(value); }
    template<typename EnhancedMonitoringResourceArnT = Aws::String>
    DBInstance& WithEnhancedMonitoringResourceArn(EnhancedMonitoringResourceArnT&& value) { SetEnhancedMonitoringResourceArn(std::forward<EnhancedMonitoringResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that permits Neptune to send Enhanced Monitoring
     * metrics to Amazon CloudWatch Logs.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const { return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    template<typename MonitoringRoleArnT = Aws::String>
    void SetMonitoringRoleArn(MonitoringRoleArnT&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::forward<MonitoringRoleArnT>(value); }
    template<typename MonitoringRoleArnT = Aws::String>
    DBInstance& WithMonitoringRoleArn(MonitoringRoleArnT&& value) { SetMonitoringRoleArn(std::forward<MonitoringRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the order in which a Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance. </p>
     */
    inline int GetPromotionTier() const { return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline DBInstance& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceArn() const { return m_dBInstanceArn; }
    inline bool DBInstanceArnHasBeenSet() const { return m_dBInstanceArnHasBeenSet; }
    template<typename DBInstanceArnT = Aws::String>
    void SetDBInstanceArn(DBInstanceArnT&& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = std::forward<DBInstanceArnT>(value); }
    template<typename DBInstanceArnT = Aws::String>
    DBInstance& WithDBInstanceArn(DBInstanceArnT&& value) { SetDBInstanceArn(std::forward<DBInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    DBInstance& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if Amazon Identity and Access Management (IAM) authentication is
     * enabled, and otherwise false.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const { return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline DBInstance& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline bool GetPerformanceInsightsEnabled() const { return m_performanceInsightsEnabled; }
    inline bool PerformanceInsightsEnabledHasBeenSet() const { return m_performanceInsightsEnabledHasBeenSet; }
    inline void SetPerformanceInsightsEnabled(bool value) { m_performanceInsightsEnabledHasBeenSet = true; m_performanceInsightsEnabled = value; }
    inline DBInstance& WithPerformanceInsightsEnabled(bool value) { SetPerformanceInsightsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const { return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    template<typename PerformanceInsightsKMSKeyIdT = Aws::String>
    void SetPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::forward<PerformanceInsightsKMSKeyIdT>(value); }
    template<typename PerformanceInsightsKMSKeyIdT = Aws::String>
    DBInstance& WithPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) { SetPerformanceInsightsKMSKeyId(std::forward<PerformanceInsightsKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudwatchLogsExports() const { return m_enabledCloudwatchLogsExports; }
    inline bool EnabledCloudwatchLogsExportsHasBeenSet() const { return m_enabledCloudwatchLogsExportsHasBeenSet; }
    template<typename EnabledCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    void SetEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = std::forward<EnabledCloudwatchLogsExportsT>(value); }
    template<typename EnabledCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    DBInstance& WithEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) { SetEnabledCloudwatchLogsExports(std::forward<EnabledCloudwatchLogsExportsT>(value)); return *this;}
    template<typename EnabledCloudwatchLogsExportsT = Aws::String>
    DBInstance& AddEnabledCloudwatchLogsExports(EnabledCloudwatchLogsExportsT&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.emplace_back(std::forward<EnabledCloudwatchLogsExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the DB instance has deletion protection enabled. The
     * instance can't be deleted when deletion protection is enabled. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/manage-console-instances-delete.html">Deleting
     * a DB Instance</a>.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline DBInstance& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_dBInstanceStatus;
    bool m_dBInstanceStatusHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::Utils::DateTime m_instanceCreateTime{};
    bool m_instanceCreateTimeHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::Vector<DBSecurityGroupMembership> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    Aws::Vector<DBParameterGroupStatus> m_dBParameterGroups;
    bool m_dBParameterGroupsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    DBSubnetGroup m_dBSubnetGroup;
    bool m_dBSubnetGroupHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    PendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::Utils::DateTime m_latestRestorableTime{};
    bool m_latestRestorableTimeHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_readReplicaSourceDBInstanceIdentifier;
    bool m_readReplicaSourceDBInstanceIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaDBInstanceIdentifiers;
    bool m_readReplicaDBInstanceIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaDBClusterIdentifiers;
    bool m_readReplicaDBClusterIdentifiersHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::Vector<OptionGroupMembership> m_optionGroupMemberships;
    bool m_optionGroupMembershipsHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<DBInstanceStatusInfo> m_statusInfos;
    bool m_statusInfosHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    int m_dbInstancePort{0};
    bool m_dbInstancePortHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    bool m_storageEncrypted{false};
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::Vector<DomainMembership> m_domainMemberships;
    bool m_domainMembershipsHasBeenSet = false;

    bool m_copyTagsToSnapshot{false};
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval{0};
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_enhancedMonitoringResourceArn;
    bool m_enhancedMonitoringResourceArnHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    int m_promotionTier{0};
    bool m_promotionTierHasBeenSet = false;

    Aws::String m_dBInstanceArn;
    bool m_dBInstanceArnHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled{false};
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    bool m_performanceInsightsEnabled{false};
    bool m_performanceInsightsEnabledHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;
    bool m_enabledCloudwatchLogsExportsHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
