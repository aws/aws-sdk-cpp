/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>For tasks that use the <code>awsvpc</code> networking mode, the VPC subnet
   * and security group configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the task's elastic network interface receives a public IP address.
     * The default value is <code>DISABLED</code>.</p> <p>Valid values:
     * <code>ENABLED</code> | <code>DISABLED</code> </p>
     */
    inline const Aws::String& GetAssignPublicIp() const { return m_assignPublicIp; }
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }
    template<typename AssignPublicIpT = Aws::String>
    void SetAssignPublicIp(AssignPublicIpT&& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = std::forward<AssignPublicIpT>(value); }
    template<typename AssignPublicIpT = Aws::String>
    AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& WithAssignPublicIp(AssignPublicIpT&& value) { SetAssignPublicIp(std::forward<AssignPublicIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups associated with the task or service.</p>
     * <p>You can provide up to five security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets associated with the task or service.</p> <p>You can
     * provide up to 16 subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_assignPublicIp;
    bool m_assignPublicIpHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
