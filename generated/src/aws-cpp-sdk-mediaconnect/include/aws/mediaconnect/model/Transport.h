/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Protocol.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> Attributes related to the transport stream that are used in a source or
   * output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Transport">AWS
   * API Reference</a></p>
   */
  class Transport
  {
  public:
    AWS_MEDIACONNECT_API Transport() = default;
    AWS_MEDIACONNECT_API Transport(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Transport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The range of IP addresses that should be allowed to initiate output requests
     * to this flow. These IP addresses should be in the form of a Classless
     * Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrAllowList() const { return m_cidrAllowList; }
    inline bool CidrAllowListHasBeenSet() const { return m_cidrAllowListHasBeenSet; }
    template<typename CidrAllowListT = Aws::Vector<Aws::String>>
    void SetCidrAllowList(CidrAllowListT&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList = std::forward<CidrAllowListT>(value); }
    template<typename CidrAllowListT = Aws::Vector<Aws::String>>
    Transport& WithCidrAllowList(CidrAllowListT&& value) { SetCidrAllowList(std::forward<CidrAllowListT>(value)); return *this;}
    template<typename CidrAllowListT = Aws::String>
    Transport& AddCidrAllowList(CidrAllowListT&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.emplace_back(std::forward<CidrAllowListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The smoothing max bitrate (in bps) for RIST, RTP, and RTP-FEC streams.</p>
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline Transport& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum latency in milliseconds. This parameter applies only to
     * RIST-based and Zixi-based streams.</p>
     */
    inline int GetMaxLatency() const { return m_maxLatency; }
    inline bool MaxLatencyHasBeenSet() const { return m_maxLatencyHasBeenSet; }
    inline void SetMaxLatency(int value) { m_maxLatencyHasBeenSet = true; m_maxLatency = value; }
    inline Transport& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of the buffer (in milliseconds) to use to sync incoming source
     * data.</p>
     */
    inline int GetMaxSyncBuffer() const { return m_maxSyncBuffer; }
    inline bool MaxSyncBufferHasBeenSet() const { return m_maxSyncBufferHasBeenSet; }
    inline void SetMaxSyncBuffer(int value) { m_maxSyncBufferHasBeenSet = true; m_maxSyncBuffer = value; }
    inline Transport& WithMaxSyncBuffer(int value) { SetMaxSyncBuffer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The minimum latency in milliseconds for SRT-based streams. In streams that
     * use the SRT protocol, this value that you set on your MediaConnect source or
     * output represents the minimal potential latency of that connection. The latency
     * of the stream is set to the highest number between the sender’s minimum latency
     * and the receiver’s minimum latency.</p>
     */
    inline int GetMinLatency() const { return m_minLatency; }
    inline bool MinLatencyHasBeenSet() const { return m_minLatencyHasBeenSet; }
    inline void SetMinLatency(int value) { m_minLatencyHasBeenSet = true; m_minLatency = value; }
    inline Transport& WithMinLatency(int value) { SetMinLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The protocol that is used by the source or output.</p>  <p>Elemental
     * MediaConnect no longer supports the Fujitsu QoS protocol. This reference is
     * maintained for legacy purposes only.</p> 
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline Transport& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The remote ID for the Zixi-pull stream.</p>
     */
    inline const Aws::String& GetRemoteId() const { return m_remoteId; }
    inline bool RemoteIdHasBeenSet() const { return m_remoteIdHasBeenSet; }
    template<typename RemoteIdT = Aws::String>
    void SetRemoteId(RemoteIdT&& value) { m_remoteIdHasBeenSet = true; m_remoteId = std::forward<RemoteIdT>(value); }
    template<typename RemoteIdT = Aws::String>
    Transport& WithRemoteId(RemoteIdT&& value) { SetRemoteId(std::forward<RemoteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port that the flow uses to send outbound requests to initiate connection
     * with the sender.</p>
     */
    inline int GetSenderControlPort() const { return m_senderControlPort; }
    inline bool SenderControlPortHasBeenSet() const { return m_senderControlPortHasBeenSet; }
    inline void SetSenderControlPort(int value) { m_senderControlPortHasBeenSet = true; m_senderControlPort = value; }
    inline Transport& WithSenderControlPort(int value) { SetSenderControlPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IP address that the flow communicates with to initiate connection with
     * the sender.</p>
     */
    inline const Aws::String& GetSenderIpAddress() const { return m_senderIpAddress; }
    inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }
    template<typename SenderIpAddressT = Aws::String>
    void SetSenderIpAddress(SenderIpAddressT&& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = std::forward<SenderIpAddressT>(value); }
    template<typename SenderIpAddressT = Aws::String>
    Transport& WithSenderIpAddress(SenderIpAddressT&& value) { SetSenderIpAddress(std::forward<SenderIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC
     * streams.</p>
     */
    inline int GetSmoothingLatency() const { return m_smoothingLatency; }
    inline bool SmoothingLatencyHasBeenSet() const { return m_smoothingLatencyHasBeenSet; }
    inline void SetSmoothingLatency(int value) { m_smoothingLatencyHasBeenSet = true; m_smoothingLatency = value; }
    inline Transport& WithSmoothingLatency(int value) { SetSmoothingLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Source IP or domain name for SRT-caller protocol.</p>
     */
    inline const Aws::String& GetSourceListenerAddress() const { return m_sourceListenerAddress; }
    inline bool SourceListenerAddressHasBeenSet() const { return m_sourceListenerAddressHasBeenSet; }
    template<typename SourceListenerAddressT = Aws::String>
    void SetSourceListenerAddress(SourceListenerAddressT&& value) { m_sourceListenerAddressHasBeenSet = true; m_sourceListenerAddress = std::forward<SourceListenerAddressT>(value); }
    template<typename SourceListenerAddressT = Aws::String>
    Transport& WithSourceListenerAddress(SourceListenerAddressT&& value) { SetSourceListenerAddress(std::forward<SourceListenerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Source port for SRT-caller protocol.</p>
     */
    inline int GetSourceListenerPort() const { return m_sourceListenerPort; }
    inline bool SourceListenerPortHasBeenSet() const { return m_sourceListenerPortHasBeenSet; }
    inline void SetSourceListenerPort(int value) { m_sourceListenerPortHasBeenSet = true; m_sourceListenerPort = value; }
    inline Transport& WithSourceListenerPort(int value) { SetSourceListenerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The stream ID that you want to use for this transport. This parameter
     * applies only to Zixi and SRT caller-based streams.</p>
     */
    inline const Aws::String& GetStreamId() const { return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    Transport& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A quality setting for the NDI Speed HQ encoder. </p>
     */
    inline int GetNdiSpeedHqQuality() const { return m_ndiSpeedHqQuality; }
    inline bool NdiSpeedHqQualityHasBeenSet() const { return m_ndiSpeedHqQualityHasBeenSet; }
    inline void SetNdiSpeedHqQuality(int value) { m_ndiSpeedHqQualityHasBeenSet = true; m_ndiSpeedHqQuality = value; }
    inline Transport& WithNdiSpeedHqQuality(int value) { SetNdiSpeedHqQuality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A suffix for the names of the NDI sources that the flow creates. If a custom
     * name isn't specified, MediaConnect uses the output name. </p>
     */
    inline const Aws::String& GetNdiProgramName() const { return m_ndiProgramName; }
    inline bool NdiProgramNameHasBeenSet() const { return m_ndiProgramNameHasBeenSet; }
    template<typename NdiProgramNameT = Aws::String>
    void SetNdiProgramName(NdiProgramNameT&& value) { m_ndiProgramNameHasBeenSet = true; m_ndiProgramName = std::forward<NdiProgramNameT>(value); }
    template<typename NdiProgramNameT = Aws::String>
    Transport& WithNdiProgramName(NdiProgramNameT&& value) { SetNdiProgramName(std::forward<NdiProgramNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cidrAllowList;
    bool m_cidrAllowListHasBeenSet = false;

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    int m_maxLatency{0};
    bool m_maxLatencyHasBeenSet = false;

    int m_maxSyncBuffer{0};
    bool m_maxSyncBufferHasBeenSet = false;

    int m_minLatency{0};
    bool m_minLatencyHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_remoteId;
    bool m_remoteIdHasBeenSet = false;

    int m_senderControlPort{0};
    bool m_senderControlPortHasBeenSet = false;

    Aws::String m_senderIpAddress;
    bool m_senderIpAddressHasBeenSet = false;

    int m_smoothingLatency{0};
    bool m_smoothingLatencyHasBeenSet = false;

    Aws::String m_sourceListenerAddress;
    bool m_sourceListenerAddressHasBeenSet = false;

    int m_sourceListenerPort{0};
    bool m_sourceListenerPortHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    int m_ndiSpeedHqQuality{0};
    bool m_ndiSpeedHqQualityHasBeenSet = false;

    Aws::String m_ndiProgramName;
    bool m_ndiProgramNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
