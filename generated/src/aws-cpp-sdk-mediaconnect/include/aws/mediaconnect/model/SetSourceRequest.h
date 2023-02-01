/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Protocol.h>
#include <aws/mediaconnect/model/MediaStreamSourceConfigurationRequest.h>
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
   * The settings for the source of the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SetSourceRequest">AWS
   * API Reference</a></p>
   */
  class SetSourceRequest
  {
  public:
    AWS_MEDIACONNECT_API SetSourceRequest();
    AWS_MEDIACONNECT_API SetSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API SetSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline const Encryption& GetDecryption() const{ return m_decryption; }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline bool DecryptionHasBeenSet() const { return m_decryptionHasBeenSet; }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline void SetDecryption(const Encryption& value) { m_decryptionHasBeenSet = true; m_decryption = value; }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline void SetDecryption(Encryption&& value) { m_decryptionHasBeenSet = true; m_decryption = std::move(value); }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline SetSourceRequest& WithDecryption(const Encryption& value) { SetDecryption(value); return *this;}

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline SetSourceRequest& WithDecryption(Encryption&& value) { SetDecryption(std::move(value)); return *this;}


    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline SetSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline SetSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline SetSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline SetSourceRequest& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline SetSourceRequest& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The ARN of the entitlement that allows you to subscribe to this flow. The
     * entitlement is set by the flow originator, and the ARN is generated as part of
     * the originator's flow.
     */
    inline SetSourceRequest& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}


    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline int GetIngestPort() const{ return m_ingestPort; }

    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline bool IngestPortHasBeenSet() const { return m_ingestPortHasBeenSet; }

    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline void SetIngestPort(int value) { m_ingestPortHasBeenSet = true; m_ingestPort = value; }

    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline SetSourceRequest& WithIngestPort(int value) { SetIngestPort(value); return *this;}


    /**
     * The smoothing max bitrate for RIST, RTP, and RTP-FEC streams.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * The smoothing max bitrate for RIST, RTP, and RTP-FEC streams.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * The smoothing max bitrate for RIST, RTP, and RTP-FEC streams.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * The smoothing max bitrate for RIST, RTP, and RTP-FEC streams.
     */
    inline SetSourceRequest& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


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
    inline SetSourceRequest& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}


    /**
     * The size of the buffer (in milliseconds) to use to sync incoming source data.
     */
    inline int GetMaxSyncBuffer() const{ return m_maxSyncBuffer; }

    /**
     * The size of the buffer (in milliseconds) to use to sync incoming source data.
     */
    inline bool MaxSyncBufferHasBeenSet() const { return m_maxSyncBufferHasBeenSet; }

    /**
     * The size of the buffer (in milliseconds) to use to sync incoming source data.
     */
    inline void SetMaxSyncBuffer(int value) { m_maxSyncBufferHasBeenSet = true; m_maxSyncBuffer = value; }

    /**
     * The size of the buffer (in milliseconds) to use to sync incoming source data.
     */
    inline SetSourceRequest& WithMaxSyncBuffer(int value) { SetMaxSyncBuffer(value); return *this;}


    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline const Aws::Vector<MediaStreamSourceConfigurationRequest>& GetMediaStreamSourceConfigurations() const{ return m_mediaStreamSourceConfigurations; }

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline bool MediaStreamSourceConfigurationsHasBeenSet() const { return m_mediaStreamSourceConfigurationsHasBeenSet; }

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline void SetMediaStreamSourceConfigurations(const Aws::Vector<MediaStreamSourceConfigurationRequest>& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations = value; }

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline void SetMediaStreamSourceConfigurations(Aws::Vector<MediaStreamSourceConfigurationRequest>&& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations = std::move(value); }

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline SetSourceRequest& WithMediaStreamSourceConfigurations(const Aws::Vector<MediaStreamSourceConfigurationRequest>& value) { SetMediaStreamSourceConfigurations(value); return *this;}

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline SetSourceRequest& WithMediaStreamSourceConfigurations(Aws::Vector<MediaStreamSourceConfigurationRequest>&& value) { SetMediaStreamSourceConfigurations(std::move(value)); return *this;}

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline SetSourceRequest& AddMediaStreamSourceConfigurations(const MediaStreamSourceConfigurationRequest& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations.push_back(value); return *this; }

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline SetSourceRequest& AddMediaStreamSourceConfigurations(MediaStreamSourceConfigurationRequest&& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations.push_back(std::move(value)); return *this; }


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
    inline SetSourceRequest& WithMinLatency(int value) { SetMinLatency(value); return *this;}


    /**
     * The name of the source.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the source.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the source.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the source.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the source.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the source.
     */
    inline SetSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the source.
     */
    inline SetSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the source.
     */
    inline SetSourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The protocol that is used by the source.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * The protocol that is used by the source.
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * The protocol that is used by the source.
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * The protocol that is used by the source.
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * The protocol that is used by the source.
     */
    inline SetSourceRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * The protocol that is used by the source.
     */
    inline SetSourceRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


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
    inline SetSourceRequest& WithSenderControlPort(int value) { SetSenderControlPort(value); return *this;}


    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline const Aws::String& GetSenderIpAddress() const{ return m_senderIpAddress; }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline void SetSenderIpAddress(const Aws::String& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = value; }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline void SetSenderIpAddress(Aws::String&& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = std::move(value); }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline void SetSenderIpAddress(const char* value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress.assign(value); }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline SetSourceRequest& WithSenderIpAddress(const Aws::String& value) { SetSenderIpAddress(value); return *this;}

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline SetSourceRequest& WithSenderIpAddress(Aws::String&& value) { SetSenderIpAddress(std::move(value)); return *this;}

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline SetSourceRequest& WithSenderIpAddress(const char* value) { SetSenderIpAddress(value); return *this;}


    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline const Aws::String& GetSourceListenerAddress() const{ return m_sourceListenerAddress; }

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline bool SourceListenerAddressHasBeenSet() const { return m_sourceListenerAddressHasBeenSet; }

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline void SetSourceListenerAddress(const Aws::String& value) { m_sourceListenerAddressHasBeenSet = true; m_sourceListenerAddress = value; }

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline void SetSourceListenerAddress(Aws::String&& value) { m_sourceListenerAddressHasBeenSet = true; m_sourceListenerAddress = std::move(value); }

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline void SetSourceListenerAddress(const char* value) { m_sourceListenerAddressHasBeenSet = true; m_sourceListenerAddress.assign(value); }

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline SetSourceRequest& WithSourceListenerAddress(const Aws::String& value) { SetSourceListenerAddress(value); return *this;}

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline SetSourceRequest& WithSourceListenerAddress(Aws::String&& value) { SetSourceListenerAddress(std::move(value)); return *this;}

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline SetSourceRequest& WithSourceListenerAddress(const char* value) { SetSourceListenerAddress(value); return *this;}


    /**
     * Source port for SRT-caller protocol.
     */
    inline int GetSourceListenerPort() const{ return m_sourceListenerPort; }

    /**
     * Source port for SRT-caller protocol.
     */
    inline bool SourceListenerPortHasBeenSet() const { return m_sourceListenerPortHasBeenSet; }

    /**
     * Source port for SRT-caller protocol.
     */
    inline void SetSourceListenerPort(int value) { m_sourceListenerPortHasBeenSet = true; m_sourceListenerPort = value; }

    /**
     * Source port for SRT-caller protocol.
     */
    inline SetSourceRequest& WithSourceListenerPort(int value) { SetSourceListenerPort(value); return *this;}


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
    inline SetSourceRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline SetSourceRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline SetSourceRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * The name of the VPC interface to use for this source.
     */
    inline const Aws::String& GetVpcInterfaceName() const{ return m_vpcInterfaceName; }

    /**
     * The name of the VPC interface to use for this source.
     */
    inline bool VpcInterfaceNameHasBeenSet() const { return m_vpcInterfaceNameHasBeenSet; }

    /**
     * The name of the VPC interface to use for this source.
     */
    inline void SetVpcInterfaceName(const Aws::String& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = value; }

    /**
     * The name of the VPC interface to use for this source.
     */
    inline void SetVpcInterfaceName(Aws::String&& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = std::move(value); }

    /**
     * The name of the VPC interface to use for this source.
     */
    inline void SetVpcInterfaceName(const char* value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName.assign(value); }

    /**
     * The name of the VPC interface to use for this source.
     */
    inline SetSourceRequest& WithVpcInterfaceName(const Aws::String& value) { SetVpcInterfaceName(value); return *this;}

    /**
     * The name of the VPC interface to use for this source.
     */
    inline SetSourceRequest& WithVpcInterfaceName(Aws::String&& value) { SetVpcInterfaceName(std::move(value)); return *this;}

    /**
     * The name of the VPC interface to use for this source.
     */
    inline SetSourceRequest& WithVpcInterfaceName(const char* value) { SetVpcInterfaceName(value); return *this;}


    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline const Aws::String& GetWhitelistCidr() const{ return m_whitelistCidr; }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline bool WhitelistCidrHasBeenSet() const { return m_whitelistCidrHasBeenSet; }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetWhitelistCidr(const Aws::String& value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr = value; }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetWhitelistCidr(Aws::String&& value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr = std::move(value); }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetWhitelistCidr(const char* value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr.assign(value); }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline SetSourceRequest& WithWhitelistCidr(const Aws::String& value) { SetWhitelistCidr(value); return *this;}

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline SetSourceRequest& WithWhitelistCidr(Aws::String&& value) { SetWhitelistCidr(std::move(value)); return *this;}

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline SetSourceRequest& WithWhitelistCidr(const char* value) { SetWhitelistCidr(value); return *this;}

  private:

    Encryption m_decryption;
    bool m_decryptionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

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

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_senderControlPort;
    bool m_senderControlPortHasBeenSet = false;

    Aws::String m_senderIpAddress;
    bool m_senderIpAddressHasBeenSet = false;

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
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
