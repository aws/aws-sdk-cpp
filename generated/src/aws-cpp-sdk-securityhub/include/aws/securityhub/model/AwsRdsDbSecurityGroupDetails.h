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
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupDetails();
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the DB security group.</p>
     */
    inline const Aws::String& GetDbSecurityGroupArn() const{ return m_dbSecurityGroupArn; }

    /**
     * <p>The ARN for the DB security group.</p>
     */
    inline bool DbSecurityGroupArnHasBeenSet() const { return m_dbSecurityGroupArnHasBeenSet; }

    /**
     * <p>The ARN for the DB security group.</p>
     */
    inline void SetDbSecurityGroupArn(const Aws::String& value) { m_dbSecurityGroupArnHasBeenSet = true; m_dbSecurityGroupArn = value; }

    /**
     * <p>The ARN for the DB security group.</p>
     */
    inline void SetDbSecurityGroupArn(Aws::String&& value) { m_dbSecurityGroupArnHasBeenSet = true; m_dbSecurityGroupArn = std::move(value); }

    /**
     * <p>The ARN for the DB security group.</p>
     */
    inline void SetDbSecurityGroupArn(const char* value) { m_dbSecurityGroupArnHasBeenSet = true; m_dbSecurityGroupArn.assign(value); }

    /**
     * <p>The ARN for the DB security group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupArn(const Aws::String& value) { SetDbSecurityGroupArn(value); return *this;}

    /**
     * <p>The ARN for the DB security group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupArn(Aws::String&& value) { SetDbSecurityGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the DB security group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupArn(const char* value) { SetDbSecurityGroupArn(value); return *this;}


    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline const Aws::String& GetDbSecurityGroupDescription() const{ return m_dbSecurityGroupDescription; }

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline bool DbSecurityGroupDescriptionHasBeenSet() const { return m_dbSecurityGroupDescriptionHasBeenSet; }

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline void SetDbSecurityGroupDescription(const Aws::String& value) { m_dbSecurityGroupDescriptionHasBeenSet = true; m_dbSecurityGroupDescription = value; }

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline void SetDbSecurityGroupDescription(Aws::String&& value) { m_dbSecurityGroupDescriptionHasBeenSet = true; m_dbSecurityGroupDescription = std::move(value); }

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline void SetDbSecurityGroupDescription(const char* value) { m_dbSecurityGroupDescriptionHasBeenSet = true; m_dbSecurityGroupDescription.assign(value); }

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupDescription(const Aws::String& value) { SetDbSecurityGroupDescription(value); return *this;}

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupDescription(Aws::String&& value) { SetDbSecurityGroupDescription(std::move(value)); return *this;}

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupDescription(const char* value) { SetDbSecurityGroupDescription(value); return *this;}


    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline const Aws::String& GetDbSecurityGroupName() const{ return m_dbSecurityGroupName; }

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline bool DbSecurityGroupNameHasBeenSet() const { return m_dbSecurityGroupNameHasBeenSet; }

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline void SetDbSecurityGroupName(const Aws::String& value) { m_dbSecurityGroupNameHasBeenSet = true; m_dbSecurityGroupName = value; }

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline void SetDbSecurityGroupName(Aws::String&& value) { m_dbSecurityGroupNameHasBeenSet = true; m_dbSecurityGroupName = std::move(value); }

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline void SetDbSecurityGroupName(const char* value) { m_dbSecurityGroupNameHasBeenSet = true; m_dbSecurityGroupName.assign(value); }

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupName(const Aws::String& value) { SetDbSecurityGroupName(value); return *this;}

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupName(Aws::String&& value) { SetDbSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithDbSecurityGroupName(const char* value) { SetDbSecurityGroupName(value); return *this;}


    /**
     * <p>Contains a list of EC2 security groups.</p>
     */
    inline const Aws::Vector<AwsRdsDbSecurityGroupEc2SecurityGroup>& GetEc2SecurityGroups() const{ return m_ec2SecurityGroups; }

    /**
     * <p>Contains a list of EC2 security groups.</p>
     */
    inline bool Ec2SecurityGroupsHasBeenSet() const { return m_ec2SecurityGroupsHasBeenSet; }

    /**
     * <p>Contains a list of EC2 security groups.</p>
     */
    inline void SetEc2SecurityGroups(const Aws::Vector<AwsRdsDbSecurityGroupEc2SecurityGroup>& value) { m_ec2SecurityGroupsHasBeenSet = true; m_ec2SecurityGroups = value; }

    /**
     * <p>Contains a list of EC2 security groups.</p>
     */
    inline void SetEc2SecurityGroups(Aws::Vector<AwsRdsDbSecurityGroupEc2SecurityGroup>&& value) { m_ec2SecurityGroupsHasBeenSet = true; m_ec2SecurityGroups = std::move(value); }

    /**
     * <p>Contains a list of EC2 security groups.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithEc2SecurityGroups(const Aws::Vector<AwsRdsDbSecurityGroupEc2SecurityGroup>& value) { SetEc2SecurityGroups(value); return *this;}

    /**
     * <p>Contains a list of EC2 security groups.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithEc2SecurityGroups(Aws::Vector<AwsRdsDbSecurityGroupEc2SecurityGroup>&& value) { SetEc2SecurityGroups(std::move(value)); return *this;}

    /**
     * <p>Contains a list of EC2 security groups.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& AddEc2SecurityGroups(const AwsRdsDbSecurityGroupEc2SecurityGroup& value) { m_ec2SecurityGroupsHasBeenSet = true; m_ec2SecurityGroups.push_back(value); return *this; }

    /**
     * <p>Contains a list of EC2 security groups.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& AddEc2SecurityGroups(AwsRdsDbSecurityGroupEc2SecurityGroup&& value) { m_ec2SecurityGroupsHasBeenSet = true; m_ec2SecurityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains a list of IP ranges.</p>
     */
    inline const Aws::Vector<AwsRdsDbSecurityGroupIpRange>& GetIpRanges() const{ return m_ipRanges; }

    /**
     * <p>Contains a list of IP ranges.</p>
     */
    inline bool IpRangesHasBeenSet() const { return m_ipRangesHasBeenSet; }

    /**
     * <p>Contains a list of IP ranges.</p>
     */
    inline void SetIpRanges(const Aws::Vector<AwsRdsDbSecurityGroupIpRange>& value) { m_ipRangesHasBeenSet = true; m_ipRanges = value; }

    /**
     * <p>Contains a list of IP ranges.</p>
     */
    inline void SetIpRanges(Aws::Vector<AwsRdsDbSecurityGroupIpRange>&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = std::move(value); }

    /**
     * <p>Contains a list of IP ranges.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithIpRanges(const Aws::Vector<AwsRdsDbSecurityGroupIpRange>& value) { SetIpRanges(value); return *this;}

    /**
     * <p>Contains a list of IP ranges.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithIpRanges(Aws::Vector<AwsRdsDbSecurityGroupIpRange>&& value) { SetIpRanges(std::move(value)); return *this;}

    /**
     * <p>Contains a list of IP ranges.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& AddIpRanges(const AwsRdsDbSecurityGroupIpRange& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }

    /**
     * <p>Contains a list of IP ranges.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& AddIpRanges(AwsRdsDbSecurityGroupIpRange&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides the Amazon Web Services ID of the owner of a specific DB security
     * group.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>Provides the Amazon Web Services ID of the owner of a specific DB security
     * group.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>Provides the Amazon Web Services ID of the owner of a specific DB security
     * group.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>Provides the Amazon Web Services ID of the owner of a specific DB security
     * group.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>Provides the Amazon Web Services ID of the owner of a specific DB security
     * group.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>Provides the Amazon Web Services ID of the owner of a specific DB security
     * group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>Provides the Amazon Web Services ID of the owner of a specific DB security
     * group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>Provides the Amazon Web Services ID of the owner of a specific DB security
     * group.</p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>Provides VPC ID associated with the DB security group. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Provides VPC ID associated with the DB security group. </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>Provides VPC ID associated with the DB security group. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides VPC ID associated with the DB security group. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>Provides VPC ID associated with the DB security group. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Provides VPC ID associated with the DB security group. </p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides VPC ID associated with the DB security group. </p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>Provides VPC ID associated with the DB security group. </p>
     */
    inline AwsRdsDbSecurityGroupDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}

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
