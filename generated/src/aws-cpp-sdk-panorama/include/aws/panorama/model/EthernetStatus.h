/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/NetworkConnectionStatus.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A device's Ethernet status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/EthernetStatus">AWS
   * API Reference</a></p>
   */
  class EthernetStatus
  {
  public:
    AWS_PANORAMA_API EthernetStatus() = default;
    AWS_PANORAMA_API EthernetStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API EthernetStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device's connection status.</p>
     */
    inline NetworkConnectionStatus GetConnectionStatus() const { return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    inline void SetConnectionStatus(NetworkConnectionStatus value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }
    inline EthernetStatus& WithConnectionStatus(NetworkConnectionStatus value) { SetConnectionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's physical address.</p>
     */
    inline const Aws::String& GetHwAddress() const { return m_hwAddress; }
    inline bool HwAddressHasBeenSet() const { return m_hwAddressHasBeenSet; }
    template<typename HwAddressT = Aws::String>
    void SetHwAddress(HwAddressT&& value) { m_hwAddressHasBeenSet = true; m_hwAddress = std::forward<HwAddressT>(value); }
    template<typename HwAddressT = Aws::String>
    EthernetStatus& WithHwAddress(HwAddressT&& value) { SetHwAddress(std::forward<HwAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    EthernetStatus& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}
  private:

    NetworkConnectionStatus m_connectionStatus{NetworkConnectionStatus::NOT_SET};
    bool m_connectionStatusHasBeenSet = false;

    Aws::String m_hwAddress;
    bool m_hwAddressHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
