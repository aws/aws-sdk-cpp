/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The properties for a private VPC Output<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VpcOutputSettingsDescription">AWS
   * API Reference</a></p>
   */
  class VpcOutputSettingsDescription
  {
  public:
    AWS_MEDIALIVE_API VpcOutputSettingsDescription();
    AWS_MEDIALIVE_API VpcOutputSettingsDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API VpcOutputSettingsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Availability Zones where the vpc subnets are located.
The first Availability
     * Zone applies to the first subnet in the list of subnets.
The second Availability
     * Zone applies to the second subnet.
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline VpcOutputSettingsDescription& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline VpcOutputSettingsDescription& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline VpcOutputSettingsDescription& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline VpcOutputSettingsDescription& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline VpcOutputSettingsDescription& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A list of Elastic Network Interfaces created by MediaLive in the customer's VPC
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }
    inline VpcOutputSettingsDescription& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}
    inline VpcOutputSettingsDescription& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}
    inline VpcOutputSettingsDescription& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    inline VpcOutputSettingsDescription& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }
    inline VpcOutputSettingsDescription& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A list of up EC2 VPC security group IDs attached to the Output VPC network
     * interfaces.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline VpcOutputSettingsDescription& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline VpcOutputSettingsDescription& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline VpcOutputSettingsDescription& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline VpcOutputSettingsDescription& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline VpcOutputSettingsDescription& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline VpcOutputSettingsDescription& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline VpcOutputSettingsDescription& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline VpcOutputSettingsDescription& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline VpcOutputSettingsDescription& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline VpcOutputSettingsDescription& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
