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
   * The output that you want to add to this flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddOutputRequest">AWS
   * API Reference</a></p>
   */
  class AddOutputRequest
  {
  public:
    AWS_MEDIACONNECT_API AddOutputRequest();
    AWS_MEDIACONNECT_API AddOutputRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddOutputRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline const Aws::Vector<Aws::String>& GetCidrAllowList() const{ return m_cidrAllowList; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline bool CidrAllowListHasBeenSet() const { return m_cidrAllowListHasBeenSet; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetCidrAllowList(const Aws::Vector<Aws::String>& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList = value; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetCidrAllowList(Aws::Vector<Aws::String>&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList = std::move(value); }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline AddOutputRequest& WithCidrAllowList(const Aws::Vector<Aws::String>& value) { SetCidrAllowList(value); return *this;}

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline AddOutputRequest& WithCidrAllowList(Aws::Vector<Aws::String>&& value) { SetCidrAllowList(std::move(value)); return *this;}

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline AddOutputRequest& AddCidrAllowList(const Aws::String& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(value); return *this; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline AddOutputRequest& AddCidrAllowList(Aws::String&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(std::move(value)); return *this; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline AddOutputRequest& AddCidrAllowList(const char* value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(value); return *this; }


    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline AddOutputRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline AddOutputRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description of the output. This description appears only on the AWS Elemental
     * MediaConnect console and will not be seen by the end user.
     */
    inline AddOutputRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline AddOutputRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline AddOutputRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline AddOutputRequest& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline AddOutputRequest& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline AddOutputRequest& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * The maximum latency in milliseconds. This parameter applies only to RIST-based,
     * Zixi-based, and Fujitsu-based streams.
     */
    inline int GetMaxLatency() const{ return m_maxLatency; }

    /**
     * The maximum latency in milliseconds. This parameter applies only to RIST-based,
     * Zixi-based, and Fujitsu-based streams.
     */
    inline bool MaxLatencyHasBeenSet() const { return m_maxLatencyHasBeenSet; }

    /**
     * The maximum latency in milliseconds. This parameter applies only to RIST-based,
     * Zixi-based, and Fujitsu-based streams.
     */
    inline void SetMaxLatency(int value) { m_maxLatencyHasBeenSet = true; m_maxLatency = value; }

    /**
     * The maximum latency in milliseconds. This parameter applies only to RIST-based,
     * Zixi-based, and Fujitsu-based streams.
     */
    inline AddOutputRequest& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}


    /**
     * The media streams that are associated with the output, and the parameters for
     * those associations.
     */
    inline const Aws::Vector<MediaStreamOutputConfigurationRequest>& GetMediaStreamOutputConfigurations() const{ return m_mediaStreamOutputConfigurations; }

    /**
     * The media streams that are associated with the output, and the parameters for
     * those associations.
     */
    inline bool MediaStreamOutputConfigurationsHasBeenSet() const { return m_mediaStreamOutputConfigurationsHasBeenSet; }

    /**
     * The media streams that are associated with the output, and the parameters for
     * those associations.
     */
    inline void SetMediaStreamOutputConfigurations(const Aws::Vector<MediaStreamOutputConfigurationRequest>& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations = value; }

    /**
     * The media streams that are associated with the output, and the parameters for
     * those associations.
     */
    inline void SetMediaStreamOutputConfigurations(Aws::Vector<MediaStreamOutputConfigurationRequest>&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations = std::move(value); }

    /**
     * The media streams that are associated with the output, and the parameters for
     * those associations.
     */
    inline AddOutputRequest& WithMediaStreamOutputConfigurations(const Aws::Vector<MediaStreamOutputConfigurationRequest>& value) { SetMediaStreamOutputConfigurations(value); return *this;}

    /**
     * The media streams that are associated with the output, and the parameters for
     * those associations.
     */
    inline AddOutputRequest& WithMediaStreamOutputConfigurations(Aws::Vector<MediaStreamOutputConfigurationRequest>&& value) { SetMediaStreamOutputConfigurations(std::move(value)); return *this;}

    /**
     * The media streams that are associated with the output, and the parameters for
     * those associations.
     */
    inline AddOutputRequest& AddMediaStreamOutputConfigurations(const MediaStreamOutputConfigurationRequest& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations.push_back(value); return *this; }

    /**
     * The media streams that are associated with the output, and the parameters for
     * those associations.
     */
    inline AddOutputRequest& AddMediaStreamOutputConfigurations(MediaStreamOutputConfigurationRequest&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations.push_back(std::move(value)); return *this; }


    /**
     * The minimum latency in milliseconds for SRT-based streams. In streams that use
     * the SRT protocol, this value that you set on your MediaConnect source or output
     * represents the minimal potential latency of that connection. The latency of the
     * stream is set to the highest number between the sender’s minimum latency and the
     * receiver’s minimum latency.
     */
    inline int GetMinLatency() const{ return m_minLatency; }

    /**
     * The minimum latency in milliseconds for SRT-based streams. In streams that use
     * the SRT protocol, this value that you set on your MediaConnect source or output
     * represents the minimal potential latency of that connection. The latency of the
     * stream is set to the highest number between the sender’s minimum latency and the
     * receiver’s minimum latency.
     */
    inline bool MinLatencyHasBeenSet() const { return m_minLatencyHasBeenSet; }

    /**
     * The minimum latency in milliseconds for SRT-based streams. In streams that use
     * the SRT protocol, this value that you set on your MediaConnect source or output
     * represents the minimal potential latency of that connection. The latency of the
     * stream is set to the highest number between the sender’s minimum latency and the
     * receiver’s minimum latency.
     */
    inline void SetMinLatency(int value) { m_minLatencyHasBeenSet = true; m_minLatency = value; }

    /**
     * The minimum latency in milliseconds for SRT-based streams. In streams that use
     * the SRT protocol, this value that you set on your MediaConnect source or output
     * represents the minimal potential latency of that connection. The latency of the
     * stream is set to the highest number between the sender’s minimum latency and the
     * receiver’s minimum latency.
     */
    inline AddOutputRequest& WithMinLatency(int value) { SetMinLatency(value); return *this;}


    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline AddOutputRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline AddOutputRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline AddOutputRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The port to use when content is distributed to this output.
     */
    inline int GetPort() const{ return m_port; }

    /**
     * The port to use when content is distributed to this output.
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * The port to use when content is distributed to this output.
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * The port to use when content is distributed to this output.
     */
    inline AddOutputRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * The protocol to use for the output.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * The protocol to use for the output.
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * The protocol to use for the output.
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * The protocol to use for the output.
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * The protocol to use for the output.
     */
    inline AddOutputRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * The protocol to use for the output.
     */
    inline AddOutputRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline const Aws::String& GetRemoteId() const{ return m_remoteId; }

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline bool RemoteIdHasBeenSet() const { return m_remoteIdHasBeenSet; }

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline void SetRemoteId(const Aws::String& value) { m_remoteIdHasBeenSet = true; m_remoteId = value; }

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline void SetRemoteId(Aws::String&& value) { m_remoteIdHasBeenSet = true; m_remoteId = std::move(value); }

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline void SetRemoteId(const char* value) { m_remoteIdHasBeenSet = true; m_remoteId.assign(value); }

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline AddOutputRequest& WithRemoteId(const Aws::String& value) { SetRemoteId(value); return *this;}

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline AddOutputRequest& WithRemoteId(Aws::String&& value) { SetRemoteId(std::move(value)); return *this;}

    /**
     * The remote ID for the Zixi-pull output stream.
     */
    inline AddOutputRequest& WithRemoteId(const char* value) { SetRemoteId(value); return *this;}


    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline int GetSenderControlPort() const{ return m_senderControlPort; }

    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline bool SenderControlPortHasBeenSet() const { return m_senderControlPortHasBeenSet; }

    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline void SetSenderControlPort(int value) { m_senderControlPortHasBeenSet = true; m_senderControlPort = value; }

    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline AddOutputRequest& WithSenderControlPort(int value) { SetSenderControlPort(value); return *this;}


    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline int GetSmoothingLatency() const{ return m_smoothingLatency; }

    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline bool SmoothingLatencyHasBeenSet() const { return m_smoothingLatencyHasBeenSet; }

    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline void SetSmoothingLatency(int value) { m_smoothingLatencyHasBeenSet = true; m_smoothingLatency = value; }

    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline AddOutputRequest& WithSmoothingLatency(int value) { SetSmoothingLatency(value); return *this;}


    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline AddOutputRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline AddOutputRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline AddOutputRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline const VpcInterfaceAttachment& GetVpcInterfaceAttachment() const{ return m_vpcInterfaceAttachment; }

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline bool VpcInterfaceAttachmentHasBeenSet() const { return m_vpcInterfaceAttachmentHasBeenSet; }

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline void SetVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = value; }

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline void SetVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = std::move(value); }

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline AddOutputRequest& WithVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { SetVpcInterfaceAttachment(value); return *this;}

    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline AddOutputRequest& WithVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { SetVpcInterfaceAttachment(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_cidrAllowList;
    bool m_cidrAllowListHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    int m_maxLatency;
    bool m_maxLatencyHasBeenSet = false;

    Aws::Vector<MediaStreamOutputConfigurationRequest> m_mediaStreamOutputConfigurations;
    bool m_mediaStreamOutputConfigurationsHasBeenSet = false;

    int m_minLatency;
    bool m_minLatencyHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_remoteId;
    bool m_remoteIdHasBeenSet = false;

    int m_senderControlPort;
    bool m_senderControlPortHasBeenSet = false;

    int m_smoothingLatency;
    bool m_smoothingLatencyHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    VpcInterfaceAttachment m_vpcInterfaceAttachment;
    bool m_vpcInterfaceAttachmentHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
