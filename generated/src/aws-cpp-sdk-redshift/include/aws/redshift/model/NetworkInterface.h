/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a network interface. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class NetworkInterface
  {
  public:
    AWS_REDSHIFT_API NetworkInterface();
    AWS_REDSHIFT_API NetworkInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API NetworkInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The network interface identifier. </p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The network interface identifier. </p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The network interface identifier. </p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The network interface identifier. </p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The network interface identifier. </p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The network interface identifier. </p>
     */
    inline NetworkInterface& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The network interface identifier. </p>
     */
    inline NetworkInterface& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The network interface identifier. </p>
     */
    inline NetworkInterface& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The subnet identifier. </p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet identifier. </p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet identifier. </p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet identifier. </p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet identifier. </p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet identifier. </p>
     */
    inline NetworkInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet identifier. </p>
     */
    inline NetworkInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet identifier. </p>
     */
    inline NetworkInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The IPv4 address of the network interface within the subnet. </p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The IPv4 address of the network interface within the subnet. </p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The IPv4 address of the network interface within the subnet. </p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The IPv4 address of the network interface within the subnet. </p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The IPv4 address of the network interface within the subnet. </p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The IPv4 address of the network interface within the subnet. </p>
     */
    inline NetworkInterface& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The IPv4 address of the network interface within the subnet. </p>
     */
    inline NetworkInterface& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address of the network interface within the subnet. </p>
     */
    inline NetworkInterface& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>The Availability Zone. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone. </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone. </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone. </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone. </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone. </p>
     */
    inline NetworkInterface& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone. </p>
     */
    inline NetworkInterface& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone. </p>
     */
    inline NetworkInterface& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
