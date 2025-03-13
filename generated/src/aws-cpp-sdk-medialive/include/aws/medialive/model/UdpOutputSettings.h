/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/UdpContainerSettings.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/FecOutputSettings.h>
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
   * Udp Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UdpOutputSettings">AWS
   * API Reference</a></p>
   */
  class UdpOutputSettings
  {
  public:
    AWS_MEDIALIVE_API UdpOutputSettings() = default;
    AWS_MEDIALIVE_API UdpOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API UdpOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * UDP output buffering in milliseconds. Larger values increase latency through the
     * transcoder but simultaneously assist the transcoder in maintaining a constant,
     * low-jitter UDP/RTP output while accommodating clock recovery, input switching,
     * input disruptions, picture reordering, etc.
     */
    inline int GetBufferMsec() const { return m_bufferMsec; }
    inline bool BufferMsecHasBeenSet() const { return m_bufferMsecHasBeenSet; }
    inline void SetBufferMsec(int value) { m_bufferMsecHasBeenSet = true; m_bufferMsec = value; }
    inline UdpOutputSettings& WithBufferMsec(int value) { SetBufferMsec(value); return *this;}
    ///@}

    ///@{
    
    inline const UdpContainerSettings& GetContainerSettings() const { return m_containerSettings; }
    inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }
    template<typename ContainerSettingsT = UdpContainerSettings>
    void SetContainerSettings(ContainerSettingsT&& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = std::forward<ContainerSettingsT>(value); }
    template<typename ContainerSettingsT = UdpContainerSettings>
    UdpOutputSettings& WithContainerSettings(ContainerSettingsT&& value) { SetContainerSettings(std::forward<ContainerSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Destination address and port number for RTP or UDP packets. Can be unicast or
     * multicast RTP or UDP (eg. rtp://239.10.10.10:5001 or udp://10.100.100.100:5002).
     */
    inline const OutputLocationRef& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = OutputLocationRef>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = OutputLocationRef>
    UdpOutputSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for enabling and adjusting Forward Error Correction on UDP outputs.
     */
    inline const FecOutputSettings& GetFecOutputSettings() const { return m_fecOutputSettings; }
    inline bool FecOutputSettingsHasBeenSet() const { return m_fecOutputSettingsHasBeenSet; }
    template<typename FecOutputSettingsT = FecOutputSettings>
    void SetFecOutputSettings(FecOutputSettingsT&& value) { m_fecOutputSettingsHasBeenSet = true; m_fecOutputSettings = std::forward<FecOutputSettingsT>(value); }
    template<typename FecOutputSettingsT = FecOutputSettings>
    UdpOutputSettings& WithFecOutputSettings(FecOutputSettingsT&& value) { SetFecOutputSettings(std::forward<FecOutputSettingsT>(value)); return *this;}
    ///@}
  private:

    int m_bufferMsec{0};
    bool m_bufferMsecHasBeenSet = false;

    UdpContainerSettings m_containerSettings;
    bool m_containerSettingsHasBeenSet = false;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    FecOutputSettings m_fecOutputSettings;
    bool m_fecOutputSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
