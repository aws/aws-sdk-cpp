/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Information about the server's network for which the assessment was run.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/NetworkInfo">AWS
   * API Reference</a></p>
   */
  class NetworkInfo
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NetworkInfo() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NetworkInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NetworkInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Information about the name of the interface of the server for which the
     * assessment was run. </p>
     */
    inline const Aws::String& GetInterfaceName() const { return m_interfaceName; }
    inline bool InterfaceNameHasBeenSet() const { return m_interfaceNameHasBeenSet; }
    template<typename InterfaceNameT = Aws::String>
    void SetInterfaceName(InterfaceNameT&& value) { m_interfaceNameHasBeenSet = true; m_interfaceName = std::forward<InterfaceNameT>(value); }
    template<typename InterfaceNameT = Aws::String>
    NetworkInfo& WithInterfaceName(InterfaceNameT&& value) { SetInterfaceName(std::forward<InterfaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the IP address of the server for which the assessment was
     * run. </p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    NetworkInfo& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the MAC address of the server for which the assessment was
     * run. </p>
     */
    inline const Aws::String& GetMacAddress() const { return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    template<typename MacAddressT = Aws::String>
    void SetMacAddress(MacAddressT&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::forward<MacAddressT>(value); }
    template<typename MacAddressT = Aws::String>
    NetworkInfo& WithMacAddress(MacAddressT&& value) { SetMacAddress(std::forward<MacAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the subnet mask of the server for which the assessment was
     * run. </p>
     */
    inline const Aws::String& GetNetMask() const { return m_netMask; }
    inline bool NetMaskHasBeenSet() const { return m_netMaskHasBeenSet; }
    template<typename NetMaskT = Aws::String>
    void SetNetMask(NetMaskT&& value) { m_netMaskHasBeenSet = true; m_netMask = std::forward<NetMaskT>(value); }
    template<typename NetMaskT = Aws::String>
    NetworkInfo& WithNetMask(NetMaskT&& value) { SetNetMask(std::forward<NetMaskT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_interfaceName;
    bool m_interfaceNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_netMask;
    bool m_netMaskHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
