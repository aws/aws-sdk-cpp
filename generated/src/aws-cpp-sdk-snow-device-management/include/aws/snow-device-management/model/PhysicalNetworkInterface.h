/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/IpAddressAssignment.h>
#include <aws/snow-device-management/model/PhysicalConnectorType.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The details about the physical network interface for the
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/PhysicalNetworkInterface">AWS
   * API Reference</a></p>
   */
  class PhysicalNetworkInterface
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API PhysicalNetworkInterface();
    AWS_SNOWDEVICEMANAGEMENT_API PhysicalNetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API PhysicalNetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default gateway of the device.</p>
     */
    inline const Aws::String& GetDefaultGateway() const{ return m_defaultGateway; }
    inline bool DefaultGatewayHasBeenSet() const { return m_defaultGatewayHasBeenSet; }
    inline void SetDefaultGateway(const Aws::String& value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway = value; }
    inline void SetDefaultGateway(Aws::String&& value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway = std::move(value); }
    inline void SetDefaultGateway(const char* value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway.assign(value); }
    inline PhysicalNetworkInterface& WithDefaultGateway(const Aws::String& value) { SetDefaultGateway(value); return *this;}
    inline PhysicalNetworkInterface& WithDefaultGateway(Aws::String&& value) { SetDefaultGateway(std::move(value)); return *this;}
    inline PhysicalNetworkInterface& WithDefaultGateway(const char* value) { SetDefaultGateway(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the device.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline PhysicalNetworkInterface& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline PhysicalNetworkInterface& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline PhysicalNetworkInterface& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that describes whether the IP address is dynamic or persistent.</p>
     */
    inline const IpAddressAssignment& GetIpAddressAssignment() const{ return m_ipAddressAssignment; }
    inline bool IpAddressAssignmentHasBeenSet() const { return m_ipAddressAssignmentHasBeenSet; }
    inline void SetIpAddressAssignment(const IpAddressAssignment& value) { m_ipAddressAssignmentHasBeenSet = true; m_ipAddressAssignment = value; }
    inline void SetIpAddressAssignment(IpAddressAssignment&& value) { m_ipAddressAssignmentHasBeenSet = true; m_ipAddressAssignment = std::move(value); }
    inline PhysicalNetworkInterface& WithIpAddressAssignment(const IpAddressAssignment& value) { SetIpAddressAssignment(value); return *this;}
    inline PhysicalNetworkInterface& WithIpAddressAssignment(IpAddressAssignment&& value) { SetIpAddressAssignment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC address of the device.</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }
    inline PhysicalNetworkInterface& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}
    inline PhysicalNetworkInterface& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}
    inline PhysicalNetworkInterface& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The netmask used to divide the IP address into subnets.</p>
     */
    inline const Aws::String& GetNetmask() const{ return m_netmask; }
    inline bool NetmaskHasBeenSet() const { return m_netmaskHasBeenSet; }
    inline void SetNetmask(const Aws::String& value) { m_netmaskHasBeenSet = true; m_netmask = value; }
    inline void SetNetmask(Aws::String&& value) { m_netmaskHasBeenSet = true; m_netmask = std::move(value); }
    inline void SetNetmask(const char* value) { m_netmaskHasBeenSet = true; m_netmask.assign(value); }
    inline PhysicalNetworkInterface& WithNetmask(const Aws::String& value) { SetNetmask(value); return *this;}
    inline PhysicalNetworkInterface& WithNetmask(Aws::String&& value) { SetNetmask(std::move(value)); return *this;}
    inline PhysicalNetworkInterface& WithNetmask(const char* value) { SetNetmask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical connector type.</p>
     */
    inline const PhysicalConnectorType& GetPhysicalConnectorType() const{ return m_physicalConnectorType; }
    inline bool PhysicalConnectorTypeHasBeenSet() const { return m_physicalConnectorTypeHasBeenSet; }
    inline void SetPhysicalConnectorType(const PhysicalConnectorType& value) { m_physicalConnectorTypeHasBeenSet = true; m_physicalConnectorType = value; }
    inline void SetPhysicalConnectorType(PhysicalConnectorType&& value) { m_physicalConnectorTypeHasBeenSet = true; m_physicalConnectorType = std::move(value); }
    inline PhysicalNetworkInterface& WithPhysicalConnectorType(const PhysicalConnectorType& value) { SetPhysicalConnectorType(value); return *this;}
    inline PhysicalNetworkInterface& WithPhysicalConnectorType(PhysicalConnectorType&& value) { SetPhysicalConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical network interface ID.</p>
     */
    inline const Aws::String& GetPhysicalNetworkInterfaceId() const{ return m_physicalNetworkInterfaceId; }
    inline bool PhysicalNetworkInterfaceIdHasBeenSet() const { return m_physicalNetworkInterfaceIdHasBeenSet; }
    inline void SetPhysicalNetworkInterfaceId(const Aws::String& value) { m_physicalNetworkInterfaceIdHasBeenSet = true; m_physicalNetworkInterfaceId = value; }
    inline void SetPhysicalNetworkInterfaceId(Aws::String&& value) { m_physicalNetworkInterfaceIdHasBeenSet = true; m_physicalNetworkInterfaceId = std::move(value); }
    inline void SetPhysicalNetworkInterfaceId(const char* value) { m_physicalNetworkInterfaceIdHasBeenSet = true; m_physicalNetworkInterfaceId.assign(value); }
    inline PhysicalNetworkInterface& WithPhysicalNetworkInterfaceId(const Aws::String& value) { SetPhysicalNetworkInterfaceId(value); return *this;}
    inline PhysicalNetworkInterface& WithPhysicalNetworkInterfaceId(Aws::String&& value) { SetPhysicalNetworkInterfaceId(std::move(value)); return *this;}
    inline PhysicalNetworkInterface& WithPhysicalNetworkInterfaceId(const char* value) { SetPhysicalNetworkInterfaceId(value); return *this;}
    ///@}
  private:

    Aws::String m_defaultGateway;
    bool m_defaultGatewayHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    IpAddressAssignment m_ipAddressAssignment;
    bool m_ipAddressAssignmentHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_netmask;
    bool m_netmaskHasBeenSet = false;

    PhysicalConnectorType m_physicalConnectorType;
    bool m_physicalConnectorTypeHasBeenSet = false;

    Aws::String m_physicalNetworkInterfaceId;
    bool m_physicalNetworkInterfaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
