/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/mediaconnect/model/Protocol.h>
#include <aws/mediaconnect/model/VpcInterfaceAttachment.h>
#include <aws/mediaconnect/model/OutputStatus.h>
#include <aws/mediaconnect/model/MediaStreamOutputConfigurationRequest.h>
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
   * <p> A request to add an output to a flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddOutputRequest">AWS
   * API Reference</a></p>
   */
  class AddOutputRequest
  {
  public:
    AWS_MEDIACONNECT_API AddOutputRequest() = default;
    AWS_MEDIACONNECT_API AddOutputRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddOutputRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The range of IP addresses that should be allowed to initiate output requests
     * to this flow. These IP addresses should be in the form of a Classless
     * Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrAllowList() const { return m_cidrAllowList; }
    inline bool CidrAllowListHasBeenSet() const { return m_cidrAllowListHasBeenSet; }
    template<typename CidrAllowListT = Aws::Vector<Aws::String>>
    void SetCidrAllowList(CidrAllowListT&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList = std::forward<CidrAllowListT>(value); }
    template<typename CidrAllowListT = Aws::Vector<Aws::String>>
    AddOutputRequest& WithCidrAllowList(CidrAllowListT&& value) { SetCidrAllowList(std::forward<CidrAllowListT>(value)); return *this;}
    template<typename CidrAllowListT = Aws::String>
    AddOutputRequest& AddCidrAllowList(CidrAllowListT&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.emplace_back(std::forward<CidrAllowListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A description of the output. This description appears only on the Audit
     * Manager console and will not be seen by the end user.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AddOutputRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IP address from which video will be sent to output destinations.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    AddOutputRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of key used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key). Allowable encryption types:
     * static-key.</p>
     */
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    AddOutputRequest& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum latency in milliseconds. This parameter applies only to
     * RIST-based and Zixi-based streams.</p>
     */
    inline int GetMaxLatency() const { return m_maxLatency; }
    inline bool MaxLatencyHasBeenSet() const { return m_maxLatencyHasBeenSet; }
    inline void SetMaxLatency(int value) { m_maxLatencyHasBeenSet = true; m_maxLatency = value; }
    inline AddOutputRequest& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The media streams that are associated with the output, and the parameters
     * for those associations.</p>
     */
    inline const Aws::Vector<MediaStreamOutputConfigurationRequest>& GetMediaStreamOutputConfigurations() const { return m_mediaStreamOutputConfigurations; }
    inline bool MediaStreamOutputConfigurationsHasBeenSet() const { return m_mediaStreamOutputConfigurationsHasBeenSet; }
    template<typename MediaStreamOutputConfigurationsT = Aws::Vector<MediaStreamOutputConfigurationRequest>>
    void SetMediaStreamOutputConfigurations(MediaStreamOutputConfigurationsT&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations = std::forward<MediaStreamOutputConfigurationsT>(value); }
    template<typename MediaStreamOutputConfigurationsT = Aws::Vector<MediaStreamOutputConfigurationRequest>>
    AddOutputRequest& WithMediaStreamOutputConfigurations(MediaStreamOutputConfigurationsT&& value) { SetMediaStreamOutputConfigurations(std::forward<MediaStreamOutputConfigurationsT>(value)); return *this;}
    template<typename MediaStreamOutputConfigurationsT = MediaStreamOutputConfigurationRequest>
    AddOutputRequest& AddMediaStreamOutputConfigurations(MediaStreamOutputConfigurationsT&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations.emplace_back(std::forward<MediaStreamOutputConfigurationsT>(value)); return *this; }
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
    inline AddOutputRequest& WithMinLatency(int value) { SetMinLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the output. This value must be unique within the current
     * flow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AddOutputRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port to use when content is distributed to this output.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline AddOutputRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The protocol to use for the output.</p>  <p>Elemental MediaConnect no
     * longer supports the Fujitsu QoS protocol. This reference is maintained for
     * legacy purposes only.</p> 
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline AddOutputRequest& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The remote ID for the Zixi-pull output stream.</p>
     */
    inline const Aws::String& GetRemoteId() const { return m_remoteId; }
    inline bool RemoteIdHasBeenSet() const { return m_remoteIdHasBeenSet; }
    template<typename RemoteIdT = Aws::String>
    void SetRemoteId(RemoteIdT&& value) { m_remoteIdHasBeenSet = true; m_remoteId = std::forward<RemoteIdT>(value); }
    template<typename RemoteIdT = Aws::String>
    AddOutputRequest& WithRemoteId(RemoteIdT&& value) { SetRemoteId(std::forward<RemoteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port that the flow uses to send outbound requests to initiate connection
     * with the sender.</p>
     */
    inline int GetSenderControlPort() const { return m_senderControlPort; }
    inline bool SenderControlPortHasBeenSet() const { return m_senderControlPortHasBeenSet; }
    inline void SetSenderControlPort(int value) { m_senderControlPortHasBeenSet = true; m_senderControlPort = value; }
    inline AddOutputRequest& WithSenderControlPort(int value) { SetSenderControlPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC
     * streams.</p>
     */
    inline int GetSmoothingLatency() const { return m_smoothingLatency; }
    inline bool SmoothingLatencyHasBeenSet() const { return m_smoothingLatencyHasBeenSet; }
    inline void SetSmoothingLatency(int value) { m_smoothingLatencyHasBeenSet = true; m_smoothingLatency = value; }
    inline AddOutputRequest& WithSmoothingLatency(int value) { SetSmoothingLatency(value); return *this;}
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
    AddOutputRequest& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the VPC interface attachment to use for this output.</p>
     */
    inline const VpcInterfaceAttachment& GetVpcInterfaceAttachment() const { return m_vpcInterfaceAttachment; }
    inline bool VpcInterfaceAttachmentHasBeenSet() const { return m_vpcInterfaceAttachmentHasBeenSet; }
    template<typename VpcInterfaceAttachmentT = VpcInterfaceAttachment>
    void SetVpcInterfaceAttachment(VpcInterfaceAttachmentT&& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = std::forward<VpcInterfaceAttachmentT>(value); }
    template<typename VpcInterfaceAttachmentT = VpcInterfaceAttachment>
    AddOutputRequest& WithVpcInterfaceAttachment(VpcInterfaceAttachmentT&& value) { SetVpcInterfaceAttachment(std::forward<VpcInterfaceAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An indication of whether the new output should be enabled or disabled as
     * soon as it is created. If you don't specify the outputStatus field in your
     * request, MediaConnect sets it to ENABLED.</p>
     */
    inline OutputStatus GetOutputStatus() const { return m_outputStatus; }
    inline bool OutputStatusHasBeenSet() const { return m_outputStatusHasBeenSet; }
    inline void SetOutputStatus(OutputStatus value) { m_outputStatusHasBeenSet = true; m_outputStatus = value; }
    inline AddOutputRequest& WithOutputStatus(OutputStatus value) { SetOutputStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A quality setting for the NDI Speed HQ encoder. </p>
     */
    inline int GetNdiSpeedHqQuality() const { return m_ndiSpeedHqQuality; }
    inline bool NdiSpeedHqQualityHasBeenSet() const { return m_ndiSpeedHqQualityHasBeenSet; }
    inline void SetNdiSpeedHqQuality(int value) { m_ndiSpeedHqQualityHasBeenSet = true; m_ndiSpeedHqQuality = value; }
    inline AddOutputRequest& WithNdiSpeedHqQuality(int value) { SetNdiSpeedHqQuality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A suffix for the names of the NDI sources that the flow creates. If a custom
     * name isn't specified, MediaConnect uses the output name. </p>
     */
    inline const Aws::String& GetNdiProgramName() const { return m_ndiProgramName; }
    inline bool NdiProgramNameHasBeenSet() const { return m_ndiProgramNameHasBeenSet; }
    template<typename NdiProgramNameT = Aws::String>
    void SetNdiProgramName(NdiProgramNameT&& value) { m_ndiProgramNameHasBeenSet = true; m_ndiProgramName = std::forward<NdiProgramNameT>(value); }
    template<typename NdiProgramNameT = Aws::String>
    AddOutputRequest& WithNdiProgramName(NdiProgramNameT&& value) { SetNdiProgramName(std::forward<NdiProgramNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cidrAllowList;
    bool m_cidrAllowListHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    int m_maxLatency{0};
    bool m_maxLatencyHasBeenSet = false;

    Aws::Vector<MediaStreamOutputConfigurationRequest> m_mediaStreamOutputConfigurations;
    bool m_mediaStreamOutputConfigurationsHasBeenSet = false;

    int m_minLatency{0};
    bool m_minLatencyHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_remoteId;
    bool m_remoteIdHasBeenSet = false;

    int m_senderControlPort{0};
    bool m_senderControlPortHasBeenSet = false;

    int m_smoothingLatency{0};
    bool m_smoothingLatencyHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    VpcInterfaceAttachment m_vpcInterfaceAttachment;
    bool m_vpcInterfaceAttachmentHasBeenSet = false;

    OutputStatus m_outputStatus{OutputStatus::NOT_SET};
    bool m_outputStatusHasBeenSet = false;

    int m_ndiSpeedHqQuality{0};
    bool m_ndiSpeedHqQualityHasBeenSet = false;

    Aws::String m_ndiProgramName;
    bool m_ndiProgramNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
