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
    AWS_SECURITYHUB_API AwsEc2SecurityGroupUserIdGroupPair() = default;
    AWS_SECURITYHUB_API AwsEc2SecurityGroupUserIdGroupPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2SecurityGroupUserIdGroupPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    AwsEc2SecurityGroupUserIdGroupPair& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    AwsEc2SecurityGroupUserIdGroupPair& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline const Aws::String& GetPeeringStatus() const { return m_peeringStatus; }
    inline bool PeeringStatusHasBeenSet() const { return m_peeringStatusHasBeenSet; }
    template<typename PeeringStatusT = Aws::String>
    void SetPeeringStatus(PeeringStatusT&& value) { m_peeringStatusHasBeenSet = true; m_peeringStatus = std::forward<PeeringStatusT>(value); }
    template<typename PeeringStatusT = Aws::String>
    AwsEc2SecurityGroupUserIdGroupPair& WithPeeringStatus(PeeringStatusT&& value) { SetPeeringStatus(std::forward<PeeringStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an Amazon Web Services account.</p> <p>For a referenced security
     * group in another VPC, the account ID of the referenced security group is
     * returned in the response. If the referenced security group is deleted, this
     * value is not returned.</p> <p>[EC2-Classic] Required when adding or removing
     * rules that reference a security group in another VPC. </p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    AwsEc2SecurityGroupUserIdGroupPair& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsEc2SecurityGroupUserIdGroupPair& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const { return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    void SetVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::forward<VpcPeeringConnectionIdT>(value); }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    AwsEc2SecurityGroupUserIdGroupPair& WithVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { SetVpcPeeringConnectionId(std::forward<VpcPeeringConnectionIdT>(value)); return *this;}
    ///@}
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
