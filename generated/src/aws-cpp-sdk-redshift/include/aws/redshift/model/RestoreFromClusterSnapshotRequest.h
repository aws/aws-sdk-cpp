/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/AquaConfigurationStatus.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RestoreFromClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class RestoreFromClusterSnapshotRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API RestoreFromClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreFromClusterSnapshot"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the cluster that will be created from restoring the
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters must
     * be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> <li>
     * <p>Must be unique for all clusters within an Amazon Web Services account.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the cluster that will be created from restoring the
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters must
     * be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> <li>
     * <p>Must be unique for all clusters within an Amazon Web Services account.</p>
     * </li> </ul>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster that will be created from restoring the
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters must
     * be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> <li>
     * <p>Must be unique for all clusters within an Amazon Web Services account.</p>
     * </li> </ul>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster that will be created from restoring the
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters must
     * be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> <li>
     * <p>Must be unique for all clusters within an Amazon Web Services account.</p>
     * </li> </ul>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster that will be created from restoring the
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters must
     * be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> <li>
     * <p>Must be unique for all clusters within an Amazon Web Services account.</p>
     * </li> </ul>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster that will be created from restoring the
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters must
     * be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> <li>
     * <p>Must be unique for all clusters within an Amazon Web Services account.</p>
     * </li> </ul>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster that will be created from restoring the
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters must
     * be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> <li>
     * <p>Must be unique for all clusters within an Amazon Web Services account.</p>
     * </li> </ul>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster that will be created from restoring the
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters must
     * be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> <li>
     * <p>Must be unique for all clusters within an Amazon Web Services account.</p>
     * </li> </ul>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the snapshot from which to create the new cluster. This parameter
     * isn't case sensitive. You can specify this parameter or
     * <code>snapshotArn</code>, but not both.</p> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The name of the snapshot from which to create the new cluster. This parameter
     * isn't case sensitive. You can specify this parameter or
     * <code>snapshotArn</code>, but not both.</p> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The name of the snapshot from which to create the new cluster. This parameter
     * isn't case sensitive. You can specify this parameter or
     * <code>snapshotArn</code>, but not both.</p> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The name of the snapshot from which to create the new cluster. This parameter
     * isn't case sensitive. You can specify this parameter or
     * <code>snapshotArn</code>, but not both.</p> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The name of the snapshot from which to create the new cluster. This parameter
     * isn't case sensitive. You can specify this parameter or
     * <code>snapshotArn</code>, but not both.</p> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The name of the snapshot from which to create the new cluster. This parameter
     * isn't case sensitive. You can specify this parameter or
     * <code>snapshotArn</code>, but not both.</p> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The name of the snapshot from which to create the new cluster. This parameter
     * isn't case sensitive. You can specify this parameter or
     * <code>snapshotArn</code>, but not both.</p> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot from which to create the new cluster. This parameter
     * isn't case sensitive. You can specify this parameter or
     * <code>snapshotArn</code>, but not both.</p> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * restore from a cluster. You can specify this parameter or
     * <code>snapshotIdentifier</code>, but not both.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * restore from a cluster. You can specify this parameter or
     * <code>snapshotIdentifier</code>, but not both.</p>
     */
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * restore from a cluster. You can specify this parameter or
     * <code>snapshotIdentifier</code>, but not both.</p>
     */
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * restore from a cluster. You can specify this parameter or
     * <code>snapshotIdentifier</code>, but not both.</p>
     */
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * restore from a cluster. You can specify this parameter or
     * <code>snapshotIdentifier</code>, but not both.</p>
     */
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * restore from a cluster. You can specify this parameter or
     * <code>snapshotIdentifier</code>, but not both.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * restore from a cluster. You can specify this parameter or
     * <code>snapshotIdentifier</code>, but not both.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * restore from a cluster. You can specify this parameter or
     * <code>snapshotIdentifier</code>, but not both.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}


    /**
     * <p>The name of the cluster the source snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline const Aws::String& GetSnapshotClusterIdentifier() const{ return m_snapshotClusterIdentifier; }

    /**
     * <p>The name of the cluster the source snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline bool SnapshotClusterIdentifierHasBeenSet() const { return m_snapshotClusterIdentifierHasBeenSet; }

    /**
     * <p>The name of the cluster the source snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline void SetSnapshotClusterIdentifier(const Aws::String& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = value; }

    /**
     * <p>The name of the cluster the source snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline void SetSnapshotClusterIdentifier(Aws::String&& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = std::move(value); }

    /**
     * <p>The name of the cluster the source snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline void SetSnapshotClusterIdentifier(const char* value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier.assign(value); }

    /**
     * <p>The name of the cluster the source snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotClusterIdentifier(const Aws::String& value) { SetSnapshotClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the cluster the source snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotClusterIdentifier(Aws::String&& value) { SetSnapshotClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster the source snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotClusterIdentifier(const char* value) { SetSnapshotClusterIdentifier(value); return *this;}


    /**
     * <p>The port number on which the cluster accepts connections.</p> <p>Default: The
     * same port as the original cluster.</p> <p>Constraints: Must be between
     * <code>1115</code> and <code>65535</code>.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the cluster accepts connections.</p> <p>Default: The
     * same port as the original cluster.</p> <p>Constraints: Must be between
     * <code>1115</code> and <code>65535</code>.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the cluster accepts connections.</p> <p>Default: The
     * same port as the original cluster.</p> <p>Constraints: Must be between
     * <code>1115</code> and <code>65535</code>.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the cluster accepts connections.</p> <p>Default: The
     * same port as the original cluster.</p> <p>Constraints: Must be between
     * <code>1115</code> and <code>65535</code>.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The Amazon EC2 Availability Zone in which to restore the cluster.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Example:
     * <code>us-east-2a</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Amazon EC2 Availability Zone in which to restore the cluster.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Example:
     * <code>us-east-2a</code> </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Amazon EC2 Availability Zone in which to restore the cluster.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Example:
     * <code>us-east-2a</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Amazon EC2 Availability Zone in which to restore the cluster.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Example:
     * <code>us-east-2a</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Amazon EC2 Availability Zone in which to restore the cluster.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Example:
     * <code>us-east-2a</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Amazon EC2 Availability Zone in which to restore the cluster.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Example:
     * <code>us-east-2a</code> </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone in which to restore the cluster.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Example:
     * <code>us-east-2a</code> </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone in which to restore the cluster.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Example:
     * <code>us-east-2a</code> </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>If <code>true</code>, major version upgrades can be applied during the
     * maintenance window to the Amazon Redshift engine that is running on the cluster.
     * </p> <p>Default: <code>true</code> </p>
     */
    inline bool GetAllowVersionUpgrade() const{ return m_allowVersionUpgrade; }

    /**
     * <p>If <code>true</code>, major version upgrades can be applied during the
     * maintenance window to the Amazon Redshift engine that is running on the cluster.
     * </p> <p>Default: <code>true</code> </p>
     */
    inline bool AllowVersionUpgradeHasBeenSet() const { return m_allowVersionUpgradeHasBeenSet; }

    /**
     * <p>If <code>true</code>, major version upgrades can be applied during the
     * maintenance window to the Amazon Redshift engine that is running on the cluster.
     * </p> <p>Default: <code>true</code> </p>
     */
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }

    /**
     * <p>If <code>true</code>, major version upgrades can be applied during the
     * maintenance window to the Amazon Redshift engine that is running on the cluster.
     * </p> <p>Default: <code>true</code> </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}


    /**
     * <p>The name of the subnet group where you want to cluster restored.</p> <p>A
     * snapshot of cluster in VPC can be restored only in VPC. Therefore, you must
     * provide subnet group name where you want the cluster restored.</p>
     */
    inline const Aws::String& GetClusterSubnetGroupName() const{ return m_clusterSubnetGroupName; }

    /**
     * <p>The name of the subnet group where you want to cluster restored.</p> <p>A
     * snapshot of cluster in VPC can be restored only in VPC. Therefore, you must
     * provide subnet group name where you want the cluster restored.</p>
     */
    inline bool ClusterSubnetGroupNameHasBeenSet() const { return m_clusterSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the subnet group where you want to cluster restored.</p> <p>A
     * snapshot of cluster in VPC can be restored only in VPC. Therefore, you must
     * provide subnet group name where you want the cluster restored.</p>
     */
    inline void SetClusterSubnetGroupName(const Aws::String& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = value; }

    /**
     * <p>The name of the subnet group where you want to cluster restored.</p> <p>A
     * snapshot of cluster in VPC can be restored only in VPC. Therefore, you must
     * provide subnet group name where you want the cluster restored.</p>
     */
    inline void SetClusterSubnetGroupName(Aws::String&& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the subnet group where you want to cluster restored.</p> <p>A
     * snapshot of cluster in VPC can be restored only in VPC. Therefore, you must
     * provide subnet group name where you want the cluster restored.</p>
     */
    inline void SetClusterSubnetGroupName(const char* value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName.assign(value); }

    /**
     * <p>The name of the subnet group where you want to cluster restored.</p> <p>A
     * snapshot of cluster in VPC can be restored only in VPC. Therefore, you must
     * provide subnet group name where you want the cluster restored.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterSubnetGroupName(const Aws::String& value) { SetClusterSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group where you want to cluster restored.</p> <p>A
     * snapshot of cluster in VPC can be restored only in VPC. Therefore, you must
     * provide subnet group name where you want the cluster restored.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterSubnetGroupName(Aws::String&& value) { SetClusterSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the subnet group where you want to cluster restored.</p> <p>A
     * snapshot of cluster in VPC can be restored only in VPC. Therefore, you must
     * provide subnet group name where you want the cluster restored.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterSubnetGroupName(const char* value) { SetClusterSubnetGroupName(value); return *this;}


    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. </p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. </p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. </p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const{ return m_hsmClientCertificateIdentifier; }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline bool HsmClientCertificateIdentifierHasBeenSet() const { return m_hsmClientCertificateIdentifierHasBeenSet; }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const Aws::String& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = value; }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(Aws::String&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = std::move(value); }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const char* value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier.assign(value); }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithHsmClientCertificateIdentifier(const Aws::String& value) { SetHsmClientCertificateIdentifier(value); return *this;}

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithHsmClientCertificateIdentifier(Aws::String&& value) { SetHsmClientCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithHsmClientCertificateIdentifier(const char* value) { SetHsmClientCertificateIdentifier(value); return *this;}


    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const{ return m_hsmConfigurationIdentifier; }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(const Aws::String& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = value; }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(Aws::String&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::move(value); }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(const char* value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier.assign(value); }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithHsmConfigurationIdentifier(const Aws::String& value) { SetHsmConfigurationIdentifier(value); return *this;}

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithHsmConfigurationIdentifier(Aws::String&& value) { SetHsmConfigurationIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithHsmConfigurationIdentifier(const char* value) { SetHsmConfigurationIdentifier(value); return *this;}


    /**
     * <p>The Elastic IP (EIP) address for the cluster. Don't specify the Elastic IP
     * address for a publicly accessible cluster with availability zone relocation
     * turned on.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }

    /**
     * <p>The Elastic IP (EIP) address for the cluster. Don't specify the Elastic IP
     * address for a publicly accessible cluster with availability zone relocation
     * turned on.</p>
     */
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }

    /**
     * <p>The Elastic IP (EIP) address for the cluster. Don't specify the Elastic IP
     * address for a publicly accessible cluster with availability zone relocation
     * turned on.</p>
     */
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }

    /**
     * <p>The Elastic IP (EIP) address for the cluster. Don't specify the Elastic IP
     * address for a publicly accessible cluster with availability zone relocation
     * turned on.</p>
     */
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }

    /**
     * <p>The Elastic IP (EIP) address for the cluster. Don't specify the Elastic IP
     * address for a publicly accessible cluster with availability zone relocation
     * turned on.</p>
     */
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }

    /**
     * <p>The Elastic IP (EIP) address for the cluster. Don't specify the Elastic IP
     * address for a publicly accessible cluster with availability zone relocation
     * turned on.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}

    /**
     * <p>The Elastic IP (EIP) address for the cluster. Don't specify the Elastic IP
     * address for a publicly accessible cluster with availability zone relocation
     * turned on.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP (EIP) address for the cluster. Don't specify the Elastic IP
     * address for a publicly accessible cluster with availability zone relocation
     * turned on.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}


    /**
     * <p>The name of the parameter group to be associated with this cluster.</p>
     * <p>Default: The default Amazon Redshift cluster parameter group. For information
     * about the default parameter group, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Working
     * with Amazon Redshift Parameter Groups</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetClusterParameterGroupName() const{ return m_clusterParameterGroupName; }

    /**
     * <p>The name of the parameter group to be associated with this cluster.</p>
     * <p>Default: The default Amazon Redshift cluster parameter group. For information
     * about the default parameter group, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Working
     * with Amazon Redshift Parameter Groups</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline bool ClusterParameterGroupNameHasBeenSet() const { return m_clusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the parameter group to be associated with this cluster.</p>
     * <p>Default: The default Amazon Redshift cluster parameter group. For information
     * about the default parameter group, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Working
     * with Amazon Redshift Parameter Groups</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetClusterParameterGroupName(const Aws::String& value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName = value; }

    /**
     * <p>The name of the parameter group to be associated with this cluster.</p>
     * <p>Default: The default Amazon Redshift cluster parameter group. For information
     * about the default parameter group, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Working
     * with Amazon Redshift Parameter Groups</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetClusterParameterGroupName(Aws::String&& value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the parameter group to be associated with this cluster.</p>
     * <p>Default: The default Amazon Redshift cluster parameter group. For information
     * about the default parameter group, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Working
     * with Amazon Redshift Parameter Groups</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetClusterParameterGroupName(const char* value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group to be associated with this cluster.</p>
     * <p>Default: The default Amazon Redshift cluster parameter group. For information
     * about the default parameter group, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Working
     * with Amazon Redshift Parameter Groups</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterParameterGroupName(const Aws::String& value) { SetClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group to be associated with this cluster.</p>
     * <p>Default: The default Amazon Redshift cluster parameter group. For information
     * about the default parameter group, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Working
     * with Amazon Redshift Parameter Groups</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterParameterGroupName(Aws::String&& value) { SetClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group to be associated with this cluster.</p>
     * <p>Default: The default Amazon Redshift cluster parameter group. For information
     * about the default parameter group, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Working
     * with Amazon Redshift Parameter Groups</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterParameterGroupName(const char* value) { SetClusterParameterGroupName(value); return *this;}


    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p> <p>Cluster security
     * groups only apply to clusters outside of VPCs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterSecurityGroups() const{ return m_clusterSecurityGroups; }

    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p> <p>Cluster security
     * groups only apply to clusters outside of VPCs.</p>
     */
    inline bool ClusterSecurityGroupsHasBeenSet() const { return m_clusterSecurityGroupsHasBeenSet; }

    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p> <p>Cluster security
     * groups only apply to clusters outside of VPCs.</p>
     */
    inline void SetClusterSecurityGroups(const Aws::Vector<Aws::String>& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = value; }

    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p> <p>Cluster security
     * groups only apply to clusters outside of VPCs.</p>
     */
    inline void SetClusterSecurityGroups(Aws::Vector<Aws::String>&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = std::move(value); }

    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p> <p>Cluster security
     * groups only apply to clusters outside of VPCs.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterSecurityGroups(const Aws::Vector<Aws::String>& value) { SetClusterSecurityGroups(value); return *this;}

    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p> <p>Cluster security
     * groups only apply to clusters outside of VPCs.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithClusterSecurityGroups(Aws::Vector<Aws::String>&& value) { SetClusterSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p> <p>Cluster security
     * groups only apply to clusters outside of VPCs.</p>
     */
    inline RestoreFromClusterSnapshotRequest& AddClusterSecurityGroups(const Aws::String& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p> <p>Cluster security
     * groups only apply to clusters outside of VPCs.</p>
     */
    inline RestoreFromClusterSnapshotRequest& AddClusterSecurityGroups(Aws::String&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of security groups to be associated with this cluster.</p> <p>Default:
     * The default cluster security group for Amazon Redshift.</p> <p>Cluster security
     * groups only apply to clusters outside of VPCs.</p>
     */
    inline RestoreFromClusterSnapshotRequest& AddClusterSecurityGroups(const char* value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }


    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p> <p>VPC security groups only apply to clusters in VPCs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p> <p>VPC security groups only apply to clusters in VPCs.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p> <p>VPC security groups only apply to clusters in VPCs.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p> <p>VPC security groups only apply to clusters in VPCs.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p> <p>VPC security groups only apply to clusters in VPCs.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p> <p>VPC security groups only apply to clusters in VPCs.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p> <p>VPC security groups only apply to clusters in VPCs.</p>
     */
    inline RestoreFromClusterSnapshotRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p> <p>VPC security groups only apply to clusters in VPCs.</p>
     */
    inline RestoreFromClusterSnapshotRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Virtual Private Cloud (VPC) security groups to be associated with
     * the cluster.</p> <p>Default: The default VPC security group is associated with
     * the cluster.</p> <p>VPC security groups only apply to clusters in VPCs.</p>
     */
    inline RestoreFromClusterSnapshotRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The weekly time range (in UTC) during which automated cluster maintenance can
     * occur.</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default:
     * The value selected for the cluster from which the snapshot was taken. For more
     * information about the time blocks for each region, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-maintenance-windows">Maintenance
     * Windows</a> in Amazon Redshift Cluster Management Guide. </p> <p>Valid Days: Mon
     * | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Minimum 30-minute
     * window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range (in UTC) during which automated cluster maintenance can
     * occur.</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default:
     * The value selected for the cluster from which the snapshot was taken. For more
     * information about the time blocks for each region, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-maintenance-windows">Maintenance
     * Windows</a> in Amazon Redshift Cluster Management Guide. </p> <p>Valid Days: Mon
     * | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Minimum 30-minute
     * window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range (in UTC) during which automated cluster maintenance can
     * occur.</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default:
     * The value selected for the cluster from which the snapshot was taken. For more
     * information about the time blocks for each region, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-maintenance-windows">Maintenance
     * Windows</a> in Amazon Redshift Cluster Management Guide. </p> <p>Valid Days: Mon
     * | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Minimum 30-minute
     * window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range (in UTC) during which automated cluster maintenance can
     * occur.</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default:
     * The value selected for the cluster from which the snapshot was taken. For more
     * information about the time blocks for each region, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-maintenance-windows">Maintenance
     * Windows</a> in Amazon Redshift Cluster Management Guide. </p> <p>Valid Days: Mon
     * | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Minimum 30-minute
     * window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range (in UTC) during which automated cluster maintenance can
     * occur.</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default:
     * The value selected for the cluster from which the snapshot was taken. For more
     * information about the time blocks for each region, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-maintenance-windows">Maintenance
     * Windows</a> in Amazon Redshift Cluster Management Guide. </p> <p>Valid Days: Mon
     * | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Minimum 30-minute
     * window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range (in UTC) during which automated cluster maintenance can
     * occur.</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default:
     * The value selected for the cluster from which the snapshot was taken. For more
     * information about the time blocks for each region, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-maintenance-windows">Maintenance
     * Windows</a> in Amazon Redshift Cluster Management Guide. </p> <p>Valid Days: Mon
     * | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Minimum 30-minute
     * window.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range (in UTC) during which automated cluster maintenance can
     * occur.</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default:
     * The value selected for the cluster from which the snapshot was taken. For more
     * information about the time blocks for each region, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-maintenance-windows">Maintenance
     * Windows</a> in Amazon Redshift Cluster Management Guide. </p> <p>Valid Days: Mon
     * | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Minimum 30-minute
     * window.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range (in UTC) during which automated cluster maintenance can
     * occur.</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default:
     * The value selected for the cluster from which the snapshot was taken. For more
     * information about the time blocks for each region, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-maintenance-windows">Maintenance
     * Windows</a> in Amazon Redshift Cluster Management Guide. </p> <p>Valid Days: Mon
     * | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Minimum 30-minute
     * window.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>You can't disable automated snapshots for
     * RA3 node types. Set the automated retention period from 1-35 days.</p>
     * <p>Default: The value selected for the cluster from which the snapshot was
     * taken.</p> <p>Constraints: Must be a value from 0 to 35.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const{ return m_automatedSnapshotRetentionPeriod; }

    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>You can't disable automated snapshots for
     * RA3 node types. Set the automated retention period from 1-35 days.</p>
     * <p>Default: The value selected for the cluster from which the snapshot was
     * taken.</p> <p>Constraints: Must be a value from 0 to 35.</p>
     */
    inline bool AutomatedSnapshotRetentionPeriodHasBeenSet() const { return m_automatedSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>You can't disable automated snapshots for
     * RA3 node types. Set the automated retention period from 1-35 days.</p>
     * <p>Default: The value selected for the cluster from which the snapshot was
     * taken.</p> <p>Constraints: Must be a value from 0 to 35.</p>
     */
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>You can't disable automated snapshots for
     * RA3 node types. Set the automated retention period from 1-35 days.</p>
     * <p>Default: The value selected for the cluster from which the snapshot was
     * taken.</p> <p>Constraints: Must be a value from 0 to 35.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>The default number of days to retain a manual snapshot. If the value is -1,
     * the snapshot is retained indefinitely. This setting doesn't change the retention
     * period of existing snapshots.</p> <p>The value must be either -1 or an integer
     * between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }

    /**
     * <p>The default number of days to retain a manual snapshot. If the value is -1,
     * the snapshot is retained indefinitely. This setting doesn't change the retention
     * period of existing snapshots.</p> <p>The value must be either -1 or an integer
     * between 1 and 3,653.</p>
     */
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The default number of days to retain a manual snapshot. If the value is -1,
     * the snapshot is retained indefinitely. This setting doesn't change the retention
     * period of existing snapshots.</p> <p>The value must be either -1 or an integer
     * between 1 and 3,653.</p>
     */
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }

    /**
     * <p>The default number of days to retain a manual snapshot. If the value is -1,
     * the snapshot is retained indefinitely. This setting doesn't change the retention
     * period of existing snapshots.</p> <p>The value must be either -1 or an integer
     * between 1 and 3,653.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that encrypts
     * data in the cluster restored from a shared snapshot. You can also provide the
     * key ID when you restore from an unencrypted snapshot to an encrypted cluster in
     * the same account. Additionally, you can specify a new KMS key ID when you
     * restore from an encrypted snapshot in the same account in order to change it. In
     * that case, the restored cluster is encrypted with the new KMS key ID.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that encrypts
     * data in the cluster restored from a shared snapshot. You can also provide the
     * key ID when you restore from an unencrypted snapshot to an encrypted cluster in
     * the same account. Additionally, you can specify a new KMS key ID when you
     * restore from an encrypted snapshot in the same account in order to change it. In
     * that case, the restored cluster is encrypted with the new KMS key ID.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that encrypts
     * data in the cluster restored from a shared snapshot. You can also provide the
     * key ID when you restore from an unencrypted snapshot to an encrypted cluster in
     * the same account. Additionally, you can specify a new KMS key ID when you
     * restore from an encrypted snapshot in the same account in order to change it. In
     * that case, the restored cluster is encrypted with the new KMS key ID.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that encrypts
     * data in the cluster restored from a shared snapshot. You can also provide the
     * key ID when you restore from an unencrypted snapshot to an encrypted cluster in
     * the same account. Additionally, you can specify a new KMS key ID when you
     * restore from an encrypted snapshot in the same account in order to change it. In
     * that case, the restored cluster is encrypted with the new KMS key ID.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that encrypts
     * data in the cluster restored from a shared snapshot. You can also provide the
     * key ID when you restore from an unencrypted snapshot to an encrypted cluster in
     * the same account. Additionally, you can specify a new KMS key ID when you
     * restore from an encrypted snapshot in the same account in order to change it. In
     * that case, the restored cluster is encrypted with the new KMS key ID.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that encrypts
     * data in the cluster restored from a shared snapshot. You can also provide the
     * key ID when you restore from an unencrypted snapshot to an encrypted cluster in
     * the same account. Additionally, you can specify a new KMS key ID when you
     * restore from an encrypted snapshot in the same account in order to change it. In
     * that case, the restored cluster is encrypted with the new KMS key ID.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that encrypts
     * data in the cluster restored from a shared snapshot. You can also provide the
     * key ID when you restore from an unencrypted snapshot to an encrypted cluster in
     * the same account. Additionally, you can specify a new KMS key ID when you
     * restore from an encrypted snapshot in the same account in order to change it. In
     * that case, the restored cluster is encrypted with the new KMS key ID.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that encrypts
     * data in the cluster restored from a shared snapshot. You can also provide the
     * key ID when you restore from an unencrypted snapshot to an encrypted cluster in
     * the same account. Additionally, you can specify a new KMS key ID when you
     * restore from an encrypted snapshot in the same account in order to change it. In
     * that case, the restored cluster is encrypted with the new KMS key ID.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The node type that the restored cluster will be provisioned with.</p>
     * <p>Default: The node type of the cluster from which the snapshot was taken. You
     * can modify this if you are using any DS node type. In that case, you can choose
     * to restore into another DS node type of the same size. For example, you can
     * restore ds1.8xlarge into ds2.8xlarge, or ds1.xlarge into ds2.xlarge. If you have
     * a DC instance type, you must restore into that same instance type and size. In
     * other words, you can only restore a dc1.large instance type into another
     * dc1.large instance type or dc2.large instance type. You can't restore
     * dc1.8xlarge to dc2.8xlarge. First restore to a dc1.8xlarge cluster, then resize
     * to a dc2.8large cluster. For more information about node types, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-about-clusters-and-nodes">
     * About Clusters and Nodes</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type that the restored cluster will be provisioned with.</p>
     * <p>Default: The node type of the cluster from which the snapshot was taken. You
     * can modify this if you are using any DS node type. In that case, you can choose
     * to restore into another DS node type of the same size. For example, you can
     * restore ds1.8xlarge into ds2.8xlarge, or ds1.xlarge into ds2.xlarge. If you have
     * a DC instance type, you must restore into that same instance type and size. In
     * other words, you can only restore a dc1.large instance type into another
     * dc1.large instance type or dc2.large instance type. You can't restore
     * dc1.8xlarge to dc2.8xlarge. First restore to a dc1.8xlarge cluster, then resize
     * to a dc2.8large cluster. For more information about node types, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-about-clusters-and-nodes">
     * About Clusters and Nodes</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The node type that the restored cluster will be provisioned with.</p>
     * <p>Default: The node type of the cluster from which the snapshot was taken. You
     * can modify this if you are using any DS node type. In that case, you can choose
     * to restore into another DS node type of the same size. For example, you can
     * restore ds1.8xlarge into ds2.8xlarge, or ds1.xlarge into ds2.xlarge. If you have
     * a DC instance type, you must restore into that same instance type and size. In
     * other words, you can only restore a dc1.large instance type into another
     * dc1.large instance type or dc2.large instance type. You can't restore
     * dc1.8xlarge to dc2.8xlarge. First restore to a dc1.8xlarge cluster, then resize
     * to a dc2.8large cluster. For more information about node types, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-about-clusters-and-nodes">
     * About Clusters and Nodes</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type that the restored cluster will be provisioned with.</p>
     * <p>Default: The node type of the cluster from which the snapshot was taken. You
     * can modify this if you are using any DS node type. In that case, you can choose
     * to restore into another DS node type of the same size. For example, you can
     * restore ds1.8xlarge into ds2.8xlarge, or ds1.xlarge into ds2.xlarge. If you have
     * a DC instance type, you must restore into that same instance type and size. In
     * other words, you can only restore a dc1.large instance type into another
     * dc1.large instance type or dc2.large instance type. You can't restore
     * dc1.8xlarge to dc2.8xlarge. First restore to a dc1.8xlarge cluster, then resize
     * to a dc2.8large cluster. For more information about node types, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-about-clusters-and-nodes">
     * About Clusters and Nodes</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The node type that the restored cluster will be provisioned with.</p>
     * <p>Default: The node type of the cluster from which the snapshot was taken. You
     * can modify this if you are using any DS node type. In that case, you can choose
     * to restore into another DS node type of the same size. For example, you can
     * restore ds1.8xlarge into ds2.8xlarge, or ds1.xlarge into ds2.xlarge. If you have
     * a DC instance type, you must restore into that same instance type and size. In
     * other words, you can only restore a dc1.large instance type into another
     * dc1.large instance type or dc2.large instance type. You can't restore
     * dc1.8xlarge to dc2.8xlarge. First restore to a dc1.8xlarge cluster, then resize
     * to a dc2.8large cluster. For more information about node types, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-about-clusters-and-nodes">
     * About Clusters and Nodes</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type that the restored cluster will be provisioned with.</p>
     * <p>Default: The node type of the cluster from which the snapshot was taken. You
     * can modify this if you are using any DS node type. In that case, you can choose
     * to restore into another DS node type of the same size. For example, you can
     * restore ds1.8xlarge into ds2.8xlarge, or ds1.xlarge into ds2.xlarge. If you have
     * a DC instance type, you must restore into that same instance type and size. In
     * other words, you can only restore a dc1.large instance type into another
     * dc1.large instance type or dc2.large instance type. You can't restore
     * dc1.8xlarge to dc2.8xlarge. First restore to a dc1.8xlarge cluster, then resize
     * to a dc2.8large cluster. For more information about node types, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-about-clusters-and-nodes">
     * About Clusters and Nodes</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type that the restored cluster will be provisioned with.</p>
     * <p>Default: The node type of the cluster from which the snapshot was taken. You
     * can modify this if you are using any DS node type. In that case, you can choose
     * to restore into another DS node type of the same size. For example, you can
     * restore ds1.8xlarge into ds2.8xlarge, or ds1.xlarge into ds2.xlarge. If you have
     * a DC instance type, you must restore into that same instance type and size. In
     * other words, you can only restore a dc1.large instance type into another
     * dc1.large instance type or dc2.large instance type. You can't restore
     * dc1.8xlarge to dc2.8xlarge. First restore to a dc1.8xlarge cluster, then resize
     * to a dc2.8large cluster. For more information about node types, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-about-clusters-and-nodes">
     * About Clusters and Nodes</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type that the restored cluster will be provisioned with.</p>
     * <p>Default: The node type of the cluster from which the snapshot was taken. You
     * can modify this if you are using any DS node type. In that case, you can choose
     * to restore into another DS node type of the same size. For example, you can
     * restore ds1.8xlarge into ds2.8xlarge, or ds1.xlarge into ds2.xlarge. If you have
     * a DC instance type, you must restore into that same instance type and size. In
     * other words, you can only restore a dc1.large instance type into another
     * dc1.large instance type or dc2.large instance type. You can't restore
     * dc1.8xlarge to dc2.8xlarge. First restore to a dc1.8xlarge cluster, then resize
     * to a dc2.8large cluster. For more information about node types, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#rs-about-clusters-and-nodes">
     * About Clusters and Nodes</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>. </p>
     */
    inline RestoreFromClusterSnapshotRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>Reserved.</p>
     */
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}


    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services. You must supply the IAM
     * roles in their Amazon Resource Name (ARN) format. </p> <p>The maximum number of
     * IAM roles that you can associate is subject to a quota. For more information, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
     * and limits</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIamRoles() const{ return m_iamRoles; }

    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services. You must supply the IAM
     * roles in their Amazon Resource Name (ARN) format. </p> <p>The maximum number of
     * IAM roles that you can associate is subject to a quota. For more information, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
     * and limits</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
    inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }

    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services. You must supply the IAM
     * roles in their Amazon Resource Name (ARN) format. </p> <p>The maximum number of
     * IAM roles that you can associate is subject to a quota. For more information, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
     * and limits</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
    inline void SetIamRoles(const Aws::Vector<Aws::String>& value) { m_iamRolesHasBeenSet = true; m_iamRoles = value; }

    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services. You must supply the IAM
     * roles in their Amazon Resource Name (ARN) format. </p> <p>The maximum number of
     * IAM roles that you can associate is subject to a quota. For more information, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
     * and limits</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
    inline void SetIamRoles(Aws::Vector<Aws::String>&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = std::move(value); }

    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services. You must supply the IAM
     * roles in their Amazon Resource Name (ARN) format. </p> <p>The maximum number of
     * IAM roles that you can associate is subject to a quota. For more information, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
     * and limits</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithIamRoles(const Aws::Vector<Aws::String>& value) { SetIamRoles(value); return *this;}

    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services. You must supply the IAM
     * roles in their Amazon Resource Name (ARN) format. </p> <p>The maximum number of
     * IAM roles that you can associate is subject to a quota. For more information, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
     * and limits</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithIamRoles(Aws::Vector<Aws::String>&& value) { SetIamRoles(std::move(value)); return *this;}

    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services. You must supply the IAM
     * roles in their Amazon Resource Name (ARN) format. </p> <p>The maximum number of
     * IAM roles that you can associate is subject to a quota. For more information, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
     * and limits</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
    inline RestoreFromClusterSnapshotRequest& AddIamRoles(const Aws::String& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }

    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services. You must supply the IAM
     * roles in their Amazon Resource Name (ARN) format. </p> <p>The maximum number of
     * IAM roles that you can associate is subject to a quota. For more information, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
     * and limits</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
    inline RestoreFromClusterSnapshotRequest& AddIamRoles(Aws::String&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Identity and Access Management (IAM) roles that can be used by the
     * cluster to access other Amazon Web Services services. You must supply the IAM
     * roles in their Amazon Resource Name (ARN) format. </p> <p>The maximum number of
     * IAM roles that you can associate is subject to a quota. For more information, go
     * to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/amazon-redshift-limits.html">Quotas
     * and limits</a> in the <i>Amazon Redshift Cluster Management Guide</i>.</p>
     */
    inline RestoreFromClusterSnapshotRequest& AddIamRoles(const char* value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }


    /**
     * <p>The name of the maintenance track for the restored cluster. When you take a
     * snapshot, the snapshot inherits the <code>MaintenanceTrack</code> value from the
     * cluster. The snapshot might be on a different track than the cluster that was
     * the source for the snapshot. For example, suppose that you take a snapshot of a
     * cluster that is on the current track and then change the cluster to be on the
     * trailing track. In this case, the snapshot and the source cluster are on
     * different tracks.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }

    /**
     * <p>The name of the maintenance track for the restored cluster. When you take a
     * snapshot, the snapshot inherits the <code>MaintenanceTrack</code> value from the
     * cluster. The snapshot might be on a different track than the cluster that was
     * the source for the snapshot. For example, suppose that you take a snapshot of a
     * cluster that is on the current track and then change the cluster to be on the
     * trailing track. In this case, the snapshot and the source cluster are on
     * different tracks.</p>
     */
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }

    /**
     * <p>The name of the maintenance track for the restored cluster. When you take a
     * snapshot, the snapshot inherits the <code>MaintenanceTrack</code> value from the
     * cluster. The snapshot might be on a different track than the cluster that was
     * the source for the snapshot. For example, suppose that you take a snapshot of a
     * cluster that is on the current track and then change the cluster to be on the
     * trailing track. In this case, the snapshot and the source cluster are on
     * different tracks.</p>
     */
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }

    /**
     * <p>The name of the maintenance track for the restored cluster. When you take a
     * snapshot, the snapshot inherits the <code>MaintenanceTrack</code> value from the
     * cluster. The snapshot might be on a different track than the cluster that was
     * the source for the snapshot. For example, suppose that you take a snapshot of a
     * cluster that is on the current track and then change the cluster to be on the
     * trailing track. In this case, the snapshot and the source cluster are on
     * different tracks.</p>
     */
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }

    /**
     * <p>The name of the maintenance track for the restored cluster. When you take a
     * snapshot, the snapshot inherits the <code>MaintenanceTrack</code> value from the
     * cluster. The snapshot might be on a different track than the cluster that was
     * the source for the snapshot. For example, suppose that you take a snapshot of a
     * cluster that is on the current track and then change the cluster to be on the
     * trailing track. In this case, the snapshot and the source cluster are on
     * different tracks.</p>
     */
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }

    /**
     * <p>The name of the maintenance track for the restored cluster. When you take a
     * snapshot, the snapshot inherits the <code>MaintenanceTrack</code> value from the
     * cluster. The snapshot might be on a different track than the cluster that was
     * the source for the snapshot. For example, suppose that you take a snapshot of a
     * cluster that is on the current track and then change the cluster to be on the
     * trailing track. In this case, the snapshot and the source cluster are on
     * different tracks.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}

    /**
     * <p>The name of the maintenance track for the restored cluster. When you take a
     * snapshot, the snapshot inherits the <code>MaintenanceTrack</code> value from the
     * cluster. The snapshot might be on a different track than the cluster that was
     * the source for the snapshot. For example, suppose that you take a snapshot of a
     * cluster that is on the current track and then change the cluster to be on the
     * trailing track. In this case, the snapshot and the source cluster are on
     * different tracks.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}

    /**
     * <p>The name of the maintenance track for the restored cluster. When you take a
     * snapshot, the snapshot inherits the <code>MaintenanceTrack</code> value from the
     * cluster. The snapshot might be on a different track than the cluster that was
     * the source for the snapshot. For example, suppose that you take a snapshot of a
     * cluster that is on the current track and then change the cluster to be on the
     * trailing track. In this case, the snapshot and the source cluster are on
     * different tracks.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}


    /**
     * <p>A unique identifier for the snapshot schedule.</p>
     */
    inline const Aws::String& GetSnapshotScheduleIdentifier() const{ return m_snapshotScheduleIdentifier; }

    /**
     * <p>A unique identifier for the snapshot schedule.</p>
     */
    inline bool SnapshotScheduleIdentifierHasBeenSet() const { return m_snapshotScheduleIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the snapshot schedule.</p>
     */
    inline void SetSnapshotScheduleIdentifier(const Aws::String& value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier = value; }

    /**
     * <p>A unique identifier for the snapshot schedule.</p>
     */
    inline void SetSnapshotScheduleIdentifier(Aws::String&& value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the snapshot schedule.</p>
     */
    inline void SetSnapshotScheduleIdentifier(const char* value) { m_snapshotScheduleIdentifierHasBeenSet = true; m_snapshotScheduleIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the snapshot schedule.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotScheduleIdentifier(const Aws::String& value) { SetSnapshotScheduleIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the snapshot schedule.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotScheduleIdentifier(Aws::String&& value) { SetSnapshotScheduleIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the snapshot schedule.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithSnapshotScheduleIdentifier(const char* value) { SetSnapshotScheduleIdentifier(value); return *this;}


    /**
     * <p>The number of nodes specified when provisioning the restored cluster.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The number of nodes specified when provisioning the restored cluster.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The number of nodes specified when provisioning the restored cluster.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The number of nodes specified when provisioning the restored cluster.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


    /**
     * <p>The option to enable relocation for an Amazon Redshift cluster between
     * Availability Zones after the cluster is restored.</p>
     */
    inline bool GetAvailabilityZoneRelocation() const{ return m_availabilityZoneRelocation; }

    /**
     * <p>The option to enable relocation for an Amazon Redshift cluster between
     * Availability Zones after the cluster is restored.</p>
     */
    inline bool AvailabilityZoneRelocationHasBeenSet() const { return m_availabilityZoneRelocationHasBeenSet; }

    /**
     * <p>The option to enable relocation for an Amazon Redshift cluster between
     * Availability Zones after the cluster is restored.</p>
     */
    inline void SetAvailabilityZoneRelocation(bool value) { m_availabilityZoneRelocationHasBeenSet = true; m_availabilityZoneRelocation = value; }

    /**
     * <p>The option to enable relocation for an Amazon Redshift cluster between
     * Availability Zones after the cluster is restored.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAvailabilityZoneRelocation(bool value) { SetAvailabilityZoneRelocation(value); return *this;}


    /**
     * <p>This parameter is retired. It does not set the AQUA configuration status.
     * Amazon Redshift automatically determines whether to use AQUA (Advanced Query
     * Accelerator).</p>
     */
    inline const AquaConfigurationStatus& GetAquaConfigurationStatus() const{ return m_aquaConfigurationStatus; }

    /**
     * <p>This parameter is retired. It does not set the AQUA configuration status.
     * Amazon Redshift automatically determines whether to use AQUA (Advanced Query
     * Accelerator).</p>
     */
    inline bool AquaConfigurationStatusHasBeenSet() const { return m_aquaConfigurationStatusHasBeenSet; }

    /**
     * <p>This parameter is retired. It does not set the AQUA configuration status.
     * Amazon Redshift automatically determines whether to use AQUA (Advanced Query
     * Accelerator).</p>
     */
    inline void SetAquaConfigurationStatus(const AquaConfigurationStatus& value) { m_aquaConfigurationStatusHasBeenSet = true; m_aquaConfigurationStatus = value; }

    /**
     * <p>This parameter is retired. It does not set the AQUA configuration status.
     * Amazon Redshift automatically determines whether to use AQUA (Advanced Query
     * Accelerator).</p>
     */
    inline void SetAquaConfigurationStatus(AquaConfigurationStatus&& value) { m_aquaConfigurationStatusHasBeenSet = true; m_aquaConfigurationStatus = std::move(value); }

    /**
     * <p>This parameter is retired. It does not set the AQUA configuration status.
     * Amazon Redshift automatically determines whether to use AQUA (Advanced Query
     * Accelerator).</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAquaConfigurationStatus(const AquaConfigurationStatus& value) { SetAquaConfigurationStatus(value); return *this;}

    /**
     * <p>This parameter is retired. It does not set the AQUA configuration status.
     * Amazon Redshift automatically determines whether to use AQUA (Advanced Query
     * Accelerator).</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithAquaConfigurationStatus(AquaConfigurationStatus&& value) { SetAquaConfigurationStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified while it was restored from a
     * snapshot.</p>
     */
    inline const Aws::String& GetDefaultIamRoleArn() const{ return m_defaultIamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified while it was restored from a
     * snapshot.</p>
     */
    inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified while it was restored from a
     * snapshot.</p>
     */
    inline void SetDefaultIamRoleArn(const Aws::String& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified while it was restored from a
     * snapshot.</p>
     */
    inline void SetDefaultIamRoleArn(Aws::String&& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified while it was restored from a
     * snapshot.</p>
     */
    inline void SetDefaultIamRoleArn(const char* value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified while it was restored from a
     * snapshot.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithDefaultIamRoleArn(const Aws::String& value) { SetDefaultIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified while it was restored from a
     * snapshot.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithDefaultIamRoleArn(Aws::String&& value) { SetDefaultIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified while it was restored from a
     * snapshot.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithDefaultIamRoleArn(const char* value) { SetDefaultIamRoleArn(value); return *this;}


    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline const Aws::String& GetReservedNodeId() const{ return m_reservedNodeId; }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline void SetReservedNodeId(const Aws::String& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = value; }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline void SetReservedNodeId(Aws::String&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::move(value); }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline void SetReservedNodeId(const char* value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId.assign(value); }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithReservedNodeId(const Aws::String& value) { SetReservedNodeId(value); return *this;}

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithReservedNodeId(Aws::String&& value) { SetReservedNodeId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithReservedNodeId(const char* value) { SetReservedNodeId(value); return *this;}


    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline const Aws::String& GetTargetReservedNodeOfferingId() const{ return m_targetReservedNodeOfferingId; }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline bool TargetReservedNodeOfferingIdHasBeenSet() const { return m_targetReservedNodeOfferingIdHasBeenSet; }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline void SetTargetReservedNodeOfferingId(const Aws::String& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = value; }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline void SetTargetReservedNodeOfferingId(Aws::String&& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = std::move(value); }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline void SetTargetReservedNodeOfferingId(const char* value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId.assign(value); }

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithTargetReservedNodeOfferingId(const Aws::String& value) { SetTargetReservedNodeOfferingId(value); return *this;}

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithTargetReservedNodeOfferingId(Aws::String&& value) { SetTargetReservedNodeOfferingId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithTargetReservedNodeOfferingId(const char* value) { SetTargetReservedNodeOfferingId(value); return *this;}


    /**
     * <p>Enables support for restoring an unencrypted snapshot to a cluster encrypted
     * with Key Management Service (KMS) and a customer managed key.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Enables support for restoring an unencrypted snapshot to a cluster encrypted
     * with Key Management Service (KMS) and a customer managed key.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Enables support for restoring an unencrypted snapshot to a cluster encrypted
     * with Key Management Service (KMS) and a customer managed key.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Enables support for restoring an unencrypted snapshot to a cluster encrypted
     * with Key Management Service (KMS) and a customer managed key.</p>
     */
    inline RestoreFromClusterSnapshotRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::String m_snapshotClusterIdentifier;
    bool m_snapshotClusterIdentifierHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    bool m_allowVersionUpgrade;
    bool m_allowVersionUpgradeHasBeenSet = false;

    Aws::String m_clusterSubnetGroupName;
    bool m_clusterSubnetGroupNameHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet = false;

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet = false;

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    Aws::String m_clusterParameterGroupName;
    bool m_clusterParameterGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusterSecurityGroups;
    bool m_clusterSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    int m_automatedSnapshotRetentionPeriod;
    bool m_automatedSnapshotRetentionPeriodHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::Vector<Aws::String> m_iamRoles;
    bool m_iamRolesHasBeenSet = false;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    Aws::String m_snapshotScheduleIdentifier;
    bool m_snapshotScheduleIdentifierHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    bool m_availabilityZoneRelocation;
    bool m_availabilityZoneRelocationHasBeenSet = false;

    AquaConfigurationStatus m_aquaConfigurationStatus;
    bool m_aquaConfigurationStatusHasBeenSet = false;

    Aws::String m_defaultIamRoleArn;
    bool m_defaultIamRoleArnHasBeenSet = false;

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet = false;

    Aws::String m_targetReservedNodeOfferingId;
    bool m_targetReservedNodeOfferingIdHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
