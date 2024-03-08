/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class CreateDBShardGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBShardGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBShardGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB shard group.</p>
     */
    inline const Aws::String& GetDBShardGroupIdentifier() const{ return m_dBShardGroupIdentifier; }

    /**
     * <p>The name of the DB shard group.</p>
     */
    inline bool DBShardGroupIdentifierHasBeenSet() const { return m_dBShardGroupIdentifierHasBeenSet; }

    /**
     * <p>The name of the DB shard group.</p>
     */
    inline void SetDBShardGroupIdentifier(const Aws::String& value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier = value; }

    /**
     * <p>The name of the DB shard group.</p>
     */
    inline void SetDBShardGroupIdentifier(Aws::String&& value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier = std::move(value); }

    /**
     * <p>The name of the DB shard group.</p>
     */
    inline void SetDBShardGroupIdentifier(const char* value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier.assign(value); }

    /**
     * <p>The name of the DB shard group.</p>
     */
    inline CreateDBShardGroupRequest& WithDBShardGroupIdentifier(const Aws::String& value) { SetDBShardGroupIdentifier(value); return *this;}

    /**
     * <p>The name of the DB shard group.</p>
     */
    inline CreateDBShardGroupRequest& WithDBShardGroupIdentifier(Aws::String&& value) { SetDBShardGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the DB shard group.</p>
     */
    inline CreateDBShardGroupRequest& WithDBShardGroupIdentifier(const char* value) { SetDBShardGroupIdentifier(value); return *this;}


    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline CreateDBShardGroupRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline CreateDBShardGroupRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline CreateDBShardGroupRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>Specifies whether to create standby instances for the DB shard group. Valid
     * values are the following:</p> <ul> <li> <p>0 - Creates a single, primary DB
     * instance for each physical shard. This is the default value, and the only one
     * supported for the preview.</p> </li> <li> <p>1 - Creates a primary DB instance
     * and a standby instance in a different Availability Zone (AZ) for each physical
     * shard.</p> </li> <li> <p>2 - Creates a primary DB instance and two standby
     * instances in different AZs for each physical shard.</p> </li> </ul>
     */
    inline int GetComputeRedundancy() const{ return m_computeRedundancy; }

    /**
     * <p>Specifies whether to create standby instances for the DB shard group. Valid
     * values are the following:</p> <ul> <li> <p>0 - Creates a single, primary DB
     * instance for each physical shard. This is the default value, and the only one
     * supported for the preview.</p> </li> <li> <p>1 - Creates a primary DB instance
     * and a standby instance in a different Availability Zone (AZ) for each physical
     * shard.</p> </li> <li> <p>2 - Creates a primary DB instance and two standby
     * instances in different AZs for each physical shard.</p> </li> </ul>
     */
    inline bool ComputeRedundancyHasBeenSet() const { return m_computeRedundancyHasBeenSet; }

    /**
     * <p>Specifies whether to create standby instances for the DB shard group. Valid
     * values are the following:</p> <ul> <li> <p>0 - Creates a single, primary DB
     * instance for each physical shard. This is the default value, and the only one
     * supported for the preview.</p> </li> <li> <p>1 - Creates a primary DB instance
     * and a standby instance in a different Availability Zone (AZ) for each physical
     * shard.</p> </li> <li> <p>2 - Creates a primary DB instance and two standby
     * instances in different AZs for each physical shard.</p> </li> </ul>
     */
    inline void SetComputeRedundancy(int value) { m_computeRedundancyHasBeenSet = true; m_computeRedundancy = value; }

    /**
     * <p>Specifies whether to create standby instances for the DB shard group. Valid
     * values are the following:</p> <ul> <li> <p>0 - Creates a single, primary DB
     * instance for each physical shard. This is the default value, and the only one
     * supported for the preview.</p> </li> <li> <p>1 - Creates a primary DB instance
     * and a standby instance in a different Availability Zone (AZ) for each physical
     * shard.</p> </li> <li> <p>2 - Creates a primary DB instance and two standby
     * instances in different AZs for each physical shard.</p> </li> </ul>
     */
    inline CreateDBShardGroupRequest& WithComputeRedundancy(int value) { SetComputeRedundancy(value); return *this;}


    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMaxACU() const{ return m_maxACU; }

    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline bool MaxACUHasBeenSet() const { return m_maxACUHasBeenSet; }

    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline void SetMaxACU(double value) { m_maxACUHasBeenSet = true; m_maxACU = value; }

    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline CreateDBShardGroupRequest& WithMaxACU(double value) { SetMaxACU(value); return *this;}


    /**
     * <p>Specifies whether the DB shard group is publicly accessible.</p> <p>When the
     * DB shard group is publicly accessible, its Domain Name System (DNS) endpoint
     * resolves to the private IP address from within the DB shard group's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * shard group's VPC. Access to the DB shard group is ultimately controlled by the
     * security group it uses. That public access is not permitted if the security
     * group assigned to the DB shard group doesn't permit it.</p> <p>When the DB shard
     * group isn't publicly accessible, it is an internal DB shard group with a DNS
     * name that resolves to a private IP address.</p> <p>Default: The default behavior
     * varies depending on whether <code>DBSubnetGroupName</code> is specified.</p>
     * <p>If <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB shard group is private.</p> </li> <li> <p>If the default
     * VPC in the target Region has an internet gateway attached to it, the DB shard
     * group is public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is
     * specified, and <code>PubliclyAccessible</code> isn't specified, the following
     * applies:</p> <ul> <li> <p>If the subnets are part of a VPC that doesn’t have an
     * internet gateway attached to it, the DB shard group is private.</p> </li> <li>
     * <p>If the subnets are part of a VPC that has an internet gateway attached to it,
     * the DB shard group is public.</p> </li> </ul>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies whether the DB shard group is publicly accessible.</p> <p>When the
     * DB shard group is publicly accessible, its Domain Name System (DNS) endpoint
     * resolves to the private IP address from within the DB shard group's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * shard group's VPC. Access to the DB shard group is ultimately controlled by the
     * security group it uses. That public access is not permitted if the security
     * group assigned to the DB shard group doesn't permit it.</p> <p>When the DB shard
     * group isn't publicly accessible, it is an internal DB shard group with a DNS
     * name that resolves to a private IP address.</p> <p>Default: The default behavior
     * varies depending on whether <code>DBSubnetGroupName</code> is specified.</p>
     * <p>If <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB shard group is private.</p> </li> <li> <p>If the default
     * VPC in the target Region has an internet gateway attached to it, the DB shard
     * group is public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is
     * specified, and <code>PubliclyAccessible</code> isn't specified, the following
     * applies:</p> <ul> <li> <p>If the subnets are part of a VPC that doesn’t have an
     * internet gateway attached to it, the DB shard group is private.</p> </li> <li>
     * <p>If the subnets are part of a VPC that has an internet gateway attached to it,
     * the DB shard group is public.</p> </li> </ul>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Specifies whether the DB shard group is publicly accessible.</p> <p>When the
     * DB shard group is publicly accessible, its Domain Name System (DNS) endpoint
     * resolves to the private IP address from within the DB shard group's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * shard group's VPC. Access to the DB shard group is ultimately controlled by the
     * security group it uses. That public access is not permitted if the security
     * group assigned to the DB shard group doesn't permit it.</p> <p>When the DB shard
     * group isn't publicly accessible, it is an internal DB shard group with a DNS
     * name that resolves to a private IP address.</p> <p>Default: The default behavior
     * varies depending on whether <code>DBSubnetGroupName</code> is specified.</p>
     * <p>If <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB shard group is private.</p> </li> <li> <p>If the default
     * VPC in the target Region has an internet gateway attached to it, the DB shard
     * group is public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is
     * specified, and <code>PubliclyAccessible</code> isn't specified, the following
     * applies:</p> <ul> <li> <p>If the subnets are part of a VPC that doesn’t have an
     * internet gateway attached to it, the DB shard group is private.</p> </li> <li>
     * <p>If the subnets are part of a VPC that has an internet gateway attached to it,
     * the DB shard group is public.</p> </li> </ul>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies whether the DB shard group is publicly accessible.</p> <p>When the
     * DB shard group is publicly accessible, its Domain Name System (DNS) endpoint
     * resolves to the private IP address from within the DB shard group's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * shard group's VPC. Access to the DB shard group is ultimately controlled by the
     * security group it uses. That public access is not permitted if the security
     * group assigned to the DB shard group doesn't permit it.</p> <p>When the DB shard
     * group isn't publicly accessible, it is an internal DB shard group with a DNS
     * name that resolves to a private IP address.</p> <p>Default: The default behavior
     * varies depending on whether <code>DBSubnetGroupName</code> is specified.</p>
     * <p>If <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB shard group is private.</p> </li> <li> <p>If the default
     * VPC in the target Region has an internet gateway attached to it, the DB shard
     * group is public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is
     * specified, and <code>PubliclyAccessible</code> isn't specified, the following
     * applies:</p> <ul> <li> <p>If the subnets are part of a VPC that doesn’t have an
     * internet gateway attached to it, the DB shard group is private.</p> </li> <li>
     * <p>If the subnets are part of a VPC that has an internet gateway attached to it,
     * the DB shard group is public.</p> </li> </ul>
     */
    inline CreateDBShardGroupRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

  private:

    Aws::String m_dBShardGroupIdentifier;
    bool m_dBShardGroupIdentifierHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    int m_computeRedundancy;
    bool m_computeRedundancyHasBeenSet = false;

    double m_maxACU;
    bool m_maxACUHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
