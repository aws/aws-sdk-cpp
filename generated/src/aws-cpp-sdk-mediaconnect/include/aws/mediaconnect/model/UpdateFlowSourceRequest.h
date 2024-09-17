/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/model/UpdateEncryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Protocol.h>
#include <aws/mediaconnect/model/UpdateGatewayBridgeSourceRequest.h>
#include <aws/mediaconnect/model/MediaStreamSourceConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to update the source of a flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowSourceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateFlowSourceRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowSource"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The type of encryption used on the content ingested from this source. Allowable
     * encryption types: static-key.
     */
    inline const UpdateEncryption& GetDecryption() const{ return m_decryption; }
    inline bool DecryptionHasBeenSet() const { return m_decryptionHasBeenSet; }
    inline void SetDecryption(const UpdateEncryption& value) { m_decryptionHasBeenSet = true; m_decryption = value; }
    inline void SetDecryption(UpdateEncryption&& value) { m_decryptionHasBeenSet = true; m_decryption = std::move(value); }
    inline UpdateFlowSourceRequest& WithDecryption(const UpdateEncryption& value) { SetDecryption(value); return *this;}
    inline UpdateFlowSourceRequest& WithDecryption(UpdateEncryption&& value) { SetDecryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateFlowSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateFlowSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateFlowSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }
    inline UpdateFlowSourceRequest& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}
    inline UpdateFlowSourceRequest& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}
    inline UpdateFlowSourceRequest& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The flow that is associated with the source that you want to update.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline UpdateFlowSourceRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline UpdateFlowSourceRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline UpdateFlowSourceRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline int GetIngestPort() const{ return m_ingestPort; }
    inline bool IngestPortHasBeenSet() const { return m_ingestPortHasBeenSet; }
    inline void SetIngestPort(int value) { m_ingestPortHasBeenSet = true; m_ingestPort = value; }
    inline UpdateFlowSourceRequest& WithIngestPort(int value) { SetIngestPort(value); return *this;}
    ///@}

    ///@{
    /**
     * The smoothing max bitrate (in bps) for RIST, RTP, and RTP-FEC streams.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline UpdateFlowSourceRequest& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * The maximum latency in milliseconds. This parameter applies only to RIST-based,
     * Zixi-based, and Fujitsu-based streams.
     */
    inline int GetMaxLatency() const{ return m_maxLatency; }
    inline bool MaxLatencyHasBeenSet() const { return m_maxLatencyHasBeenSet; }
    inline void SetMaxLatency(int value) { m_maxLatencyHasBeenSet = true; m_maxLatency = value; }
    inline UpdateFlowSourceRequest& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * The size of the buffer (in milliseconds) to use to sync incoming source data.
     */
    inline int GetMaxSyncBuffer() const{ return m_maxSyncBuffer; }
    inline bool MaxSyncBufferHasBeenSet() const { return m_maxSyncBufferHasBeenSet; }
    inline void SetMaxSyncBuffer(int value) { m_maxSyncBufferHasBeenSet = true; m_maxSyncBuffer = value; }
    inline UpdateFlowSourceRequest& WithMaxSyncBuffer(int value) { SetMaxSyncBuffer(value); return *this;}
    ///@}

    ///@{
    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline const Aws::Vector<MediaStreamSourceConfigurationRequest>& GetMediaStreamSourceConfigurations() const{ return m_mediaStreamSourceConfigurations; }
    inline bool MediaStreamSourceConfigurationsHasBeenSet() const { return m_mediaStreamSourceConfigurationsHasBeenSet; }
    inline void SetMediaStreamSourceConfigurations(const Aws::Vector<MediaStreamSourceConfigurationRequest>& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations = value; }
    inline void SetMediaStreamSourceConfigurations(Aws::Vector<MediaStreamSourceConfigurationRequest>&& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations = std::move(value); }
    inline UpdateFlowSourceRequest& WithMediaStreamSourceConfigurations(const Aws::Vector<MediaStreamSourceConfigurationRequest>& value) { SetMediaStreamSourceConfigurations(value); return *this;}
    inline UpdateFlowSourceRequest& WithMediaStreamSourceConfigurations(Aws::Vector<MediaStreamSourceConfigurationRequest>&& value) { SetMediaStreamSourceConfigurations(std::move(value)); return *this;}
    inline UpdateFlowSourceRequest& AddMediaStreamSourceConfigurations(const MediaStreamSourceConfigurationRequest& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations.push_back(value); return *this; }
    inline UpdateFlowSourceRequest& AddMediaStreamSourceConfigurations(MediaStreamSourceConfigurationRequest&& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations.push_back(std::move(value)); return *this; }
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
    inline UpdateFlowSourceRequest& WithMinLatency(int value) { SetMinLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * The protocol that is used by the source.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline UpdateFlowSourceRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline UpdateFlowSourceRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline int GetSenderControlPort() const{ return m_senderControlPort; }
    inline bool SenderControlPortHasBeenSet() const { return m_senderControlPortHasBeenSet; }
    inline void SetSenderControlPort(int value) { m_senderControlPortHasBeenSet = true; m_senderControlPort = value; }
    inline UpdateFlowSourceRequest& WithSenderControlPort(int value) { SetSenderControlPort(value); return *this;}
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
    inline UpdateFlowSourceRequest& WithSenderIpAddress(const Aws::String& value) { SetSenderIpAddress(value); return *this;}
    inline UpdateFlowSourceRequest& WithSenderIpAddress(Aws::String&& value) { SetSenderIpAddress(std::move(value)); return *this;}
    inline UpdateFlowSourceRequest& WithSenderIpAddress(const char* value) { SetSenderIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the source that you want to update.
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline UpdateFlowSourceRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline UpdateFlowSourceRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline UpdateFlowSourceRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline const Aws::String& GetSourceListenerAddress() const{ return m_sourceListenerAddress; }
    inline bool SourceListenerAddressHasBeenSet() const { return m_sourceListenerAddressHasBeenSet; }
    inline void SetSourceListenerAddress(const Aws::String& value) { m_sourceListenerAddressHasBeenSet = true; m_sourceListenerAddress = value; }
    inline void SetSourceListenerAddress(Aws::String&& value) { m_sourceListenerAddressHasBeenSet = true; m_sourceListenerAddress = std::move(value); }
    inline void SetSourceListenerAddress(const char* value) { m_sourceListenerAddressHasBeenSet = true; m_sourceListenerAddress.assign(value); }
    inline UpdateFlowSourceRequest& WithSourceListenerAddress(const Aws::String& value) { SetSourceListenerAddress(value); return *this;}
    inline UpdateFlowSourceRequest& WithSourceListenerAddress(Aws::String&& value) { SetSourceListenerAddress(std::move(value)); return *this;}
    inline UpdateFlowSourceRequest& WithSourceListenerAddress(const char* value) { SetSourceListenerAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * Source port for SRT-caller protocol.
     */
    inline int GetSourceListenerPort() const{ return m_sourceListenerPort; }
    inline bool SourceListenerPortHasBeenSet() const { return m_sourceListenerPortHasBeenSet; }
    inline void SetSourceListenerPort(int value) { m_sourceListenerPortHasBeenSet = true; m_sourceListenerPort = value; }
    inline UpdateFlowSourceRequest& WithSourceListenerPort(int value) { SetSourceListenerPort(value); return *this;}
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
    inline UpdateFlowSourceRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline UpdateFlowSourceRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline UpdateFlowSourceRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the VPC interface to use for this source.
     */
    inline const Aws::String& GetVpcInterfaceName() const{ return m_vpcInterfaceName; }
    inline bool VpcInterfaceNameHasBeenSet() const { return m_vpcInterfaceNameHasBeenSet; }
    inline void SetVpcInterfaceName(const Aws::String& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = value; }
    inline void SetVpcInterfaceName(Aws::String&& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = std::move(value); }
    inline void SetVpcInterfaceName(const char* value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName.assign(value); }
    inline UpdateFlowSourceRequest& WithVpcInterfaceName(const Aws::String& value) { SetVpcInterfaceName(value); return *this;}
    inline UpdateFlowSourceRequest& WithVpcInterfaceName(Aws::String&& value) { SetVpcInterfaceName(std::move(value)); return *this;}
    inline UpdateFlowSourceRequest& WithVpcInterfaceName(const char* value) { SetVpcInterfaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline const Aws::String& GetWhitelistCidr() const{ return m_whitelistCidr; }
    inline bool WhitelistCidrHasBeenSet() const { return m_whitelistCidrHasBeenSet; }
    inline void SetWhitelistCidr(const Aws::String& value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr = value; }
    inline void SetWhitelistCidr(Aws::String&& value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr = std::move(value); }
    inline void SetWhitelistCidr(const char* value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr.assign(value); }
    inline UpdateFlowSourceRequest& WithWhitelistCidr(const Aws::String& value) { SetWhitelistCidr(value); return *this;}
    inline UpdateFlowSourceRequest& WithWhitelistCidr(Aws::String&& value) { SetWhitelistCidr(std::move(value)); return *this;}
    inline UpdateFlowSourceRequest& WithWhitelistCidr(const char* value) { SetWhitelistCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * The source configuration for cloud flows receiving a stream from a bridge.
     */
    inline const UpdateGatewayBridgeSourceRequest& GetGatewayBridgeSource() const{ return m_gatewayBridgeSource; }
    inline bool GatewayBridgeSourceHasBeenSet() const { return m_gatewayBridgeSourceHasBeenSet; }
    inline void SetGatewayBridgeSource(const UpdateGatewayBridgeSourceRequest& value) { m_gatewayBridgeSourceHasBeenSet = true; m_gatewayBridgeSource = value; }
    inline void SetGatewayBridgeSource(UpdateGatewayBridgeSourceRequest&& value) { m_gatewayBridgeSourceHasBeenSet = true; m_gatewayBridgeSource = std::move(value); }
    inline UpdateFlowSourceRequest& WithGatewayBridgeSource(const UpdateGatewayBridgeSourceRequest& value) { SetGatewayBridgeSource(value); return *this;}
    inline UpdateFlowSourceRequest& WithGatewayBridgeSource(UpdateGatewayBridgeSourceRequest&& value) { SetGatewayBridgeSource(std::move(value)); return *this;}
    ///@}
  private:

    UpdateEncryption m_decryption;
    bool m_decryptionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    int m_ingestPort;
    bool m_ingestPortHasBeenSet = false;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;

    int m_maxLatency;
    bool m_maxLatencyHasBeenSet = false;

    int m_maxSyncBuffer;
    bool m_maxSyncBufferHasBeenSet = false;

    Aws::Vector<MediaStreamSourceConfigurationRequest> m_mediaStreamSourceConfigurations;
    bool m_mediaStreamSourceConfigurationsHasBeenSet = false;

    int m_minLatency;
    bool m_minLatencyHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_senderControlPort;
    bool m_senderControlPortHasBeenSet = false;

    Aws::String m_senderIpAddress;
    bool m_senderIpAddressHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_sourceListenerAddress;
    bool m_sourceListenerAddressHasBeenSet = false;

    int m_sourceListenerPort;
    bool m_sourceListenerPortHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    Aws::String m_vpcInterfaceName;
    bool m_vpcInterfaceNameHasBeenSet = false;

    Aws::String m_whitelistCidr;
    bool m_whitelistCidrHasBeenSet = false;

    UpdateGatewayBridgeSourceRequest m_gatewayBridgeSource;
    bool m_gatewayBridgeSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
