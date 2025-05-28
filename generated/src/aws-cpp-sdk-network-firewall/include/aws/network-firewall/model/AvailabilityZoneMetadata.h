/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
   * <p>High-level information about an Availability Zone where the firewall has an
   * endpoint defined. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AvailabilityZoneMetadata">AWS
   * API Reference</a></p>
   */
  class AvailabilityZoneMetadata
  {
  public:
    AWS_NETWORKFIREWALL_API AvailabilityZoneMetadata() = default;
    AWS_NETWORKFIREWALL_API AvailabilityZoneMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API AvailabilityZoneMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address type of the Firewall subnet in the Availability Zone. You
     * can't change the IP address type after you create the subnet.</p>
     */
    inline IPAddressType GetIPAddressType() const { return m_iPAddressType; }
    inline bool IPAddressTypeHasBeenSet() const { return m_iPAddressTypeHasBeenSet; }
    inline void SetIPAddressType(IPAddressType value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = value; }
    inline AvailabilityZoneMetadata& WithIPAddressType(IPAddressType value) { SetIPAddressType(value); return *this;}
    ///@}
  private:

    IPAddressType m_iPAddressType{IPAddressType::NOT_SET};
    bool m_iPAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
