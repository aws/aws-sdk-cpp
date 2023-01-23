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


    /**
     * <p>For all database engines except Aurora, specifies the allocated storage size
     * in gibibytes (GiB).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>For all database engines except Aurora, specifies the allocated storage size
     * in gibibytes (GiB).</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>For all database engines except Aurora, specifies the allocated storage size
     * in gibibytes (GiB).</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>For all database engines except Aurora, specifies the allocated storage size
     * in gibibytes (GiB).</p>
     */
    inline AwsRdsDbClusterDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline AwsRdsDbClusterDetails& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline AwsRdsDbClusterDetails& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline AwsRdsDbClusterDetails& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline AwsRdsDbClusterDetails& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created.</p>
     */
    inline AwsRdsDbClusterDetails& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The number of days for which automated backups are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained.</p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups are retained.</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained.</p>
     */
    inline AwsRdsDbClusterDetails& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>The name of the database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database.</p>
     */
    inline AwsRdsDbClusterDetails& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database.</p>
     */
    inline AwsRdsDbClusterDetails& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database.</p>
     */
    inline AwsRdsDbClusterDetails& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The current status of this DB cluster.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of this DB cluster.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of this DB cluster.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of this DB cluster.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of this DB cluster.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of this DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of this DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of this DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The connection endpoint for the primary instance of the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The reader endpoint for the DB cluster.</p>
     */
    inline const Aws::String& GetReaderEndpoint() const{ return m_readerEndpoint; }

    /**
     * <p>The reader endpoint for the DB cluster.</p>
     */
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }

    /**
     * <p>The reader endpoint for the DB cluster.</p>
     */
    inline void SetReaderEndpoint(const Aws::String& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = value; }

    /**
     * <p>The reader endpoint for the DB cluster.</p>
     */
    inline void SetReaderEndpoint(Aws::String&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::move(value); }

    /**
     * <p>The reader endpoint for the DB cluster.</p>
     */
    inline void SetReaderEndpoint(const char* value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint.assign(value); }

    /**
     * <p>The reader endpoint for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithReaderEndpoint(const Aws::String& value) { SetReaderEndpoint(value); return *this;}

    /**
     * <p>The reader endpoint for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithReaderEndpoint(Aws::String&& value) { SetReaderEndpoint(std::move(value)); return *this;}

    /**
     * <p>The reader endpoint for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithReaderEndpoint(const char* value) { SetReaderEndpoint(value); return *this;}


    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomEndpoints() const{ return m_customEndpoints; }

    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline bool CustomEndpointsHasBeenSet() const { return m_customEndpointsHasBeenSet; }

    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline void SetCustomEndpoints(const Aws::Vector<Aws::String>& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints = value; }

    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline void SetCustomEndpoints(Aws::Vector<Aws::String>&& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints = std::move(value); }

    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithCustomEndpoints(const Aws::Vector<Aws::String>& value) { SetCustomEndpoints(value); return *this;}

    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithCustomEndpoints(Aws::Vector<Aws::String>&& value) { SetCustomEndpoints(std::move(value)); return *this;}

    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddCustomEndpoints(const Aws::String& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(value); return *this; }

    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddCustomEndpoints(Aws::String&& value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of custom endpoints for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddCustomEndpoints(const char* value) { m_customEndpointsHasBeenSet = true; m_customEndpoints.push_back(value); return *this; }


    /**
     * <p>Whether the DB cluster has instances in multiple Availability Zones.</p>
     */
    inline bool GetMultiAz() const{ return m_multiAz; }

    /**
     * <p>Whether the DB cluster has instances in multiple Availability Zones.</p>
     */
    inline bool MultiAzHasBeenSet() const { return m_multiAzHasBeenSet; }

    /**
     * <p>Whether the DB cluster has instances in multiple Availability Zones.</p>
     */
    inline void SetMultiAz(bool value) { m_multiAzHasBeenSet = true; m_multiAz = value; }

    /**
     * <p>Whether the DB cluster has instances in multiple Availability Zones.</p>
     */
    inline AwsRdsDbClusterDetails& WithMultiAz(bool value) { SetMultiAz(value); return *this;}


    /**
     * <p>The name of the database engine to use for this DB cluster. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to use for this DB cluster. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> </ul>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to use for this DB cluster. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> </ul>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to use for this DB cluster. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> </ul>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to use for this DB cluster. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> </ul>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to use for this DB cluster. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> </ul>
     */
    inline AwsRdsDbClusterDetails& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to use for this DB cluster. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> </ul>
     */
    inline AwsRdsDbClusterDetails& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to use for this DB cluster. Valid values are
     * as follows:</p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p>
     * <code>aurora-mysql</code> </p> </li> <li> <p> <code>aurora-postgresql</code>
     * </p> </li> </ul>
     */
    inline AwsRdsDbClusterDetails& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline AwsRdsDbClusterDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline AwsRdsDbClusterDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline AwsRdsDbClusterDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline AwsRdsDbClusterDetails& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline AwsRdsDbClusterDetails& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline AwsRdsDbClusterDetails& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline AwsRdsDbClusterDetails& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline AwsRdsDbClusterDetails& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline AwsRdsDbClusterDetails& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline AwsRdsDbClusterDetails& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaIdentifiers() const{ return m_readReplicaIdentifiers; }

    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline bool ReadReplicaIdentifiersHasBeenSet() const { return m_readReplicaIdentifiersHasBeenSet; }

    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline void SetReadReplicaIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = value; }

    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline void SetReadReplicaIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers = std::move(value); }

    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithReadReplicaIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaIdentifiers(value); return *this;}

    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithReadReplicaIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddReadReplicaIdentifiers(const Aws::String& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(value); return *this; }

    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddReadReplicaIdentifiers(Aws::String&& value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the read replicas that are associated with this DB
     * cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddReadReplicaIdentifiers(const char* value) { m_readReplicaIdentifiersHasBeenSet = true; m_readReplicaIdentifiers.push_back(value); return *this; }


    /**
     * <p>A list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p>A list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }

    /**
     * <p>A list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p>A list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }

    /**
     * <p>A list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline AwsRdsDbClusterDetails& WithVpcSecurityGroups(const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>A list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline AwsRdsDbClusterDetails& WithVpcSecurityGroups(Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline AwsRdsDbClusterDetails& AddVpcSecurityGroups(const AwsRdsDbInstanceVpcSecurityGroup& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of VPC security groups that the DB cluster belongs to.</p>
     */
    inline AwsRdsDbClusterDetails& AddVpcSecurityGroups(AwsRdsDbInstanceVpcSecurityGroup&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the identifier that Amazon Route 53 assigns when you create a
     * hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>Specifies the identifier that Amazon Route 53 assigns when you create a
     * hosted zone.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>Specifies the identifier that Amazon Route 53 assigns when you create a
     * hosted zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>Specifies the identifier that Amazon Route 53 assigns when you create a
     * hosted zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>Specifies the identifier that Amazon Route 53 assigns when you create a
     * hosted zone.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>Specifies the identifier that Amazon Route 53 assigns when you create a
     * hosted zone.</p>
     */
    inline AwsRdsDbClusterDetails& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>Specifies the identifier that Amazon Route 53 assigns when you create a
     * hosted zone.</p>
     */
    inline AwsRdsDbClusterDetails& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>Specifies the identifier that Amazon Route 53 assigns when you create a
     * hosted zone.</p>
     */
    inline AwsRdsDbClusterDetails& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline AwsRdsDbClusterDetails& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The identifier of the DB cluster. The identifier must be unique within each
     * Amazon Web Services Region and is immutable.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const{ return m_dbClusterResourceId; }

    /**
     * <p>The identifier of the DB cluster. The identifier must be unique within each
     * Amazon Web Services Region and is immutable.</p>
     */
    inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }

    /**
     * <p>The identifier of the DB cluster. The identifier must be unique within each
     * Amazon Web Services Region and is immutable.</p>
     */
    inline void SetDbClusterResourceId(const Aws::String& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = value; }

    /**
     * <p>The identifier of the DB cluster. The identifier must be unique within each
     * Amazon Web Services Region and is immutable.</p>
     */
    inline void SetDbClusterResourceId(Aws::String&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::move(value); }

    /**
     * <p>The identifier of the DB cluster. The identifier must be unique within each
     * Amazon Web Services Region and is immutable.</p>
     */
    inline void SetDbClusterResourceId(const char* value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId.assign(value); }

    /**
     * <p>The identifier of the DB cluster. The identifier must be unique within each
     * Amazon Web Services Region and is immutable.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterResourceId(const Aws::String& value) { SetDbClusterResourceId(value); return *this;}

    /**
     * <p>The identifier of the DB cluster. The identifier must be unique within each
     * Amazon Web Services Region and is immutable.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterResourceId(Aws::String&& value) { SetDbClusterResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB cluster. The identifier must be unique within each
     * Amazon Web Services Region and is immutable.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterResourceId(const char* value) { SetDbClusterResourceId(value); return *this;}


    /**
     * <p>A list of the IAM roles that are associated with the DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbClusterAssociatedRole>& GetAssociatedRoles() const{ return m_associatedRoles; }

    /**
     * <p>A list of the IAM roles that are associated with the DB cluster.</p>
     */
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }

    /**
     * <p>A list of the IAM roles that are associated with the DB cluster.</p>
     */
    inline void SetAssociatedRoles(const Aws::Vector<AwsRdsDbClusterAssociatedRole>& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = value; }

    /**
     * <p>A list of the IAM roles that are associated with the DB cluster.</p>
     */
    inline void SetAssociatedRoles(Aws::Vector<AwsRdsDbClusterAssociatedRole>&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::move(value); }

    /**
     * <p>A list of the IAM roles that are associated with the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithAssociatedRoles(const Aws::Vector<AwsRdsDbClusterAssociatedRole>& value) { SetAssociatedRoles(value); return *this;}

    /**
     * <p>A list of the IAM roles that are associated with the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithAssociatedRoles(Aws::Vector<AwsRdsDbClusterAssociatedRole>&& value) { SetAssociatedRoles(std::move(value)); return *this;}

    /**
     * <p>A list of the IAM roles that are associated with the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddAssociatedRoles(const AwsRdsDbClusterAssociatedRole& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(value); return *this; }

    /**
     * <p>A list of the IAM roles that are associated with the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddAssociatedRoles(AwsRdsDbClusterAssociatedRole&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetClusterCreateTime() const{ return m_clusterCreateTime; }

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetClusterCreateTime(const Aws::String& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetClusterCreateTime(Aws::String&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetClusterCreateTime(const char* value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime.assign(value); }

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbClusterDetails& WithClusterCreateTime(const Aws::String& value) { SetClusterCreateTime(value); return *this;}

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbClusterDetails& WithClusterCreateTime(Aws::String&& value) { SetClusterCreateTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbClusterDetails& WithClusterCreateTime(const char* value) { SetClusterCreateTime(value); return *this;}


    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudWatchLogsExports() const{ return m_enabledCloudWatchLogsExports; }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline bool EnabledCloudWatchLogsExportsHasBeenSet() const { return m_enabledCloudWatchLogsExportsHasBeenSet; }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline void SetEnabledCloudWatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports = value; }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline void SetEnabledCloudWatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports = std::move(value); }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline AwsRdsDbClusterDetails& WithEnabledCloudWatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnabledCloudWatchLogsExports(value); return *this;}

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline AwsRdsDbClusterDetails& WithEnabledCloudWatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnabledCloudWatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline AwsRdsDbClusterDetails& AddEnabledCloudWatchLogsExports(const Aws::String& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.push_back(value); return *this; }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline AwsRdsDbClusterDetails& AddEnabledCloudWatchLogsExports(Aws::String&& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of log types that this DB cluster is configured to export to
     * CloudWatch Logs.</p>
     */
    inline AwsRdsDbClusterDetails& AddEnabledCloudWatchLogsExports(const char* value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The database engine mode of the DB cluster.Valid values are as follows:</p>
     * <ul> <li> <p> <code>global</code> </p> </li> <li> <p> <code>multimaster</code>
     * </p> </li> <li> <p> <code>parallelquery</code> </p> </li> <li> <p>
     * <code>provisioned</code> </p> </li> <li> <p> <code>serverless</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }

    /**
     * <p>The database engine mode of the DB cluster.Valid values are as follows:</p>
     * <ul> <li> <p> <code>global</code> </p> </li> <li> <p> <code>multimaster</code>
     * </p> </li> <li> <p> <code>parallelquery</code> </p> </li> <li> <p>
     * <code>provisioned</code> </p> </li> <li> <p> <code>serverless</code> </p> </li>
     * </ul>
     */
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }

    /**
     * <p>The database engine mode of the DB cluster.Valid values are as follows:</p>
     * <ul> <li> <p> <code>global</code> </p> </li> <li> <p> <code>multimaster</code>
     * </p> </li> <li> <p> <code>parallelquery</code> </p> </li> <li> <p>
     * <code>provisioned</code> </p> </li> <li> <p> <code>serverless</code> </p> </li>
     * </ul>
     */
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }

    /**
     * <p>The database engine mode of the DB cluster.Valid values are as follows:</p>
     * <ul> <li> <p> <code>global</code> </p> </li> <li> <p> <code>multimaster</code>
     * </p> </li> <li> <p> <code>parallelquery</code> </p> </li> <li> <p>
     * <code>provisioned</code> </p> </li> <li> <p> <code>serverless</code> </p> </li>
     * </ul>
     */
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }

    /**
     * <p>The database engine mode of the DB cluster.Valid values are as follows:</p>
     * <ul> <li> <p> <code>global</code> </p> </li> <li> <p> <code>multimaster</code>
     * </p> </li> <li> <p> <code>parallelquery</code> </p> </li> <li> <p>
     * <code>provisioned</code> </p> </li> <li> <p> <code>serverless</code> </p> </li>
     * </ul>
     */
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }

    /**
     * <p>The database engine mode of the DB cluster.Valid values are as follows:</p>
     * <ul> <li> <p> <code>global</code> </p> </li> <li> <p> <code>multimaster</code>
     * </p> </li> <li> <p> <code>parallelquery</code> </p> </li> <li> <p>
     * <code>provisioned</code> </p> </li> <li> <p> <code>serverless</code> </p> </li>
     * </ul>
     */
    inline AwsRdsDbClusterDetails& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}

    /**
     * <p>The database engine mode of the DB cluster.Valid values are as follows:</p>
     * <ul> <li> <p> <code>global</code> </p> </li> <li> <p> <code>multimaster</code>
     * </p> </li> <li> <p> <code>parallelquery</code> </p> </li> <li> <p>
     * <code>provisioned</code> </p> </li> <li> <p> <code>serverless</code> </p> </li>
     * </ul>
     */
    inline AwsRdsDbClusterDetails& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}

    /**
     * <p>The database engine mode of the DB cluster.Valid values are as follows:</p>
     * <ul> <li> <p> <code>global</code> </p> </li> <li> <p> <code>multimaster</code>
     * </p> </li> <li> <p> <code>parallelquery</code> </p> </li> <li> <p>
     * <code>provisioned</code> </p> </li> <li> <p> <code>serverless</code> </p> </li>
     * </ul>
     */
    inline AwsRdsDbClusterDetails& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}


    /**
     * <p>Whether the DB cluster has deletion protection enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>Whether the DB cluster has deletion protection enabled.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>Whether the DB cluster has deletion protection enabled.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>Whether the DB cluster has deletion protection enabled.</p>
     */
    inline AwsRdsDbClusterDetails& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>Whether the HTTP endpoint for an Aurora Serverless DB cluster is enabled.</p>
     */
    inline bool GetHttpEndpointEnabled() const{ return m_httpEndpointEnabled; }

    /**
     * <p>Whether the HTTP endpoint for an Aurora Serverless DB cluster is enabled.</p>
     */
    inline bool HttpEndpointEnabledHasBeenSet() const { return m_httpEndpointEnabledHasBeenSet; }

    /**
     * <p>Whether the HTTP endpoint for an Aurora Serverless DB cluster is enabled.</p>
     */
    inline void SetHttpEndpointEnabled(bool value) { m_httpEndpointEnabledHasBeenSet = true; m_httpEndpointEnabled = value; }

    /**
     * <p>Whether the HTTP endpoint for an Aurora Serverless DB cluster is enabled.</p>
     */
    inline AwsRdsDbClusterDetails& WithHttpEndpointEnabled(bool value) { SetHttpEndpointEnabled(value); return *this;}


    /**
     * <p>The status of the database activity stream. Valid values are as follows:</p>
     * <ul> <li> <p> <code>started</code> </p> </li> <li> <p> <code>starting</code>
     * </p> </li> <li> <p> <code>stopped</code> </p> </li> <li> <p>
     * <code>stopping</code> </p> </li> </ul>
     */
    inline const Aws::String& GetActivityStreamStatus() const{ return m_activityStreamStatus; }

    /**
     * <p>The status of the database activity stream. Valid values are as follows:</p>
     * <ul> <li> <p> <code>started</code> </p> </li> <li> <p> <code>starting</code>
     * </p> </li> <li> <p> <code>stopped</code> </p> </li> <li> <p>
     * <code>stopping</code> </p> </li> </ul>
     */
    inline bool ActivityStreamStatusHasBeenSet() const { return m_activityStreamStatusHasBeenSet; }

    /**
     * <p>The status of the database activity stream. Valid values are as follows:</p>
     * <ul> <li> <p> <code>started</code> </p> </li> <li> <p> <code>starting</code>
     * </p> </li> <li> <p> <code>stopped</code> </p> </li> <li> <p>
     * <code>stopping</code> </p> </li> </ul>
     */
    inline void SetActivityStreamStatus(const Aws::String& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = value; }

    /**
     * <p>The status of the database activity stream. Valid values are as follows:</p>
     * <ul> <li> <p> <code>started</code> </p> </li> <li> <p> <code>starting</code>
     * </p> </li> <li> <p> <code>stopped</code> </p> </li> <li> <p>
     * <code>stopping</code> </p> </li> </ul>
     */
    inline void SetActivityStreamStatus(Aws::String&& value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus = std::move(value); }

    /**
     * <p>The status of the database activity stream. Valid values are as follows:</p>
     * <ul> <li> <p> <code>started</code> </p> </li> <li> <p> <code>starting</code>
     * </p> </li> <li> <p> <code>stopped</code> </p> </li> <li> <p>
     * <code>stopping</code> </p> </li> </ul>
     */
    inline void SetActivityStreamStatus(const char* value) { m_activityStreamStatusHasBeenSet = true; m_activityStreamStatus.assign(value); }

    /**
     * <p>The status of the database activity stream. Valid values are as follows:</p>
     * <ul> <li> <p> <code>started</code> </p> </li> <li> <p> <code>starting</code>
     * </p> </li> <li> <p> <code>stopped</code> </p> </li> <li> <p>
     * <code>stopping</code> </p> </li> </ul>
     */
    inline AwsRdsDbClusterDetails& WithActivityStreamStatus(const Aws::String& value) { SetActivityStreamStatus(value); return *this;}

    /**
     * <p>The status of the database activity stream. Valid values are as follows:</p>
     * <ul> <li> <p> <code>started</code> </p> </li> <li> <p> <code>starting</code>
     * </p> </li> <li> <p> <code>stopped</code> </p> </li> <li> <p>
     * <code>stopping</code> </p> </li> </ul>
     */
    inline AwsRdsDbClusterDetails& WithActivityStreamStatus(Aws::String&& value) { SetActivityStreamStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the database activity stream. Valid values are as follows:</p>
     * <ul> <li> <p> <code>started</code> </p> </li> <li> <p> <code>starting</code>
     * </p> </li> <li> <p> <code>stopped</code> </p> </li> <li> <p>
     * <code>stopping</code> </p> </li> </ul>
     */
    inline AwsRdsDbClusterDetails& WithActivityStreamStatus(const char* value) { SetActivityStreamStatus(value); return *this;}


    /**
     * <p>Whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>Whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>Whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>Whether tags are copied from the DB cluster to snapshots of the DB
     * cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>Whether the DB cluster is a clone of a DB cluster owned by a different Amazon
     * Web Services account.</p>
     */
    inline bool GetCrossAccountClone() const{ return m_crossAccountClone; }

    /**
     * <p>Whether the DB cluster is a clone of a DB cluster owned by a different Amazon
     * Web Services account.</p>
     */
    inline bool CrossAccountCloneHasBeenSet() const { return m_crossAccountCloneHasBeenSet; }

    /**
     * <p>Whether the DB cluster is a clone of a DB cluster owned by a different Amazon
     * Web Services account.</p>
     */
    inline void SetCrossAccountClone(bool value) { m_crossAccountCloneHasBeenSet = true; m_crossAccountClone = value; }

    /**
     * <p>Whether the DB cluster is a clone of a DB cluster owned by a different Amazon
     * Web Services account.</p>
     */
    inline AwsRdsDbClusterDetails& WithCrossAccountClone(bool value) { SetCrossAccountClone(value); return *this;}


    /**
     * <p>The Active Directory domain membership records that are associated with the
     * DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbDomainMembership>& GetDomainMemberships() const{ return m_domainMemberships; }

    /**
     * <p>The Active Directory domain membership records that are associated with the
     * DB cluster.</p>
     */
    inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }

    /**
     * <p>The Active Directory domain membership records that are associated with the
     * DB cluster.</p>
     */
    inline void SetDomainMemberships(const Aws::Vector<AwsRdsDbDomainMembership>& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = value; }

    /**
     * <p>The Active Directory domain membership records that are associated with the
     * DB cluster.</p>
     */
    inline void SetDomainMemberships(Aws::Vector<AwsRdsDbDomainMembership>&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = std::move(value); }

    /**
     * <p>The Active Directory domain membership records that are associated with the
     * DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDomainMemberships(const Aws::Vector<AwsRdsDbDomainMembership>& value) { SetDomainMemberships(value); return *this;}

    /**
     * <p>The Active Directory domain membership records that are associated with the
     * DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDomainMemberships(Aws::Vector<AwsRdsDbDomainMembership>&& value) { SetDomainMemberships(std::move(value)); return *this;}

    /**
     * <p>The Active Directory domain membership records that are associated with the
     * DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddDomainMemberships(const AwsRdsDbDomainMembership& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(value); return *this; }

    /**
     * <p>The Active Directory domain membership records that are associated with the
     * DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddDomainMemberships(AwsRdsDbDomainMembership&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline const Aws::String& GetDbClusterParameterGroup() const{ return m_dbClusterParameterGroup; }

    /**
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline bool DbClusterParameterGroupHasBeenSet() const { return m_dbClusterParameterGroupHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline void SetDbClusterParameterGroup(const Aws::String& value) { m_dbClusterParameterGroupHasBeenSet = true; m_dbClusterParameterGroup = value; }

    /**
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline void SetDbClusterParameterGroup(Aws::String&& value) { m_dbClusterParameterGroupHasBeenSet = true; m_dbClusterParameterGroup = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline void SetDbClusterParameterGroup(const char* value) { m_dbClusterParameterGroupHasBeenSet = true; m_dbClusterParameterGroup.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterParameterGroup(const Aws::String& value) { SetDbClusterParameterGroup(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterParameterGroup(Aws::String&& value) { SetDbClusterParameterGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group for the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterParameterGroup(const char* value) { SetDbClusterParameterGroup(value); return *this;}


    /**
     * <p>The subnet group that is associated with the DB cluster, including the name,
     * description, and subnets in the subnet group.</p>
     */
    inline const Aws::String& GetDbSubnetGroup() const{ return m_dbSubnetGroup; }

    /**
     * <p>The subnet group that is associated with the DB cluster, including the name,
     * description, and subnets in the subnet group.</p>
     */
    inline bool DbSubnetGroupHasBeenSet() const { return m_dbSubnetGroupHasBeenSet; }

    /**
     * <p>The subnet group that is associated with the DB cluster, including the name,
     * description, and subnets in the subnet group.</p>
     */
    inline void SetDbSubnetGroup(const Aws::String& value) { m_dbSubnetGroupHasBeenSet = true; m_dbSubnetGroup = value; }

    /**
     * <p>The subnet group that is associated with the DB cluster, including the name,
     * description, and subnets in the subnet group.</p>
     */
    inline void SetDbSubnetGroup(Aws::String&& value) { m_dbSubnetGroupHasBeenSet = true; m_dbSubnetGroup = std::move(value); }

    /**
     * <p>The subnet group that is associated with the DB cluster, including the name,
     * description, and subnets in the subnet group.</p>
     */
    inline void SetDbSubnetGroup(const char* value) { m_dbSubnetGroupHasBeenSet = true; m_dbSubnetGroup.assign(value); }

    /**
     * <p>The subnet group that is associated with the DB cluster, including the name,
     * description, and subnets in the subnet group.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbSubnetGroup(const Aws::String& value) { SetDbSubnetGroup(value); return *this;}

    /**
     * <p>The subnet group that is associated with the DB cluster, including the name,
     * description, and subnets in the subnet group.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbSubnetGroup(Aws::String&& value) { SetDbSubnetGroup(std::move(value)); return *this;}

    /**
     * <p>The subnet group that is associated with the DB cluster, including the name,
     * description, and subnets in the subnet group.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbSubnetGroup(const char* value) { SetDbSubnetGroup(value); return *this;}


    /**
     * <p>The list of option group memberships for this DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbClusterOptionGroupMembership>& GetDbClusterOptionGroupMemberships() const{ return m_dbClusterOptionGroupMemberships; }

    /**
     * <p>The list of option group memberships for this DB cluster.</p>
     */
    inline bool DbClusterOptionGroupMembershipsHasBeenSet() const { return m_dbClusterOptionGroupMembershipsHasBeenSet; }

    /**
     * <p>The list of option group memberships for this DB cluster.</p>
     */
    inline void SetDbClusterOptionGroupMemberships(const Aws::Vector<AwsRdsDbClusterOptionGroupMembership>& value) { m_dbClusterOptionGroupMembershipsHasBeenSet = true; m_dbClusterOptionGroupMemberships = value; }

    /**
     * <p>The list of option group memberships for this DB cluster.</p>
     */
    inline void SetDbClusterOptionGroupMemberships(Aws::Vector<AwsRdsDbClusterOptionGroupMembership>&& value) { m_dbClusterOptionGroupMembershipsHasBeenSet = true; m_dbClusterOptionGroupMemberships = std::move(value); }

    /**
     * <p>The list of option group memberships for this DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterOptionGroupMemberships(const Aws::Vector<AwsRdsDbClusterOptionGroupMembership>& value) { SetDbClusterOptionGroupMemberships(value); return *this;}

    /**
     * <p>The list of option group memberships for this DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterOptionGroupMemberships(Aws::Vector<AwsRdsDbClusterOptionGroupMembership>&& value) { SetDbClusterOptionGroupMemberships(std::move(value)); return *this;}

    /**
     * <p>The list of option group memberships for this DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddDbClusterOptionGroupMemberships(const AwsRdsDbClusterOptionGroupMembership& value) { m_dbClusterOptionGroupMembershipsHasBeenSet = true; m_dbClusterOptionGroupMemberships.push_back(value); return *this; }

    /**
     * <p>The list of option group memberships for this DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddDbClusterOptionGroupMemberships(AwsRdsDbClusterOptionGroupMembership&& value) { m_dbClusterOptionGroupMembershipsHasBeenSet = true; m_dbClusterOptionGroupMemberships.push_back(std::move(value)); return *this; }


    /**
     * <p>The DB cluster identifier that the user assigned to the cluster. This
     * identifier is the unique key that identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }

    /**
     * <p>The DB cluster identifier that the user assigned to the cluster. This
     * identifier is the unique key that identifies a DB cluster.</p>
     */
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier that the user assigned to the cluster. This
     * identifier is the unique key that identifies a DB cluster.</p>
     */
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier that the user assigned to the cluster. This
     * identifier is the unique key that identifies a DB cluster.</p>
     */
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier that the user assigned to the cluster. This
     * identifier is the unique key that identifies a DB cluster.</p>
     */
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier that the user assigned to the cluster. This
     * identifier is the unique key that identifies a DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier that the user assigned to the cluster. This
     * identifier is the unique key that identifies a DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier that the user assigned to the cluster. This
     * identifier is the unique key that identifies a DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}


    /**
     * <p>The list of instances that make up the DB cluster.</p>
     */
    inline const Aws::Vector<AwsRdsDbClusterMember>& GetDbClusterMembers() const{ return m_dbClusterMembers; }

    /**
     * <p>The list of instances that make up the DB cluster.</p>
     */
    inline bool DbClusterMembersHasBeenSet() const { return m_dbClusterMembersHasBeenSet; }

    /**
     * <p>The list of instances that make up the DB cluster.</p>
     */
    inline void SetDbClusterMembers(const Aws::Vector<AwsRdsDbClusterMember>& value) { m_dbClusterMembersHasBeenSet = true; m_dbClusterMembers = value; }

    /**
     * <p>The list of instances that make up the DB cluster.</p>
     */
    inline void SetDbClusterMembers(Aws::Vector<AwsRdsDbClusterMember>&& value) { m_dbClusterMembersHasBeenSet = true; m_dbClusterMembers = std::move(value); }

    /**
     * <p>The list of instances that make up the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterMembers(const Aws::Vector<AwsRdsDbClusterMember>& value) { SetDbClusterMembers(value); return *this;}

    /**
     * <p>The list of instances that make up the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& WithDbClusterMembers(Aws::Vector<AwsRdsDbClusterMember>&& value) { SetDbClusterMembers(std::move(value)); return *this;}

    /**
     * <p>The list of instances that make up the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddDbClusterMembers(const AwsRdsDbClusterMember& value) { m_dbClusterMembersHasBeenSet = true; m_dbClusterMembers.push_back(value); return *this; }

    /**
     * <p>The list of instances that make up the DB cluster.</p>
     */
    inline AwsRdsDbClusterDetails& AddDbClusterMembers(AwsRdsDbClusterMember&& value) { m_dbClusterMembersHasBeenSet = true; m_dbClusterMembers.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether the mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline bool GetIamDatabaseAuthenticationEnabled() const{ return m_iamDatabaseAuthenticationEnabled; }

    /**
     * <p>Whether the mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline bool IamDatabaseAuthenticationEnabledHasBeenSet() const { return m_iamDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p>Whether the mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline void SetIamDatabaseAuthenticationEnabled(bool value) { m_iamDatabaseAuthenticationEnabledHasBeenSet = true; m_iamDatabaseAuthenticationEnabled = value; }

    /**
     * <p>Whether the mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline AwsRdsDbClusterDetails& WithIamDatabaseAuthenticationEnabled(bool value) { SetIamDatabaseAuthenticationEnabled(value); return *this;}

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
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
