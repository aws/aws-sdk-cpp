/**
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
   * <p>Defines the mapping between an Availability Zone and a firewall endpoint for
   * a transit gateway-attached firewall. Each mapping represents where the firewall
   * can process traffic. You use these mappings when calling <a>CreateFirewall</a>,
   * <a>AssociateAvailabilityZones</a>, and <a>DisassociateAvailabilityZones</a>.</p>
   * <p>To retrieve the current Availability Zone mappings for a firewall, use
   * <a>DescribeFirewall</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AvailabilityZoneMapping">AWS
   * API Reference</a></p>
   */
  class AvailabilityZoneMapping
  {
  public:
    AWS_NETWORKFIREWALL_API AvailabilityZoneMapping() = default;
    AWS_NETWORKFIREWALL_API AvailabilityZoneMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API AvailabilityZoneMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Availability Zone where the firewall endpoint is located. For
     * example, <code>us-east-2a</code>. The Availability Zone must be in the same
     * Region as the transit gateway.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    AvailabilityZoneMapping& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
