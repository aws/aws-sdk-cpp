/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ScalingConfiguration.h>
#include <aws/rds/model/ServerlessV2ScalingConfiguration.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class RestoreDBClusterFromSnapshotRequest : public RDSRequest
  {
  public:
    AWS_RDS_API RestoreDBClusterFromSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBClusterFromSnapshot"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version of the database engine to use for the new DB cluster.</p> <p>To
     * list all of the available engine versions for MySQL 5.6-compatible Aurora, use
     * the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide.</i> </p> <p>
     * <b>PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p> <p>To
     * list all of the available engine versions for MySQL 5.6-compatible Aurora, use
     * the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide.</i> </p> <p>
     * <b>PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p> <p>To
     * list all of the available engine versions for MySQL 5.6-compatible Aurora, use
     * the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide.</i> </p> <p>
     * <b>PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p> <p>To
     * list all of the available engine versions for MySQL 5.6-compatible Aurora, use
     * the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide.</i> </p> <p>
     * <b>PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p> <p>To
     * list all of the available engine versions for MySQL 5.6-compatible Aurora, use
     * the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide.</i> </p> <p>
     * <b>PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p> <p>To
     * list all of the available engine versions for MySQL 5.6-compatible Aurora, use
     * the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide.</i> </p> <p>
     * <b>PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p> <p>To
     * list all of the available engine versions for MySQL 5.6-compatible Aurora, use
     * the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide.</i> </p> <p>
     * <b>PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p> <p>To
     * list all of the available engine versions for MySQL 5.6-compatible Aurora, use
     * the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide.</i> </p> <p>
     * <b>PostgreSQL</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: This value must be <code>1150-65535</code> </p> <p>Default: The
     * same port as the original DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: This value must be <code>1150-65535</code> </p> <p>Default: The
     * same port as the original DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: This value must be <code>1150-65535</code> </p> <p>Default: The
     * same port as the original DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: This value must be <code>1150-65535</code> </p> <p>Default: The
     * same port as the original DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>The database name for the restored DB cluster.</p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database name for the restored DB cluster.</p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database name for the restored DB cluster.</p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database name for the restored DB cluster.</p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database name for the restored DB cluster.</p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database name for the restored DB cluster.</p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name for the restored DB cluster.</p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database name for the restored DB cluster.</p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the option group to use for the restored DB cluster.</p> <p>DB
     * clusters are associated with a default option group that can't be modified.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p> <p>DB
     * clusters are associated with a default option group that can't be modified.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p> <p>DB
     * clusters are associated with a default option group that can't be modified.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p> <p>DB
     * clusters are associated with a default option group that can't be modified.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p> <p>DB
     * clusters are associated with a default option group that can't be modified.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p> <p>DB
     * clusters are associated with a default option group that can't be modified.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p> <p>DB
     * clusters are associated with a default option group that can't be modified.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p> <p>DB
     * clusters are associated with a default option group that can't be modified.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The tags to be assigned to the restored DB cluster.</p> <p>Valid for: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p> <p>Valid for: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p> <p>Valid for: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p> <p>Valid for: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p> <p>Valid for: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p> <p>Valid for: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p> <p>Valid for: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p> <p>Valid for: Aurora
     * DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Web Services KMS key identifier to use when restoring an encrypted
     * DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>When you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> isn't
     * encrypted, then the restored DB cluster isn't encrypted.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier to use when restoring an encrypted
     * DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>When you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> isn't
     * encrypted, then the restored DB cluster isn't encrypted.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier to use when restoring an encrypted
     * DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>When you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> isn't
     * encrypted, then the restored DB cluster isn't encrypted.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier to use when restoring an encrypted
     * DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>When you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> isn't
     * encrypted, then the restored DB cluster isn't encrypted.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier to use when restoring an encrypted
     * DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>When you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> isn't
     * encrypted, then the restored DB cluster isn't encrypted.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier to use when restoring an encrypted
     * DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>When you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> isn't
     * encrypted, then the restored DB cluster isn't encrypted.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier to use when restoring an encrypted
     * DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>When you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> isn't
     * encrypted, then the restored DB cluster isn't encrypted.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier to use when restoring an encrypted
     * DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>When you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> isn't
     * encrypted, then the restored DB cluster isn't encrypted.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}


    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used.</p>
     * <p> <b>RDS for MySQL</b> </p> <p>Possible values are <code>error</code>,
     * <code>general</code>, and <code>slowquery</code>.</p> <p> <b>RDS for
     * PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code> and
     * <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values are
     * <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used.</p>
     * <p> <b>RDS for MySQL</b> </p> <p>Possible values are <code>error</code>,
     * <code>general</code>, and <code>slowquery</code>.</p> <p> <b>RDS for
     * PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code> and
     * <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values are
     * <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used.</p>
     * <p> <b>RDS for MySQL</b> </p> <p>Possible values are <code>error</code>,
     * <code>general</code>, and <code>slowquery</code>.</p> <p> <b>RDS for
     * PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code> and
     * <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values are
     * <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used.</p>
     * <p> <b>RDS for MySQL</b> </p> <p>Possible values are <code>error</code>,
     * <code>general</code>, and <code>slowquery</code>.</p> <p> <b>RDS for
     * PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code> and
     * <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values are
     * <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used.</p>
     * <p> <b>RDS for MySQL</b> </p> <p>Possible values are <code>error</code>,
     * <code>general</code>, and <code>slowquery</code>.</p> <p> <b>RDS for
     * PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code> and
     * <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values are
     * <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used.</p>
     * <p> <b>RDS for MySQL</b> </p> <p>Possible values are <code>error</code>,
     * <code>general</code>, and <code>slowquery</code>.</p> <p> <b>RDS for
     * PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code> and
     * <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values are
     * <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used.</p>
     * <p> <b>RDS for MySQL</b> </p> <p>Possible values are <code>error</code>,
     * <code>general</code>, and <code>slowquery</code>.</p> <p> <b>RDS for
     * PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code> and
     * <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values are
     * <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used.</p>
     * <p> <b>RDS for MySQL</b> </p> <p>Possible values are <code>error</code>,
     * <code>general</code>, and <code>slowquery</code>.</p> <p> <b>RDS for
     * PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code> and
     * <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values are
     * <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used.</p>
     * <p> <b>RDS for MySQL</b> </p> <p>Possible values are <code>error</code>,
     * <code>general</code>, and <code>slowquery</code>.</p> <p> <b>RDS for
     * PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code> and
     * <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values are
     * <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_CreateDBCluster.html">
     * CreateDBCluster</a>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}


    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const ScalingConfiguration& GetScalingConfiguration() const{ return m_scalingConfiguration; }

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetScalingConfiguration(const ScalingConfiguration& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetScalingConfiguration(ScalingConfiguration&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithScalingConfiguration(const ScalingConfiguration& value) { SetScalingConfiguration(value); return *this;}

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithScalingConfiguration(ScalingConfiguration&& value) { SetScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the restored DB cluster
     * to snapshots of the restored DB cluster. The default is not to copy them.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB cluster
     * to snapshots of the restored DB cluster. The default is not to copy them.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB cluster
     * to snapshots of the restored DB cluster. The default is not to copy them.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB cluster
     * to snapshots of the restored DB cluster. The default is not to copy them.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation. Currently, only MySQL, Microsoft
     * SQL Server, Oracle, and PostgreSQL DB instances can be created in an Active
     * Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation. Currently, only MySQL, Microsoft
     * SQL Server, Oracle, and PostgreSQL DB instances can be created in an Active
     * Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation. Currently, only MySQL, Microsoft
     * SQL Server, Oracle, and PostgreSQL DB instances can be created in an Active
     * Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation. Currently, only MySQL, Microsoft
     * SQL Server, Oracle, and PostgreSQL DB instances can be created in an Active
     * Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation. Currently, only MySQL, Microsoft
     * SQL Server, Oracle, and PostgreSQL DB instances can be created in an Active
     * Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation. Currently, only MySQL, Microsoft
     * SQL Server, Oracle, and PostgreSQL DB instances can be created in an Active
     * Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation. Currently, only MySQL, Microsoft
     * SQL Server, Oracle, and PostgreSQL DB instances can be created in an Active
     * Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation. Currently, only MySQL, Microsoft
     * SQL Server, Oracle, and PostgreSQL DB instances can be created in an Active
     * Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>The compute and memory capacity of the each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetDBClusterInstanceClass() const{ return m_dBClusterInstanceClass; }

    /**
     * <p>The compute and memory capacity of the each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline bool DBClusterInstanceClassHasBeenSet() const { return m_dBClusterInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetDBClusterInstanceClass(const Aws::String& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetDBClusterInstanceClass(Aws::String&& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetDBClusterInstanceClass(const char* value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterInstanceClass(const Aws::String& value) { SetDBClusterInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterInstanceClass(Aws::String&& value) { SetDBClusterInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterInstanceClass(const char* value) { SetDBClusterInstanceClass(value); return *this;}


    /**
     * <p>Specifies the storage type to be associated with the each DB instance in the
     * Multi-AZ DB cluster.</p> <p>Valid values: <code>io1</code> </p> <p>When
     * specified, a value for the <code>Iops</code> parameter is required.</p>
     * <p>Default: <code>io1</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the each DB instance in the
     * Multi-AZ DB cluster.</p> <p>Valid values: <code>io1</code> </p> <p>When
     * specified, a value for the <code>Iops</code> parameter is required.</p>
     * <p>Default: <code>io1</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type to be associated with the each DB instance in the
     * Multi-AZ DB cluster.</p> <p>Valid values: <code>io1</code> </p> <p>When
     * specified, a value for the <code>Iops</code> parameter is required.</p>
     * <p>Default: <code>io1</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the each DB instance in the
     * Multi-AZ DB cluster.</p> <p>Valid values: <code>io1</code> </p> <p>When
     * specified, a value for the <code>Iops</code> parameter is required.</p>
     * <p>Default: <code>io1</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the each DB instance in the
     * Multi-AZ DB cluster.</p> <p>Valid values: <code>io1</code> </p> <p>When
     * specified, a value for the <code>Iops</code> parameter is required.</p>
     * <p>Default: <code>io1</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the each DB instance in the
     * Multi-AZ DB cluster.</p> <p>Valid values: <code>io1</code> </p> <p>When
     * specified, a value for the <code>Iops</code> parameter is required.</p>
     * <p>Default: <code>io1</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the each DB instance in the
     * Multi-AZ DB cluster.</p> <p>Valid values: <code>io1</code> </p> <p>When
     * specified, a value for the <code>Iops</code> parameter is required.</p>
     * <p>Default: <code>io1</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the each DB instance in the
     * Multi-AZ DB cluster.</p> <p>Valid values: <code>io1</code> </p> <p>When
     * specified, a value for the <code>Iops</code> parameter is required.</p>
     * <p>Default: <code>io1</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Constraints: Must be a multiple between .5 and 50 of the storage amount for
     * the DB instance.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Constraints: Must be a multiple between .5 and 50 of the storage amount for
     * the DB instance.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Constraints: Must be a multiple between .5 and 50 of the storage amount for
     * the DB instance.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Constraints: Must be a multiple between .5 and 50 of the storage amount for
     * the DB instance.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>A value that indicates whether the DB cluster is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access is not permitted if the security group
     * assigned to the DB cluster doesn't permit it.</p> <p>When the DB cluster isn't
     * publicly accessible, it is an internal DB cluster with a DNS name that resolves
     * to a private IP address.</p> <p>Default: The default behavior varies depending
     * on whether <code>DBSubnetGroupName</code> is specified.</p> <p>If
     * <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the default VPC
     * in the target Region has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the subnets are part of a VPC that doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the subnets are
     * part of a VPC that has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>A value that indicates whether the DB cluster is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access is not permitted if the security group
     * assigned to the DB cluster doesn't permit it.</p> <p>When the DB cluster isn't
     * publicly accessible, it is an internal DB cluster with a DNS name that resolves
     * to a private IP address.</p> <p>Default: The default behavior varies depending
     * on whether <code>DBSubnetGroupName</code> is specified.</p> <p>If
     * <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the default VPC
     * in the target Region has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the subnets are part of a VPC that doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the subnets are
     * part of a VPC that has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access is not permitted if the security group
     * assigned to the DB cluster doesn't permit it.</p> <p>When the DB cluster isn't
     * publicly accessible, it is an internal DB cluster with a DNS name that resolves
     * to a private IP address.</p> <p>Default: The default behavior varies depending
     * on whether <code>DBSubnetGroupName</code> is specified.</p> <p>If
     * <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the default VPC
     * in the target Region has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the subnets are part of a VPC that doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the subnets are
     * part of a VPC that has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>A value that indicates whether the DB cluster is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access is not permitted if the security group
     * assigned to the DB cluster doesn't permit it.</p> <p>When the DB cluster isn't
     * publicly accessible, it is an internal DB cluster with a DNS name that resolves
     * to a private IP address.</p> <p>Default: The default behavior varies depending
     * on whether <code>DBSubnetGroupName</code> is specified.</p> <p>If
     * <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the default VPC
     * in the target Region has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the subnets are part of a VPC that doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the subnets are
     * part of a VPC that has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const{ return m_serverlessV2ScalingConfiguration; }

    
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }

    
    inline void SetServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = value; }

    
    inline void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::move(value); }

    
    inline RestoreDBClusterFromSnapshotRequest& WithServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { SetServerlessV2ScalingConfiguration(value); return *this;}

    
    inline RestoreDBClusterFromSnapshotRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { SetServerlessV2ScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    long long m_backtrackWindow;
    bool m_backtrackWindowHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet = false;

    ScalingConfiguration m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    Aws::String m_dBClusterInstanceClass;
    bool m_dBClusterInstanceClassHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
