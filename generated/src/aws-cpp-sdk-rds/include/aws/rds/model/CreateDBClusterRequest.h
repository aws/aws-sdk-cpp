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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class CreateDBClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A list of Availability Zones (AZs) where DB instances in the DB cluster can
     * be created.</p> <p>For information on Amazon Web Services Regions and
     * Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of Availability Zones (AZs) where DB instances in the DB cluster can
     * be created.</p> <p>For information on Amazon Web Services Regions and
     * Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of Availability Zones (AZs) where DB instances in the DB cluster can
     * be created.</p> <p>For information on Amazon Web Services Regions and
     * Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Availability Zones (AZs) where DB instances in the DB cluster can
     * be created.</p> <p>For information on Amazon Web Services Regions and
     * Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of Availability Zones (AZs) where DB instances in the DB cluster can
     * be created.</p> <p>For information on Amazon Web Services Regions and
     * Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Availability Zones (AZs) where DB instances in the DB cluster can
     * be created.</p> <p>For information on Amazon Web Services Regions and
     * Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of Availability Zones (AZs) where DB instances in the DB cluster can
     * be created.</p> <p>For information on Amazon Web Services Regions and
     * Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Availability Zones (AZs) where DB instances in the DB cluster can
     * be created.</p> <p>For information on Amazon Web Services Regions and
     * Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Availability Zones (AZs) where DB instances in the DB cluster can
     * be created.</p> <p>For information on Amazon Web Services Regions and
     * Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Default:
     * 1</p> <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li>
     * </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Default:
     * 1</p> <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li>
     * </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Default:
     * 1</p> <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li>
     * </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Default:
     * 1</p> <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li>
     * </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}


    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you do not
     * provide a name, Amazon RDS doesn't create a database in the DB cluster you are
     * creating.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you do not
     * provide a name, Amazon RDS doesn't create a database in the DB cluster you are
     * creating.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you do not
     * provide a name, Amazon RDS doesn't create a database in the DB cluster you are
     * creating.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you do not
     * provide a name, Amazon RDS doesn't create a database in the DB cluster you are
     * creating.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you do not
     * provide a name, Amazon RDS doesn't create a database in the DB cluster you are
     * creating.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you do not
     * provide a name, Amazon RDS doesn't create a database in the DB cluster you are
     * creating.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you do not
     * provide a name, Amazon RDS doesn't create a database in the DB cluster you are
     * creating.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you do not
     * provide a name, Amazon RDS doesn't create a database in the DB cluster you are
     * creating.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p> <p>Valid for: Aurora DB
     * clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If you do not specify a value, then the default DB cluster parameter group for
     * the specified DB engine and version is used.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB cluster parameter
     * group.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If you do not specify a value, then the default DB cluster parameter group for
     * the specified DB engine and version is used.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB cluster parameter
     * group.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If you do not specify a value, then the default DB cluster parameter group for
     * the specified DB engine and version is used.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB cluster parameter
     * group.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If you do not specify a value, then the default DB cluster parameter group for
     * the specified DB engine and version is used.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB cluster parameter
     * group.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If you do not specify a value, then the default DB cluster parameter group for
     * the specified DB engine and version is used.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB cluster parameter
     * group.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If you do not specify a value, then the default DB cluster parameter group for
     * the specified DB engine and version is used.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB cluster parameter
     * group.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If you do not specify a value, then the default DB cluster parameter group for
     * the specified DB engine and version is used.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB cluster parameter
     * group.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If you do not specify a value, then the default DB cluster parameter group for
     * the specified DB engine and version is used.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB cluster parameter
     * group.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline CreateDBClusterRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline CreateDBClusterRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Constraints: Must match the
     * name of an existing DBSubnetGroup. Must not be default.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline CreateDBClusterRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for MySQL 5.6-compatible Aurora, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --engine aurora
     * --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the
     * available engine versions for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora, use the following command:</p> <p> <code>aws rds
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
     * <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide</i>.</p> <p>
     * <b>PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for MySQL 5.6-compatible Aurora, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --engine aurora
     * --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the
     * available engine versions for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora, use the following command:</p> <p> <code>aws rds
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
     * <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide</i>.</p> <p>
     * <b>PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for MySQL 5.6-compatible Aurora, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --engine aurora
     * --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the
     * available engine versions for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora, use the following command:</p> <p> <code>aws rds
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
     * <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide</i>.</p> <p>
     * <b>PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for MySQL 5.6-compatible Aurora, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --engine aurora
     * --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the
     * available engine versions for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora, use the following command:</p> <p> <code>aws rds
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
     * <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide</i>.</p> <p>
     * <b>PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for MySQL 5.6-compatible Aurora, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --engine aurora
     * --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the
     * available engine versions for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora, use the following command:</p> <p> <code>aws rds
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
     * <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide</i>.</p> <p>
     * <b>PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for MySQL 5.6-compatible Aurora, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --engine aurora
     * --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the
     * available engine versions for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora, use the following command:</p> <p> <code>aws rds
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
     * <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide</i>.</p> <p>
     * <b>PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for MySQL 5.6-compatible Aurora, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --engine aurora
     * --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the
     * available engine versions for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora, use the following command:</p> <p> <code>aws rds
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
     * <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide</i>.</p> <p>
     * <b>PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for MySQL 5.6-compatible Aurora, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --engine aurora
     * --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the
     * available engine versions for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora, use the following command:</p> <p> <code>aws rds
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
     * <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Updates.html">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraPostgreSQL.Updates.20180305.html">Amazon
     * Aurora PostgreSQL releases and engine versions</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p> <b>MySQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_MySQL.html#MySQL.Concepts.VersionMgmt">MySQL
     * on Amazon RDS Versions</a> in the <i>Amazon RDS User Guide</i>.</p> <p>
     * <b>PostgreSQL</b> </p> <p>For information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_PostgreSQL.html#PostgreSQL.Concepts">Amazon
     * RDS for PostgreSQL versions and extensions</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> <b>RDS for MySQL and Aurora MySQL</b> </p> <p>Default:
     * <code>3306</code> </p> <p>Valid values: <code>1150-65535</code> </p> <p> <b>RDS
     * for PostgreSQL and Aurora PostgreSQL</b> </p> <p>Default: <code>5432</code> </p>
     * <p>Valid values: <code>1150-65535</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> <b>RDS for MySQL and Aurora MySQL</b> </p> <p>Default:
     * <code>3306</code> </p> <p>Valid values: <code>1150-65535</code> </p> <p> <b>RDS
     * for PostgreSQL and Aurora PostgreSQL</b> </p> <p>Default: <code>5432</code> </p>
     * <p>Valid values: <code>1150-65535</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> <b>RDS for MySQL and Aurora MySQL</b> </p> <p>Default:
     * <code>3306</code> </p> <p>Valid values: <code>1150-65535</code> </p> <p> <b>RDS
     * for PostgreSQL and Aurora PostgreSQL</b> </p> <p>Default: <code>5432</code> </p>
     * <p>Valid values: <code>1150-65535</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> <b>RDS for MySQL and Aurora MySQL</b> </p> <p>Default:
     * <code>3306</code> </p> <p>Valid values: <code>1150-65535</code> </p> <p> <b>RDS
     * for PostgreSQL and Aurora PostgreSQL</b> </p> <p>Default: <code>5432</code> </p>
     * <p>Valid values: <code>1150-65535</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline CreateDBClusterRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline CreateDBClusterRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline CreateDBClusterRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline CreateDBClusterRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline CreateDBClusterRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline CreateDBClusterRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a read replica.</p> <p>Valid for: Aurora DB
     * clusters only</p>
     */
    inline const Aws::String& GetReplicationSourceIdentifier() const{ return m_replicationSourceIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a read replica.</p> <p>Valid for: Aurora DB
     * clusters only</p>
     */
    inline bool ReplicationSourceIdentifierHasBeenSet() const { return m_replicationSourceIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a read replica.</p> <p>Valid for: Aurora DB
     * clusters only</p>
     */
    inline void SetReplicationSourceIdentifier(const Aws::String& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a read replica.</p> <p>Valid for: Aurora DB
     * clusters only</p>
     */
    inline void SetReplicationSourceIdentifier(Aws::String&& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a read replica.</p> <p>Valid for: Aurora DB
     * clusters only</p>
     */
    inline void SetReplicationSourceIdentifier(const char* value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a read replica.</p> <p>Valid for: Aurora DB
     * clusters only</p>
     */
    inline CreateDBClusterRequest& WithReplicationSourceIdentifier(const Aws::String& value) { SetReplicationSourceIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a read replica.</p> <p>Valid for: Aurora DB
     * clusters only</p>
     */
    inline CreateDBClusterRequest& WithReplicationSourceIdentifier(Aws::String&& value) { SetReplicationSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a read replica.</p> <p>Valid for: Aurora DB
     * clusters only</p>
     */
    inline CreateDBClusterRequest& WithReplicationSourceIdentifier(const char* value) { SetReplicationSourceIdentifier(value); return *this;}


    /**
     * <p>Tags to assign to the DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to assign to the DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to assign to the DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to assign to the DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to assign to the DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to assign to the DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether the DB cluster is encrypted.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>A value that indicates whether the DB cluster is encrypted.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster is encrypted.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>A value that indicates whether the DB cluster is encrypted.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>When a KMS key isn't
     * specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the KMS key used to encrypt the source. Otherwise, Amazon
     * RDS will use your default KMS key.</p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> isn't specified, then Amazon RDS will
     * use your default KMS key.</p> </li> </ul> <p>There is a default KMS key for your
     * Amazon Web Services account. Your Amazon Web Services account has a different
     * default KMS key for each Amazon Web Services Region.</p> <p>If you create a read
     * replica of an encrypted DB cluster in another Amazon Web Services Region, you
     * must set <code>KmsKeyId</code> to a KMS key identifier that is valid in the
     * destination Amazon Web Services Region. This KMS key is used to encrypt the read
     * replica in that Amazon Web Services Region.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>When a KMS key isn't
     * specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the KMS key used to encrypt the source. Otherwise, Amazon
     * RDS will use your default KMS key.</p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> isn't specified, then Amazon RDS will
     * use your default KMS key.</p> </li> </ul> <p>There is a default KMS key for your
     * Amazon Web Services account. Your Amazon Web Services account has a different
     * default KMS key for each Amazon Web Services Region.</p> <p>If you create a read
     * replica of an encrypted DB cluster in another Amazon Web Services Region, you
     * must set <code>KmsKeyId</code> to a KMS key identifier that is valid in the
     * destination Amazon Web Services Region. This KMS key is used to encrypt the read
     * replica in that Amazon Web Services Region.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>When a KMS key isn't
     * specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the KMS key used to encrypt the source. Otherwise, Amazon
     * RDS will use your default KMS key.</p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> isn't specified, then Amazon RDS will
     * use your default KMS key.</p> </li> </ul> <p>There is a default KMS key for your
     * Amazon Web Services account. Your Amazon Web Services account has a different
     * default KMS key for each Amazon Web Services Region.</p> <p>If you create a read
     * replica of an encrypted DB cluster in another Amazon Web Services Region, you
     * must set <code>KmsKeyId</code> to a KMS key identifier that is valid in the
     * destination Amazon Web Services Region. This KMS key is used to encrypt the read
     * replica in that Amazon Web Services Region.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>When a KMS key isn't
     * specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the KMS key used to encrypt the source. Otherwise, Amazon
     * RDS will use your default KMS key.</p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> isn't specified, then Amazon RDS will
     * use your default KMS key.</p> </li> </ul> <p>There is a default KMS key for your
     * Amazon Web Services account. Your Amazon Web Services account has a different
     * default KMS key for each Amazon Web Services Region.</p> <p>If you create a read
     * replica of an encrypted DB cluster in another Amazon Web Services Region, you
     * must set <code>KmsKeyId</code> to a KMS key identifier that is valid in the
     * destination Amazon Web Services Region. This KMS key is used to encrypt the read
     * replica in that Amazon Web Services Region.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>When a KMS key isn't
     * specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the KMS key used to encrypt the source. Otherwise, Amazon
     * RDS will use your default KMS key.</p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> isn't specified, then Amazon RDS will
     * use your default KMS key.</p> </li> </ul> <p>There is a default KMS key for your
     * Amazon Web Services account. Your Amazon Web Services account has a different
     * default KMS key for each Amazon Web Services Region.</p> <p>If you create a read
     * replica of an encrypted DB cluster in another Amazon Web Services Region, you
     * must set <code>KmsKeyId</code> to a KMS key identifier that is valid in the
     * destination Amazon Web Services Region. This KMS key is used to encrypt the read
     * replica in that Amazon Web Services Region.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>When a KMS key isn't
     * specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the KMS key used to encrypt the source. Otherwise, Amazon
     * RDS will use your default KMS key.</p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> isn't specified, then Amazon RDS will
     * use your default KMS key.</p> </li> </ul> <p>There is a default KMS key for your
     * Amazon Web Services account. Your Amazon Web Services account has a different
     * default KMS key for each Amazon Web Services Region.</p> <p>If you create a read
     * replica of an encrypted DB cluster in another Amazon Web Services Region, you
     * must set <code>KmsKeyId</code> to a KMS key identifier that is valid in the
     * destination Amazon Web Services Region. This KMS key is used to encrypt the read
     * replica in that Amazon Web Services Region.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>When a KMS key isn't
     * specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the KMS key used to encrypt the source. Otherwise, Amazon
     * RDS will use your default KMS key.</p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> isn't specified, then Amazon RDS will
     * use your default KMS key.</p> </li> </ul> <p>There is a default KMS key for your
     * Amazon Web Services account. Your Amazon Web Services account has a different
     * default KMS key for each Amazon Web Services Region.</p> <p>If you create a read
     * replica of an encrypted DB cluster in another Amazon Web Services Region, you
     * must set <code>KmsKeyId</code> to a KMS key identifier that is valid in the
     * destination Amazon Web Services Region. This KMS key is used to encrypt the read
     * replica in that Amazon Web Services Region.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>When a KMS key isn't
     * specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the KMS key used to encrypt the source. Otherwise, Amazon
     * RDS will use your default KMS key.</p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> isn't specified, then Amazon RDS will
     * use your default KMS key.</p> </li> </ul> <p>There is a default KMS key for your
     * Amazon Web Services account. Your Amazon Web Services account has a different
     * default KMS key for each Amazon Web Services Region.</p> <p>If you create a read
     * replica of an encrypted DB cluster in another Amazon Web Services Region, you
     * must set <code>KmsKeyId</code> to a KMS key identifier that is valid in the
     * destination Amazon Web Services Region. This KMS key is used to encrypt the read
     * replica in that Amazon Web Services Region.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>When you are replicating a DB cluster from one Amazon Web Services GovCloud
     * (US) Region to another, an URL that contains a Signature Version 4 signed
     * request for the <code>CreateDBCluster</code> operation to be called in the
     * source Amazon Web Services Region where the DB cluster is replicated from.
     * Specify <code>PreSignedUrl</code> only when you are performing cross-Region
     * replication from an encrypted DB cluster.</p> <p>The presigned URL must be a
     * valid request for the <code>CreateDBCluster</code> API operation that can run in
     * the source Amazon Web Services Region that contains the encrypted DB cluster to
     * copy.</p> <p>The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the
     * KMS key to use to encrypt the copy of the DB cluster in the destination Amazon
     * Web Services Region. This should refer to the same KMS key for both the
     * <code>CreateDBCluster</code> operation that is called in the destination Amazon
     * Web Services Region, and the operation contained in the presigned URL.</p> </li>
     * <li> <p> <code>DestinationRegion</code> - The name of the Amazon Web Services
     * Region that Aurora read replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are copying an encrypted DB cluster from the us-west-2 Amazon
     * Web Services Region, then your <code>ReplicationSourceIdentifier</code> would
     * look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     *  <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>When you are replicating a DB cluster from one Amazon Web Services GovCloud
     * (US) Region to another, an URL that contains a Signature Version 4 signed
     * request for the <code>CreateDBCluster</code> operation to be called in the
     * source Amazon Web Services Region where the DB cluster is replicated from.
     * Specify <code>PreSignedUrl</code> only when you are performing cross-Region
     * replication from an encrypted DB cluster.</p> <p>The presigned URL must be a
     * valid request for the <code>CreateDBCluster</code> API operation that can run in
     * the source Amazon Web Services Region that contains the encrypted DB cluster to
     * copy.</p> <p>The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the
     * KMS key to use to encrypt the copy of the DB cluster in the destination Amazon
     * Web Services Region. This should refer to the same KMS key for both the
     * <code>CreateDBCluster</code> operation that is called in the destination Amazon
     * Web Services Region, and the operation contained in the presigned URL.</p> </li>
     * <li> <p> <code>DestinationRegion</code> - The name of the Amazon Web Services
     * Region that Aurora read replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are copying an encrypted DB cluster from the us-west-2 Amazon
     * Web Services Region, then your <code>ReplicationSourceIdentifier</code> would
     * look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     *  <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }

    /**
     * <p>When you are replicating a DB cluster from one Amazon Web Services GovCloud
     * (US) Region to another, an URL that contains a Signature Version 4 signed
     * request for the <code>CreateDBCluster</code> operation to be called in the
     * source Amazon Web Services Region where the DB cluster is replicated from.
     * Specify <code>PreSignedUrl</code> only when you are performing cross-Region
     * replication from an encrypted DB cluster.</p> <p>The presigned URL must be a
     * valid request for the <code>CreateDBCluster</code> API operation that can run in
     * the source Amazon Web Services Region that contains the encrypted DB cluster to
     * copy.</p> <p>The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the
     * KMS key to use to encrypt the copy of the DB cluster in the destination Amazon
     * Web Services Region. This should refer to the same KMS key for both the
     * <code>CreateDBCluster</code> operation that is called in the destination Amazon
     * Web Services Region, and the operation contained in the presigned URL.</p> </li>
     * <li> <p> <code>DestinationRegion</code> - The name of the Amazon Web Services
     * Region that Aurora read replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are copying an encrypted DB cluster from the us-west-2 Amazon
     * Web Services Region, then your <code>ReplicationSourceIdentifier</code> would
     * look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     *  <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>When you are replicating a DB cluster from one Amazon Web Services GovCloud
     * (US) Region to another, an URL that contains a Signature Version 4 signed
     * request for the <code>CreateDBCluster</code> operation to be called in the
     * source Amazon Web Services Region where the DB cluster is replicated from.
     * Specify <code>PreSignedUrl</code> only when you are performing cross-Region
     * replication from an encrypted DB cluster.</p> <p>The presigned URL must be a
     * valid request for the <code>CreateDBCluster</code> API operation that can run in
     * the source Amazon Web Services Region that contains the encrypted DB cluster to
     * copy.</p> <p>The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the
     * KMS key to use to encrypt the copy of the DB cluster in the destination Amazon
     * Web Services Region. This should refer to the same KMS key for both the
     * <code>CreateDBCluster</code> operation that is called in the destination Amazon
     * Web Services Region, and the operation contained in the presigned URL.</p> </li>
     * <li> <p> <code>DestinationRegion</code> - The name of the Amazon Web Services
     * Region that Aurora read replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are copying an encrypted DB cluster from the us-west-2 Amazon
     * Web Services Region, then your <code>ReplicationSourceIdentifier</code> would
     * look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     *  <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>When you are replicating a DB cluster from one Amazon Web Services GovCloud
     * (US) Region to another, an URL that contains a Signature Version 4 signed
     * request for the <code>CreateDBCluster</code> operation to be called in the
     * source Amazon Web Services Region where the DB cluster is replicated from.
     * Specify <code>PreSignedUrl</code> only when you are performing cross-Region
     * replication from an encrypted DB cluster.</p> <p>The presigned URL must be a
     * valid request for the <code>CreateDBCluster</code> API operation that can run in
     * the source Amazon Web Services Region that contains the encrypted DB cluster to
     * copy.</p> <p>The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the
     * KMS key to use to encrypt the copy of the DB cluster in the destination Amazon
     * Web Services Region. This should refer to the same KMS key for both the
     * <code>CreateDBCluster</code> operation that is called in the destination Amazon
     * Web Services Region, and the operation contained in the presigned URL.</p> </li>
     * <li> <p> <code>DestinationRegion</code> - The name of the Amazon Web Services
     * Region that Aurora read replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are copying an encrypted DB cluster from the us-west-2 Amazon
     * Web Services Region, then your <code>ReplicationSourceIdentifier</code> would
     * look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     *  <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>When you are replicating a DB cluster from one Amazon Web Services GovCloud
     * (US) Region to another, an URL that contains a Signature Version 4 signed
     * request for the <code>CreateDBCluster</code> operation to be called in the
     * source Amazon Web Services Region where the DB cluster is replicated from.
     * Specify <code>PreSignedUrl</code> only when you are performing cross-Region
     * replication from an encrypted DB cluster.</p> <p>The presigned URL must be a
     * valid request for the <code>CreateDBCluster</code> API operation that can run in
     * the source Amazon Web Services Region that contains the encrypted DB cluster to
     * copy.</p> <p>The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the
     * KMS key to use to encrypt the copy of the DB cluster in the destination Amazon
     * Web Services Region. This should refer to the same KMS key for both the
     * <code>CreateDBCluster</code> operation that is called in the destination Amazon
     * Web Services Region, and the operation contained in the presigned URL.</p> </li>
     * <li> <p> <code>DestinationRegion</code> - The name of the Amazon Web Services
     * Region that Aurora read replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are copying an encrypted DB cluster from the us-west-2 Amazon
     * Web Services Region, then your <code>ReplicationSourceIdentifier</code> would
     * look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     *  <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>When you are replicating a DB cluster from one Amazon Web Services GovCloud
     * (US) Region to another, an URL that contains a Signature Version 4 signed
     * request for the <code>CreateDBCluster</code> operation to be called in the
     * source Amazon Web Services Region where the DB cluster is replicated from.
     * Specify <code>PreSignedUrl</code> only when you are performing cross-Region
     * replication from an encrypted DB cluster.</p> <p>The presigned URL must be a
     * valid request for the <code>CreateDBCluster</code> API operation that can run in
     * the source Amazon Web Services Region that contains the encrypted DB cluster to
     * copy.</p> <p>The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the
     * KMS key to use to encrypt the copy of the DB cluster in the destination Amazon
     * Web Services Region. This should refer to the same KMS key for both the
     * <code>CreateDBCluster</code> operation that is called in the destination Amazon
     * Web Services Region, and the operation contained in the presigned URL.</p> </li>
     * <li> <p> <code>DestinationRegion</code> - The name of the Amazon Web Services
     * Region that Aurora read replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are copying an encrypted DB cluster from the us-west-2 Amazon
     * Web Services Region, then your <code>ReplicationSourceIdentifier</code> would
     * look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     *  <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>When you are replicating a DB cluster from one Amazon Web Services GovCloud
     * (US) Region to another, an URL that contains a Signature Version 4 signed
     * request for the <code>CreateDBCluster</code> operation to be called in the
     * source Amazon Web Services Region where the DB cluster is replicated from.
     * Specify <code>PreSignedUrl</code> only when you are performing cross-Region
     * replication from an encrypted DB cluster.</p> <p>The presigned URL must be a
     * valid request for the <code>CreateDBCluster</code> API operation that can run in
     * the source Amazon Web Services Region that contains the encrypted DB cluster to
     * copy.</p> <p>The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the
     * KMS key to use to encrypt the copy of the DB cluster in the destination Amazon
     * Web Services Region. This should refer to the same KMS key for both the
     * <code>CreateDBCluster</code> operation that is called in the destination Amazon
     * Web Services Region, and the operation contained in the presigned URL.</p> </li>
     * <li> <p> <code>DestinationRegion</code> - The name of the Amazon Web Services
     * Region that Aurora read replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are copying an encrypted DB cluster from the us-west-2 Amazon
     * Web Services Region, then your <code>ReplicationSourceIdentifier</code> would
     * look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     *  <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


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
    inline CreateDBClusterRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     * <p>Valid for: Aurora MySQL DB clusters only</p>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     * <p>Valid for: Aurora MySQL DB clusters only</p>
     */
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     * <p>Valid for: Aurora MySQL DB clusters only</p>
     */
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     * <p>Valid for: Aurora MySQL DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}


    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p> <b>RDS
     * for MySQL</b> </p> <p>Possible values are <code>error</code>,
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
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p> <b>RDS
     * for MySQL</b> </p> <p>Possible values are <code>error</code>,
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
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p> <b>RDS
     * for MySQL</b> </p> <p>Possible values are <code>error</code>,
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
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p> <b>RDS
     * for MySQL</b> </p> <p>Possible values are <code>error</code>,
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
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p> <b>RDS
     * for MySQL</b> </p> <p>Possible values are <code>error</code>,
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
    inline CreateDBClusterRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p> <b>RDS
     * for MySQL</b> </p> <p>Possible values are <code>error</code>,
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
    inline CreateDBClusterRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p> <b>RDS
     * for MySQL</b> </p> <p>Possible values are <code>error</code>,
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
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p> <b>RDS
     * for MySQL</b> </p> <p>Possible values are <code>error</code>,
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
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p> <b>RDS
     * for MySQL</b> </p> <p>Possible values are <code>error</code>,
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
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>The <code>parallelquery</code> engine mode
     * isn't required for Aurora MySQL version 1.23 and higher 1.x versions, and
     * version 2.09 and higher 2.x versions.</p> <p>The <code>global</code> engine mode
     * isn't required for Aurora MySQL version 1.22 and higher 1.x versions, and
     * <code>global</code> engine mode isn't required for any 2.x versions.</p> <p>The
     * <code>multimaster</code> engine mode only applies for DB clusters created with
     * Aurora MySQL version 5.6.10a.</p> <p>The <code>serverless</code> engine mode
     * only applies for Aurora Serverless v1 DB clusters.</p> <p>For Aurora PostgreSQL,
     * the <code>global</code> engine mode isn't required, and both the
     * <code>parallelquery</code> and the <code>multimaster</code> engine modes
     * currently aren't supported.</p> <p>Limitations and requirements apply to some DB
     * engine modes. For more information, see the following sections in the <i>Amazon
     * Aurora User Guide</i>:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html#aurora-serverless.limitations">Limitations
     * of Aurora Serverless v1</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.requirements.html">Requirements
     * for Aurora Serverless v2</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-mysql-parallel-query.html#aurora-mysql-parallel-query-limitations">Limitations
     * of Parallel Query</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database.html#aurora-global-database.limitations">Limitations
     * of Aurora Global Databases</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-multi-master.html#aurora-multi-master-limitations">Limitations
     * of Multi-Master Clusters</a> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>The <code>parallelquery</code> engine mode
     * isn't required for Aurora MySQL version 1.23 and higher 1.x versions, and
     * version 2.09 and higher 2.x versions.</p> <p>The <code>global</code> engine mode
     * isn't required for Aurora MySQL version 1.22 and higher 1.x versions, and
     * <code>global</code> engine mode isn't required for any 2.x versions.</p> <p>The
     * <code>multimaster</code> engine mode only applies for DB clusters created with
     * Aurora MySQL version 5.6.10a.</p> <p>The <code>serverless</code> engine mode
     * only applies for Aurora Serverless v1 DB clusters.</p> <p>For Aurora PostgreSQL,
     * the <code>global</code> engine mode isn't required, and both the
     * <code>parallelquery</code> and the <code>multimaster</code> engine modes
     * currently aren't supported.</p> <p>Limitations and requirements apply to some DB
     * engine modes. For more information, see the following sections in the <i>Amazon
     * Aurora User Guide</i>:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html#aurora-serverless.limitations">Limitations
     * of Aurora Serverless v1</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.requirements.html">Requirements
     * for Aurora Serverless v2</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-mysql-parallel-query.html#aurora-mysql-parallel-query-limitations">Limitations
     * of Parallel Query</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database.html#aurora-global-database.limitations">Limitations
     * of Aurora Global Databases</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-multi-master.html#aurora-multi-master-limitations">Limitations
     * of Multi-Master Clusters</a> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>The <code>parallelquery</code> engine mode
     * isn't required for Aurora MySQL version 1.23 and higher 1.x versions, and
     * version 2.09 and higher 2.x versions.</p> <p>The <code>global</code> engine mode
     * isn't required for Aurora MySQL version 1.22 and higher 1.x versions, and
     * <code>global</code> engine mode isn't required for any 2.x versions.</p> <p>The
     * <code>multimaster</code> engine mode only applies for DB clusters created with
     * Aurora MySQL version 5.6.10a.</p> <p>The <code>serverless</code> engine mode
     * only applies for Aurora Serverless v1 DB clusters.</p> <p>For Aurora PostgreSQL,
     * the <code>global</code> engine mode isn't required, and both the
     * <code>parallelquery</code> and the <code>multimaster</code> engine modes
     * currently aren't supported.</p> <p>Limitations and requirements apply to some DB
     * engine modes. For more information, see the following sections in the <i>Amazon
     * Aurora User Guide</i>:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html#aurora-serverless.limitations">Limitations
     * of Aurora Serverless v1</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.requirements.html">Requirements
     * for Aurora Serverless v2</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-mysql-parallel-query.html#aurora-mysql-parallel-query-limitations">Limitations
     * of Parallel Query</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database.html#aurora-global-database.limitations">Limitations
     * of Aurora Global Databases</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-multi-master.html#aurora-multi-master-limitations">Limitations
     * of Multi-Master Clusters</a> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>The <code>parallelquery</code> engine mode
     * isn't required for Aurora MySQL version 1.23 and higher 1.x versions, and
     * version 2.09 and higher 2.x versions.</p> <p>The <code>global</code> engine mode
     * isn't required for Aurora MySQL version 1.22 and higher 1.x versions, and
     * <code>global</code> engine mode isn't required for any 2.x versions.</p> <p>The
     * <code>multimaster</code> engine mode only applies for DB clusters created with
     * Aurora MySQL version 5.6.10a.</p> <p>The <code>serverless</code> engine mode
     * only applies for Aurora Serverless v1 DB clusters.</p> <p>For Aurora PostgreSQL,
     * the <code>global</code> engine mode isn't required, and both the
     * <code>parallelquery</code> and the <code>multimaster</code> engine modes
     * currently aren't supported.</p> <p>Limitations and requirements apply to some DB
     * engine modes. For more information, see the following sections in the <i>Amazon
     * Aurora User Guide</i>:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html#aurora-serverless.limitations">Limitations
     * of Aurora Serverless v1</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.requirements.html">Requirements
     * for Aurora Serverless v2</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-mysql-parallel-query.html#aurora-mysql-parallel-query-limitations">Limitations
     * of Parallel Query</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database.html#aurora-global-database.limitations">Limitations
     * of Aurora Global Databases</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-multi-master.html#aurora-multi-master-limitations">Limitations
     * of Multi-Master Clusters</a> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>The <code>parallelquery</code> engine mode
     * isn't required for Aurora MySQL version 1.23 and higher 1.x versions, and
     * version 2.09 and higher 2.x versions.</p> <p>The <code>global</code> engine mode
     * isn't required for Aurora MySQL version 1.22 and higher 1.x versions, and
     * <code>global</code> engine mode isn't required for any 2.x versions.</p> <p>The
     * <code>multimaster</code> engine mode only applies for DB clusters created with
     * Aurora MySQL version 5.6.10a.</p> <p>The <code>serverless</code> engine mode
     * only applies for Aurora Serverless v1 DB clusters.</p> <p>For Aurora PostgreSQL,
     * the <code>global</code> engine mode isn't required, and both the
     * <code>parallelquery</code> and the <code>multimaster</code> engine modes
     * currently aren't supported.</p> <p>Limitations and requirements apply to some DB
     * engine modes. For more information, see the following sections in the <i>Amazon
     * Aurora User Guide</i>:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html#aurora-serverless.limitations">Limitations
     * of Aurora Serverless v1</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.requirements.html">Requirements
     * for Aurora Serverless v2</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-mysql-parallel-query.html#aurora-mysql-parallel-query-limitations">Limitations
     * of Parallel Query</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database.html#aurora-global-database.limitations">Limitations
     * of Aurora Global Databases</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-multi-master.html#aurora-multi-master-limitations">Limitations
     * of Multi-Master Clusters</a> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>The <code>parallelquery</code> engine mode
     * isn't required for Aurora MySQL version 1.23 and higher 1.x versions, and
     * version 2.09 and higher 2.x versions.</p> <p>The <code>global</code> engine mode
     * isn't required for Aurora MySQL version 1.22 and higher 1.x versions, and
     * <code>global</code> engine mode isn't required for any 2.x versions.</p> <p>The
     * <code>multimaster</code> engine mode only applies for DB clusters created with
     * Aurora MySQL version 5.6.10a.</p> <p>The <code>serverless</code> engine mode
     * only applies for Aurora Serverless v1 DB clusters.</p> <p>For Aurora PostgreSQL,
     * the <code>global</code> engine mode isn't required, and both the
     * <code>parallelquery</code> and the <code>multimaster</code> engine modes
     * currently aren't supported.</p> <p>Limitations and requirements apply to some DB
     * engine modes. For more information, see the following sections in the <i>Amazon
     * Aurora User Guide</i>:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html#aurora-serverless.limitations">Limitations
     * of Aurora Serverless v1</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.requirements.html">Requirements
     * for Aurora Serverless v2</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-mysql-parallel-query.html#aurora-mysql-parallel-query-limitations">Limitations
     * of Parallel Query</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database.html#aurora-global-database.limitations">Limitations
     * of Aurora Global Databases</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-multi-master.html#aurora-multi-master-limitations">Limitations
     * of Multi-Master Clusters</a> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>The <code>parallelquery</code> engine mode
     * isn't required for Aurora MySQL version 1.23 and higher 1.x versions, and
     * version 2.09 and higher 2.x versions.</p> <p>The <code>global</code> engine mode
     * isn't required for Aurora MySQL version 1.22 and higher 1.x versions, and
     * <code>global</code> engine mode isn't required for any 2.x versions.</p> <p>The
     * <code>multimaster</code> engine mode only applies for DB clusters created with
     * Aurora MySQL version 5.6.10a.</p> <p>The <code>serverless</code> engine mode
     * only applies for Aurora Serverless v1 DB clusters.</p> <p>For Aurora PostgreSQL,
     * the <code>global</code> engine mode isn't required, and both the
     * <code>parallelquery</code> and the <code>multimaster</code> engine modes
     * currently aren't supported.</p> <p>Limitations and requirements apply to some DB
     * engine modes. For more information, see the following sections in the <i>Amazon
     * Aurora User Guide</i>:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html#aurora-serverless.limitations">Limitations
     * of Aurora Serverless v1</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.requirements.html">Requirements
     * for Aurora Serverless v2</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-mysql-parallel-query.html#aurora-mysql-parallel-query-limitations">Limitations
     * of Parallel Query</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database.html#aurora-global-database.limitations">Limitations
     * of Aurora Global Databases</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-multi-master.html#aurora-multi-master-limitations">Limitations
     * of Multi-Master Clusters</a> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, <code>global</code>, or
     * <code>multimaster</code>.</p> <p>The <code>parallelquery</code> engine mode
     * isn't required for Aurora MySQL version 1.23 and higher 1.x versions, and
     * version 2.09 and higher 2.x versions.</p> <p>The <code>global</code> engine mode
     * isn't required for Aurora MySQL version 1.22 and higher 1.x versions, and
     * <code>global</code> engine mode isn't required for any 2.x versions.</p> <p>The
     * <code>multimaster</code> engine mode only applies for DB clusters created with
     * Aurora MySQL version 5.6.10a.</p> <p>The <code>serverless</code> engine mode
     * only applies for Aurora Serverless v1 DB clusters.</p> <p>For Aurora PostgreSQL,
     * the <code>global</code> engine mode isn't required, and both the
     * <code>parallelquery</code> and the <code>multimaster</code> engine modes
     * currently aren't supported.</p> <p>Limitations and requirements apply to some DB
     * engine modes. For more information, see the following sections in the <i>Amazon
     * Aurora User Guide</i>:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html#aurora-serverless.limitations">Limitations
     * of Aurora Serverless v1</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless-v2.requirements.html">Requirements
     * for Aurora Serverless v2</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-mysql-parallel-query.html#aurora-mysql-parallel-query-limitations">Limitations
     * of Parallel Query</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database.html#aurora-global-database.limitations">Limitations
     * of Aurora Global Databases</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-multi-master.html#aurora-multi-master-limitations">Limitations
     * of Multi-Master Clusters</a> </p> </li> </ul> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}


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
    inline CreateDBClusterRequest& WithScalingConfiguration(const ScalingConfiguration& value) { SetScalingConfiguration(value); return *this;}

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithScalingConfiguration(ScalingConfiguration&& value) { SetScalingConfiguration(std::move(value)); return *this;}


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
    inline CreateDBClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless v1 DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless v1 DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless v1</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool GetEnableHttpEndpoint() const{ return m_enableHttpEndpoint; }

    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless v1 DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless v1 DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless v1</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool EnableHttpEndpointHasBeenSet() const { return m_enableHttpEndpointHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless v1 DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless v1 DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless v1</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetEnableHttpEndpoint(bool value) { m_enableHttpEndpointHasBeenSet = true; m_enableHttpEndpoint = value; }

    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless v1 DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless v1 DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless v1</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithEnableHttpEndpoint(bool value) { SetEnableHttpEndpoint(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>The Active Directory directory ID to create the DB cluster in.</p> <p>For
     * Amazon Aurora DB clusters, Amazon RDS can use Kerberos authentication to
     * authenticate users that connect to the DB cluster.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The Active Directory directory ID to create the DB cluster in.</p> <p>For
     * Amazon Aurora DB clusters, Amazon RDS can use Kerberos authentication to
     * authenticate users that connect to the DB cluster.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The Active Directory directory ID to create the DB cluster in.</p> <p>For
     * Amazon Aurora DB clusters, Amazon RDS can use Kerberos authentication to
     * authenticate users that connect to the DB cluster.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The Active Directory directory ID to create the DB cluster in.</p> <p>For
     * Amazon Aurora DB clusters, Amazon RDS can use Kerberos authentication to
     * authenticate users that connect to the DB cluster.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The Active Directory directory ID to create the DB cluster in.</p> <p>For
     * Amazon Aurora DB clusters, Amazon RDS can use Kerberos authentication to
     * authenticate users that connect to the DB cluster.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The Active Directory directory ID to create the DB cluster in.</p> <p>For
     * Amazon Aurora DB clusters, Amazon RDS can use Kerberos authentication to
     * authenticate users that connect to the DB cluster.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The Active Directory directory ID to create the DB cluster in.</p> <p>For
     * Amazon Aurora DB clusters, Amazon RDS can use Kerberos authentication to
     * authenticate users that connect to the DB cluster.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The Active Directory directory ID to create the DB cluster in.</p> <p>For
     * Amazon Aurora DB clusters, Amazon RDS can use Kerberos authentication to
     * authenticate users that connect to the DB cluster.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


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
    inline CreateDBClusterRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>A value that indicates whether to enable this DB cluster to forward write
     * operations to the primary cluster of an Aurora global database
     * (<a>GlobalCluster</a>). By default, write operations are not allowed on Aurora
     * DB clusters that are secondary clusters in an Aurora global database.</p> <p>You
     * can set this value only on Aurora DB clusters that are members of an Aurora
     * global database. With this parameter enabled, a secondary cluster can forward
     * writes to the current primary cluster and the resulting changes are replicated
     * back to this cluster. For the primary DB cluster of an Aurora global database,
     * this value is used immediately if the primary is demoted by the
     * <a>FailoverGlobalCluster</a> API operation, but it does nothing until then.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool GetEnableGlobalWriteForwarding() const{ return m_enableGlobalWriteForwarding; }

    /**
     * <p>A value that indicates whether to enable this DB cluster to forward write
     * operations to the primary cluster of an Aurora global database
     * (<a>GlobalCluster</a>). By default, write operations are not allowed on Aurora
     * DB clusters that are secondary clusters in an Aurora global database.</p> <p>You
     * can set this value only on Aurora DB clusters that are members of an Aurora
     * global database. With this parameter enabled, a secondary cluster can forward
     * writes to the current primary cluster and the resulting changes are replicated
     * back to this cluster. For the primary DB cluster of an Aurora global database,
     * this value is used immediately if the primary is demoted by the
     * <a>FailoverGlobalCluster</a> API operation, but it does nothing until then.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool EnableGlobalWriteForwardingHasBeenSet() const { return m_enableGlobalWriteForwardingHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable this DB cluster to forward write
     * operations to the primary cluster of an Aurora global database
     * (<a>GlobalCluster</a>). By default, write operations are not allowed on Aurora
     * DB clusters that are secondary clusters in an Aurora global database.</p> <p>You
     * can set this value only on Aurora DB clusters that are members of an Aurora
     * global database. With this parameter enabled, a secondary cluster can forward
     * writes to the current primary cluster and the resulting changes are replicated
     * back to this cluster. For the primary DB cluster of an Aurora global database,
     * this value is used immediately if the primary is demoted by the
     * <a>FailoverGlobalCluster</a> API operation, but it does nothing until then.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetEnableGlobalWriteForwarding(bool value) { m_enableGlobalWriteForwardingHasBeenSet = true; m_enableGlobalWriteForwarding = value; }

    /**
     * <p>A value that indicates whether to enable this DB cluster to forward write
     * operations to the primary cluster of an Aurora global database
     * (<a>GlobalCluster</a>). By default, write operations are not allowed on Aurora
     * DB clusters that are secondary clusters in an Aurora global database.</p> <p>You
     * can set this value only on Aurora DB clusters that are members of an Aurora
     * global database. With this parameter enabled, a secondary cluster can forward
     * writes to the current primary cluster and the resulting changes are replicated
     * back to this cluster. For the primary DB cluster of an Aurora global database,
     * this value is used immediately if the primary is demoted by the
     * <a>FailoverGlobalCluster</a> API operation, but it does nothing until then.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithEnableGlobalWriteForwarding(bool value) { SetEnableGlobalWriteForwarding(value); return *this;}


    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline const Aws::String& GetDBClusterInstanceClass() const{ return m_dBClusterInstanceClass; }

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline bool DBClusterInstanceClassHasBeenSet() const { return m_dBClusterInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline void SetDBClusterInstanceClass(const Aws::String& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline void SetDBClusterInstanceClass(Aws::String&& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline void SetDBClusterInstanceClass(const char* value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithDBClusterInstanceClass(const Aws::String& value) { SetDBClusterInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithDBClusterInstanceClass(Aws::String&& value) { SetDBClusterInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting is
     * required to create a Multi-AZ DB cluster.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithDBClusterInstanceClass(const char* value) { SetDBClusterInstanceClass(value); return *this;}


    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate to each DB instance in
     * the Multi-AZ DB cluster.</p> <p>This setting is required to create a Multi-AZ DB
     * cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate to each DB instance in
     * the Multi-AZ DB cluster.</p> <p>This setting is required to create a Multi-AZ DB
     * cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate to each DB instance in
     * the Multi-AZ DB cluster.</p> <p>This setting is required to create a Multi-AZ DB
     * cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate to each DB instance in
     * the Multi-AZ DB cluster.</p> <p>This setting is required to create a Multi-AZ DB
     * cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>This
     * setting is required to create a Multi-AZ DB cluster.</p> <p>Valid values:
     * <code>io1</code> </p> <p>When specified, a value for the <code>Iops</code>
     * parameter is required.</p> <p>Default: <code>io1</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>This
     * setting is required to create a Multi-AZ DB cluster.</p> <p>Valid values:
     * <code>io1</code> </p> <p>When specified, a value for the <code>Iops</code>
     * parameter is required.</p> <p>Default: <code>io1</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>This
     * setting is required to create a Multi-AZ DB cluster.</p> <p>Valid values:
     * <code>io1</code> </p> <p>When specified, a value for the <code>Iops</code>
     * parameter is required.</p> <p>Default: <code>io1</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>This
     * setting is required to create a Multi-AZ DB cluster.</p> <p>Valid values:
     * <code>io1</code> </p> <p>When specified, a value for the <code>Iops</code>
     * parameter is required.</p> <p>Default: <code>io1</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>This
     * setting is required to create a Multi-AZ DB cluster.</p> <p>Valid values:
     * <code>io1</code> </p> <p>When specified, a value for the <code>Iops</code>
     * parameter is required.</p> <p>Default: <code>io1</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>This
     * setting is required to create a Multi-AZ DB cluster.</p> <p>Valid values:
     * <code>io1</code> </p> <p>When specified, a value for the <code>Iops</code>
     * parameter is required.</p> <p>Default: <code>io1</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>This
     * setting is required to create a Multi-AZ DB cluster.</p> <p>Valid values:
     * <code>io1</code> </p> <p>When specified, a value for the <code>Iops</code>
     * parameter is required.</p> <p>Default: <code>io1</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>This
     * setting is required to create a Multi-AZ DB cluster.</p> <p>Valid values:
     * <code>io1</code> </p> <p>When specified, a value for the <code>Iops</code>
     * parameter is required.</p> <p>Default: <code>io1</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>This setting is required to create a Multi-AZ DB cluster.</p> <p>Constraints:
     * Must be a multiple between .5 and 50 of the storage amount for the DB
     * cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>This setting is required to create a Multi-AZ DB cluster.</p> <p>Constraints:
     * Must be a multiple between .5 and 50 of the storage amount for the DB
     * cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>This setting is required to create a Multi-AZ DB cluster.</p> <p>Constraints:
     * Must be a multiple between .5 and 50 of the storage amount for the DB
     * cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>This setting is required to create a Multi-AZ DB cluster.</p> <p>Constraints:
     * Must be a multiple between .5 and 50 of the storage amount for the DB
     * cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>A value that indicates whether the DB cluster is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access isn't permitted if the security group assigned
     * to the DB cluster doesn't permit it.</p> <p>When the DB cluster isn't publicly
     * accessible, it is an internal DB cluster with a DNS name that resolves to a
     * private IP address.</p> <p>Default: The default behavior varies depending on
     * whether <code>DBSubnetGroupName</code> is specified.</p> <p>If
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
     * public.</p> </li> </ul> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>A value that indicates whether the DB cluster is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access isn't permitted if the security group assigned
     * to the DB cluster doesn't permit it.</p> <p>When the DB cluster isn't publicly
     * accessible, it is an internal DB cluster with a DNS name that resolves to a
     * private IP address.</p> <p>Default: The default behavior varies depending on
     * whether <code>DBSubnetGroupName</code> is specified.</p> <p>If
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
     * public.</p> </li> </ul> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access isn't permitted if the security group assigned
     * to the DB cluster doesn't permit it.</p> <p>When the DB cluster isn't publicly
     * accessible, it is an internal DB cluster with a DNS name that resolves to a
     * private IP address.</p> <p>Default: The default behavior varies depending on
     * whether <code>DBSubnetGroupName</code> is specified.</p> <p>If
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
     * public.</p> </li> </ul> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>A value that indicates whether the DB cluster is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access isn't permitted if the security group assigned
     * to the DB cluster doesn't permit it.</p> <p>When the DB cluster isn't publicly
     * accessible, it is an internal DB cluster with a DNS name that resolves to a
     * private IP address.</p> <p>Default: The default behavior varies depending on
     * whether <code>DBSubnetGroupName</code> is specified.</p> <p>If
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
     * public.</p> </li> </ul> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB cluster during the maintenance window. By default, minor
     * engine upgrades are applied automatically.</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB cluster during the maintenance window. By default, minor
     * engine upgrades are applied automatically.</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB cluster during the maintenance window. By default, minor
     * engine upgrades are applied automatically.</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB cluster during the maintenance window. By default, minor
     * engine upgrades are applied automatically.</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline CreateDBClusterRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, also set <code>MonitoringInterval</code> to a value other than
     * 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, also set <code>MonitoringInterval</code> to a value other than
     * 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, also set <code>MonitoringInterval</code> to a value other than
     * 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, also set <code>MonitoringInterval</code> to a value other than
     * 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * up and enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>If <code>MonitoringInterval</code> is set to a value other than 0, supply a
     * <code>MonitoringRoleArn</code> value.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * up and enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>If <code>MonitoringInterval</code> is set to a value other than 0, supply a
     * <code>MonitoringRoleArn</code> value.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * up and enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>If <code>MonitoringInterval</code> is set to a value other than 0, supply a
     * <code>MonitoringRoleArn</code> value.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * up and enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>If <code>MonitoringInterval</code> is set to a value other than 0, supply a
     * <code>MonitoringRoleArn</code> value.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * up and enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>If <code>MonitoringInterval</code> is set to a value other than 0, supply a
     * <code>MonitoringRoleArn</code> value.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * up and enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>If <code>MonitoringInterval</code> is set to a value other than 0, supply a
     * <code>MonitoringRoleArn</code> value.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * up and enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>If <code>MonitoringInterval</code> is set to a value other than 0, supply a
     * <code>MonitoringRoleArn</code> value.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * up and enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>If <code>MonitoringInterval</code> is set to a value other than 0, supply a
     * <code>MonitoringRoleArn</code> value.</p> <p>Valid for: Multi-AZ DB clusters
     * only</p>
     */
    inline CreateDBClusterRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>A value that indicates whether to turn on Performance Insights for the DB
     * cluster.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
     * Using Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }

    /**
     * <p>A value that indicates whether to turn on Performance Insights for the DB
     * cluster.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
     * Using Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }

    /**
     * <p>A value that indicates whether to turn on Performance Insights for the DB
     * cluster.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
     * Using Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }

    /**
     * <p>A value that indicates whether to turn on Performance Insights for the DB
     * cluster.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
     * Using Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}


    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }

    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }

    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline CreateDBClusterRequest& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}


    
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const{ return m_serverlessV2ScalingConfiguration; }

    
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }

    
    inline void SetServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = value; }

    
    inline void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::move(value); }

    
    inline CreateDBClusterRequest& WithServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { SetServerlessV2ScalingConfiguration(value); return *this;}

    
    inline CreateDBClusterRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { SetServerlessV2ScalingConfiguration(std::move(value)); return *this;}


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
    inline CreateDBClusterRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}

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
    inline CreateDBClusterRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}

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
    inline CreateDBClusterRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetDBSystemId() const{ return m_dBSystemId; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool DBSystemIdHasBeenSet() const { return m_dBSystemIdHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetDBSystemId(const Aws::String& value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetDBSystemId(Aws::String&& value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetDBSystemId(const char* value) { m_dBSystemIdHasBeenSet = true; m_dBSystemId.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreateDBClusterRequest& WithDBSystemId(const Aws::String& value) { SetDBSystemId(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreateDBClusterRequest& WithDBSystemId(Aws::String&& value) { SetDBSystemId(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreateDBClusterRequest& WithDBSystemId(const char* value) { SetDBSystemId(value); return *this;}


    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetManageMasterUserPassword() const{ return m_manageMasterUserPassword; }

    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }

    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }

    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline CreateDBClusterRequest& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const{ return m_masterUserSecretKmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline void SetMasterUserSecretKmsKeyId(const Aws::String& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline void SetMasterUserSecretKmsKeyId(Aws::String&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline void SetMasterUserSecretKmsKeyId(const char* value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline CreateDBClusterRequest& WithMasterUserSecretKmsKeyId(const Aws::String& value) { SetMasterUserSecretKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline CreateDBClusterRequest& WithMasterUserSecretKmsKeyId(Aws::String&& value) { SetMasterUserSecretKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline CreateDBClusterRequest& WithMasterUserSecretKmsKeyId(const char* value) { SetMasterUserSecretKmsKeyId(value); return *this;}


    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CreateDBClusterRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CreateDBClusterRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CreateDBClusterRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_replicationSourceIdentifier;
    bool m_replicationSourceIdentifierHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

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

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    bool m_enableHttpEndpoint;
    bool m_enableHttpEndpointHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    bool m_enableGlobalWriteForwarding;
    bool m_enableGlobalWriteForwardingHasBeenSet = false;

    Aws::String m_dBClusterInstanceClass;
    bool m_dBClusterInstanceClassHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    Aws::String m_dBSystemId;
    bool m_dBSystemIdHasBeenSet = false;

    bool m_manageMasterUserPassword;
    bool m_manageMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
