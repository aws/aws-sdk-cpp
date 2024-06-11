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
    AWS_PANORAMA_API NetworkStatus();
    AWS_PANORAMA_API NetworkStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NetworkStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of Ethernet port 0.</p>
     */
    inline const EthernetStatus& GetEthernet0Status() const{ return m_ethernet0Status; }
    inline bool Ethernet0StatusHasBeenSet() const { return m_ethernet0StatusHasBeenSet; }
    inline void SetEthernet0Status(const EthernetStatus& value) { m_ethernet0StatusHasBeenSet = true; m_ethernet0Status = value; }
    inline void SetEthernet0Status(EthernetStatus&& value) { m_ethernet0StatusHasBeenSet = true; m_ethernet0Status = std::move(value); }
    inline NetworkStatus& WithEthernet0Status(const EthernetStatus& value) { SetEthernet0Status(value); return *this;}
    inline NetworkStatus& WithEthernet0Status(EthernetStatus&& value) { SetEthernet0Status(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of Ethernet port 1.</p>
     */
    inline const EthernetStatus& GetEthernet1Status() const{ return m_ethernet1Status; }
    inline bool Ethernet1StatusHasBeenSet() const { return m_ethernet1StatusHasBeenSet; }
    inline void SetEthernet1Status(const EthernetStatus& value) { m_ethernet1StatusHasBeenSet = true; m_ethernet1Status = value; }
    inline void SetEthernet1Status(EthernetStatus&& value) { m_ethernet1StatusHasBeenSet = true; m_ethernet1Status = std::move(value); }
    inline NetworkStatus& WithEthernet1Status(const EthernetStatus& value) { SetEthernet1Status(value); return *this;}
    inline NetworkStatus& WithEthernet1Status(EthernetStatus&& value) { SetEthernet1Status(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the network status changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline NetworkStatus& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline NetworkStatus& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a network time protocol (NTP) server connection.</p>
     */
    inline const NtpStatus& GetNtpStatus() const{ return m_ntpStatus; }
    inline bool NtpStatusHasBeenSet() const { return m_ntpStatusHasBeenSet; }
    inline void SetNtpStatus(const NtpStatus& value) { m_ntpStatusHasBeenSet = true; m_ntpStatus = value; }
    inline void SetNtpStatus(NtpStatus&& value) { m_ntpStatusHasBeenSet = true; m_ntpStatus = std::move(value); }
    inline NetworkStatus& WithNtpStatus(const NtpStatus& value) { SetNtpStatus(value); return *this;}
    inline NetworkStatus& WithNtpStatus(NtpStatus&& value) { SetNtpStatus(std::move(value)); return *this;}
    ///@}
  private:

    EthernetStatus m_ethernet0Status;
    bool m_ethernet0StatusHasBeenSet = false;

    EthernetStatus m_ethernet1Status;
    bool m_ethernet1StatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    NtpStatus m_ntpStatus;
    bool m_ntpStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
