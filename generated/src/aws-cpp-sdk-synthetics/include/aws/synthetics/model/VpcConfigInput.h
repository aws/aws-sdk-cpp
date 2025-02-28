﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>If this canary is to test an endpoint in a VPC, this structure contains
   * information about the subnets and security groups of the VPC endpoint. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_VPC.html">
   * Running a Canary in a VPC</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/VpcConfigInput">AWS
   * API Reference</a></p>
   */
  class VpcConfigInput
  {
  public:
    AWS_SYNTHETICS_API VpcConfigInput();
    AWS_SYNTHETICS_API VpcConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API VpcConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IDs of the subnets where this canary is to run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline VpcConfigInput& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline VpcConfigInput& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline VpcConfigInput& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline VpcConfigInput& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline VpcConfigInput& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups for this canary.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline VpcConfigInput& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline VpcConfigInput& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline VpcConfigInput& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline VpcConfigInput& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline VpcConfigInput& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set this to <code>true</code> to allow outbound IPv6 traffic on VPC canaries
     * that are connected to dual-stack subnets. The default is <code>false</code> </p>
     */
    inline bool GetIpv6AllowedForDualStack() const{ return m_ipv6AllowedForDualStack; }
    inline bool Ipv6AllowedForDualStackHasBeenSet() const { return m_ipv6AllowedForDualStackHasBeenSet; }
    inline void SetIpv6AllowedForDualStack(bool value) { m_ipv6AllowedForDualStackHasBeenSet = true; m_ipv6AllowedForDualStack = value; }
    inline VpcConfigInput& WithIpv6AllowedForDualStack(bool value) { SetIpv6AllowedForDualStack(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    bool m_ipv6AllowedForDualStack;
    bool m_ipv6AllowedForDualStackHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
