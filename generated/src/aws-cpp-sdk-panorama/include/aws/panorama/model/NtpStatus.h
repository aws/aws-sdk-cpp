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
   * <p>Details about an NTP server connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NtpStatus">AWS
   * API Reference</a></p>
   */
  class NtpStatus
  {
  public:
    AWS_PANORAMA_API NtpStatus() = default;
    AWS_PANORAMA_API NtpStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NtpStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connection's status.</p>
     */
    inline NetworkConnectionStatus GetConnectionStatus() const { return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    inline void SetConnectionStatus(NetworkConnectionStatus value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }
    inline NtpStatus& WithConnectionStatus(NetworkConnectionStatus value) { SetConnectionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the server.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    NtpStatus& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the server.</p>
     */
    inline const Aws::String& GetNtpServerName() const { return m_ntpServerName; }
    inline bool NtpServerNameHasBeenSet() const { return m_ntpServerNameHasBeenSet; }
    template<typename NtpServerNameT = Aws::String>
    void SetNtpServerName(NtpServerNameT&& value) { m_ntpServerNameHasBeenSet = true; m_ntpServerName = std::forward<NtpServerNameT>(value); }
    template<typename NtpServerNameT = Aws::String>
    NtpStatus& WithNtpServerName(NtpServerNameT&& value) { SetNtpServerName(std::forward<NtpServerNameT>(value)); return *this;}
    ///@}
  private:

    NetworkConnectionStatus m_connectionStatus{NetworkConnectionStatus::NOT_SET};
    bool m_connectionStatusHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_ntpServerName;
    bool m_ntpServerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
