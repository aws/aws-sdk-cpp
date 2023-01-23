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
   * <p> Provides details on one or more IPv6 prefixes to be assigned to the network
   * interface. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The IPv6 prefix. </p>
     */
    inline const Aws::String& GetIpv6Prefix() const{ return m_ipv6Prefix; }

    /**
     * <p> The IPv6 prefix. </p>
     */
    inline bool Ipv6PrefixHasBeenSet() const { return m_ipv6PrefixHasBeenSet; }

    /**
     * <p> The IPv6 prefix. </p>
     */
    inline void SetIpv6Prefix(const Aws::String& value) { m_ipv6PrefixHasBeenSet = true; m_ipv6Prefix = value; }

    /**
     * <p> The IPv6 prefix. </p>
     */
    inline void SetIpv6Prefix(Aws::String&& value) { m_ipv6PrefixHasBeenSet = true; m_ipv6Prefix = std::move(value); }

    /**
     * <p> The IPv6 prefix. </p>
     */
    inline void SetIpv6Prefix(const char* value) { m_ipv6PrefixHasBeenSet = true; m_ipv6Prefix.assign(value); }

    /**
     * <p> The IPv6 prefix. </p>
     */
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails& WithIpv6Prefix(const Aws::String& value) { SetIpv6Prefix(value); return *this;}

    /**
     * <p> The IPv6 prefix. </p>
     */
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails& WithIpv6Prefix(Aws::String&& value) { SetIpv6Prefix(std::move(value)); return *this;}

    /**
     * <p> The IPv6 prefix. </p>
     */
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails& WithIpv6Prefix(const char* value) { SetIpv6Prefix(value); return *this;}

  private:

    Aws::String m_ipv6Prefix;
    bool m_ipv6PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
