/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DatabaseInsightsMode.h>
#include <aws/rds/model/MasterUserAuthenticationType.h>
#include <aws/rds/model/Tag.h>
#include <aws/rds/model/ProcessorFeature.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class CreateDBInstanceRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBInstance"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <dl> <dt>Amazon Aurora MySQL</dt> <dd> <p>The name of the database to
     * create when the primary DB instance of the Aurora MySQL DB cluster is created.
     * If this parameter isn't specified for an Aurora MySQL DB cluster, no database is
     * created in the DB cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1
     * to 64 alphanumeric characters.</p> </li> <li> <p>Must begin with a letter.
     * Subsequent characters can be letters, underscores, or digits (0-9).</p> </li>
     * <li> <p>Can't be a word reserved by the database engine.</p> </li> </ul> </dd>
     * <dt>Amazon Aurora PostgreSQL</dt> <dd> <p>The name of the database to create
     * when the primary DB instance of the Aurora PostgreSQL DB cluster is created. A
     * database named <code>postgres</code> is always created. If this parameter is
     * specified, an additional database with this name is created.</p>
     * <p>Constraints:</p> <ul> <li> <p>It must contain 1 to 63 alphanumeric
     * characters.</p> </li> <li> <p>Must begin with a letter. Subsequent characters
     * can be letters, underscores, or digits (0 to 9).</p> </li> <li> <p>Can't be a
     * word reserved by the database engine.</p> </li> </ul> </dd> <dt>Amazon RDS
     * Custom for Oracle</dt> <dd> <p>The Oracle System ID (SID) of the created RDS
     * Custom DB instance. If you don't specify a value, the default value is
     * <code>ORCL</code> for non-CDBs and <code>RDSCDB</code> for CDBs.</p> <p>Default:
     * <code>ORCL</code> </p> <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 8
     * alphanumeric characters.</p> </li> <li> <p>Must contain a letter.</p> </li> <li>
     * <p>Can't be a word reserved by the database engine.</p> </li> </ul> </dd>
     * <dt>Amazon RDS Custom for SQL Server</dt> <dd> <p>Not applicable. Must be
     * null.</p> </dd> <dt>RDS for Db2</dt> <dd> <p>The name of the database to create
     * when the DB instance is created. If this parameter isn't specified, no database
     * is created in the DB instance. In some cases, we recommend that you don't add a
     * database name. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/db2-db-instance-prereqs.html#db2-prereqs-additional-considerations">Additional
     * considerations</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Must
     * begin with a letter. Subsequent characters can be letters, underscores, or
     * digits (0-9).</p> </li> <li> <p>Can't be a word reserved by the specified
     * database engine.</p> </li> </ul> </dd> <dt>RDS for MariaDB</dt> <dd> <p>The name
     * of the database to create when the DB instance is created. If this parameter
     * isn't specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Must begin with a letter. Subsequent characters can be letters,
     * underscores, or digits (0-9).</p> </li> <li> <p>Can't be a word reserved by the
     * specified database engine.</p> </li> </ul> </dd> <dt>RDS for MySQL</dt> <dd>
     * <p>The name of the database to create when the DB instance is created. If this
     * parameter isn't specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Must begin with a letter. Subsequent characters can be letters,
     * underscores, or digits (0-9).</p> </li> <li> <p>Can't be a word reserved by the
     * specified database engine.</p> </li> </ul> </dd> <dt>RDS for Oracle</dt> <dd>
     * <p>The Oracle System ID (SID) of the created DB instance. If you don't specify a
     * value, the default value is <code>ORCL</code>. You can't specify the string
     * <code>null</code>, or any other reserved word, for <code>DBName</code>.</p>
     * <p>Default: <code>ORCL</code> </p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * longer than 8 characters.</p> </li> </ul> </dd> <dt>RDS for PostgreSQL</dt> <dd>
     * <p>The name of the database to create when the DB instance is created. A
     * database named <code>postgres</code> is always created. If this parameter is
     * specified, an additional database with this name is created.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 63 letters, numbers, or
     * underscores.</p> </li> <li> <p>Must begin with a letter. Subsequent characters
     * can be letters, underscores, or digits (0-9).</p> </li> <li> <p>Can't be a word
     * reserved by the specified database engine.</p> </li> </ul> </dd> <dt>RDS for SQL
     * Server</dt> <dd> <p>Not applicable. Must be null.</p> </dd> </dl>
     */
    inline const Aws::String& GetDBName() const { return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    template<typename DBNameT = Aws::String>
    void SetDBName(DBNameT&& value) { m_dBNameHasBeenSet = true; m_dBName = std::forward<DBNameT>(value); }
    template<typename DBNameT = Aws::String>
    CreateDBInstanceRequest& WithDBName(DBNameT&& value) { SetDBName(std::forward<DBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for this DB instance. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    CreateDBInstanceRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate for the DB instance.</p>
     * <p>This setting doesn't apply to Amazon Aurora DB instances. Aurora cluster
     * volumes automatically grow as the amount of data in your database increases,
     * though you are only charged for the space that you use in an Aurora cluster
     * volume.</p> <dl> <dt>Amazon RDS Custom</dt> <dd> <p>Constraints to the amount of
     * storage for each storage type are the following:</p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2, gp3): Must be an integer from 40 to 65536 for RDS
     * Custom for Oracle, 16384 for RDS Custom for SQL Server.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1, io2): Must be an integer from 40 to 65536 for
     * RDS Custom for Oracle, 16384 for RDS Custom for SQL Server.</p> </li> </ul>
     * </dd> <dt>RDS for Db2</dt> <dd> <p>Constraints to the amount of storage for each
     * storage type are the following:</p> <ul> <li> <p>General Purpose (SSD) storage
     * (gp3): Must be an integer from 20 to 65536.</p> </li> <li> <p>Provisioned IOPS
     * storage (io1, io2): Must be an integer from 100 to 65536.</p> </li> </ul> </dd>
     * <dt>RDS for MariaDB</dt> <dd> <p>Constraints to the amount of storage for each
     * storage type are the following:</p> <ul> <li> <p>General Purpose (SSD) storage
     * (gp2, gp3): Must be an integer from 20 to 65536.</p> </li> <li> <p>Provisioned
     * IOPS storage (io1, io2): Must be an integer from 100 to 65536.</p> </li> <li>
     * <p>Magnetic storage (standard): Must be an integer from 5 to 3072.</p> </li>
     * </ul> </dd> <dt>RDS for MySQL</dt> <dd> <p>Constraints to the amount of storage
     * for each storage type are the following:</p> <ul> <li> <p>General Purpose (SSD)
     * storage (gp2, gp3): Must be an integer from 20 to 65536.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1, io2): Must be an integer from 100 to
     * 65536.</p> </li> <li> <p>Magnetic storage (standard): Must be an integer from 5
     * to 3072.</p> </li> </ul> </dd> <dt>RDS for Oracle</dt> <dd> <p>Constraints to
     * the amount of storage for each storage type are the following:</p> <ul> <li>
     * <p>General Purpose (SSD) storage (gp2, gp3): Must be an integer from 20 to
     * 65536.</p> </li> <li> <p>Provisioned IOPS storage (io1, io2): Must be an integer
     * from 100 to 65536.</p> </li> <li> <p>Magnetic storage (standard): Must be an
     * integer from 10 to 3072.</p> </li> </ul> </dd> <dt>RDS for PostgreSQL</dt> <dd>
     * <p>Constraints to the amount of storage for each storage type are the
     * following:</p> <ul> <li> <p>General Purpose (SSD) storage (gp2, gp3): Must be an
     * integer from 20 to 65536.</p> </li> <li> <p>Provisioned IOPS storage (io1, io2):
     * Must be an integer from 100 to 65536.</p> </li> <li> <p>Magnetic storage
     * (standard): Must be an integer from 5 to 3072.</p> </li> </ul> </dd> <dt>RDS for
     * SQL Server</dt> <dd> <p>Constraints to the amount of storage for each storage
     * type are the following:</p> <ul> <li> <p>General Purpose (SSD) storage (gp2,
     * gp3):</p> <ul> <li> <p>Enterprise and Standard editions: Must be an integer from
     * 20 to 16384.</p> </li> <li> <p>Web and Express editions: Must be an integer from
     * 20 to 16384.</p> </li> </ul> </li> <li> <p>Provisioned IOPS storage (io1,
     * io2):</p> <ul> <li> <p>Enterprise and Standard editions: Must be an integer from
     * 100 to 16384.</p> </li> <li> <p>Web and Express editions: Must be an integer
     * from 100 to 16384.</p> </li> </ul> </li> <li> <p>Magnetic storage
     * (standard):</p> <ul> <li> <p>Enterprise and Standard editions: Must be an
     * integer from 20 to 1024.</p> </li> <li> <p>Web and Express editions: Must be an
     * integer from 20 to 1024.</p> </li> </ul> </li> </ul> </dd> </dl>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline CreateDBInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the DB instance, for example
     * <code>db.m5.large</code>. Not all DB instance classes are available in all
     * Amazon Web Services Regions, or for all database engines. For the full list of
     * DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance classes</a> in the <i>Amazon RDS User Guide</i> or <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.DBInstanceClass.html">Aurora
     * DB instance classes</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    template<typename DBInstanceClassT = Aws::String>
    void SetDBInstanceClass(DBInstanceClassT&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::forward<DBInstanceClassT>(value); }
    template<typename DBInstanceClassT = Aws::String>
    CreateDBInstanceRequest& WithDBInstanceClass(DBInstanceClassT&& value) { SetDBInstanceClass(std::forward<DBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine to use for this DB instance.</p> <p>Not every database
     * engine is available in every Amazon Web Services Region.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora-mysql</code> (for Aurora MySQL DB
     * instances)</p> </li> <li> <p> <code>aurora-postgresql</code> (for Aurora
     * PostgreSQL DB instances)</p> </li> <li> <p> <code>custom-oracle-ee</code> (for
     * RDS Custom for Oracle DB instances)</p> </li> <li> <p>
     * <code>custom-oracle-ee-cdb</code> (for RDS Custom for Oracle DB instances)</p>
     * </li> <li> <p> <code>custom-oracle-se2</code> (for RDS Custom for Oracle DB
     * instances)</p> </li> <li> <p> <code>custom-oracle-se2-cdb</code> (for RDS Custom
     * for Oracle DB instances)</p> </li> <li> <p> <code>custom-sqlserver-ee</code>
     * (for RDS Custom for SQL Server DB instances)</p> </li> <li> <p>
     * <code>custom-sqlserver-se</code> (for RDS Custom for SQL Server DB
     * instances)</p> </li> <li> <p> <code>custom-sqlserver-web</code> (for RDS Custom
     * for SQL Server DB instances)</p> </li> <li> <p>
     * <code>custom-sqlserver-dev</code> (for RDS Custom for SQL Server DB
     * instances)</p> </li> <li> <p> <code>db2-ae</code> </p> </li> <li> <p>
     * <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code> </p> </li> <li> <p>
     * <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p> </li> <li>
     * <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p> <code>oracle-se2</code> </p>
     * </li> <li> <p> <code>oracle-se2-cdb</code> </p> </li> <li> <p>
     * <code>postgres</code> </p> </li> <li> <p> <code>sqlserver-ee</code> </p> </li>
     * <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p> <code>sqlserver-ex</code>
     * </p> </li> <li> <p> <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateDBInstanceRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the master user.</p> <p>This setting doesn't apply to Amazon
     * Aurora DB instances. The name for the master user is managed by the DB
     * cluster.</p> <p>This setting is required for RDS DB instances.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 letters, numbers, or
     * underscores.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Can't be a reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    CreateDBInstanceRequest& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the master user.</p> <p>This setting doesn't apply to Amazon
     * Aurora DB instances. The password for the master user is managed by the DB
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>ManageMasterUserPassword</code> is turned on.</p> </li> <li> <p>Can
     * include any printable ASCII character except "/", """, or "@". For RDS for
     * Oracle, can't include the "&amp;" (ampersand) or the "'" (single quotes)
     * character.</p> </li> </ul> <p>Length Constraints:</p> <ul> <li> <p>RDS for Db2 -
     * Must contain from 8 to 255 characters.</p> </li> <li> <p>RDS for MariaDB - Must
     * contain from 8 to 41 characters.</p> </li> <li> <p>RDS for Microsoft SQL Server
     * - Must contain from 8 to 128 characters.</p> </li> <li> <p>RDS for MySQL - Must
     * contain from 8 to 41 characters.</p> </li> <li> <p>RDS for Oracle - Must contain
     * from 8 to 30 characters.</p> </li> <li> <p>RDS for PostgreSQL - Must contain
     * from 8 to 128 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    CreateDBInstanceRequest& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB security groups to associate with this DB instance.</p> <p>This
     * setting applies to the legacy EC2-Classic platform, which is no longer used to
     * create new DB instances. Use the <code>VpcSecurityGroupIds</code> setting
     * instead.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const { return m_dBSecurityGroups; }
    inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }
    template<typename DBSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetDBSecurityGroups(DBSecurityGroupsT&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::forward<DBSecurityGroupsT>(value); }
    template<typename DBSecurityGroupsT = Aws::Vector<Aws::String>>
    CreateDBInstanceRequest& WithDBSecurityGroups(DBSecurityGroupsT&& value) { SetDBSecurityGroups(std::forward<DBSecurityGroupsT>(value)); return *this;}
    template<typename DBSecurityGroupsT = Aws::String>
    CreateDBInstanceRequest& AddDBSecurityGroups(DBSecurityGroupsT&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.emplace_back(std::forward<DBSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with this DB
     * instance.</p> <p>This setting doesn't apply to Amazon Aurora DB instances. The
     * associated list of EC2 VPC security groups is managed by the DB cluster.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateDBInstanceRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    CreateDBInstanceRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (AZ) where the database will be created. For
     * information on Amazon Web Services Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p> <p>For Amazon Aurora, each Aurora DB cluster
     * hosts copies of its storage in three separate Availability Zones. Specify one of
     * these Availability Zones. Aurora automatically chooses an appropriate
     * Availability Zone if you don't specify one.</p> <p>Default: A random,
     * system-chosen Availability Zone in the endpoint's Amazon Web Services
     * Region.</p> <p>Constraints:</p> <ul> <li> <p>The <code>AvailabilityZone</code>
     * parameter can't be specified if the DB instance is a Multi-AZ deployment.</p>
     * </li> <li> <p>The specified Availability Zone must be in the same Amazon Web
     * Services Region as the current endpoint.</p> </li> </ul> <p>Example:
     * <code>us-east-1d</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateDBInstanceRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must match the name of an existing DB subnet group.</p> </li> </ul>
     * <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const { return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    template<typename DBSubnetGroupNameT = Aws::String>
    void SetDBSubnetGroupName(DBSubnetGroupNameT&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::forward<DBSubnetGroupNameT>(value); }
    template<typename DBSubnetGroupNameT = Aws::String>
    CreateDBInstanceRequest& WithDBSubnetGroupName(DBSubnetGroupNameT&& value) { SetDBSubnetGroupName(std::forward<DBSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time range each week during which system maintenance can occur. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>The
     * default is a 30-minute window selected at random from an 8-hour block of time
     * for each Amazon Web Services Region, occurring on a random day of the week.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>The day values must be
     * <code>mon | tue | wed | thu | fri | sat | sun</code>. </p> </li> <li> <p>Must be
     * in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with
     * the preferred backup window.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    CreateDBInstanceRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If you
     * don't specify a value, then Amazon RDS uses the default DB parameter group for
     * the specified DB engine and version.</p> <p>This setting doesn't apply to RDS
     * Custom DB instances.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const { return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    template<typename DBParameterGroupNameT = Aws::String>
    void SetDBParameterGroupName(DBParameterGroupNameT&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::forward<DBParameterGroupNameT>(value); }
    template<typename DBParameterGroupNameT = Aws::String>
    CreateDBInstanceRequest& WithDBParameterGroupName(DBParameterGroupNameT&& value) { SetDBParameterGroupName(std::forward<DBParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. Setting this parameter to
     * <code>0</code> disables automated backups.</p> <p>This setting doesn't apply to
     * Amazon Aurora DB instances. The retention period for automated backups is
     * managed by the DB cluster.</p> <p>Default: <code>1</code> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35.</p> </li> <li>
     * <p>Can't be set to 0 if the DB instance is a source to read replicas.</p> </li>
     * <li> <p>Can't be set to 0 for an RDS Custom for Oracle DB instance.</p> </li>
     * </ul>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline CreateDBInstanceRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. The
     * default is a 30-minute window selected at random from an 8-hour block of time
     * for each Amazon Web Services Region. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Backup
     * window</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting doesn't
     * apply to Amazon Aurora DB instances. The daily time range for creating automated
     * backups is managed by the DB cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in
     * Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the
     * preferred maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    CreateDBInstanceRequest& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the database accepts connections.</p> <p>This
     * setting doesn't apply to Aurora DB instances. The port number is managed by the
     * cluster.</p> <p>Valid Values: <code>1150-65535</code> </p> <p>Default:</p> <ul>
     * <li> <p>RDS for Db2 - <code>50000</code> </p> </li> <li> <p>RDS for MariaDB -
     * <code>3306</code> </p> </li> <li> <p>RDS for Microsoft SQL Server -
     * <code>1433</code> </p> </li> <li> <p>RDS for MySQL - <code>3306</code> </p>
     * </li> <li> <p>RDS for Oracle - <code>1521</code> </p> </li> <li> <p>RDS for
     * PostgreSQL - <code>5432</code> </p> </li> </ul> <p>Constraints:</p> <ul> <li>
     * <p>For RDS for Microsoft SQL Server, the value can't be <code>1234</code>,
     * <code>1434</code>, <code>3260</code>, <code>3343</code>, <code>3389</code>,
     * <code>47001</code>, or <code>49152-49156</code>.</p> </li> </ul>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateDBInstanceRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is a Multi-AZ deployment. You can't set the
     * <code>AvailabilityZone</code> parameter if the DB instance is a Multi-AZ
     * deployment.</p> <p>This setting doesn't apply to Amazon Aurora because the DB
     * instance Availability Zones (AZs) are managed by the DB cluster.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline CreateDBInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to use.</p> <p>This setting doesn't
     * apply to Amazon Aurora DB instances. The version number of the database engine
     * the DB instance uses is managed by the DB cluster.</p> <p>For a list of valid
     * engine versions, use the <code>DescribeDBEngineVersions</code> operation.</p>
     * <p>The following are the database engines and links to information about the
     * major and minor versions that are available with Amazon RDS. Not every database
     * engine is available for every Amazon Web Services Region.</p> <dl> <dt>Amazon
     * RDS Custom for Oracle</dt> <dd> <p>A custom engine version (CEV) that you have
     * previously created. This setting is required for RDS Custom for Oracle. The CEV
     * name has the following format: 19.<i>customized_string</i>. A valid CEV name is
     * <code>19.my_cev1</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-creating.html#custom-creating.create">
     * Creating an RDS Custom for Oracle DB instance</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </dd> <dt>Amazon RDS Custom for SQL Server</dt> <dd> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-reqs-limits-MS.html">RDS
     * Custom for SQL Server general requirements</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </dd> <dt>RDS for Db2</dt> <dd> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Db2.html#Db2.Concepts.VersionMgmt">Db2
     * on Amazon RDS versions</a> in the <i>Amazon RDS User Guide</i>.</p> </dd>
     * <dt>RDS for MariaDB</dt> <dd> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MariaDB.html#MariaDB.Concepts.VersionMgmt">MariaDB
     * on Amazon RDS versions</a> in the <i>Amazon RDS User Guide</i>.</p> </dd>
     * <dt>RDS for Microsoft SQL Server</dt> <dd> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.VersionSupport">Microsoft
     * SQL Server versions on Amazon RDS</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </dd> <dt>RDS for MySQL</dt> <dd> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS versions</a> in the <i>Amazon RDS User Guide</i>.</p> </dd>
     * <dt>RDS for Oracle</dt> <dd> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Appendix.Oracle.PatchComposition.html">Oracle
     * Database Engine release notes</a> in the <i>Amazon RDS User Guide</i>.</p> </dd>
     * <dt>RDS for PostgreSQL</dt> <dd> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </dd> </dl>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreateDBInstanceRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether minor engine upgrades are applied automatically to the DB
     * instance during the maintenance window. By default, minor engine upgrades are
     * applied automatically.</p> <p>If you create an RDS Custom DB instance, you must
     * set <code>AutoMinorVersionUpgrade</code> to <code>false</code>.</p> <p>For more
     * information about automatic minor version upgrades, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Upgrading.html#USER_UpgradeDBInstance.Upgrading.AutoMinorVersionUpgrades">Automatically
     * upgrading the minor engine version</a>.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline CreateDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model information for this DB instance.</p>  <p>License
     * models for RDS for Db2 require additional configuration. The bring your own
     * license (BYOL) model requires a custom parameter group and an Amazon Web
     * Services License Manager self-managed license. The Db2 license through Amazon
     * Web Services Marketplace model requires an Amazon Web Services Marketplace
     * subscription. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/db2-licensing.html">Amazon
     * RDS for Db2 licensing options</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>The default for RDS for Db2 is <code>bring-your-own-license</code>.</p>
     *  <p>This setting doesn't apply to Amazon Aurora or RDS Custom DB
     * instances.</p> <p>Valid Values:</p> <ul> <li> <p>RDS for Db2 -
     * <code>bring-your-own-license | marketplace-license</code> </p> </li> <li> <p>RDS
     * for MariaDB - <code>general-public-license</code> </p> </li> <li> <p>RDS for
     * Microsoft SQL Server - <code>license-included</code> </p> </li> <li> <p>RDS for
     * MySQL - <code>general-public-license</code> </p> </li> <li> <p>RDS for Oracle -
     * <code>bring-your-own-license | license-included</code> </p> </li> <li> <p>RDS
     * for PostgreSQL - <code>postgresql-license</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    template<typename LicenseModelT = Aws::String>
    void SetLicenseModel(LicenseModelT&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::forward<LicenseModelT>(value); }
    template<typename LicenseModelT = Aws::String>
    CreateDBInstanceRequest& WithLicenseModel(LicenseModelT&& value) { SetLicenseModel(std::forward<LicenseModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * initially allocate for the DB instance. For information about valid IOPS values,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html">Amazon
     * RDS DB instance storage</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to Amazon Aurora DB instances. Storage is managed by the
     * DB cluster.</p> <p>Constraints:</p> <ul> <li> <p>For RDS for Db2, MariaDB,
     * MySQL, Oracle, and PostgreSQL - Must be a multiple between .5 and 50 of the
     * storage amount for the DB instance.</p> </li> <li> <p>For RDS for SQL Server -
     * Must be a multiple between 1 and 50 of the storage amount for the DB
     * instance.</p> </li> </ul>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline CreateDBInstanceRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option group to associate the DB instance with.</p> <p>Permanent options,
     * such as the TDE option for Oracle Advanced Security TDE, can't be removed from
     * an option group. Also, that option group can't be removed from a DB instance
     * after it is associated with a DB instance.</p> <p>This setting doesn't apply to
     * Amazon Aurora or RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    template<typename OptionGroupNameT = Aws::String>
    void SetOptionGroupName(OptionGroupNameT&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::forward<OptionGroupNameT>(value); }
    template<typename OptionGroupNameT = Aws::String>
    CreateDBInstanceRequest& WithOptionGroupName(OptionGroupNameT&& value) { SetOptionGroupName(std::forward<OptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For supported engines, the character set (<code>CharacterSet</code>) to
     * associate the DB instance with.</p> <p>This setting doesn't apply to the
     * following DB instances:</p> <ul> <li> <p>Amazon Aurora - The character set is
     * managed by the DB cluster. For more information, see
     * <code>CreateDBCluster</code>.</p> </li> <li> <p>RDS Custom - However, if you
     * need to change the character set, you can change it on the database itself.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetCharacterSetName() const { return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    template<typename CharacterSetNameT = Aws::String>
    void SetCharacterSetName(CharacterSetNameT&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::forward<CharacterSetNameT>(value); }
    template<typename CharacterSetNameT = Aws::String>
    CreateDBInstanceRequest& WithCharacterSetName(CharacterSetNameT&& value) { SetCharacterSetName(std::forward<CharacterSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the NCHAR character set for the Oracle DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetNcharCharacterSetName() const { return m_ncharCharacterSetName; }
    inline bool NcharCharacterSetNameHasBeenSet() const { return m_ncharCharacterSetNameHasBeenSet; }
    template<typename NcharCharacterSetNameT = Aws::String>
    void SetNcharCharacterSetName(NcharCharacterSetNameT&& value) { m_ncharCharacterSetNameHasBeenSet = true; m_ncharCharacterSetName = std::forward<NcharCharacterSetNameT>(value); }
    template<typename NcharCharacterSetNameT = Aws::String>
    CreateDBInstanceRequest& WithNcharCharacterSetName(NcharCharacterSetNameT&& value) { SetNcharCharacterSetName(std::forward<NcharCharacterSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is publicly accessible.</p> <p>When the DB
     * instance is publicly accessible and you connect from outside of the DB
     * instance's virtual private cloud (VPC), its Domain Name System (DNS) endpoint
     * resolves to the public IP address. When you connect from within the same VPC as
     * the DB instance, the endpoint resolves to the private IP address. Access to the
     * DB instance is ultimately controlled by the security group it uses. That public
     * access is not permitted if the security group assigned to the DB instance
     * doesn't permit it.</p> <p>When the DB instance isn't publicly accessible, it is
     * an internal DB instance with a DNS name that resolves to a private IP
     * address.</p> <p>Default: The default behavior varies depending on whether
     * <code>DBSubnetGroupName</code> is specified.</p> <p>If
     * <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB instance is private.</p> </li> <li> <p>If the default VPC
     * in the target Region has an internet gateway attached to it, the DB instance is
     * public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the subnets are part of a VPC that doesn’t have an internet gateway
     * attached to it, the DB instance is private.</p> </li> <li> <p>If the subnets are
     * part of a VPC that has an internet gateway attached to it, the DB instance is
     * public.</p> </li> </ul>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline CreateDBInstanceRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the DB instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDBInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDBInstanceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the DB cluster that this DB instance will belong to.</p>
     * <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    CreateDBInstanceRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type to associate with the DB instance.</p> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> <p>This setting doesn't apply to
     * Amazon Aurora DB instances. Storage is managed by the DB cluster.</p> <p>Valid
     * Values: <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default:
     * <code>io1</code>, if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp3</code>.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    CreateDBInstanceRequest& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to Amazon Aurora or RDS Custom DB
     * instances.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const { return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    template<typename TdeCredentialArnT = Aws::String>
    void SetTdeCredentialArn(TdeCredentialArnT&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::forward<TdeCredentialArnT>(value); }
    template<typename TdeCredentialArnT = Aws::String>
    CreateDBInstanceRequest& WithTdeCredentialArn(TdeCredentialArnT&& value) { SetTdeCredentialArn(std::forward<TdeCredentialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const { return m_tdeCredentialPassword; }
    inline bool TdeCredentialPasswordHasBeenSet() const { return m_tdeCredentialPasswordHasBeenSet; }
    template<typename TdeCredentialPasswordT = Aws::String>
    void SetTdeCredentialPassword(TdeCredentialPasswordT&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::forward<TdeCredentialPasswordT>(value); }
    template<typename TdeCredentialPasswordT = Aws::String>
    CreateDBInstanceRequest& WithTdeCredentialPassword(TdeCredentialPasswordT&& value) { SetTdeCredentialPassword(std::forward<TdeCredentialPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifes whether the DB instance is encrypted. By default, it isn't
     * encrypted.</p> <p>For RDS Custom DB instances, either enable this setting or
     * leave it unset. Otherwise, Amazon RDS reports an error.</p> <p>This setting
     * doesn't apply to Amazon Aurora DB instances. The encryption for DB instances is
     * managed by the DB cluster.</p>
     */
    inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline CreateDBInstanceRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB instance.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>This setting doesn't
     * apply to Amazon Aurora DB instances. The Amazon Web Services KMS key identifier
     * is managed by the DB cluster. For more information, see
     * <code>CreateDBCluster</code>.</p> <p>If <code>StorageEncrypted</code> is
     * enabled, and you do not specify a value for the <code>KmsKeyId</code> parameter,
     * then Amazon RDS uses your default KMS key. There is a default KMS key for your
     * Amazon Web Services account. Your Amazon Web Services account has a different
     * default KMS key for each Amazon Web Services Region.</p> <p>For Amazon RDS
     * Custom, a KMS key is required for DB instances. For most RDS engines, if you
     * leave this parameter empty while enabling <code>StorageEncrypted</code>, the
     * engine uses the default KMS key. However, RDS Custom doesn't use the default key
     * when this parameter is empty. You must explicitly specify a key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateDBInstanceRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory directory ID to create the DB instance in. Currently,
     * you can create only Db2, MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB
     * instances in an Active Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to the following DB instances:</p> <ul> <li> <p>Amazon
     * Aurora (The domain is managed by the DB cluster.)</p> </li> <li> <p>RDS
     * Custom</p> </li> </ul>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    CreateDBInstanceRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline const Aws::String& GetDomainFqdn() const { return m_domainFqdn; }
    inline bool DomainFqdnHasBeenSet() const { return m_domainFqdnHasBeenSet; }
    template<typename DomainFqdnT = Aws::String>
    void SetDomainFqdn(DomainFqdnT&& value) { m_domainFqdnHasBeenSet = true; m_domainFqdn = std::forward<DomainFqdnT>(value); }
    template<typename DomainFqdnT = Aws::String>
    CreateDBInstanceRequest& WithDomainFqdn(DomainFqdnT&& value) { SetDomainFqdn(std::forward<DomainFqdnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline const Aws::String& GetDomainOu() const { return m_domainOu; }
    inline bool DomainOuHasBeenSet() const { return m_domainOuHasBeenSet; }
    template<typename DomainOuT = Aws::String>
    void SetDomainOu(DomainOuT&& value) { m_domainOuHasBeenSet = true; m_domainOu = std::forward<DomainOuT>(value); }
    template<typename DomainOuT = Aws::String>
    CreateDBInstanceRequest& WithDomainOu(DomainOuT&& value) { SetDomainOu(std::forward<DomainOuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline const Aws::String& GetDomainAuthSecretArn() const { return m_domainAuthSecretArn; }
    inline bool DomainAuthSecretArnHasBeenSet() const { return m_domainAuthSecretArnHasBeenSet; }
    template<typename DomainAuthSecretArnT = Aws::String>
    void SetDomainAuthSecretArn(DomainAuthSecretArnT&& value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn = std::forward<DomainAuthSecretArnT>(value); }
    template<typename DomainAuthSecretArnT = Aws::String>
    CreateDBInstanceRequest& WithDomainAuthSecretArn(DomainAuthSecretArnT&& value) { SetDomainAuthSecretArn(std::forward<DomainAuthSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainDnsIps() const { return m_domainDnsIps; }
    inline bool DomainDnsIpsHasBeenSet() const { return m_domainDnsIpsHasBeenSet; }
    template<typename DomainDnsIpsT = Aws::Vector<Aws::String>>
    void SetDomainDnsIps(DomainDnsIpsT&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps = std::forward<DomainDnsIpsT>(value); }
    template<typename DomainDnsIpsT = Aws::Vector<Aws::String>>
    CreateDBInstanceRequest& WithDomainDnsIps(DomainDnsIpsT&& value) { SetDomainDnsIps(std::forward<DomainDnsIpsT>(value)); return *this;}
    template<typename DomainDnsIpsT = Aws::String>
    CreateDBInstanceRequest& AddDomainDnsIps(DomainDnsIpsT&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.emplace_back(std::forward<DomainDnsIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy tags from the DB instance to snapshots of the DB
     * instance. By default, tags are not copied.</p> <p>This setting doesn't apply to
     * Amazon Aurora DB instances. Copying tags to snapshots is managed by the DB
     * cluster. Setting this value for an Aurora DB instance has no effect on the DB
     * cluster setting.</p>
     */
    inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline CreateDBInstanceRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collection of Enhanced Monitoring
     * metrics, specify <code>0</code>.</p> <p>If <code>MonitoringRoleArn</code> is
     * specified, then you must set <code>MonitoringInterval</code> to a value other
     * than <code>0</code>.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p> <p>Valid Values: <code>0 | 1 | 5 | 10 | 15 | 30 | 60</code> </p>
     * <p>Default: <code>0</code> </p>
     */
    inline int GetMonitoringInterval() const { return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline CreateDBInstanceRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>If <code>MonitoringInterval</code> is set to a value other than
     * <code>0</code>, then you must supply a <code>MonitoringRoleArn</code> value.</p>
     * <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const { return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    template<typename MonitoringRoleArnT = Aws::String>
    void SetMonitoringRoleArn(MonitoringRoleArnT&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::forward<MonitoringRoleArnT>(value); }
    template<typename MonitoringRoleArnT = Aws::String>
    CreateDBInstanceRequest& WithMonitoringRoleArn(MonitoringRoleArnT&& value) { SetMonitoringRoleArn(std::forward<MonitoringRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to the following DB instances:</p>
     * <ul> <li> <p>Amazon Aurora (The domain is managed by the DB cluster.)</p> </li>
     * <li> <p>RDS Custom</p> </li> </ul>
     */
    inline const Aws::String& GetDomainIAMRoleName() const { return m_domainIAMRoleName; }
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }
    template<typename DomainIAMRoleNameT = Aws::String>
    void SetDomainIAMRoleName(DomainIAMRoleNameT&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::forward<DomainIAMRoleNameT>(value); }
    template<typename DomainIAMRoleNameT = Aws::String>
    CreateDBInstanceRequest& WithDomainIAMRoleName(DomainIAMRoleNameT&& value) { SetDomainIAMRoleName(std::forward<DomainIAMRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order of priority in which an Aurora Replica is promoted to the primary
     * instance after a failure of the existing primary instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.AuroraHighAvailability.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     * <p>Default: <code>1</code> </p> <p>Valid Values: <code>0 - 15</code> </p>
     */
    inline int GetPromotionTier() const { return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline CreateDBInstanceRequest& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the DB instance. The time zone parameter is currently
     * supported only by <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/db2-time-zone">RDS
     * for Db2</a> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.TimeZone">RDS
     * for SQL Server</a>.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    CreateDBInstanceRequest& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>This setting doesn't apply to the following DB
     * instances:</p> <ul> <li> <p>Amazon Aurora (Mapping Amazon Web Services IAM
     * accounts to database accounts is managed by the DB cluster.)</p> </li> <li>
     * <p>RDS Custom</p> </li> </ul>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const { return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline CreateDBInstanceRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of Database Insights to enable for the DB instance.</p> 
     * <p>Aurora DB instances inherit this value from the DB cluster, so you can't
     * change this value.</p> 
     */
    inline DatabaseInsightsMode GetDatabaseInsightsMode() const { return m_databaseInsightsMode; }
    inline bool DatabaseInsightsModeHasBeenSet() const { return m_databaseInsightsModeHasBeenSet; }
    inline void SetDatabaseInsightsMode(DatabaseInsightsMode value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = value; }
    inline CreateDBInstanceRequest& WithDatabaseInsightsMode(DatabaseInsightsMode value) { SetDatabaseInsightsMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable Performance Insights for the DB instance. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline bool GetEnablePerformanceInsights() const { return m_enablePerformanceInsights; }
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }
    inline CreateDBInstanceRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS Custom
     * DB instances.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const { return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    template<typename PerformanceInsightsKMSKeyIdT = Aws::String>
    void SetPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::forward<PerformanceInsightsKMSKeyIdT>(value); }
    template<typename PerformanceInsightsKMSKeyIdT = Aws::String>
    CreateDBInstanceRequest& WithPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) { SetPerformanceInsightsKMSKeyId(std::forward<PerformanceInsightsKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain Performance Insights data.</p> <p>This setting
     * doesn't apply to RDS Custom DB instances.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>7</code> </p> </li> <li> <p> <i>month</i> * 31, where <i>month</i> is a
     * number of months from 1-23. Examples: <code>93</code> (3 months * 31),
     * <code>341</code> (11 months * 31), <code>589</code> (19 months * 31)</p> </li>
     * <li> <p> <code>731</code> </p> </li> </ul> <p>Default: <code>7</code> days</p>
     * <p>If you specify a retention period that isn't valid, such as <code>94</code>,
     * Amazon RDS returns an error.</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const { return m_performanceInsightsRetentionPeriod; }
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }
    inline CreateDBInstanceRequest& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of log types to enable for exporting to CloudWatch Logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">
     * Publishing Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to the following DB instances:</p>
     * <ul> <li> <p>Amazon Aurora (CloudWatch Logs exports are managed by the DB
     * cluster.)</p> </li> <li> <p>RDS Custom</p> </li> </ul> <p>The following values
     * are valid for each DB engine:</p> <ul> <li> <p>RDS for Db2 - <code>diag.log |
     * notify.log | iam-db-auth-error</code> </p> </li> <li> <p>RDS for MariaDB -
     * <code>audit | error | general | slowquery | iam-db-auth-error</code> </p> </li>
     * <li> <p>RDS for Microsoft SQL Server - <code>agent | error</code> </p> </li>
     * <li> <p>RDS for MySQL - <code>audit | error | general | slowquery |
     * iam-db-auth-error</code> </p> </li> <li> <p>RDS for Oracle - <code>alert | audit
     * | listener | trace | oemagent</code> </p> </li> <li> <p>RDS for PostgreSQL -
     * <code>postgresql | upgrade | iam-db-auth-error</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const { return m_enableCloudwatchLogsExports; }
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }
    template<typename EnableCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    void SetEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::forward<EnableCloudwatchLogsExportsT>(value); }
    template<typename EnableCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    CreateDBInstanceRequest& WithEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { SetEnableCloudwatchLogsExports(std::forward<EnableCloudwatchLogsExportsT>(value)); return *this;}
    template<typename EnableCloudwatchLogsExportsT = Aws::String>
    CreateDBInstanceRequest& AddEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.emplace_back(std::forward<EnableCloudwatchLogsExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to Amazon
     * Aurora or RDS Custom DB instances.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const { return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    template<typename ProcessorFeaturesT = Aws::Vector<ProcessorFeature>>
    void SetProcessorFeatures(ProcessorFeaturesT&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::forward<ProcessorFeaturesT>(value); }
    template<typename ProcessorFeaturesT = Aws::Vector<ProcessorFeature>>
    CreateDBInstanceRequest& WithProcessorFeatures(ProcessorFeaturesT&& value) { SetProcessorFeatures(std::forward<ProcessorFeaturesT>(value)); return *this;}
    template<typename ProcessorFeaturesT = ProcessorFeature>
    CreateDBInstanceRequest& AddProcessorFeatures(ProcessorFeaturesT&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.emplace_back(std::forward<ProcessorFeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p> <p>This setting doesn't apply to Amazon Aurora
     * DB instances. You can enable or disable deletion protection for the DB cluster.
     * For more information, see <code>CreateDBCluster</code>. DB instances in a DB
     * cluster can be deleted even when deletion protection is enabled for the DB
     * cluster.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline CreateDBInstanceRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p> <p>This setting doesn't apply to the following
     * DB instances:</p> <ul> <li> <p>Amazon Aurora (Storage is managed by the DB
     * cluster.)</p> </li> <li> <p>RDS Custom</p> </li> </ul>
     */
    inline int GetMaxAllocatedStorage() const { return m_maxAllocatedStorage; }
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }
    inline CreateDBInstanceRequest& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable a customer-owned IP address (CoIP) for an RDS on
     * Outposts DB instance.</p> <p>A <i>CoIP</i> provides local or external
     * connectivity to resources in your Outpost subnets through your on-premises
     * network. For some use cases, a CoIP can provide lower latency for connections to
     * the DB instance from outside of its virtual private cloud (VPC) on your local
     * network.</p> <p>For more information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline bool GetEnableCustomerOwnedIp() const { return m_enableCustomerOwnedIp; }
    inline bool EnableCustomerOwnedIpHasBeenSet() const { return m_enableCustomerOwnedIpHasBeenSet; }
    inline void SetEnableCustomerOwnedIp(bool value) { m_enableCustomerOwnedIpHasBeenSet = true; m_enableCustomerOwnedIp = value; }
    inline CreateDBInstanceRequest& WithEnableCustomerOwnedIp(bool value) { SetEnableCustomerOwnedIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance.</p> <p>This setting is required for RDS Custom.</p>
     * <p>Constraints:</p> <ul> <li> <p>The profile must exist in your account.</p>
     * </li> <li> <p>The profile must have an IAM role that Amazon EC2 has permissions
     * to assume.</p> </li> <li> <p>The instance profile name and the associated IAM
     * role name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline const Aws::String& GetCustomIamInstanceProfile() const { return m_customIamInstanceProfile; }
    inline bool CustomIamInstanceProfileHasBeenSet() const { return m_customIamInstanceProfileHasBeenSet; }
    template<typename CustomIamInstanceProfileT = Aws::String>
    void SetCustomIamInstanceProfile(CustomIamInstanceProfileT&& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = std::forward<CustomIamInstanceProfileT>(value); }
    template<typename CustomIamInstanceProfileT = Aws::String>
    CreateDBInstanceRequest& WithCustomIamInstanceProfile(CustomIamInstanceProfileT&& value) { SetCustomIamInstanceProfile(std::forward<CustomIamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location for storing automated backups and manual snapshots.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>local</code> (Dedicated Local Zone)</p> </li>
     * <li> <p> <code>outposts</code> (Amazon Web Services Outposts)</p> </li> <li> <p>
     * <code>region</code> (Amazon Web Services Region)</p> </li> </ul> <p>Default:
     * <code>region</code> </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetBackupTarget() const { return m_backupTarget; }
    inline bool BackupTargetHasBeenSet() const { return m_backupTargetHasBeenSet; }
    template<typename BackupTargetT = Aws::String>
    void SetBackupTarget(BackupTargetT&& value) { m_backupTargetHasBeenSet = true; m_backupTarget = std::forward<BackupTargetT>(value); }
    template<typename BackupTargetT = Aws::String>
    CreateDBInstanceRequest& WithBackupTarget(BackupTargetT&& value) { SetBackupTarget(std::forward<BackupTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values: <code>IPV4 | DUAL</code> </p>
     */
    inline const Aws::String& GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    template<typename NetworkTypeT = Aws::String>
    void SetNetworkType(NetworkTypeT&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::forward<NetworkTypeT>(value); }
    template<typename NetworkTypeT = Aws::String>
    CreateDBInstanceRequest& WithNetworkType(NetworkTypeT&& value) { SetNetworkType(std::forward<NetworkTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage throughput value, in mebibyte per second (MiBps), for the DB
     * instance.</p> <p>This setting applies only to the <code>gp3</code> storage
     * type.</p> <p>This setting doesn't apply to Amazon Aurora or RDS Custom DB
     * instances.</p>
     */
    inline int GetStorageThroughput() const { return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline CreateDBInstanceRequest& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to manage the master user password with Amazon Web Services
     * Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul>
     */
    inline bool GetManageMasterUserPassword() const { return m_manageMasterUserPassword; }
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }
    inline CreateDBInstanceRequest& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB instance.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const { return m_masterUserSecretKmsKeyId; }
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }
    template<typename MasterUserSecretKmsKeyIdT = Aws::String>
    void SetMasterUserSecretKmsKeyId(MasterUserSecretKmsKeyIdT&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::forward<MasterUserSecretKmsKeyIdT>(value); }
    template<typename MasterUserSecretKmsKeyIdT = Aws::String>
    CreateDBInstanceRequest& WithMasterUserSecretKmsKeyId(MasterUserSecretKmsKeyIdT&& value) { SetMasterUserSecretKmsKeyId(std::forward<MasterUserSecretKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate identifier to use for the DB instance's server
     * certificate.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL.html">Using
     * SSL/TLS to encrypt a connection to a DB instance</a> in the <i>Amazon RDS User
     * Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL.html">
     * Using SSL/TLS to encrypt a connection to a DB cluster</a> in the <i>Amazon
     * Aurora User Guide</i>.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const { return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    template<typename CACertificateIdentifierT = Aws::String>
    void SetCACertificateIdentifier(CACertificateIdentifierT&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::forward<CACertificateIdentifierT>(value); }
    template<typename CACertificateIdentifierT = Aws::String>
    CreateDBInstanceRequest& WithCACertificateIdentifier(CACertificateIdentifierT&& value) { SetCACertificateIdentifier(std::forward<CACertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle system identifier (SID), which is the name of the Oracle database
     * instance that manages your database files. In this context, the term "Oracle
     * database instance" refers exclusively to the system global area (SGA) and Oracle
     * background processes. If you don't specify a SID, the value defaults to
     * <code>RDSCDB</code>. The Oracle SID is also the name of your CDB.</p>
     */
    inline const Aws::String& GetDBSystemId() const { return m_dBSystemId; }
    inline bool DBSystemIdHasBeenSet() const { return m_dBSystemIdHasBeenSet; }
    template<typename DBSystemIdT = Aws::String>
    void SetDBSystemId(DBSystemIdT&& value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId = std::forward<DBSystemIdT>(value); }
    template<typename DBSystemIdT = Aws::String>
    CreateDBInstanceRequest& WithDBSystemId(DBSystemIdT&& value) { SetDBSystemId(std::forward<DBSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance has a dedicated log volume (DLV)
     * enabled.</p>
     */
    inline bool GetDedicatedLogVolume() const { return m_dedicatedLogVolume; }
    inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
    inline void SetDedicatedLogVolume(bool value) { m_dedicatedLogVolumeHasBeenSet = true; m_dedicatedLogVolume = value; }
    inline CreateDBInstanceRequest& WithDedicatedLogVolume(bool value) { SetDedicatedLogVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to use the multi-tenant configuration or the single-tenant
     * configuration (default). This parameter only applies to RDS for Oracle container
     * database (CDB) engines.</p> <p>Note the following restrictions: </p> <ul> <li>
     * <p>The DB engine that you specify in the request must support the multi-tenant
     * configuration. If you attempt to enable the multi-tenant configuration on a DB
     * engine that doesn't support it, the request fails.</p> </li> <li> <p>If you
     * specify the multi-tenant configuration when you create your DB instance, you
     * can't later modify this DB instance to use the single-tenant configuration.</p>
     * </li> </ul>
     */
    inline bool GetMultiTenant() const { return m_multiTenant; }
    inline bool MultiTenantHasBeenSet() const { return m_multiTenantHasBeenSet; }
    inline void SetMultiTenant(bool value) { m_multiTenantHasBeenSet = true; m_multiTenant = value; }
    inline CreateDBInstanceRequest& WithMultiTenant(bool value) { SetMultiTenant(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle type for this DB instance.</p>  <p>By default, this
     * value is set to <code>open-source-rds-extended-support</code>, which enrolls
     * your DB instance into Amazon RDS Extended Support. At the end of standard
     * support, you can avoid charges for Extended Support by setting the value to
     * <code>open-source-rds-extended-support-disabled</code>. In this case, creating
     * the DB instance will fail if the DB major version is past its end of standard
     * support date.</p>  <p>This setting applies only to RDS for MySQL and RDS
     * for PostgreSQL. For Amazon Aurora DB instances, the life cycle type is managed
     * by the DB cluster.</p> <p>You can use this setting to enroll your DB instance
     * into Amazon RDS Extended Support. With RDS Extended Support, you can run the
     * selected major engine version on your DB instance past the end of standard
     * support for that engine version. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/extended-support.html">Amazon
     * RDS Extended Support with Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid Values: <code>open-source-rds-extended-support |
     * open-source-rds-extended-support-disabled</code> </p> <p>Default:
     * <code>open-source-rds-extended-support</code> </p>
     */
    inline const Aws::String& GetEngineLifecycleSupport() const { return m_engineLifecycleSupport; }
    inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
    template<typename EngineLifecycleSupportT = Aws::String>
    void SetEngineLifecycleSupport(EngineLifecycleSupportT&& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = std::forward<EngineLifecycleSupportT>(value); }
    template<typename EngineLifecycleSupportT = Aws::String>
    CreateDBInstanceRequest& WithEngineLifecycleSupport(EngineLifecycleSupportT&& value) { SetEngineLifecycleSupport(std::forward<EngineLifecycleSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the authentication type for the master user. With IAM master user
     * authentication, you can configure the master DB user with IAM database
     * authentication when you create a DB instance.</p> <p>You can specify one of the
     * following values:</p> <ul> <li> <p> <code>password</code> - Use standard
     * database authentication with a password.</p> </li> <li> <p>
     * <code>iam-db-auth</code> - Use IAM database authentication for the master
     * user.</p> </li> </ul> <p>This option is only valid for RDS for PostgreSQL and
     * Aurora PostgreSQL engines.</p>
     */
    inline MasterUserAuthenticationType GetMasterUserAuthenticationType() const { return m_masterUserAuthenticationType; }
    inline bool MasterUserAuthenticationTypeHasBeenSet() const { return m_masterUserAuthenticationTypeHasBeenSet; }
    inline void SetMasterUserAuthenticationType(MasterUserAuthenticationType value) { m_masterUserAuthenticationTypeHasBeenSet = true; m_masterUserAuthenticationType = value; }
    inline CreateDBInstanceRequest& WithMasterUserAuthenticationType(MasterUserAuthenticationType value) { SetMasterUserAuthenticationType(value); return *this;}
    ///@}
  private:

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_ncharCharacterSetName;
    bool m_ncharCharacterSetNameHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet = false;

    bool m_storageEncrypted{false};
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainFqdn;
    bool m_domainFqdnHasBeenSet = false;

    Aws::String m_domainOu;
    bool m_domainOuHasBeenSet = false;

    Aws::String m_domainAuthSecretArn;
    bool m_domainAuthSecretArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainDnsIps;
    bool m_domainDnsIpsHasBeenSet = false;

    bool m_copyTagsToSnapshot{false};
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval{0};
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    int m_promotionTier{0};
    bool m_promotionTierHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication{false};
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    DatabaseInsightsMode m_databaseInsightsMode{DatabaseInsightsMode::NOT_SET};
    bool m_databaseInsightsModeHasBeenSet = false;

    bool m_enablePerformanceInsights{false};
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod{0};
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    int m_maxAllocatedStorage{0};
    bool m_maxAllocatedStorageHasBeenSet = false;

    bool m_enableCustomerOwnedIp{false};
    bool m_enableCustomerOwnedIpHasBeenSet = false;

    Aws::String m_customIamInstanceProfile;
    bool m_customIamInstanceProfileHasBeenSet = false;

    Aws::String m_backupTarget;
    bool m_backupTargetHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    int m_storageThroughput{0};
    bool m_storageThroughputHasBeenSet = false;

    bool m_manageMasterUserPassword{false};
    bool m_manageMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_dBSystemId;
    bool m_dBSystemIdHasBeenSet = false;

    bool m_dedicatedLogVolume{false};
    bool m_dedicatedLogVolumeHasBeenSet = false;

    bool m_multiTenant{false};
    bool m_multiTenantHasBeenSet = false;

    Aws::String m_engineLifecycleSupport;
    bool m_engineLifecycleSupportHasBeenSet = false;

    MasterUserAuthenticationType m_masterUserAuthenticationType{MasterUserAuthenticationType::NOT_SET};
    bool m_masterUserAuthenticationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
