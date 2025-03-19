/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/UdpContainerSettings.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/SrtEncryptionType.h>
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
   * Srt Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtOutputSettings">AWS
   * API Reference</a></p>
   */
  class SrtOutputSettings
  {
  public:
    AWS_MEDIALIVE_API SrtOutputSettings() = default;
    AWS_MEDIALIVE_API SrtOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SrtOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * SRT output buffering in milliseconds. A higher value increases latency through
     * the encoder. But the benefits are that it helps to maintain a constant,
     * low-jitter SRT output, and it accommodates clock recovery, input switching,
     * input disruptions, picture reordering, and so on. Range: 0-10000 milliseconds.
     */
    inline int GetBufferMsec() const { return m_bufferMsec; }
    inline bool BufferMsecHasBeenSet() const { return m_bufferMsecHasBeenSet; }
    inline void SetBufferMsec(int value) { m_bufferMsecHasBeenSet = true; m_bufferMsec = value; }
    inline SrtOutputSettings& WithBufferMsec(int value) { SetBufferMsec(value); return *this;}
    ///@}

    ///@{
    
    inline const UdpContainerSettings& GetContainerSettings() const { return m_containerSettings; }
    inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }
    template<typename ContainerSettingsT = UdpContainerSettings>
    void SetContainerSettings(ContainerSettingsT&& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = std::forward<ContainerSettingsT>(value); }
    template<typename ContainerSettingsT = UdpContainerSettings>
    SrtOutputSettings& WithContainerSettings(ContainerSettingsT&& value) { SetContainerSettings(std::forward<ContainerSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OutputLocationRef& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = OutputLocationRef>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = OutputLocationRef>
    SrtOutputSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The encryption level for the content. Valid values are AES128, AES192, AES256.
     * You and the downstream system should plan how to set this field because the
     * values must not conflict with each other.
     */
    inline SrtEncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(SrtEncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline SrtOutputSettings& WithEncryptionType(SrtEncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * The latency value, in milliseconds, that is proposed during the SRT connection
     * handshake. SRT will choose the maximum of the values proposed by the sender and
     * receiver. On the sender side, latency is the amount of time a packet is held to
     * give it a chance to be delivered successfully. On the receiver side, latency is
     * the amount of time the packet is held before delivering to the application,
     * aiding in packet recovery and matching as closely as possible the packet timing
     * of the sender. Range: 40-16000 milliseconds.
     */
    inline int GetLatency() const { return m_latency; }
    inline bool LatencyHasBeenSet() const { return m_latencyHasBeenSet; }
    inline void SetLatency(int value) { m_latencyHasBeenSet = true; m_latency = value; }
    inline SrtOutputSettings& WithLatency(int value) { SetLatency(value); return *this;}
    ///@}
  private:

    int m_bufferMsec{0};
    bool m_bufferMsecHasBeenSet = false;

    UdpContainerSettings m_containerSettings;
    bool m_containerSettingsHasBeenSet = false;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    SrtEncryptionType m_encryptionType{SrtEncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    int m_latency{0};
    bool m_latencyHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
