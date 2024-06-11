﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/model/AssignPublicIp.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>This structure specifies the VPC subnets and security groups for the task,
   * and whether a public IP address is to be used. This structure is relevant only
   * for ECS tasks that use the awsvpc network mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/AwsVpcConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsVpcConfiguration
  {
  public:
    AWS_SCHEDULER_API AwsVpcConfiguration();
    AWS_SCHEDULER_API AwsVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API AwsVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the task's elastic network interface receives a public IP
     * address. You can specify <code>ENABLED</code> only when <code>LaunchType</code>
     * in <code>EcsParameters</code> is set to <code>FARGATE</code>.</p>
     */
    inline const AssignPublicIp& GetAssignPublicIp() const{ return m_assignPublicIp; }
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }
    inline void SetAssignPublicIp(const AssignPublicIp& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = value; }
    inline void SetAssignPublicIp(AssignPublicIp&& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = std::move(value); }
    inline AwsVpcConfiguration& WithAssignPublicIp(const AssignPublicIp& value) { SetAssignPublicIp(value); return *this;}
    inline AwsVpcConfiguration& WithAssignPublicIp(AssignPublicIp&& value) { SetAssignPublicIp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the security groups associated with the task. These security groups
     * must all be in the same VPC. You can specify as many as five security groups. If
     * you do not specify a security group, the default security group for the VPC is
     * used.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline AwsVpcConfiguration& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline AwsVpcConfiguration& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline AwsVpcConfiguration& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline AwsVpcConfiguration& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline AwsVpcConfiguration& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the subnets associated with the task. These subnets must all be in
     * the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }
    inline AwsVpcConfiguration& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}
    inline AwsVpcConfiguration& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}
    inline AwsVpcConfiguration& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    inline AwsVpcConfiguration& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }
    inline AwsVpcConfiguration& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    ///@}
  private:

    AssignPublicIp m_assignPublicIp;
    bool m_assignPublicIpHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
