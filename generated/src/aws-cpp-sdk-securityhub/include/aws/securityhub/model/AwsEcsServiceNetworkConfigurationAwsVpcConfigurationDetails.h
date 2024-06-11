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
    AWS_SECURITYHUB_API AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the task's elastic network interface receives a public IP address.
     * The default value is <code>DISABLED</code>.</p> <p>Valid values:
     * <code>ENABLED</code> | <code>DISABLED</code> </p>
     */
    inline const Aws::String& GetAssignPublicIp() const{ return m_assignPublicIp; }
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }
    inline void SetAssignPublicIp(const Aws::String& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = value; }
    inline void SetAssignPublicIp(Aws::String&& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = std::move(value); }
    inline void SetAssignPublicIp(const char* value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp.assign(value); }
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& WithAssignPublicIp(const Aws::String& value) { SetAssignPublicIp(value); return *this;}
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& WithAssignPublicIp(Aws::String&& value) { SetAssignPublicIp(std::move(value)); return *this;}
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& WithAssignPublicIp(const char* value) { SetAssignPublicIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups associated with the task or service.</p>
     * <p>You can provide up to five security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets associated with the task or service.</p> <p>You can
     * provide up to 16 subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }
    inline AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
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
