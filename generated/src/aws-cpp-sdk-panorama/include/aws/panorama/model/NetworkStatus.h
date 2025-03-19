/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/EthernetStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/panorama/model/NtpStatus.h>
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
   * <p>The network status of a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NetworkStatus">AWS
   * API Reference</a></p>
   */
  class NetworkStatus
  {
  public:
    AWS_PANORAMA_API NetworkStatus() = default;
    AWS_PANORAMA_API NetworkStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NetworkStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of Ethernet port 0.</p>
     */
    inline const EthernetStatus& GetEthernet0Status() const { return m_ethernet0Status; }
    inline bool Ethernet0StatusHasBeenSet() const { return m_ethernet0StatusHasBeenSet; }
    template<typename Ethernet0StatusT = EthernetStatus>
    void SetEthernet0Status(Ethernet0StatusT&& value) { m_ethernet0StatusHasBeenSet = true; m_ethernet0Status = std::forward<Ethernet0StatusT>(value); }
    template<typename Ethernet0StatusT = EthernetStatus>
    NetworkStatus& WithEthernet0Status(Ethernet0StatusT&& value) { SetEthernet0Status(std::forward<Ethernet0StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of Ethernet port 1.</p>
     */
    inline const EthernetStatus& GetEthernet1Status() const { return m_ethernet1Status; }
    inline bool Ethernet1StatusHasBeenSet() const { return m_ethernet1StatusHasBeenSet; }
    template<typename Ethernet1StatusT = EthernetStatus>
    void SetEthernet1Status(Ethernet1StatusT&& value) { m_ethernet1StatusHasBeenSet = true; m_ethernet1Status = std::forward<Ethernet1StatusT>(value); }
    template<typename Ethernet1StatusT = EthernetStatus>
    NetworkStatus& WithEthernet1Status(Ethernet1StatusT&& value) { SetEthernet1Status(std::forward<Ethernet1StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the network status changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    NetworkStatus& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a network time protocol (NTP) server connection.</p>
     */
    inline const NtpStatus& GetNtpStatus() const { return m_ntpStatus; }
    inline bool NtpStatusHasBeenSet() const { return m_ntpStatusHasBeenSet; }
    template<typename NtpStatusT = NtpStatus>
    void SetNtpStatus(NtpStatusT&& value) { m_ntpStatusHasBeenSet = true; m_ntpStatus = std::forward<NtpStatusT>(value); }
    template<typename NtpStatusT = NtpStatus>
    NetworkStatus& WithNtpStatus(NtpStatusT&& value) { SetNtpStatus(std::forward<NtpStatusT>(value)); return *this;}
    ///@}
  private:

    EthernetStatus m_ethernet0Status;
    bool m_ethernet0StatusHasBeenSet = false;

    EthernetStatus m_ethernet1Status;
    bool m_ethernet1StatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    NtpStatus m_ntpStatus;
    bool m_ntpStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
