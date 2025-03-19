/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pipes/model/AssignPublicIp.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>This structure specifies the VPC subnets and security groups for the task,
   * and whether a public IP address is to be used. This structure is relevant only
   * for ECS tasks that use the <code>awsvpc</code> network mode.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/AwsVpcConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsVpcConfiguration
  {
  public:
    AWS_PIPES_API AwsVpcConfiguration() = default;
    AWS_PIPES_API AwsVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API AwsVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    AwsVpcConfiguration& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    AwsVpcConfiguration& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you do not specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    AwsVpcConfiguration& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    AwsVpcConfiguration& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the task's elastic network interface receives a public IP
     * address. You can specify <code>ENABLED</code> only when <code>LaunchType</code>
     * in <code>EcsParameters</code> is set to <code>FARGATE</code>.</p>
     */
    inline AssignPublicIp GetAssignPublicIp() const { return m_assignPublicIp; }
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }
    inline void SetAssignPublicIp(AssignPublicIp value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = value; }
    inline AwsVpcConfiguration& WithAssignPublicIp(AssignPublicIp value) { SetAssignPublicIp(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    AssignPublicIp m_assignPublicIp{AssignPublicIp::NOT_SET};
    bool m_assignPublicIpHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
