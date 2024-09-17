/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateEncryption.h>
#include <aws/mediaconnect/model/Protocol.h>
#include <aws/mediaconnect/model/VpcInterfaceAttachment.h>
#include <aws/mediaconnect/model/OutputStatus.h>
#include <aws/mediaconnect/model/MediaStreamOutputConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * The fields that you want to update in the output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowOutputRequest">AWS
   * API Reference</a></p>
   */
  class UpdateFlowOutputRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowOutput"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline const Aws::Vector<Aws::String>& GetCidrAllowList() const{ return m_cidrAllowList; }
    inline bool CidrAllowListHasBeenSet() const { return m_cidrAllowListHasBeenSet; }
    inline void SetCidrAllowList(const Aws::Vector<Aws::String>& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList = value; }
    inline void SetCidrAllowList(Aws::Vector<Aws::String>&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList = std::move(value); }
    inline UpdateFlowOutputRequest& WithCidrAllowList(const Aws::Vector<Aws::String>& value) { SetCidrAllowList(value); return *this;}
    inline UpdateFlowOutputRequest& WithCidrAllowList(Aws::Vector<Aws::String>&& value) { SetCidrAllowList(std::move(value)); return *this;}
    inline UpdateFlowOutputRequest& AddCidrAllowList(const Aws::String& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(value); return *this; }
    inline UpdateFlowOutputRequest& AddCidrAllowList(Aws::String&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(std::move(value)); return *this; }
    inline UpdateFlowOutputRequest& AddCidrAllowList(const char* value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateFlowOutputRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateFlowOutputRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateFlowOutputRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The IP address where you want to send the output.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline UpdateFlowOutputRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline UpdateFlowOutputRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline UpdateFlowOutputRequest& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key). Allowable encryption types:
     * static-key.
     */
    inline const UpdateEncryption& GetEncryption() const{ return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    inline void SetEncryption(const UpdateEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }
    inline void SetEncryption(UpdateEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }
    inline UpdateFlowOutputRequest& WithEncryption(const UpdateEncryption& value) { SetEncryption(value); return *this;}
    inline UpdateFlowOutputRequest& WithEncryption(UpdateEncryption&& value) { SetEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The flow that is associated with the output that you want to update.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline UpdateFlowOutputRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline UpdateFlowOutputRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline UpdateFlowOutputRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The maximum latency in milliseconds. This parameter applies only to RIST-based,
     * Zixi-based, and Fujitsu-based streams.
     */
    inline int GetMaxLatency() const{ return m_maxLatency; }
    inline bool MaxLatencyHasBeenSet() const { return m_maxLatencyHasBeenSet; }
    inline void SetMaxLatency(int value) { m_maxLatencyHasBeenSet = true; m_maxLatency = value; }
    inline UpdateFlowOutputRequest& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * The media streams that are associated with the output, and the parameters for
     * those associations.
     */
    inline const Aws::Vector<MediaStreamOutputConfigurationRequest>& GetMediaStreamOutputConfigurations() const{ return m_mediaStreamOutputConfigurations; }
    inline bool MediaStreamOutputConfigurationsHasBeenSet() const { return m_mediaStreamOutputConfigurationsHasBeenSet; }
    inline void SetMediaStreamOutputConfigurations(const Aws::Vector<MediaStreamOutputConfigurationRequest>& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations = value; }
    inline void SetMediaStreamOutputConfigurations(Aws::Vector<MediaStreamOutputConfigurationRequest>&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations = std::move(value); }
    inline UpdateFlowOutputRequest& WithMediaStreamOutputConfigurations(const Aws::Vector<MediaStreamOutputConfigurationRequest>& value) { SetMediaStreamOutputConfigurations(value); return *this;}
    inline UpdateFlowOutputRequest& WithMediaStreamOutputConfigurations(Aws::Vector<MediaStreamOutputConfigurationRequest>&& value) { SetMediaStreamOutputConfigurations(std::move(value)); return *this;}
    inline UpdateFlowOutputRequest& AddMediaStreamOutputConfigurations(const MediaStreamOutputConfigurationRequest& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations.push_back(value); return *this; }
    inline UpdateFlowOutputRequest& AddMediaStreamOutputConfigurations(MediaStreamOutputConfigurationRequest&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The minimum latency in milliseconds for SRT-based streams. In streams that use
     * the SRT protocol, this value that you set on your MediaConnect source or output
     * represents the minimal potential latency of that connection. The latency of the
     * stream is set to the highest number between the sender’s minimum latency and the
     * receiver’s minimum latency.
     */
    inline int GetMinLatency() const{ return m_minLatency; }
    inline bool MinLatencyHasBeenSet() const { return m_minLatencyHasBeenSet; }
    inline void SetMinLatency(int value) { m_minLatencyHasBeenSet = true; m_minLatency = value; }
    inline UpdateFlowOutputRequest& WithMinLatency(int value) { SetMinLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the output that you want to update.
     */
    inline const Aws::String& GetOutputArn() const{ return m_outputArn; }
    inline bool OutputArnHasBeenSet() const { return m_outputArnHasBeenSet; }
    inline void SetOutputArn(const Aws::String& value) { m_outputArnHasBeenSet = true; m_outputArn = value; }
    inline void SetOutputArn(Aws::String&& value) { m_outputArnHasBeenSet = true; m_outputArn = std::move(value); }
    inline void SetOutputArn(const char* value) { m_outputArnHasBeenSet = true; m_outputArn.assign(value); }
    inline UpdateFlowOutputRequest& WithOutputArn(const Aws::String& value) { SetOutputArn(value); return *this;}
    inline UpdateFlowOutputRequest& WithOutputArn(Aws::String&& value) { SetOutputArn(std::move(value)); return *this;}
    inline UpdateFlowOutputRequest& WithOutputArn(const char* value) { SetOutputArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The port to use when content is distributed to this output.
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline UpdateFlowOutputRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * The protocol to use for the output.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline UpdateFlowOutputRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline UpdateFlowOutputRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The remote ID for the Zixi-pull stream.
     */
    inline const Aws::String& GetRemoteId() const{ return m_remoteId; }
    inline bool RemoteIdHasBeenSet() const { return m_remoteIdHasBeenSet; }
    inline void SetRemoteId(const Aws::String& value) { m_remoteIdHasBeenSet = true; m_remoteId = value; }
    inline void SetRemoteId(Aws::String&& value) { m_remoteIdHasBeenSet = true; m_remoteId = std::move(value); }
    inline void SetRemoteId(const char* value) { m_remoteIdHasBeenSet = true; m_remoteId.assign(value); }
    inline UpdateFlowOutputRequest& WithRemoteId(const Aws::String& value) { SetRemoteId(value); return *this;}
    inline UpdateFlowOutputRequest& WithRemoteId(Aws::String&& value) { SetRemoteId(std::move(value)); return *this;}
    inline UpdateFlowOutputRequest& WithRemoteId(const char* value) { SetRemoteId(value); return *this;}
    ///@}

    ///@{
    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline int GetSenderControlPort() const{ return m_senderControlPort; }
    inline bool SenderControlPortHasBeenSet() const { return m_senderControlPortHasBeenSet; }
    inline void SetSenderControlPort(int value) { m_senderControlPortHasBeenSet = true; m_senderControlPort = value; }
    inline UpdateFlowOutputRequest& WithSenderControlPort(int value) { SetSenderControlPort(value); return *this;}
    ///@}

    ///@{
    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline const Aws::String& GetSenderIpAddress() const{ return m_senderIpAddress; }
    inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }
    inline void SetSenderIpAddress(const Aws::String& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = value; }
    inline void SetSenderIpAddress(Aws::String&& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = std::move(value); }
    inline void SetSenderIpAddress(const char* value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress.assign(value); }
    inline UpdateFlowOutputRequest& WithSenderIpAddress(const Aws::String& value) { SetSenderIpAddress(value); return *this;}
    inline UpdateFlowOutputRequest& WithSenderIpAddress(Aws::String&& value) { SetSenderIpAddress(std::move(value)); return *this;}
    inline UpdateFlowOutputRequest& WithSenderIpAddress(const char* value) { SetSenderIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline int GetSmoothingLatency() const{ return m_smoothingLatency; }
    inline bool SmoothingLatencyHasBeenSet() const { return m_smoothingLatencyHasBeenSet; }
    inline void SetSmoothingLatency(int value) { m_smoothingLatencyHasBeenSet = true; m_smoothingLatency = value; }
    inline UpdateFlowOutputRequest& WithSmoothingLatency(int value) { SetSmoothingLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi and SRT caller-based streams.
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }
    inline UpdateFlowOutputRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline UpdateFlowOutputRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline UpdateFlowOutputRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline const VpcInterfaceAttachment& GetVpcInterfaceAttachment() const{ return m_vpcInterfaceAttachment; }
    inline bool VpcInterfaceAttachmentHasBeenSet() const { return m_vpcInterfaceAttachmentHasBeenSet; }
    inline void SetVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = value; }
    inline void SetVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = std::move(value); }
    inline UpdateFlowOutputRequest& WithVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { SetVpcInterfaceAttachment(value); return *this;}
    inline UpdateFlowOutputRequest& WithVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { SetVpcInterfaceAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * An indication of whether the output should transmit data or not. If you don't
     * specify the outputStatus field in your request, MediaConnect leaves the value
     * unchanged.
     */
    inline const OutputStatus& GetOutputStatus() const{ return m_outputStatus; }
    inline bool OutputStatusHasBeenSet() const { return m_outputStatusHasBeenSet; }
    inline void SetOutputStatus(const OutputStatus& value) { m_outputStatusHasBeenSet = true; m_outputStatus = value; }
    inline void SetOutputStatus(OutputStatus&& value) { m_outputStatusHasBeenSet = true; m_outputStatus = std::move(value); }
    inline UpdateFlowOutputRequest& WithOutputStatus(const OutputStatus& value) { SetOutputStatus(value); return *this;}
    inline UpdateFlowOutputRequest& WithOutputStatus(OutputStatus&& value) { SetOutputStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cidrAllowList;
    bool m_cidrAllowListHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    UpdateEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    int m_maxLatency;
    bool m_maxLatencyHasBeenSet = false;

    Aws::Vector<MediaStreamOutputConfigurationRequest> m_mediaStreamOutputConfigurations;
    bool m_mediaStreamOutputConfigurationsHasBeenSet = false;

    int m_minLatency;
    bool m_minLatencyHasBeenSet = false;

    Aws::String m_outputArn;
    bool m_outputArnHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_remoteId;
    bool m_remoteIdHasBeenSet = false;

    int m_senderControlPort;
    bool m_senderControlPortHasBeenSet = false;

    Aws::String m_senderIpAddress;
    bool m_senderIpAddressHasBeenSet = false;

    int m_smoothingLatency;
    bool m_smoothingLatencyHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    VpcInterfaceAttachment m_vpcInterfaceAttachment;
    bool m_vpcInterfaceAttachmentHasBeenSet = false;

    OutputStatus m_outputStatus;
    bool m_outputStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
