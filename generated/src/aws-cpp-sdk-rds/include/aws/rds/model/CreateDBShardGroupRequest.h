/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
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
    AWS_RDS_API CreateDBShardGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBShardGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB shard group.</p>
     */
    inline const Aws::String& GetDBShardGroupIdentifier() const { return m_dBShardGroupIdentifier; }
    inline bool DBShardGroupIdentifierHasBeenSet() const { return m_dBShardGroupIdentifierHasBeenSet; }
    template<typename DBShardGroupIdentifierT = Aws::String>
    void SetDBShardGroupIdentifier(DBShardGroupIdentifierT&& value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier = std::forward<DBShardGroupIdentifierT>(value); }
    template<typename DBShardGroupIdentifierT = Aws::String>
    CreateDBShardGroupRequest& WithDBShardGroupIdentifier(DBShardGroupIdentifierT&& value) { SetDBShardGroupIdentifier(std::forward<DBShardGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    CreateDBShardGroupRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to create standby standby DB data access shard for the DB
     * shard group. Valid values are the following:</p> <ul> <li> <p>0 - Creates a DB
     * shard group without a standby DB data access shard. This is the default
     * value.</p> </li> <li> <p>1 - Creates a DB shard group with a standby DB data
     * access shard in a different Availability Zone (AZ).</p> </li> <li> <p>2 -
     * Creates a DB shard group with two standby DB data access shard in two different
     * AZs.</p> </li> </ul>
     */
    inline int GetComputeRedundancy() const { return m_computeRedundancy; }
    inline bool ComputeRedundancyHasBeenSet() const { return m_computeRedundancyHasBeenSet; }
    inline void SetComputeRedundancy(int value) { m_computeRedundancyHasBeenSet = true; m_computeRedundancy = value; }
    inline CreateDBShardGroupRequest& WithComputeRedundancy(int value) { SetComputeRedundancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMaxACU() const { return m_maxACU; }
    inline bool MaxACUHasBeenSet() const { return m_maxACUHasBeenSet; }
    inline void SetMaxACU(double value) { m_maxACUHasBeenSet = true; m_maxACU = value; }
    inline CreateDBShardGroupRequest& WithMaxACU(double value) { SetMaxACU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMinACU() const { return m_minACU; }
    inline bool MinACUHasBeenSet() const { return m_minACUHasBeenSet; }
    inline void SetMinACU(double value) { m_minACUHasBeenSet = true; m_minACU = value; }
    inline CreateDBShardGroupRequest& WithMinACU(double value) { SetMinACU(value); return *this;}
    ///@}

    ///@{
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
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline CreateDBShardGroupRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDBShardGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDBShardGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBShardGroupIdentifier;
    bool m_dBShardGroupIdentifierHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    int m_computeRedundancy{0};
    bool m_computeRedundancyHasBeenSet = false;

    double m_maxACU{0.0};
    bool m_maxACUHasBeenSet = false;

    double m_minACU{0.0};
    bool m_minACUHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
