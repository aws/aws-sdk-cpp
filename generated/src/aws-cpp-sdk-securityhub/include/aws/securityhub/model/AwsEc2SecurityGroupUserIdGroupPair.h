/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A relationship between a security group and a user.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2SecurityGroupUserIdGroupPair">AWS
   * API Reference</a></p>
   */
  class AwsEc2SecurityGroupUserIdGroupPair
  {
  public:
    AWS_SECURITYHUB_API AwsEc2SecurityGroupUserIdGroupPair();
    AWS_SECURITYHUB_API AwsEc2SecurityGroupUserIdGroupPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2SecurityGroupUserIdGroupPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the security group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the security group.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline const Aws::String& GetPeeringStatus() const{ return m_peeringStatus; }

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline bool PeeringStatusHasBeenSet() const { return m_peeringStatusHasBeenSet; }

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline void SetPeeringStatus(const Aws::String& value) { m_peeringStatusHasBeenSet = true; m_peeringStatus = value; }

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline void SetPeeringStatus(Aws::String&& value) { m_peeringStatusHasBeenSet = true; m_peeringStatus = std::move(value); }

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline void SetPeeringStatus(const char* value) { m_peeringStatusHasBeenSet = true; m_peeringStatus.assign(value); }

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithPeeringStatus(const Aws::String& value) { SetPeeringStatus(value); return *this;}

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithPeeringStatus(Aws::String&& value) { SetPeeringStatus(std::move(value)); return *this;}

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithPeeringStatus(const char* value) { SetPeeringStatus(value); return *this;}


    /**
     * <p>The ID of an Amazon Web Services account.</p> <p>For a referenced security
     * group in another VPC, the account ID of the referenced security group is
     * returned in the response. If the referenced security group is deleted, this
     * value is not returned.</p> <p>[EC2-Classic] Required when adding or removing
     * rules that reference a security group in another VPC. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of an Amazon Web Services account.</p> <p>For a referenced security
     * group in another VPC, the account ID of the referenced security group is
     * returned in the response. If the referenced security group is deleted, this
     * value is not returned.</p> <p>[EC2-Classic] Required when adding or removing
     * rules that reference a security group in another VPC. </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The ID of an Amazon Web Services account.</p> <p>For a referenced security
     * group in another VPC, the account ID of the referenced security group is
     * returned in the response. If the referenced security group is deleted, this
     * value is not returned.</p> <p>[EC2-Classic] Required when adding or removing
     * rules that reference a security group in another VPC. </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of an Amazon Web Services account.</p> <p>For a referenced security
     * group in another VPC, the account ID of the referenced security group is
     * returned in the response. If the referenced security group is deleted, this
     * value is not returned.</p> <p>[EC2-Classic] Required when adding or removing
     * rules that reference a security group in another VPC. </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of an Amazon Web Services account.</p> <p>For a referenced security
     * group in another VPC, the account ID of the referenced security group is
     * returned in the response. If the referenced security group is deleted, this
     * value is not returned.</p> <p>[EC2-Classic] Required when adding or removing
     * rules that reference a security group in another VPC. </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of an Amazon Web Services account.</p> <p>For a referenced security
     * group in another VPC, the account ID of the referenced security group is
     * returned in the response. If the referenced security group is deleted, this
     * value is not returned.</p> <p>[EC2-Classic] Required when adding or removing
     * rules that reference a security group in another VPC. </p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of an Amazon Web Services account.</p> <p>For a referenced security
     * group in another VPC, the account ID of the referenced security group is
     * returned in the response. If the referenced security group is deleted, this
     * value is not returned.</p> <p>[EC2-Classic] Required when adding or removing
     * rules that reference a security group in another VPC. </p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of an Amazon Web Services account.</p> <p>For a referenced security
     * group in another VPC, the account ID of the referenced security group is
     * returned in the response. If the referenced security group is deleted, this
     * value is not returned.</p> <p>[EC2-Classic] Required when adding or removing
     * rules that reference a security group in another VPC. </p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline AwsEc2SecurityGroupUserIdGroupPair& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_peeringStatus;
    bool m_peeringStatusHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
