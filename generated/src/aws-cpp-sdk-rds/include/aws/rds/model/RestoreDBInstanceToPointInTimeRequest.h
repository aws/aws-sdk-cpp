/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceToPointInTimeMessage">AWS
   * API Reference</a></p>
   */
  class RestoreDBInstanceToPointInTimeRequest : public RDSRequest
  {
  public:
    AWS_RDS_API RestoreDBInstanceToPointInTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBInstanceToPointInTime"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const{ return m_sourceDBInstanceIdentifier; }

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline bool SourceDBInstanceIdentifierHasBeenSet() const { return m_sourceDBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const Aws::String& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(Aws::String&& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const char* value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier.assign(value); }

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceIdentifier(const Aws::String& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceIdentifier(Aws::String&& value) { SetSourceDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceIdentifier(const char* value) { SetSourceDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The name of the new DB instance to create.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetDBInstanceIdentifier() const{ return m_targetDBInstanceIdentifier; }

    /**
     * <p>The name of the new DB instance to create.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline bool TargetDBInstanceIdentifierHasBeenSet() const { return m_targetDBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The name of the new DB instance to create.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetTargetDBInstanceIdentifier(const Aws::String& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = value; }

    /**
     * <p>The name of the new DB instance to create.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetTargetDBInstanceIdentifier(Aws::String&& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = std::move(value); }

    /**
     * <p>The name of the new DB instance to create.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetTargetDBInstanceIdentifier(const char* value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier.assign(value); }

    /**
     * <p>The name of the new DB instance to create.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTargetDBInstanceIdentifier(const Aws::String& value) { SetTargetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The name of the new DB instance to create.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTargetDBInstanceIdentifier(Aws::String&& value) { SetTargetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the new DB instance to create.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTargetDBInstanceIdentifier(const char* value) { SetTargetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The date and time to restore from.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a time in Universal Coordinated Time (UTC) format.</p> </li> <li> <p>Must be
     * before the latest restorable time for the DB instance.</p> </li> <li> <p>Can't
     * be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled.</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetRestoreTime() const{ return m_restoreTime; }

    /**
     * <p>The date and time to restore from.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a time in Universal Coordinated Time (UTC) format.</p> </li> <li> <p>Must be
     * before the latest restorable time for the DB instance.</p> </li> <li> <p>Can't
     * be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled.</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline bool RestoreTimeHasBeenSet() const { return m_restoreTimeHasBeenSet; }

    /**
     * <p>The date and time to restore from.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a time in Universal Coordinated Time (UTC) format.</p> </li> <li> <p>Must be
     * before the latest restorable time for the DB instance.</p> </li> <li> <p>Can't
     * be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled.</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline void SetRestoreTime(const Aws::Utils::DateTime& value) { m_restoreTimeHasBeenSet = true; m_restoreTime = value; }

    /**
     * <p>The date and time to restore from.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a time in Universal Coordinated Time (UTC) format.</p> </li> <li> <p>Must be
     * before the latest restorable time for the DB instance.</p> </li> <li> <p>Can't
     * be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled.</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline void SetRestoreTime(Aws::Utils::DateTime&& value) { m_restoreTimeHasBeenSet = true; m_restoreTime = std::move(value); }

    /**
     * <p>The date and time to restore from.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a time in Universal Coordinated Time (UTC) format.</p> </li> <li> <p>Must be
     * before the latest restorable time for the DB instance.</p> </li> <li> <p>Can't
     * be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled.</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithRestoreTime(const Aws::Utils::DateTime& value) { SetRestoreTime(value); return *this;}

    /**
     * <p>The date and time to restore from.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a time in Universal Coordinated Time (UTC) format.</p> </li> <li> <p>Must be
     * before the latest restorable time for the DB instance.</p> </li> <li> <p>Can't
     * be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled.</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithRestoreTime(Aws::Utils::DateTime&& value) { SetRestoreTime(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the DB instance is restored from the latest backup time. By
     * default, the DB instance isn't restored from the latest backup time.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if the
     * <code>RestoreTime</code> parameter is provided.</p> </li> </ul>
     */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }

    /**
     * <p>Specifies whether the DB instance is restored from the latest backup time. By
     * default, the DB instance isn't restored from the latest backup time.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if the
     * <code>RestoreTime</code> parameter is provided.</p> </li> </ul>
     */
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }

    /**
     * <p>Specifies whether the DB instance is restored from the latest backup time. By
     * default, the DB instance isn't restored from the latest backup time.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if the
     * <code>RestoreTime</code> parameter is provided.</p> </li> </ul>
     */
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }

    /**
     * <p>Specifies whether the DB instance is restored from the latest backup time. By
     * default, the DB instance isn't restored from the latest backup time.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if the
     * <code>RestoreTime</code> parameter is provided.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}


    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example
     * db.m4.large. Not all DB instance classes are available in all Amazon Web
     * Services Regions, or for all database engines. For the full list of DB instance
     * classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: The same
     * DB instance class as the original DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example
     * db.m4.large. Not all DB instance classes are available in all Amazon Web
     * Services Regions, or for all database engines. For the full list of DB instance
     * classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: The same
     * DB instance class as the original DB instance.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example
     * db.m4.large. Not all DB instance classes are available in all Amazon Web
     * Services Regions, or for all database engines. For the full list of DB instance
     * classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: The same
     * DB instance class as the original DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example
     * db.m4.large. Not all DB instance classes are available in all Amazon Web
     * Services Regions, or for all database engines. For the full list of DB instance
     * classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: The same
     * DB instance class as the original DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example
     * db.m4.large. Not all DB instance classes are available in all Amazon Web
     * Services Regions, or for all database engines. For the full list of DB instance
     * classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: The same
     * DB instance class as the original DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example
     * db.m4.large. Not all DB instance classes are available in all Amazon Web
     * Services Regions, or for all database engines. For the full list of DB instance
     * classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: The same
     * DB instance class as the original DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example
     * db.m4.large. Not all DB instance classes are available in all Amazon Web
     * Services Regions, or for all database engines. For the full list of DB instance
     * classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: The same
     * DB instance class as the original DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example
     * db.m4.large. Not all DB instance classes are available in all Amazon Web
     * Services Regions, or for all database engines. For the full list of DB instance
     * classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: The same
     * DB instance class as the original DB instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The port number on which the database accepts connections.</p> <p>Default:
     * The same port as the original DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>The value must be <code>1150-65535</code>.</p> </li> </ul>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>Default:
     * The same port as the original DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>The value must be <code>1150-65535</code>.</p> </li> </ul>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>Default:
     * The same port as the original DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>The value must be <code>1150-65535</code>.</p> </li> </ul>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>Default:
     * The same port as the original DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>The value must be <code>1150-65535</code>.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraints:</p>
     * <ul> <li> <p>You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p> </li> </ul> <p>Example:
     * <code>us-east-1a</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraints:</p>
     * <ul> <li> <p>You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p> </li> </ul> <p>Example:
     * <code>us-east-1a</code> </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraints:</p>
     * <ul> <li> <p>You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p> </li> </ul> <p>Example:
     * <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraints:</p>
     * <ul> <li> <p>You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p> </li> </ul> <p>Example:
     * <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraints:</p>
     * <ul> <li> <p>You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p> </li> </ul> <p>Example:
     * <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraints:</p>
     * <ul> <li> <p>You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p> </li> </ul> <p>Example:
     * <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraints:</p>
     * <ul> <li> <p>You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p> </li> </ul> <p>Example:
     * <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraints:</p>
     * <ul> <li> <p>You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p> </li> </ul> <p>Example:
     * <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:</p>
     * <ul> <li> <p>If supplied, must match the name of an existing DB subnet
     * group.</p> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:</p>
     * <ul> <li> <p>If supplied, must match the name of an existing DB subnet
     * group.</p> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:</p>
     * <ul> <li> <p>If supplied, must match the name of an existing DB subnet
     * group.</p> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:</p>
     * <ul> <li> <p>If supplied, must match the name of an existing DB subnet
     * group.</p> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:</p>
     * <ul> <li> <p>If supplied, must match the name of an existing DB subnet
     * group.</p> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:</p>
     * <ul> <li> <p>If supplied, must match the name of an existing DB subnet
     * group.</p> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:</p>
     * <ul> <li> <p>If supplied, must match the name of an existing DB subnet
     * group.</p> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:</p>
     * <ul> <li> <p>If supplied, must match the name of an existing DB subnet
     * group.</p> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>Secifies whether the DB instance is a Multi-AZ deployment.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li> <p>You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> </li> </ul>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Secifies whether the DB instance is a Multi-AZ deployment.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li> <p>You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> </li> </ul>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>Secifies whether the DB instance is a Multi-AZ deployment.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li> <p>You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> </li> </ul>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Secifies whether the DB instance is a Multi-AZ deployment.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li> <p>You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>Specifies whether the DB instance is publicly accessible.</p> <p>When the DB
     * cluster is publicly accessible, its Domain Name System (DNS) endpoint resolves
     * to the private IP address from within the DB cluster's virtual private cloud
     * (VPC). It resolves to the public IP address from outside of the DB cluster's
     * VPC. Access to the DB cluster is ultimately controlled by the security group it
     * uses. That public access isn't permitted if the security group assigned to the
     * DB cluster doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies whether the DB instance is publicly accessible.</p> <p>When the DB
     * cluster is publicly accessible, its Domain Name System (DNS) endpoint resolves
     * to the private IP address from within the DB cluster's virtual private cloud
     * (VPC). It resolves to the public IP address from outside of the DB cluster's
     * VPC. Access to the DB cluster is ultimately controlled by the security group it
     * uses. That public access isn't permitted if the security group assigned to the
     * DB cluster doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Specifies whether the DB instance is publicly accessible.</p> <p>When the DB
     * cluster is publicly accessible, its Domain Name System (DNS) endpoint resolves
     * to the private IP address from within the DB cluster's virtual private cloud
     * (VPC). It resolves to the public IP address from outside of the DB cluster's
     * VPC. Access to the DB cluster is ultimately controlled by the security group it
     * uses. That public access isn't permitted if the security group assigned to the
     * DB cluster doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies whether the DB instance is publicly accessible.</p> <p>When the DB
     * cluster is publicly accessible, its Domain Name System (DNS) endpoint resolves
     * to the private IP address from within the DB cluster's virtual private cloud
     * (VPC). It resolves to the public IP address from outside of the DB cluster's
     * VPC. Access to the DB cluster is ultimately controlled by the security group it
     * uses. That public access isn't permitted if the security group assigned to the
     * DB cluster doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>Specifies whether minor version upgrades are applied automatically to the DB
     * instance during the maintenance window.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Specifies whether minor version upgrades are applied automatically to the DB
     * instance during the maintenance window.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>Specifies whether minor version upgrades are applied automatically to the DB
     * instance during the maintenance window.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Specifies whether minor version upgrades are applied automatically to the DB
     * instance during the maintenance window.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The license model information for the restored DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Valid Values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p> <p>Default: Same as the source.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>The license model information for the restored DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Valid Values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p> <p>Default: Same as the source.</p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>The license model information for the restored DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Valid Values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p> <p>Default: Same as the source.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>The license model information for the restored DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Valid Values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p> <p>Default: Same as the source.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>The license model information for the restored DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Valid Values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p> <p>Default: Same as the source.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>The license model information for the restored DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Valid Values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p> <p>Default: Same as the source.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model information for the restored DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Valid Values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p> <p>Default: Same as the source.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>The license model information for the restored DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Valid Values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p> <p>Default: Same as the source.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>The database name for the restored DB instance.</p> <p>This parameter doesn't
     * apply to the following DB instances:</p> <ul> <li> <p>RDS Custom</p> </li> <li>
     * <p>RDS for Db2</p> </li> <li> <p>RDS for MariaDB</p> </li> <li> <p>RDS for
     * MySQL</p> </li> </ul>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The database name for the restored DB instance.</p> <p>This parameter doesn't
     * apply to the following DB instances:</p> <ul> <li> <p>RDS Custom</p> </li> <li>
     * <p>RDS for Db2</p> </li> <li> <p>RDS for MariaDB</p> </li> <li> <p>RDS for
     * MySQL</p> </li> </ul>
     */
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }

    /**
     * <p>The database name for the restored DB instance.</p> <p>This parameter doesn't
     * apply to the following DB instances:</p> <ul> <li> <p>RDS Custom</p> </li> <li>
     * <p>RDS for Db2</p> </li> <li> <p>RDS for MariaDB</p> </li> <li> <p>RDS for
     * MySQL</p> </li> </ul>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The database name for the restored DB instance.</p> <p>This parameter doesn't
     * apply to the following DB instances:</p> <ul> <li> <p>RDS Custom</p> </li> <li>
     * <p>RDS for Db2</p> </li> <li> <p>RDS for MariaDB</p> </li> <li> <p>RDS for
     * MySQL</p> </li> </ul>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }

    /**
     * <p>The database name for the restored DB instance.</p> <p>This parameter doesn't
     * apply to the following DB instances:</p> <ul> <li> <p>RDS Custom</p> </li> <li>
     * <p>RDS for Db2</p> </li> <li> <p>RDS for MariaDB</p> </li> <li> <p>RDS for
     * MySQL</p> </li> </ul>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The database name for the restored DB instance.</p> <p>This parameter doesn't
     * apply to the following DB instances:</p> <ul> <li> <p>RDS Custom</p> </li> <li>
     * <p>RDS for Db2</p> </li> <li> <p>RDS for MariaDB</p> </li> <li> <p>RDS for
     * MySQL</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The database name for the restored DB instance.</p> <p>This parameter doesn't
     * apply to the following DB instances:</p> <ul> <li> <p>RDS Custom</p> </li> <li>
     * <p>RDS for Db2</p> </li> <li> <p>RDS for MariaDB</p> </li> <li> <p>RDS for
     * MySQL</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}

    /**
     * <p>The database name for the restored DB instance.</p> <p>This parameter doesn't
     * apply to the following DB instances:</p> <ul> <li> <p>RDS Custom</p> </li> <li>
     * <p>RDS for Db2</p> </li> <li> <p>RDS for MariaDB</p> </li> <li> <p>RDS for
     * MySQL</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBName(const char* value) { SetDBName(value); return *this;}


    /**
     * <p>The database engine to use for the new instance.</p> <p>This setting doesn't
     * apply to RDS Custom.</p> <p>Valid Values:</p> <ul> <li> <p> <code>db2-ae</code>
     * </p> </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li>
     * <li> <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code>
     * </p> </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul> <p>Default: The same as source</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be compatible with the engine of the
     * source.</p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>This setting doesn't
     * apply to RDS Custom.</p> <p>Valid Values:</p> <ul> <li> <p> <code>db2-ae</code>
     * </p> </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li>
     * <li> <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code>
     * </p> </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul> <p>Default: The same as source</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be compatible with the engine of the
     * source.</p> </li> </ul>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>This setting doesn't
     * apply to RDS Custom.</p> <p>Valid Values:</p> <ul> <li> <p> <code>db2-ae</code>
     * </p> </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li>
     * <li> <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code>
     * </p> </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul> <p>Default: The same as source</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be compatible with the engine of the
     * source.</p> </li> </ul>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>This setting doesn't
     * apply to RDS Custom.</p> <p>Valid Values:</p> <ul> <li> <p> <code>db2-ae</code>
     * </p> </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li>
     * <li> <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code>
     * </p> </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul> <p>Default: The same as source</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be compatible with the engine of the
     * source.</p> </li> </ul>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database engine to use for the new instance.</p> <p>This setting doesn't
     * apply to RDS Custom.</p> <p>Valid Values:</p> <ul> <li> <p> <code>db2-ae</code>
     * </p> </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li>
     * <li> <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code>
     * </p> </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul> <p>Default: The same as source</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be compatible with the engine of the
     * source.</p> </li> </ul>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine to use for the new instance.</p> <p>This setting doesn't
     * apply to RDS Custom.</p> <p>Valid Values:</p> <ul> <li> <p> <code>db2-ae</code>
     * </p> </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li>
     * <li> <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code>
     * </p> </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul> <p>Default: The same as source</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be compatible with the engine of the
     * source.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine to use for the new instance.</p> <p>This setting doesn't
     * apply to RDS Custom.</p> <p>Valid Values:</p> <ul> <li> <p> <code>db2-ae</code>
     * </p> </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li>
     * <li> <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code>
     * </p> </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul> <p>Default: The same as source</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be compatible with the engine of the
     * source.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine to use for the new instance.</p> <p>This setting doesn't
     * apply to RDS Custom.</p> <p>Valid Values:</p> <ul> <li> <p> <code>db2-ae</code>
     * </p> </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li>
     * <li> <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code>
     * </p> </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul> <p>Default: The same as source</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be compatible with the engine of the
     * source.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * initially allocate for the DB instance.</p> <p>This setting doesn't apply to SQL
     * Server.</p> <p>Constraints:</p> <ul> <li> <p>Must be an integer greater than
     * 1000.</p> </li> </ul>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * initially allocate for the DB instance.</p> <p>This setting doesn't apply to SQL
     * Server.</p> <p>Constraints:</p> <ul> <li> <p>Must be an integer greater than
     * 1000.</p> </li> </ul>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * initially allocate for the DB instance.</p> <p>This setting doesn't apply to SQL
     * Server.</p> <p>Constraints:</p> <ul> <li> <p>Must be an integer greater than
     * 1000.</p> </li> </ul>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * initially allocate for the DB instance.</p> <p>This setting doesn't apply to SQL
     * Server.</p> <p>Constraints:</p> <ul> <li> <p>Must be an integer greater than
     * 1000.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The name of the option group to use for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance after it is associated with a DB instance</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to use for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance after it is associated with a DB instance</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group to use for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance after it is associated with a DB instance</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to use for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance after it is associated with a DB instance</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of the option group to use for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance after it is associated with a DB instance</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to use for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance after it is associated with a DB instance</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to use for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance after it is associated with a DB instance</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the option group to use for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance after it is associated with a DB instance</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>Specifies whether to copy all tags from the restored DB instance to snapshots
     * of the DB instance. By default, tags are not copied.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>Specifies whether to copy all tags from the restored DB instance to snapshots
     * of the DB instance. By default, tags are not copied.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>Specifies whether to copy all tags from the restored DB instance to snapshots
     * of the DB instance. By default, tags are not copied.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>Specifies whether to copy all tags from the restored DB instance to snapshots
     * of the DB instance. By default, tags are not copied.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline RestoreDBInstanceToPointInTimeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline RestoreDBInstanceToPointInTimeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline RestoreDBInstanceToPointInTimeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline RestoreDBInstanceToPointInTimeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The storage type to associate with the DB instance.</p> <p>Valid Values:
     * <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default: <code>io1</code>,
     * if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp2</code>.</p> <p>Constraints:</p> <ul> <li> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> </li> </ul>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The storage type to associate with the DB instance.</p> <p>Valid Values:
     * <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default: <code>io1</code>,
     * if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp2</code>.</p> <p>Constraints:</p> <ul> <li> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> </li> </ul>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>The storage type to associate with the DB instance.</p> <p>Valid Values:
     * <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default: <code>io1</code>,
     * if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp2</code>.</p> <p>Constraints:</p> <ul> <li> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> </li> </ul>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The storage type to associate with the DB instance.</p> <p>Valid Values:
     * <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default: <code>io1</code>,
     * if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp2</code>.</p> <p>Constraints:</p> <ul> <li> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> </li> </ul>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>The storage type to associate with the DB instance.</p> <p>Valid Values:
     * <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default: <code>io1</code>,
     * if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp2</code>.</p> <p>Constraints:</p> <ul> <li> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> </li> </ul>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>The storage type to associate with the DB instance.</p> <p>Valid Values:
     * <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default: <code>io1</code>,
     * if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp2</code>.</p> <p>Constraints:</p> <ul> <li> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>The storage type to associate with the DB instance.</p> <p>Valid Values:
     * <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default: <code>io1</code>,
     * if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp2</code>.</p> <p>Constraints:</p> <ul> <li> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>The storage type to associate with the DB instance.</p> <p>Valid Values:
     * <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default: <code>io1</code>,
     * if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp2</code>.</p> <p>Constraints:</p> <ul> <li> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}


    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool TdeCredentialPasswordHasBeenSet() const { return m_tdeCredentialPasswordHasBeenSet; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetTdeCredentialPassword(const Aws::String& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetTdeCredentialPassword(Aws::String&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::move(value); }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetTdeCredentialPassword(const char* value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword.assign(value); }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialPassword(Aws::String&& value) { SetTdeCredentialPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}


    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The Active Directory directory ID to restore the DB instance in. Create the
     * domain before running this command. Currently, you can create only the MySQL,
     * Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active Directory
     * Domain.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The Active Directory directory ID to restore the DB instance in. Create the
     * domain before running this command. Currently, you can create only the MySQL,
     * Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active Directory
     * Domain.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The Active Directory directory ID to restore the DB instance in. Create the
     * domain before running this command. Currently, you can create only the MySQL,
     * Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active Directory
     * Domain.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The Active Directory directory ID to restore the DB instance in. Create the
     * domain before running this command. Currently, you can create only the MySQL,
     * Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active Directory
     * Domain.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The Active Directory directory ID to restore the DB instance in. Create the
     * domain before running this command. Currently, you can create only the MySQL,
     * Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active Directory
     * Domain.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The Active Directory directory ID to restore the DB instance in. Create the
     * domain before running this command. Currently, you can create only the MySQL,
     * Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active Directory
     * Domain.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The Active Directory directory ID to restore the DB instance in. Create the
     * domain before running this command. Currently, you can create only the MySQL,
     * Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active Directory
     * Domain.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The Active Directory directory ID to restore the DB instance in. Create the
     * domain before running this command. Currently, you can create only the MySQL,
     * Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active Directory
     * Domain.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline const Aws::String& GetDomainFqdn() const{ return m_domainFqdn; }

    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline bool DomainFqdnHasBeenSet() const { return m_domainFqdnHasBeenSet; }

    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline void SetDomainFqdn(const Aws::String& value) { m_domainFqdnHasBeenSet = true; m_domainFqdn = value; }

    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline void SetDomainFqdn(Aws::String&& value) { m_domainFqdnHasBeenSet = true; m_domainFqdn = std::move(value); }

    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline void SetDomainFqdn(const char* value) { m_domainFqdnHasBeenSet = true; m_domainFqdn.assign(value); }

    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainFqdn(const Aws::String& value) { SetDomainFqdn(value); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainFqdn(Aws::String&& value) { SetDomainFqdn(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainFqdn(const char* value) { SetDomainFqdn(value); return *this;}


    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline const Aws::String& GetDomainOu() const{ return m_domainOu; }

    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline bool DomainOuHasBeenSet() const { return m_domainOuHasBeenSet; }

    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline void SetDomainOu(const Aws::String& value) { m_domainOuHasBeenSet = true; m_domainOu = value; }

    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline void SetDomainOu(Aws::String&& value) { m_domainOuHasBeenSet = true; m_domainOu = std::move(value); }

    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline void SetDomainOu(const char* value) { m_domainOuHasBeenSet = true; m_domainOu.assign(value); }

    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainOu(const Aws::String& value) { SetDomainOu(value); return *this;}

    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainOu(Aws::String&& value) { SetDomainOu(std::move(value)); return *this;}

    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainOu(const char* value) { SetDomainOu(value); return *this;}


    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64
     * characters.</p> </li> </ul> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline const Aws::String& GetDomainAuthSecretArn() const{ return m_domainAuthSecretArn; }

    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64
     * characters.</p> </li> </ul> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline bool DomainAuthSecretArnHasBeenSet() const { return m_domainAuthSecretArnHasBeenSet; }

    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64
     * characters.</p> </li> </ul> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline void SetDomainAuthSecretArn(const Aws::String& value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn = value; }

    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64
     * characters.</p> </li> </ul> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline void SetDomainAuthSecretArn(Aws::String&& value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn = std::move(value); }

    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64
     * characters.</p> </li> </ul> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline void SetDomainAuthSecretArn(const char* value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn.assign(value); }

    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64
     * characters.</p> </li> </ul> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainAuthSecretArn(const Aws::String& value) { SetDomainAuthSecretArn(value); return *this;}

    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64
     * characters.</p> </li> </ul> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainAuthSecretArn(Aws::String&& value) { SetDomainAuthSecretArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64
     * characters.</p> </li> </ul> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainAuthSecretArn(const char* value) { SetDomainAuthSecretArn(value); return *this;}


    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainDnsIps() const{ return m_domainDnsIps; }

    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline bool DomainDnsIpsHasBeenSet() const { return m_domainDnsIpsHasBeenSet; }

    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline void SetDomainDnsIps(const Aws::Vector<Aws::String>& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps = value; }

    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline void SetDomainDnsIps(Aws::Vector<Aws::String>&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps = std::move(value); }

    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainDnsIps(const Aws::Vector<Aws::String>& value) { SetDomainDnsIps(value); return *this;}

    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDomainDnsIps(Aws::Vector<Aws::String>&& value) { SetDomainDnsIps(std::move(value)); return *this;}

    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddDomainDnsIps(const Aws::String& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(value); return *this; }

    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddDomainDnsIps(Aws::String&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(std::move(value)); return *this; }

    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddDomainDnsIps(const char* value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(value); return *this; }


    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information about IAM database authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information about IAM database authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information about IAM database authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information about IAM database authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline void SetProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline void SetProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the DB instance class of the DB instance uses its default
     * processor features.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool GetUseDefaultProcessorFeatures() const{ return m_useDefaultProcessorFeatures; }

    /**
     * <p>Specifies whether the DB instance class of the DB instance uses its default
     * processor features.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool UseDefaultProcessorFeaturesHasBeenSet() const { return m_useDefaultProcessorFeaturesHasBeenSet; }

    /**
     * <p>Specifies whether the DB instance class of the DB instance uses its default
     * processor features.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetUseDefaultProcessorFeatures(bool value) { m_useDefaultProcessorFeaturesHasBeenSet = true; m_useDefaultProcessorFeatures = value; }

    /**
     * <p>Specifies whether the DB instance class of the DB instance uses its default
     * processor features.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}


    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then the
     * default <code>DBParameterGroup</code> for the specified DB engine is used.</p>
     * <p>This setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB parameter group.</p> </li>
     * <li> <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then the
     * default <code>DBParameterGroup</code> for the specified DB engine is used.</p>
     * <p>This setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB parameter group.</p> </li>
     * <li> <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then the
     * default <code>DBParameterGroup</code> for the specified DB engine is used.</p>
     * <p>This setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB parameter group.</p> </li>
     * <li> <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then the
     * default <code>DBParameterGroup</code> for the specified DB engine is used.</p>
     * <p>This setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB parameter group.</p> </li>
     * <li> <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then the
     * default <code>DBParameterGroup</code> for the specified DB engine is used.</p>
     * <p>This setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB parameter group.</p> </li>
     * <li> <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then the
     * default <code>DBParameterGroup</code> for the specified DB engine is used.</p>
     * <p>This setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB parameter group.</p> </li>
     * <li> <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then the
     * default <code>DBParameterGroup</code> for the specified DB engine is used.</p>
     * <p>This setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB parameter group.</p> </li>
     * <li> <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then the
     * default <code>DBParameterGroup</code> for the specified DB engine is used.</p>
     * <p>This setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB parameter group.</p> </li>
     * <li> <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>Specifies whether the DB instance has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>Specifies whether the DB instance has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>Specifies whether the DB instance has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>Specifies whether the DB instance has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline const Aws::String& GetSourceDbiResourceId() const{ return m_sourceDbiResourceId; }

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline bool SourceDbiResourceIdHasBeenSet() const { return m_sourceDbiResourceIdHasBeenSet; }

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline void SetSourceDbiResourceId(const Aws::String& value) { m_sourceDbiResourceIdHasBeenSet = true; m_sourceDbiResourceId = value; }

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline void SetSourceDbiResourceId(Aws::String&& value) { m_sourceDbiResourceIdHasBeenSet = true; m_sourceDbiResourceId = std::move(value); }

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline void SetSourceDbiResourceId(const char* value) { m_sourceDbiResourceIdHasBeenSet = true; m_sourceDbiResourceId.assign(value); }

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDbiResourceId(const Aws::String& value) { SetSourceDbiResourceId(value); return *this;}

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDbiResourceId(Aws::String&& value) { SetSourceDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDbiResourceId(const char* value) { SetSourceDbiResourceId(value); return *this;}


    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline int GetMaxAllocatedStorage() const{ return m_maxAllocatedStorage; }

    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }

    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }

    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups from which
     * to restore, for example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetSourceDBInstanceAutomatedBackupsArn() const{ return m_sourceDBInstanceAutomatedBackupsArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups from which
     * to restore, for example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool SourceDBInstanceAutomatedBackupsArnHasBeenSet() const { return m_sourceDBInstanceAutomatedBackupsArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups from which
     * to restore, for example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetSourceDBInstanceAutomatedBackupsArn(const Aws::String& value) { m_sourceDBInstanceAutomatedBackupsArnHasBeenSet = true; m_sourceDBInstanceAutomatedBackupsArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups from which
     * to restore, for example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetSourceDBInstanceAutomatedBackupsArn(Aws::String&& value) { m_sourceDBInstanceAutomatedBackupsArnHasBeenSet = true; m_sourceDBInstanceAutomatedBackupsArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups from which
     * to restore, for example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetSourceDBInstanceAutomatedBackupsArn(const char* value) { m_sourceDBInstanceAutomatedBackupsArnHasBeenSet = true; m_sourceDBInstanceAutomatedBackupsArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups from which
     * to restore, for example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceAutomatedBackupsArn(const Aws::String& value) { SetSourceDBInstanceAutomatedBackupsArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups from which
     * to restore, for example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceAutomatedBackupsArn(Aws::String&& value) { SetSourceDBInstanceAutomatedBackupsArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups from which
     * to restore, for example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceAutomatedBackupsArn(const char* value) { SetSourceDBInstanceAutomatedBackupsArn(value); return *this;}


    /**
     * <p>Specifies whether to enable a customer-owned IP address (CoIP) for an RDS on
     * Outposts DB instance.</p> <p>A <i>CoIP</i> provides local or external
     * connectivity to resources in your Outpost subnets through your on-premises
     * network. For some use cases, a CoIP can provide lower latency for connections to
     * the DB instance from outside of its virtual private cloud (VPC) on your local
     * network.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline bool GetEnableCustomerOwnedIp() const{ return m_enableCustomerOwnedIp; }

    /**
     * <p>Specifies whether to enable a customer-owned IP address (CoIP) for an RDS on
     * Outposts DB instance.</p> <p>A <i>CoIP</i> provides local or external
     * connectivity to resources in your Outpost subnets through your on-premises
     * network. For some use cases, a CoIP can provide lower latency for connections to
     * the DB instance from outside of its virtual private cloud (VPC) on your local
     * network.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline bool EnableCustomerOwnedIpHasBeenSet() const { return m_enableCustomerOwnedIpHasBeenSet; }

    /**
     * <p>Specifies whether to enable a customer-owned IP address (CoIP) for an RDS on
     * Outposts DB instance.</p> <p>A <i>CoIP</i> provides local or external
     * connectivity to resources in your Outpost subnets through your on-premises
     * network. For some use cases, a CoIP can provide lower latency for connections to
     * the DB instance from outside of its virtual private cloud (VPC) on your local
     * network.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline void SetEnableCustomerOwnedIp(bool value) { m_enableCustomerOwnedIpHasBeenSet = true; m_enableCustomerOwnedIp = value; }

    /**
     * <p>Specifies whether to enable a customer-owned IP address (CoIP) for an RDS on
     * Outposts DB instance.</p> <p>A <i>CoIP</i> provides local or external
     * connectivity to resources in your Outpost subnets through your on-premises
     * network. For some use cases, a CoIP can provide lower latency for connections to
     * the DB instance from outside of its virtual private cloud (VPC) on your local
     * network.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithEnableCustomerOwnedIp(bool value) { SetEnableCustomerOwnedIp(value); return *this;}


    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline const Aws::String& GetCustomIamInstanceProfile() const{ return m_customIamInstanceProfile; }

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline bool CustomIamInstanceProfileHasBeenSet() const { return m_customIamInstanceProfileHasBeenSet; }

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline void SetCustomIamInstanceProfile(const Aws::String& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = value; }

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline void SetCustomIamInstanceProfile(Aws::String&& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = std::move(value); }

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline void SetCustomIamInstanceProfile(const char* value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile.assign(value); }

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithCustomIamInstanceProfile(const Aws::String& value) { SetCustomIamInstanceProfile(value); return *this;}

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithCustomIamInstanceProfile(Aws::String&& value) { SetCustomIamInstanceProfile(std::move(value)); return *this;}

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithCustomIamInstanceProfile(const char* value) { SetCustomIamInstanceProfile(value); return *this;}


    /**
     * <p>The location for storing automated backups and manual snapshots for the
     * restored DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>outposts</code> (Amazon Web Services Outposts)</p> </li> <li> <p>
     * <code>region</code> (Amazon Web Services Region)</p> </li> </ul> <p>Default:
     * <code>region</code> </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetBackupTarget() const{ return m_backupTarget; }

    /**
     * <p>The location for storing automated backups and manual snapshots for the
     * restored DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>outposts</code> (Amazon Web Services Outposts)</p> </li> <li> <p>
     * <code>region</code> (Amazon Web Services Region)</p> </li> </ul> <p>Default:
     * <code>region</code> </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline bool BackupTargetHasBeenSet() const { return m_backupTargetHasBeenSet; }

    /**
     * <p>The location for storing automated backups and manual snapshots for the
     * restored DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>outposts</code> (Amazon Web Services Outposts)</p> </li> <li> <p>
     * <code>region</code> (Amazon Web Services Region)</p> </li> </ul> <p>Default:
     * <code>region</code> </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline void SetBackupTarget(const Aws::String& value) { m_backupTargetHasBeenSet = true; m_backupTarget = value; }

    /**
     * <p>The location for storing automated backups and manual snapshots for the
     * restored DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>outposts</code> (Amazon Web Services Outposts)</p> </li> <li> <p>
     * <code>region</code> (Amazon Web Services Region)</p> </li> </ul> <p>Default:
     * <code>region</code> </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline void SetBackupTarget(Aws::String&& value) { m_backupTargetHasBeenSet = true; m_backupTarget = std::move(value); }

    /**
     * <p>The location for storing automated backups and manual snapshots for the
     * restored DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>outposts</code> (Amazon Web Services Outposts)</p> </li> <li> <p>
     * <code>region</code> (Amazon Web Services Region)</p> </li> </ul> <p>Default:
     * <code>region</code> </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline void SetBackupTarget(const char* value) { m_backupTargetHasBeenSet = true; m_backupTarget.assign(value); }

    /**
     * <p>The location for storing automated backups and manual snapshots for the
     * restored DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>outposts</code> (Amazon Web Services Outposts)</p> </li> <li> <p>
     * <code>region</code> (Amazon Web Services Region)</p> </li> </ul> <p>Default:
     * <code>region</code> </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithBackupTarget(const Aws::String& value) { SetBackupTarget(value); return *this;}

    /**
     * <p>The location for storing automated backups and manual snapshots for the
     * restored DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>outposts</code> (Amazon Web Services Outposts)</p> </li> <li> <p>
     * <code>region</code> (Amazon Web Services Region)</p> </li> </ul> <p>Default:
     * <code>region</code> </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithBackupTarget(Aws::String&& value) { SetBackupTarget(std::move(value)); return *this;}

    /**
     * <p>The location for storing automated backups and manual snapshots for the
     * restored DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>outposts</code> (Amazon Web Services Outposts)</p> </li> <li> <p>
     * <code>region</code> (Amazon Web Services Region)</p> </li> </ul> <p>Default:
     * <code>region</code> </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithBackupTarget(const char* value) { SetBackupTarget(value); return *this;}


    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values:</p> <ul> <li> <p> <code>IPV4</code> </p> </li> <li> <p>
     * <code>DUAL</code> </p> </li> </ul>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }

    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values:</p> <ul> <li> <p> <code>IPV4</code> </p> </li> <li> <p>
     * <code>DUAL</code> </p> </li> </ul>
     */
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }

    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values:</p> <ul> <li> <p> <code>IPV4</code> </p> </li> <li> <p>
     * <code>DUAL</code> </p> </li> </ul>
     */
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }

    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values:</p> <ul> <li> <p> <code>IPV4</code> </p> </li> <li> <p>
     * <code>DUAL</code> </p> </li> </ul>
     */
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }

    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values:</p> <ul> <li> <p> <code>IPV4</code> </p> </li> <li> <p>
     * <code>DUAL</code> </p> </li> </ul>
     */
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }

    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values:</p> <ul> <li> <p> <code>IPV4</code> </p> </li> <li> <p>
     * <code>DUAL</code> </p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}

    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values:</p> <ul> <li> <p> <code>IPV4</code> </p> </li> <li> <p>
     * <code>DUAL</code> </p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}

    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values:</p> <ul> <li> <p> <code>IPV4</code> </p> </li> <li> <p>
     * <code>DUAL</code> </p> </li> </ul>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}


    /**
     * <p>The storage throughput value for the DB instance.</p> <p>This setting doesn't
     * apply to RDS Custom or Amazon Aurora.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }

    /**
     * <p>The storage throughput value for the DB instance.</p> <p>This setting doesn't
     * apply to RDS Custom or Amazon Aurora.</p>
     */
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }

    /**
     * <p>The storage throughput value for the DB instance.</p> <p>This setting doesn't
     * apply to RDS Custom or Amazon Aurora.</p>
     */
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }

    /**
     * <p>The storage throughput value for the DB instance.</p> <p>This setting doesn't
     * apply to RDS Custom or Amazon Aurora.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}


    /**
     * <p>The amount of storage (in gibibytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>.</p>  <p>Be sure to allocate enough storage
     * for your new DB instance so that the restore operation can succeed. You can also
     * allocate additional storage for future growth.</p> 
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage (in gibibytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>.</p>  <p>Be sure to allocate enough storage
     * for your new DB instance so that the restore operation can succeed. You can also
     * allocate additional storage for future growth.</p> 
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage (in gibibytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>.</p>  <p>Be sure to allocate enough storage
     * for your new DB instance so that the restore operation can succeed. You can also
     * allocate additional storage for future growth.</p> 
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage (in gibibytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>.</p>  <p>Be sure to allocate enough storage
     * for your new DB instance so that the restore operation can succeed. You can also
     * allocate additional storage for future growth.</p> 
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Specifies whether to enable a dedicated log volume (DLV) for the DB
     * instance.</p>
     */
    inline bool GetDedicatedLogVolume() const{ return m_dedicatedLogVolume; }

    /**
     * <p>Specifies whether to enable a dedicated log volume (DLV) for the DB
     * instance.</p>
     */
    inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }

    /**
     * <p>Specifies whether to enable a dedicated log volume (DLV) for the DB
     * instance.</p>
     */
    inline void SetDedicatedLogVolume(bool value) { m_dedicatedLogVolumeHasBeenSet = true; m_dedicatedLogVolume = value; }

    /**
     * <p>Specifies whether to enable a dedicated log volume (DLV) for the DB
     * instance.</p>
     */
    inline RestoreDBInstanceToPointInTimeRequest& WithDedicatedLogVolume(bool value) { SetDedicatedLogVolume(value); return *this;}

  private:

    Aws::String m_sourceDBInstanceIdentifier;
    bool m_sourceDBInstanceIdentifierHasBeenSet = false;

    Aws::String m_targetDBInstanceIdentifier;
    bool m_targetDBInstanceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_restoreTime;
    bool m_restoreTimeHasBeenSet = false;

    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    Aws::String m_domainFqdn;
    bool m_domainFqdnHasBeenSet = false;

    Aws::String m_domainOu;
    bool m_domainOuHasBeenSet = false;

    Aws::String m_domainAuthSecretArn;
    bool m_domainAuthSecretArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainDnsIps;
    bool m_domainDnsIpsHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    bool m_useDefaultProcessorFeatures;
    bool m_useDefaultProcessorFeaturesHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_sourceDbiResourceId;
    bool m_sourceDbiResourceIdHasBeenSet = false;

    int m_maxAllocatedStorage;
    bool m_maxAllocatedStorageHasBeenSet = false;

    Aws::String m_sourceDBInstanceAutomatedBackupsArn;
    bool m_sourceDBInstanceAutomatedBackupsArnHasBeenSet = false;

    bool m_enableCustomerOwnedIp;
    bool m_enableCustomerOwnedIpHasBeenSet = false;

    Aws::String m_customIamInstanceProfile;
    bool m_customIamInstanceProfileHasBeenSet = false;

    Aws::String m_backupTarget;
    bool m_backupTargetHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    bool m_dedicatedLogVolume;
    bool m_dedicatedLogVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
