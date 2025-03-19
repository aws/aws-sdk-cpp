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
    AWS_SNOWDEVICEMANAGEMENT_API PhysicalNetworkInterface() = default;
    AWS_SNOWDEVICEMANAGEMENT_API PhysicalNetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API PhysicalNetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default gateway of the device.</p>
     */
    inline const Aws::String& GetDefaultGateway() const { return m_defaultGateway; }
    inline bool DefaultGatewayHasBeenSet() const { return m_defaultGatewayHasBeenSet; }
    template<typename DefaultGatewayT = Aws::String>
    void SetDefaultGateway(DefaultGatewayT&& value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway = std::forward<DefaultGatewayT>(value); }
    template<typename DefaultGatewayT = Aws::String>
    PhysicalNetworkInterface& WithDefaultGateway(DefaultGatewayT&& value) { SetDefaultGateway(std::forward<DefaultGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the device.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    PhysicalNetworkInterface& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that describes whether the IP address is dynamic or persistent.</p>
     */
    inline IpAddressAssignment GetIpAddressAssignment() const { return m_ipAddressAssignment; }
    inline bool IpAddressAssignmentHasBeenSet() const { return m_ipAddressAssignmentHasBeenSet; }
    inline void SetIpAddressAssignment(IpAddressAssignment value) { m_ipAddressAssignmentHasBeenSet = true; m_ipAddressAssignment = value; }
    inline PhysicalNetworkInterface& WithIpAddressAssignment(IpAddressAssignment value) { SetIpAddressAssignment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC address of the device.</p>
     */
    inline const Aws::String& GetMacAddress() const { return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    template<typename MacAddressT = Aws::String>
    void SetMacAddress(MacAddressT&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::forward<MacAddressT>(value); }
    template<typename MacAddressT = Aws::String>
    PhysicalNetworkInterface& WithMacAddress(MacAddressT&& value) { SetMacAddress(std::forward<MacAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The netmask used to divide the IP address into subnets.</p>
     */
    inline const Aws::String& GetNetmask() const { return m_netmask; }
    inline bool NetmaskHasBeenSet() const { return m_netmaskHasBeenSet; }
    template<typename NetmaskT = Aws::String>
    void SetNetmask(NetmaskT&& value) { m_netmaskHasBeenSet = true; m_netmask = std::forward<NetmaskT>(value); }
    template<typename NetmaskT = Aws::String>
    PhysicalNetworkInterface& WithNetmask(NetmaskT&& value) { SetNetmask(std::forward<NetmaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical connector type.</p>
     */
    inline PhysicalConnectorType GetPhysicalConnectorType() const { return m_physicalConnectorType; }
    inline bool PhysicalConnectorTypeHasBeenSet() const { return m_physicalConnectorTypeHasBeenSet; }
    inline void SetPhysicalConnectorType(PhysicalConnectorType value) { m_physicalConnectorTypeHasBeenSet = true; m_physicalConnectorType = value; }
    inline PhysicalNetworkInterface& WithPhysicalConnectorType(PhysicalConnectorType value) { SetPhysicalConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical network interface ID.</p>
     */
    inline const Aws::String& GetPhysicalNetworkInterfaceId() const { return m_physicalNetworkInterfaceId; }
    inline bool PhysicalNetworkInterfaceIdHasBeenSet() const { return m_physicalNetworkInterfaceIdHasBeenSet; }
    template<typename PhysicalNetworkInterfaceIdT = Aws::String>
    void SetPhysicalNetworkInterfaceId(PhysicalNetworkInterfaceIdT&& value) { m_physicalNetworkInterfaceIdHasBeenSet = true; m_physicalNetworkInterfaceId = std::forward<PhysicalNetworkInterfaceIdT>(value); }
    template<typename PhysicalNetworkInterfaceIdT = Aws::String>
    PhysicalNetworkInterface& WithPhysicalNetworkInterfaceId(PhysicalNetworkInterfaceIdT&& value) { SetPhysicalNetworkInterfaceId(std::forward<PhysicalNetworkInterfaceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultGateway;
    bool m_defaultGatewayHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    IpAddressAssignment m_ipAddressAssignment{IpAddressAssignment::NOT_SET};
    bool m_ipAddressAssignmentHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_netmask;
    bool m_netmaskHasBeenSet = false;

    PhysicalConnectorType m_physicalConnectorType{PhysicalConnectorType::NOT_SET};
    bool m_physicalConnectorTypeHasBeenSet = false;

    Aws::String m_physicalNetworkInterfaceId;
    bool m_physicalNetworkInterfaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
