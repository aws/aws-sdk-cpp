/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/EthernetPayload.h>
#include <aws/panorama/model/NtpPayload.h>
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
   * <p>The network configuration for a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NetworkPayload">AWS
   * API Reference</a></p>
   */
  class NetworkPayload
  {
  public:
    AWS_PANORAMA_API NetworkPayload() = default;
    AWS_PANORAMA_API NetworkPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NetworkPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings for Ethernet port 0.</p>
     */
    inline const EthernetPayload& GetEthernet0() const { return m_ethernet0; }
    inline bool Ethernet0HasBeenSet() const { return m_ethernet0HasBeenSet; }
    template<typename Ethernet0T = EthernetPayload>
    void SetEthernet0(Ethernet0T&& value) { m_ethernet0HasBeenSet = true; m_ethernet0 = std::forward<Ethernet0T>(value); }
    template<typename Ethernet0T = EthernetPayload>
    NetworkPayload& WithEthernet0(Ethernet0T&& value) { SetEthernet0(std::forward<Ethernet0T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for Ethernet port 1.</p>
     */
    inline const EthernetPayload& GetEthernet1() const { return m_ethernet1; }
    inline bool Ethernet1HasBeenSet() const { return m_ethernet1HasBeenSet; }
    template<typename Ethernet1T = EthernetPayload>
    void SetEthernet1(Ethernet1T&& value) { m_ethernet1HasBeenSet = true; m_ethernet1 = std::forward<Ethernet1T>(value); }
    template<typename Ethernet1T = EthernetPayload>
    NetworkPayload& WithEthernet1(Ethernet1T&& value) { SetEthernet1(std::forward<Ethernet1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network time protocol (NTP) server settings.</p>
     */
    inline const NtpPayload& GetNtp() const { return m_ntp; }
    inline bool NtpHasBeenSet() const { return m_ntpHasBeenSet; }
    template<typename NtpT = NtpPayload>
    void SetNtp(NtpT&& value) { m_ntpHasBeenSet = true; m_ntp = std::forward<NtpT>(value); }
    template<typename NtpT = NtpPayload>
    NetworkPayload& WithNtp(NtpT&& value) { SetNtp(std::forward<NtpT>(value)); return *this;}
    ///@}
  private:

    EthernetPayload m_ethernet0;
    bool m_ethernet0HasBeenSet = false;

    EthernetPayload m_ethernet1;
    bool m_ethernet1HasBeenSet = false;

    NtpPayload m_ntp;
    bool m_ntpHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
