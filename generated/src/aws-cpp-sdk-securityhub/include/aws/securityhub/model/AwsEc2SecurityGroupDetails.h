/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2SecurityGroupIpPermission.h>
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
   * <p>Details about an Amazon EC2 security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2SecurityGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2SecurityGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2SecurityGroupDetails() = default;
    AWS_SECURITYHUB_API AwsEc2SecurityGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2SecurityGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    AwsEc2SecurityGroupDetails& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    AwsEc2SecurityGroupDetails& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    AwsEc2SecurityGroupDetails& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[VPC only] The ID of the VPC for the security group.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsEc2SecurityGroupDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupIpPermission>& GetIpPermissions() const { return m_ipPermissions; }
    inline bool IpPermissionsHasBeenSet() const { return m_ipPermissionsHasBeenSet; }
    template<typename IpPermissionsT = Aws::Vector<AwsEc2SecurityGroupIpPermission>>
    void SetIpPermissions(IpPermissionsT&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::forward<IpPermissionsT>(value); }
    template<typename IpPermissionsT = Aws::Vector<AwsEc2SecurityGroupIpPermission>>
    AwsEc2SecurityGroupDetails& WithIpPermissions(IpPermissionsT&& value) { SetIpPermissions(std::forward<IpPermissionsT>(value)); return *this;}
    template<typename IpPermissionsT = AwsEc2SecurityGroupIpPermission>
    AwsEc2SecurityGroupDetails& AddIpPermissions(IpPermissionsT&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.emplace_back(std::forward<IpPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[VPC only] The outbound rules associated with the security group.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupIpPermission>& GetIpPermissionsEgress() const { return m_ipPermissionsEgress; }
    inline bool IpPermissionsEgressHasBeenSet() const { return m_ipPermissionsEgressHasBeenSet; }
    template<typename IpPermissionsEgressT = Aws::Vector<AwsEc2SecurityGroupIpPermission>>
    void SetIpPermissionsEgress(IpPermissionsEgressT&& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress = std::forward<IpPermissionsEgressT>(value); }
    template<typename IpPermissionsEgressT = Aws::Vector<AwsEc2SecurityGroupIpPermission>>
    AwsEc2SecurityGroupDetails& WithIpPermissionsEgress(IpPermissionsEgressT&& value) { SetIpPermissionsEgress(std::forward<IpPermissionsEgressT>(value)); return *this;}
    template<typename IpPermissionsEgressT = AwsEc2SecurityGroupIpPermission>
    AwsEc2SecurityGroupDetails& AddIpPermissionsEgress(IpPermissionsEgressT&& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress.emplace_back(std::forward<IpPermissionsEgressT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<AwsEc2SecurityGroupIpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet = false;

    Aws::Vector<AwsEc2SecurityGroupIpPermission> m_ipPermissionsEgress;
    bool m_ipPermissionsEgressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
