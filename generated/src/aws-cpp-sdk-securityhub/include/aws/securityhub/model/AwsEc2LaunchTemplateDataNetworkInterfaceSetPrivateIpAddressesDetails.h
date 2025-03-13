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
   * <p> One or more private IPv4 addresses. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether the private IPv4 address is the primary private IPv4
     * address. Only one IPv4 address can be designated as primary. </p>
     */
    inline bool GetPrimary() const { return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails& WithPrimary(bool value) { SetPrimary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The private IPv4 address. </p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}
  private:

    bool m_primary{false};
    bool m_primaryHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
