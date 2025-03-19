/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsRdsDbSecurityGroupEc2SecurityGroup.h>
#include <aws/securityhub/model/AwsRdsDbSecurityGroupIpRange.h>
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
   * <p>Provides information about an Amazon RDS DB security group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbSecurityGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbSecurityGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupDetails() = default;
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN for the DB security group.</p>
     */
    inline const Aws::String& GetDbSecurityGroupArn() const { return m_dbSecurityGroupArn; }
    inline bool DbSecurityGroupArnHasBeenSet() const { return m_dbSecurityGroupArnHasBeenSet; }
    template<typename DbSecurityGroupArnT = Aws::String>
    void SetDbSecurityGroupArn(DbSecurityGroupArnT&& value) { m_dbSecurityGroupArnHasBeenSet = true; m_dbSecurityGroupArn = std::forward<DbSecurityGroupArnT>(value); }
    template<typename DbSecurityGroupArnT = Aws::String>
    AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupArn(DbSecurityGroupArnT&& value) { SetDbSecurityGroupArn(std::forward<DbSecurityGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline const Aws::String& GetDbSecurityGroupDescription() const { return m_dbSecurityGroupDescription; }
    inline bool DbSecurityGroupDescriptionHasBeenSet() const { return m_dbSecurityGroupDescriptionHasBeenSet; }
    template<typename DbSecurityGroupDescriptionT = Aws::String>
    void SetDbSecurityGroupDescription(DbSecurityGroupDescriptionT&& value) { m_dbSecurityGroupDescriptionHasBeenSet = true; m_dbSecurityGroupDescription = std::forward<DbSecurityGroupDescriptionT>(value); }
    template<typename DbSecurityGroupDescriptionT = Aws::String>
    AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupDescription(DbSecurityGroupDescriptionT&& value) { SetDbSecurityGroupDescription(std::forward<DbSecurityGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline const Aws::String& GetDbSecurityGroupName() const { return m_dbSecurityGroupName; }
    inline bool DbSecurityGroupNameHasBeenSet() const { return m_dbSecurityGroupNameHasBeenSet; }
    template<typename DbSecurityGroupNameT = Aws::String>
    void SetDbSecurityGroupName(DbSecurityGroupNameT&& value) { m_dbSecurityGroupNameHasBeenSet = true; m_dbSecurityGroupName = std::forward<DbSecurityGroupNameT>(value); }
    template<typename DbSecurityGroupNameT = Aws::String>
    AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupName(DbSecurityGroupNameT&& value) { SetDbSecurityGroupName(std::forward<DbSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of EC2 security groups.</p>
     */
    inline const Aws::Vector<AwsRdsDbSecurityGroupEc2SecurityGroup>& GetEc2SecurityGroups() const { return m_ec2SecurityGroups; }
    inline bool Ec2SecurityGroupsHasBeenSet() const { return m_ec2SecurityGroupsHasBeenSet; }
    template<typename Ec2SecurityGroupsT = Aws::Vector<AwsRdsDbSecurityGroupEc2SecurityGroup>>
    void SetEc2SecurityGroups(Ec2SecurityGroupsT&& value) { m_ec2SecurityGroupsHasBeenSet = true; m_ec2SecurityGroups = std::forward<Ec2SecurityGroupsT>(value); }
    template<typename Ec2SecurityGroupsT = Aws::Vector<AwsRdsDbSecurityGroupEc2SecurityGroup>>
    AwsRdsDbSecurityGroupDetails& WithEc2SecurityGroups(Ec2SecurityGroupsT&& value) { SetEc2SecurityGroups(std::forward<Ec2SecurityGroupsT>(value)); return *this;}
    template<typename Ec2SecurityGroupsT = AwsRdsDbSecurityGroupEc2SecurityGroup>
    AwsRdsDbSecurityGroupDetails& AddEc2SecurityGroups(Ec2SecurityGroupsT&& value) { m_ec2SecurityGroupsHasBeenSet = true; m_ec2SecurityGroups.emplace_back(std::forward<Ec2SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a list of IP ranges.</p>
     */
    inline const Aws::Vector<AwsRdsDbSecurityGroupIpRange>& GetIpRanges() const { return m_ipRanges; }
    inline bool IpRangesHasBeenSet() const { return m_ipRangesHasBeenSet; }
    template<typename IpRangesT = Aws::Vector<AwsRdsDbSecurityGroupIpRange>>
    void SetIpRanges(IpRangesT&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = std::forward<IpRangesT>(value); }
    template<typename IpRangesT = Aws::Vector<AwsRdsDbSecurityGroupIpRange>>
    AwsRdsDbSecurityGroupDetails& WithIpRanges(IpRangesT&& value) { SetIpRanges(std::forward<IpRangesT>(value)); return *this;}
    template<typename IpRangesT = AwsRdsDbSecurityGroupIpRange>
    AwsRdsDbSecurityGroupDetails& AddIpRanges(IpRangesT&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.emplace_back(std::forward<IpRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon Web Services ID of the owner of a specific DB security
     * group.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    AwsRdsDbSecurityGroupDetails& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides VPC ID associated with the DB security group. </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsRdsDbSecurityGroupDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbSecurityGroupArn;
    bool m_dbSecurityGroupArnHasBeenSet = false;

    Aws::String m_dbSecurityGroupDescription;
    bool m_dbSecurityGroupDescriptionHasBeenSet = false;

    Aws::String m_dbSecurityGroupName;
    bool m_dbSecurityGroupNameHasBeenSet = false;

    Aws::Vector<AwsRdsDbSecurityGroupEc2SecurityGroup> m_ec2SecurityGroups;
    bool m_ec2SecurityGroupsHasBeenSet = false;

    Aws::Vector<AwsRdsDbSecurityGroupIpRange> m_ipRanges;
    bool m_ipRangesHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
