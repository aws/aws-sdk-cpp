/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRdsDbInstanceVpcSecurityGroup.h>
#include <aws/securityhub/model/AwsRdsDbClusterAssociatedRole.h>
#include <aws/securityhub/model/AwsRdsDbDomainMembership.h>
#include <aws/securityhub/model/AwsRdsDbClusterOptionGroupMembership.h>
#include <aws/securityhub/model/AwsRdsDbClusterMember.h>
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
   * <p>Information about an Amazon RDS DB cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbClusterDetails">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbClusterDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbClusterDetails();
    AWS_SECURITYHUB_API AwsRdsDbClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For all database engines except Aurora, specifies the allocated storage size
     * in gibibytes (GiB).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline AwsRdsDbClusterDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline AwsRdsDbClusterDetails& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline AwsRdsDbClusterDetails& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline AwsRdsDbClusterDetails& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline AwsRdsDbClusterDetails& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days for which automated backups are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline AwsRdsDbClusterDetails& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline AwsRdsDbClusterDetails& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline AwsRdsDbClusterDetails& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of this DB cluster.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsRdsDbClusterDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsRdsDbClusterDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline AwsRdsDbClusterDetails& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline AwsRdsDbClusterDetails& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reader endpoint for the DB cluster.</p>
     */
    inline const Aws::String& GetReaderEndpoint() const{ return m_readerEndpoint; }
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }
    inline void SetReaderEndpoint(const Aws::String& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = value; }
    inline void SetReaderEndpoint(Aws::String&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::move(value); }
    inline void SetReaderEndpoint(const char* value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint.assign(value); }
    inline AwsRdsDbClusterDetails& WithReaderEndpoint(const Aws::String& value) { SetReaderEndpoint(value); return *this;}
    inline AwsRdsDbClusterDetails& WithReaderEndpoint(Aws::String&& value) { SetReaderEndpoint(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithReaderEndpoint(const char* value) { SetReaderEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomEndpoints() const{ return m_customEndpoints; }
    inline bool CustomEndpointsHasBeenSet() const { return m_customEndpointsHasBeenSet; }
    inline void SetCustomEndpoints(const Aws::Vector<Aws::String>& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints = value; }
    inline void SetCustomEndpoints(Aws::Vector<Aws::String>&& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints = std::move(value); }
    inline AwsRdsDbClusterDetails& WithCustomEndpoints(const Aws::Vector<Aws::String>& value) { SetCustomEndpoints(value); return *this;}
    inline AwsRdsDbClusterDetails& WithCustomEndpoints(Aws::Vector<Aws::String>&& value) { SetCustomEndpoints(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& AddCustomEndpoints(const Aws::String& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(value); return *this; }
    inline AwsRdsDbClusterDetails& AddCustomEndpoints(Aws::String&& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(std::move(value)); return *this; }
    inline AwsRdsDbClusterDetails& AddCustomEndpoints(const char* value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the DB cluster has instances in multiple Availability Zones.</p>
     */
    inline bool GetMultiAz() const{ return m_multiAz; }
    inline bool MultiAzHasBeenSet() const { return m_multiAzHasBeenSet; }
    inline void SetMultiAz(bool value) { m_multiAzHasBeenSet = true; m_multiAz = value; }
    inline AwsRdsDbClusterDetails& WithMultiAz(bool value) { SetMultiAz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database engine to use for this DB cluster. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline AwsRdsDbClusterDetails& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline AwsRdsDbClusterDetails& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline AwsRdsDbClusterDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline AwsRdsDbClusterDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline AwsRdsDbClusterDetails& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline AwsRdsDbClusterDetails& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline AwsRdsDbClusterDetails& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }
    inline AwsRdsDbClusterDetails& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline AwsRdsDbClusterDetails& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline AwsRdsDbClusterDetails& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline AwsRdsDbClusterDetails& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaIdentifiers() const{ return m_readReplicaIdentifiers; }
    inline bool ReadReplicaIdentifiersHasBeenSet() const { return m_readReplicaIdentifiersHasBeenSet; }
    inline void SetReadReplicaIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = value; }
    inline void SetReadReplicaIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = std::move(value); }
    inline AwsRdsDbClusterDetails& WithReadReplicaIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaIdentifiers(value); return *this;}
    inline AwsRdsDbClusterDetails& WithReadReplicaIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaIdentifiers(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& AddReadReplicaIdentifiers(const Aws::String& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(value); return *this; }
    inline AwsRdsDbClusterDetails& AddReadReplicaIdentifiers(Aws::String&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(std::move(value)); return *this; }
    inline AwsRdsDbClusterDetails& AddReadReplicaIdentifiers(const char* value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    inline void SetVpcSecurityGroups(const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }
    inline void SetVpcSecurityGroups(Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }
    inline AwsRdsDbClusterDetails& WithVpcSecurityGroups(const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& value) { SetVpcSecurityGroups(value); return *this;}
    inline AwsRdsDbClusterDetails& WithVpcSecurityGroups(Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& AddVpcSecurityGroups(const AwsRdsDbInstanceVpcSecurityGroup& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }
    inline AwsRdsDbClusterDetails& AddVpcSecurityGroups(AwsRdsDbInstanceVpcSecurityGroup&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the identifier that Amazon Route 53 assigns when you create a
     * hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }
    inline AwsRdsDbClusterDetails& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline AwsRdsDbClusterDetails& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline AwsRdsDbClusterDetails& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline AwsRdsDbClusterDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline AwsRdsDbClusterDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the DB cluster. The identifier must be unique within each
     * Amazon Web Services Region and is immutable.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const{ return m_dbClusterResourceId; }
    inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }
    inline void SetDbClusterResourceId(const Aws::String& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = value; }
    inline void SetDbClusterResourceId(Aws::String&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::move(value); }
    inline void SetDbClusterResourceId(const char* value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId.assign(value); }
    inline AwsRdsDbClusterDetails& WithDbClusterResourceId(const Aws::String& value) { SetDbClusterResourceId(value); return *this;}
    inline AwsRdsDbClusterDetails& WithDbClusterResourceId(Aws::String&& value) { SetDbClusterResourceId(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithDbClusterResourceId(const char* value) { SetDbClusterResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the IAM roles that are associated with the DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbClusterAssociatedRole>& GetAssociatedRoles() const{ return m_associatedRoles; }
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }
    inline void SetAssociatedRoles(const Aws::Vector<AwsRdsDbClusterAssociatedRole>& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = value; }
    inline void SetAssociatedRoles(Aws::Vector<AwsRdsDbClusterAssociatedRole>&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::move(value); }
    inline AwsRdsDbClusterDetails& WithAssociatedRoles(const Aws::Vector<AwsRdsDbClusterAssociatedRole>& value) { SetAssociatedRoles(value); return *this;}
    inline AwsRdsDbClusterDetails& WithAssociatedRoles(Aws::Vector<AwsRdsDbClusterAssociatedRole>&& value) { SetAssociatedRoles(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& AddAssociatedRoles(const AwsRdsDbClusterAssociatedRole& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(value); return *this; }
    inline AwsRdsDbClusterDetails& AddAssociatedRoles(AwsRdsDbClusterAssociatedRole&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>For more information about the validation and formatting of
     * timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetClusterCreateTime() const{ return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    inline void SetClusterCreateTime(const Aws::String& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }
    inline void SetClusterCreateTime(Aws::String&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }
    inline void SetClusterCreateTime(const char* value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime.assign(value); }
    inline AwsRdsDbClusterDetails& WithClusterCreateTime(const Aws::String& value) { SetClusterCreateTime(value); return *this;}
    inline AwsRdsDbClusterDetails& WithClusterCreateTime(Aws::String&& value) { SetClusterCreateTime(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithClusterCreateTime(const char* value) { SetClusterCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudWatchLogsExports() const{ return m_enabledCloudWatchLogsExports; }
    inline bool EnabledCloudWatchLogsExportsHasBeenSet() const { return m_enabledCloudWatchLogsExportsHasBeenSet; }
    inline void SetEnabledCloudWatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports = value; }
    inline void SetEnabledCloudWatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports = std::move(value); }
    inline AwsRdsDbClusterDetails& WithEnabledCloudWatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnabledCloudWatchLogsExports(value); return *this;}
    inline AwsRdsDbClusterDetails& WithEnabledCloudWatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnabledCloudWatchLogsExports(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& AddEnabledCloudWatchLogsExports(const Aws::String& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.push_back(value); return *this; }
    inline AwsRdsDbClusterDetails& AddEnabledCloudWatchLogsExports(Aws::String&& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.push_back(std::move(value)); return *this; }
    inline AwsRdsDbClusterDetails& AddEnabledCloudWatchLogsExports(const char* value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The database engine mode of the DB cluster.Valid values are as follows:</p>
     * <ul> <li> <p> <code>global</code> </p> </li> <li> <p> <code>multimaster</code>
     * </p> </li> <li> <p> <code>parallelquery</code> </p> </li> <li> <p>
     * <code>provisioned</code> </p> </li> <li> <p> <code>serverless</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }
    inline AwsRdsDbClusterDetails& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}
    inline AwsRdsDbClusterDetails& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the DB cluster has deletion protection enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline AwsRdsDbClusterDetails& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the HTTP endpoint for an Aurora Serverless DB cluster is enabled.</p>
     */
    inline bool GetHttpEndpointEnabled() const{ return m_httpEndpointEnabled; }
    inline bool HttpEndpointEnabledHasBeenSet() const { return m_httpEndpointEnabledHasBeenSet; }
    inline void SetHttpEndpointEnabled(bool value) { m_httpEndpointEnabledHasBeenSet = true; m_httpEndpointEnabled = value; }
    inline AwsRdsDbClusterDetails& WithHttpEndpointEnabled(bool value) { SetHttpEndpointEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the database activity stream. Valid values are as follows:</p>
     * <ul> <li> <p> <code>started</code> </p> </li> <li> <p> <code>starting</code>
     * </p> </li> <li> <p> <code>stopped</code> </p> </li> <li> <p>
     * <code>stopping</code> </p> </li> </ul>
     */
    inline const Aws::String& GetActivityStreamStatus() const{ return m_activityStreamStatus; }
    inline bool ActivityStreamStatusHasBeenSet() const { return m_activityStreamStatusHasBeenSet; }
    inline void SetActivityStreamStatus(const Aws::String& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = value; }
    inline void SetActivityStreamStatus(Aws::String&& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = std::move(value); }
    inline void SetActivityStreamStatus(const char* value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus.assign(value); }
    inline AwsRdsDbClusterDetails& WithActivityStreamStatus(const Aws::String& value) { SetActivityStreamStatus(value); return *this;}
    inline AwsRdsDbClusterDetails& WithActivityStreamStatus(Aws::String&& value) { SetActivityStreamStatus(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithActivityStreamStatus(const char* value) { SetActivityStreamStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline AwsRdsDbClusterDetails& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the DB cluster is a clone of a DB cluster owned by a different Amazon
     * Web Services account.</p>
     */
    inline bool GetCrossAccountClone() const{ return m_crossAccountClone; }
    inline bool CrossAccountCloneHasBeenSet() const { return m_crossAccountCloneHasBeenSet; }
    inline void SetCrossAccountClone(bool value) { m_crossAccountCloneHasBeenSet = true; m_crossAccountClone = value; }
    inline AwsRdsDbClusterDetails& WithCrossAccountClone(bool value) { SetCrossAccountClone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory domain membership records that are associated with the
     * DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbDomainMembership>& GetDomainMemberships() const{ return m_domainMemberships; }
    inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }
    inline void SetDomainMemberships(const Aws::Vector<AwsRdsDbDomainMembership>& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = value; }
    inline void SetDomainMemberships(Aws::Vector<AwsRdsDbDomainMembership>&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = std::move(value); }
    inline AwsRdsDbClusterDetails& WithDomainMemberships(const Aws::Vector<AwsRdsDbDomainMembership>& value) { SetDomainMemberships(value); return *this;}
    inline AwsRdsDbClusterDetails& WithDomainMemberships(Aws::Vector<AwsRdsDbDomainMembership>&& value) { SetDomainMemberships(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& AddDomainMemberships(const AwsRdsDbDomainMembership& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(value); return *this; }
    inline AwsRdsDbClusterDetails& AddDomainMemberships(AwsRdsDbDomainMembership&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline const Aws::String& GetDbClusterParameterGroup() const{ return m_dbClusterParameterGroup; }
    inline bool DbClusterParameterGroupHasBeenSet() const { return m_dbClusterParameterGroupHasBeenSet; }
    inline void SetDbClusterParameterGroup(const Aws::String& value) { m_dbClusterParameterGroupHasBeenSet = true; m_dbClusterParameterGroup = value; }
    inline void SetDbClusterParameterGroup(Aws::String&& value) { m_dbClusterParameterGroupHasBeenSet = true; m_dbClusterParameterGroup = std::move(value); }
    inline void SetDbClusterParameterGroup(const char* value) { m_dbClusterParameterGroupHasBeenSet = true; m_dbClusterParameterGroup.assign(value); }
    inline AwsRdsDbClusterDetails& WithDbClusterParameterGroup(const Aws::String& value) { SetDbClusterParameterGroup(value); return *this;}
    inline AwsRdsDbClusterDetails& WithDbClusterParameterGroup(Aws::String&& value) { SetDbClusterParameterGroup(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithDbClusterParameterGroup(const char* value) { SetDbClusterParameterGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet group that is associated with the DB cluster, including the name,
     * description, and subnets in the subnet group.</p>
     */
    inline const Aws::String& GetDbSubnetGroup() const{ return m_dbSubnetGroup; }
    inline bool DbSubnetGroupHasBeenSet() const { return m_dbSubnetGroupHasBeenSet; }
    inline void SetDbSubnetGroup(const Aws::String& value) { m_dbSubnetGroupHasBeenSet = true; m_dbSubnetGroup = value; }
    inline void SetDbSubnetGroup(Aws::String&& value) { m_dbSubnetGroupHasBeenSet = true; m_dbSubnetGroup = std::move(value); }
    inline void SetDbSubnetGroup(const char* value) { m_dbSubnetGroupHasBeenSet = true; m_dbSubnetGroup.assign(value); }
    inline AwsRdsDbClusterDetails& WithDbSubnetGroup(const Aws::String& value) { SetDbSubnetGroup(value); return *this;}
    inline AwsRdsDbClusterDetails& WithDbSubnetGroup(Aws::String&& value) { SetDbSubnetGroup(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithDbSubnetGroup(const char* value) { SetDbSubnetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of option group memberships for this DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbClusterOptionGroupMembership>& GetDbClusterOptionGroupMemberships() const{ return m_dbClusterOptionGroupMemberships; }
    inline bool DbClusterOptionGroupMembershipsHasBeenSet() const { return m_dbClusterOptionGroupMembershipsHasBeenSet; }
    inline void SetDbClusterOptionGroupMemberships(const Aws::Vector<AwsRdsDbClusterOptionGroupMembership>& value) { m_dbClusterOptionGroupMembershipsHasBeenSet = true; m_dbClusterOptionGroupMemberships = value; }
    inline void SetDbClusterOptionGroupMemberships(Aws::Vector<AwsRdsDbClusterOptionGroupMembership>&& value) { m_dbClusterOptionGroupMembershipsHasBeenSet = true; m_dbClusterOptionGroupMemberships = std::move(value); }
    inline AwsRdsDbClusterDetails& WithDbClusterOptionGroupMemberships(const Aws::Vector<AwsRdsDbClusterOptionGroupMembership>& value) { SetDbClusterOptionGroupMemberships(value); return *this;}
    inline AwsRdsDbClusterDetails& WithDbClusterOptionGroupMemberships(Aws::Vector<AwsRdsDbClusterOptionGroupMembership>&& value) { SetDbClusterOptionGroupMemberships(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& AddDbClusterOptionGroupMemberships(const AwsRdsDbClusterOptionGroupMembership& value) { m_dbClusterOptionGroupMembershipsHasBeenSet = true; m_dbClusterOptionGroupMemberships.push_back(value); return *this; }
    inline AwsRdsDbClusterDetails& AddDbClusterOptionGroupMemberships(AwsRdsDbClusterOptionGroupMembership&& value) { m_dbClusterOptionGroupMembershipsHasBeenSet = true; m_dbClusterOptionGroupMemberships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DB cluster identifier that the user assigned to the cluster. This
     * identifier is the unique key that identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }
    inline AwsRdsDbClusterDetails& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}
    inline AwsRdsDbClusterDetails& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of instances that make up the DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbClusterMember>& GetDbClusterMembers() const{ return m_dbClusterMembers; }
    inline bool DbClusterMembersHasBeenSet() const { return m_dbClusterMembersHasBeenSet; }
    inline void SetDbClusterMembers(const Aws::Vector<AwsRdsDbClusterMember>& value) { m_dbClusterMembersHasBeenSet = true; m_dbClusterMembers = value; }
    inline void SetDbClusterMembers(Aws::Vector<AwsRdsDbClusterMember>&& value) { m_dbClusterMembersHasBeenSet = true; m_dbClusterMembers = std::move(value); }
    inline AwsRdsDbClusterDetails& WithDbClusterMembers(const Aws::Vector<AwsRdsDbClusterMember>& value) { SetDbClusterMembers(value); return *this;}
    inline AwsRdsDbClusterDetails& WithDbClusterMembers(Aws::Vector<AwsRdsDbClusterMember>&& value) { SetDbClusterMembers(std::move(value)); return *this;}
    inline AwsRdsDbClusterDetails& AddDbClusterMembers(const AwsRdsDbClusterMember& value) { m_dbClusterMembersHasBeenSet = true; m_dbClusterMembers.push_back(value); return *this; }
    inline AwsRdsDbClusterDetails& AddDbClusterMembers(AwsRdsDbClusterMember&& value) { m_dbClusterMembersHasBeenSet = true; m_dbClusterMembers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline bool GetIamDatabaseAuthenticationEnabled() const{ return m_iamDatabaseAuthenticationEnabled; }
    inline bool IamDatabaseAuthenticationEnabledHasBeenSet() const { return m_iamDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIamDatabaseAuthenticationEnabled(bool value) { m_iamDatabaseAuthenticationEnabledHasBeenSet = true; m_iamDatabaseAuthenticationEnabled = value; }
    inline AwsRdsDbClusterDetails& WithIamDatabaseAuthenticationEnabled(bool value) { SetIamDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates if minor version upgrades are automatically applied to the
     * cluster.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline AwsRdsDbClusterDetails& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}
  private:

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_readerEndpoint;
    bool m_readerEndpointHasBeenSet = false;

    Aws::Vector<Aws::String> m_customEndpoints;
    bool m_customEndpointsHasBeenSet = false;

    bool m_multiAz;
    bool m_multiAzHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaIdentifiers;
    bool m_readReplicaIdentifiersHasBeenSet = false;

    Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dbClusterResourceId;
    bool m_dbClusterResourceIdHasBeenSet = false;

    Aws::Vector<AwsRdsDbClusterAssociatedRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet = false;

    Aws::String m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudWatchLogsExports;
    bool m_enabledCloudWatchLogsExportsHasBeenSet = false;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    bool m_httpEndpointEnabled;
    bool m_httpEndpointEnabledHasBeenSet = false;

    Aws::String m_activityStreamStatus;
    bool m_activityStreamStatusHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    bool m_crossAccountClone;
    bool m_crossAccountCloneHasBeenSet = false;

    Aws::Vector<AwsRdsDbDomainMembership> m_domainMemberships;
    bool m_domainMembershipsHasBeenSet = false;

    Aws::String m_dbClusterParameterGroup;
    bool m_dbClusterParameterGroupHasBeenSet = false;

    Aws::String m_dbSubnetGroup;
    bool m_dbSubnetGroupHasBeenSet = false;

    Aws::Vector<AwsRdsDbClusterOptionGroupMembership> m_dbClusterOptionGroupMemberships;
    bool m_dbClusterOptionGroupMembershipsHasBeenSet = false;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet = false;

    Aws::Vector<AwsRdsDbClusterMember> m_dbClusterMembers;
    bool m_dbClusterMembersHasBeenSet = false;

    bool m_iamDatabaseAuthenticationEnabled;
    bool m_iamDatabaseAuthenticationEnabledHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
