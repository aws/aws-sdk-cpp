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
   * <p> Specifies an IPv6 address in an Amazon EC2 launch template. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. </p>
     */
    inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
    template<typename Ipv6AddressT = Aws::String>
    void SetIpv6Address(Ipv6AddressT&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::forward<Ipv6AddressT>(value); }
    template<typename Ipv6AddressT = Aws::String>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails& WithIpv6Address(Ipv6AddressT&& value) { SetIpv6Address(std::forward<Ipv6AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
