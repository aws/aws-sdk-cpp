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
   * <p> Provides details on one or more IPv4 prefixes for a network interface.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The IPv4 prefix. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-eni.html">Assigning
     * prefixes to Amazon EC2 network interfaces</a> in the <i>Amazon Elastic Compute
     * Cloud User Guide</i>. </p>
     */
    inline const Aws::String& GetIpv4Prefix() const { return m_ipv4Prefix; }
    inline bool Ipv4PrefixHasBeenSet() const { return m_ipv4PrefixHasBeenSet; }
    template<typename Ipv4PrefixT = Aws::String>
    void SetIpv4Prefix(Ipv4PrefixT&& value) { m_ipv4PrefixHasBeenSet = true; m_ipv4Prefix = std::forward<Ipv4PrefixT>(value); }
    template<typename Ipv4PrefixT = Aws::String>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails& WithIpv4Prefix(Ipv4PrefixT&& value) { SetIpv4Prefix(std::forward<Ipv4PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipv4Prefix;
    bool m_ipv4PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
