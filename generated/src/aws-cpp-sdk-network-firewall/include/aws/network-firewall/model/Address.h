﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A single IP address specification. This is used in the <a>MatchAttributes</a>
   * source and destination specifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_NETWORKFIREWALL_API Address() = default;
    AWS_NETWORKFIREWALL_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify an IP address or a block of IP addresses in Classless Inter-Domain
     * Routing (CIDR) notation. Network Firewall supports all address ranges for IPv4
     * and IPv6. </p> <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to
     * inspect for the IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p>
     * </li> <li> <p>To configure Network Firewall to inspect for IP addresses from
     * 192.0.2.0 to 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li>
     * <p>To configure Network Firewall to inspect for the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from
     * 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline const Aws::String& GetAddressDefinition() const { return m_addressDefinition; }
    inline bool AddressDefinitionHasBeenSet() const { return m_addressDefinitionHasBeenSet; }
    template<typename AddressDefinitionT = Aws::String>
    void SetAddressDefinition(AddressDefinitionT&& value) { m_addressDefinitionHasBeenSet = true; m_addressDefinition = std::forward<AddressDefinitionT>(value); }
    template<typename AddressDefinitionT = Aws::String>
    Address& WithAddressDefinition(AddressDefinitionT&& value) { SetAddressDefinition(std::forward<AddressDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressDefinition;
    bool m_addressDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
