/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/IPAddressType.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The ID for a subnet that's used in an association with a firewall. This is
   * used in <a>CreateFirewall</a>, <a>AssociateSubnets</a>, and
   * <a>CreateVpcEndpointAssociation</a>. Network Firewall creates an instance of the
   * associated firewall in each subnet that you specify, to filter traffic in the
   * subnet's Availability Zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/SubnetMapping">AWS
   * API Reference</a></p>
   */
  class SubnetMapping
  {
  public:
    AWS_NETWORKFIREWALL_API SubnetMapping() = default;
    AWS_NETWORKFIREWALL_API SubnetMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API SubnetMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the subnet. </p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    SubnetMapping& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet's IP address type. You can't change the IP address type after you
     * create the subnet.</p>
     */
    inline IPAddressType GetIPAddressType() const { return m_iPAddressType; }
    inline bool IPAddressTypeHasBeenSet() const { return m_iPAddressTypeHasBeenSet; }
    inline void SetIPAddressType(IPAddressType value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = value; }
    inline SubnetMapping& WithIPAddressType(IPAddressType value) { SetIPAddressType(value); return *this;}
    ///@}
  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    IPAddressType m_iPAddressType{IPAddressType::NOT_SET};
    bool m_iPAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
