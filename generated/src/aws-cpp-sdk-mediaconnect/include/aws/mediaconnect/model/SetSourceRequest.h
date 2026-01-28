/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/mediaconnect/model/FlowTransitEncryption.h>
#include <aws/mediaconnect/model/MediaStreamSourceConfigurationRequest.h>
#include <aws/mediaconnect/model/NdiSourceSettings.h>
#include <aws/mediaconnect/model/Protocol.h>
#include <aws/mediaconnect/model/SetGatewayBridgeSourceRequest.h>
#include <aws/mediaconnect/model/State.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p> The settings for the source of the flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SetSourceRequest">AWS
 * API Reference</a></p>
 */
class SetSourceRequest {
 public:
  AWS_MEDIACONNECT_API SetSourceRequest() = default;
  AWS_MEDIACONNECT_API SetSourceRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SetSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The type of encryption that is used on the content ingested from this
   * source. Allowable encryption types: static-key.</p>
   */
  inline const Encryption& GetDecryption() const { return m_decryption; }
  inline bool DecryptionHasBeenSet() const { return m_decryptionHasBeenSet; }
  template <typename DecryptionT = Encryption>
  void SetDecryption(DecryptionT&& value) {
    m_decryptionHasBeenSet = true;
    m_decryption = std::forward<DecryptionT>(value);
  }
  template <typename DecryptionT = Encryption>
  SetSourceRequest& WithDecryption(DecryptionT&& value) {
    SetDecryption(std::forward<DecryptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A description for the source. This value is not used or seen outside of the
   * current MediaConnect account.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SetSourceRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The ARN of the entitlement that allows you to subscribe to this flow. The
   * entitlement is set by the flow originator, and the ARN is generated as part of
   * the originator's flow.</p>
   */
  inline const Aws::String& GetEntitlementArn() const { return m_entitlementArn; }
  inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }
  template <typename EntitlementArnT = Aws::String>
  void SetEntitlementArn(EntitlementArnT&& value) {
    m_entitlementArnHasBeenSet = true;
    m_entitlementArn = std::forward<EntitlementArnT>(value);
  }
  template <typename EntitlementArnT = Aws::String>
  SetSourceRequest& WithEntitlementArn(EntitlementArnT&& value) {
    SetEntitlementArn(std::forward<EntitlementArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The port that the flow will be listening on for incoming content.</p>
   */
  inline int GetIngestPort() const { return m_ingestPort; }
  inline bool IngestPortHasBeenSet() const { return m_ingestPortHasBeenSet; }
  inline void SetIngestPort(int value) {
    m_ingestPortHasBeenSet = true;
    m_ingestPort = value;
  }
  inline SetSourceRequest& WithIngestPort(int value) {
    SetIngestPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The smoothing max bitrate (in bps) for RIST, RTP, and RTP-FEC streams.</p>
   */
  inline int GetMaxBitrate() const { return m_maxBitrate; }
  inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
  inline void SetMaxBitrate(int value) {
    m_maxBitrateHasBeenSet = true;
    m_maxBitrate = value;
  }
  inline SetSourceRequest& WithMaxBitrate(int value) {
    SetMaxBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum latency in milliseconds. This parameter applies only to
   * RIST-based and Zixi-based streams.</p>
   */
  inline int GetMaxLatency() const { return m_maxLatency; }
  inline bool MaxLatencyHasBeenSet() const { return m_maxLatencyHasBeenSet; }
  inline void SetMaxLatency(int value) {
    m_maxLatencyHasBeenSet = true;
    m_maxLatency = value;
  }
  inline SetSourceRequest& WithMaxLatency(int value) {
    SetMaxLatency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The size of the buffer (in milliseconds) to use to sync incoming source
   * data.</p>
   */
  inline int GetMaxSyncBuffer() const { return m_maxSyncBuffer; }
  inline bool MaxSyncBufferHasBeenSet() const { return m_maxSyncBufferHasBeenSet; }
  inline void SetMaxSyncBuffer(int value) {
    m_maxSyncBufferHasBeenSet = true;
    m_maxSyncBuffer = value;
  }
  inline SetSourceRequest& WithMaxSyncBuffer(int value) {
    SetMaxSyncBuffer(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The media streams that are associated with the source, and the parameters
   * for those associations.</p>
   */
  inline const Aws::Vector<MediaStreamSourceConfigurationRequest>& GetMediaStreamSourceConfigurations() const {
    return m_mediaStreamSourceConfigurations;
  }
  inline bool MediaStreamSourceConfigurationsHasBeenSet() const { return m_mediaStreamSourceConfigurationsHasBeenSet; }
  template <typename MediaStreamSourceConfigurationsT = Aws::Vector<MediaStreamSourceConfigurationRequest>>
  void SetMediaStreamSourceConfigurations(MediaStreamSourceConfigurationsT&& value) {
    m_mediaStreamSourceConfigurationsHasBeenSet = true;
    m_mediaStreamSourceConfigurations = std::forward<MediaStreamSourceConfigurationsT>(value);
  }
  template <typename MediaStreamSourceConfigurationsT = Aws::Vector<MediaStreamSourceConfigurationRequest>>
  SetSourceRequest& WithMediaStreamSourceConfigurations(MediaStreamSourceConfigurationsT&& value) {
    SetMediaStreamSourceConfigurations(std::forward<MediaStreamSourceConfigurationsT>(value));
    return *this;
  }
  template <typename MediaStreamSourceConfigurationsT = MediaStreamSourceConfigurationRequest>
  SetSourceRequest& AddMediaStreamSourceConfigurations(MediaStreamSourceConfigurationsT&& value) {
    m_mediaStreamSourceConfigurationsHasBeenSet = true;
    m_mediaStreamSourceConfigurations.emplace_back(std::forward<MediaStreamSourceConfigurationsT>(value));
    return *this;
  }
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
  inline void SetMinLatency(int value) {
    m_minLatencyHasBeenSet = true;
    m_minLatency = value;
  }
  inline SetSourceRequest& WithMinLatency(int value) {
    SetMinLatency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the source.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SetSourceRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The protocol that is used by the source.</p>  <p>Elemental
   * MediaConnect no longer supports the Fujitsu QoS protocol. This reference is
   * maintained for legacy purposes only.</p>
   */
  inline Protocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(Protocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline SetSourceRequest& WithProtocol(Protocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The port that the flow uses to send outbound requests to initiate connection
   * with the sender.</p>
   */
  inline int GetSenderControlPort() const { return m_senderControlPort; }
  inline bool SenderControlPortHasBeenSet() const { return m_senderControlPortHasBeenSet; }
  inline void SetSenderControlPort(int value) {
    m_senderControlPortHasBeenSet = true;
    m_senderControlPort = value;
  }
  inline SetSourceRequest& WithSenderControlPort(int value) {
    SetSenderControlPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The IP address that the flow communicates with to initiate connection with
   * the sender.</p>
   */
  inline const Aws::String& GetSenderIpAddress() const { return m_senderIpAddress; }
  inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }
  template <typename SenderIpAddressT = Aws::String>
  void SetSenderIpAddress(SenderIpAddressT&& value) {
    m_senderIpAddressHasBeenSet = true;
    m_senderIpAddress = std::forward<SenderIpAddressT>(value);
  }
  template <typename SenderIpAddressT = Aws::String>
  SetSourceRequest& WithSenderIpAddress(SenderIpAddressT&& value) {
    SetSenderIpAddress(std::forward<SenderIpAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Source IP or domain name for SRT-caller protocol.</p>
   */
  inline const Aws::String& GetSourceListenerAddress() const { return m_sourceListenerAddress; }
  inline bool SourceListenerAddressHasBeenSet() const { return m_sourceListenerAddressHasBeenSet; }
  template <typename SourceListenerAddressT = Aws::String>
  void SetSourceListenerAddress(SourceListenerAddressT&& value) {
    m_sourceListenerAddressHasBeenSet = true;
    m_sourceListenerAddress = std::forward<SourceListenerAddressT>(value);
  }
  template <typename SourceListenerAddressT = Aws::String>
  SetSourceRequest& WithSourceListenerAddress(SourceListenerAddressT&& value) {
    SetSourceListenerAddress(std::forward<SourceListenerAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Source port for SRT-caller protocol.</p>
   */
  inline int GetSourceListenerPort() const { return m_sourceListenerPort; }
  inline bool SourceListenerPortHasBeenSet() const { return m_sourceListenerPortHasBeenSet; }
  inline void SetSourceListenerPort(int value) {
    m_sourceListenerPortHasBeenSet = true;
    m_sourceListenerPort = value;
  }
  inline SetSourceRequest& WithSourceListenerPort(int value) {
    SetSourceListenerPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The stream ID that you want to use for this transport. This parameter
   * applies only to Zixi and SRT caller-based streams.</p>
   */
  inline const Aws::String& GetStreamId() const { return m_streamId; }
  inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
  template <typename StreamIdT = Aws::String>
  void SetStreamId(StreamIdT&& value) {
    m_streamIdHasBeenSet = true;
    m_streamId = std::forward<StreamIdT>(value);
  }
  template <typename StreamIdT = Aws::String>
  SetSourceRequest& WithStreamId(StreamIdT&& value) {
    SetStreamId(std::forward<StreamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the VPC interface to use for this source.</p>
   */
  inline const Aws::String& GetVpcInterfaceName() const { return m_vpcInterfaceName; }
  inline bool VpcInterfaceNameHasBeenSet() const { return m_vpcInterfaceNameHasBeenSet; }
  template <typename VpcInterfaceNameT = Aws::String>
  void SetVpcInterfaceName(VpcInterfaceNameT&& value) {
    m_vpcInterfaceNameHasBeenSet = true;
    m_vpcInterfaceName = std::forward<VpcInterfaceNameT>(value);
  }
  template <typename VpcInterfaceNameT = Aws::String>
  SetSourceRequest& WithVpcInterfaceName(VpcInterfaceNameT&& value) {
    SetVpcInterfaceName(std::forward<VpcInterfaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The range of IP addresses that should be allowed to contribute content to
   * your source. These IP addresses should be in the form of a Classless
   * Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.</p>
   */
  inline const Aws::String& GetWhitelistCidr() const { return m_whitelistCidr; }
  inline bool WhitelistCidrHasBeenSet() const { return m_whitelistCidrHasBeenSet; }
  template <typename WhitelistCidrT = Aws::String>
  void SetWhitelistCidr(WhitelistCidrT&& value) {
    m_whitelistCidrHasBeenSet = true;
    m_whitelistCidr = std::forward<WhitelistCidrT>(value);
  }
  template <typename WhitelistCidrT = Aws::String>
  SetSourceRequest& WithWhitelistCidr(WhitelistCidrT&& value) {
    SetWhitelistCidr(std::forward<WhitelistCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The source configuration for cloud flows receiving a stream from a
   * bridge.</p>
   */
  inline const SetGatewayBridgeSourceRequest& GetGatewayBridgeSource() const { return m_gatewayBridgeSource; }
  inline bool GatewayBridgeSourceHasBeenSet() const { return m_gatewayBridgeSourceHasBeenSet; }
  template <typename GatewayBridgeSourceT = SetGatewayBridgeSourceRequest>
  void SetGatewayBridgeSource(GatewayBridgeSourceT&& value) {
    m_gatewayBridgeSourceHasBeenSet = true;
    m_gatewayBridgeSource = std::forward<GatewayBridgeSourceT>(value);
  }
  template <typename GatewayBridgeSourceT = SetGatewayBridgeSourceRequest>
  SetSourceRequest& WithGatewayBridgeSource(GatewayBridgeSourceT&& value) {
    SetGatewayBridgeSource(std::forward<GatewayBridgeSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The settings for the NDI® source. This includes the exact name of the
   * upstream NDI sender that you want to connect to your source. </p>
   */
  inline const NdiSourceSettings& GetNdiSourceSettings() const { return m_ndiSourceSettings; }
  inline bool NdiSourceSettingsHasBeenSet() const { return m_ndiSourceSettingsHasBeenSet; }
  template <typename NdiSourceSettingsT = NdiSourceSettings>
  void SetNdiSourceSettings(NdiSourceSettingsT&& value) {
    m_ndiSourceSettingsHasBeenSet = true;
    m_ndiSourceSettings = std::forward<NdiSourceSettingsT>(value);
  }
  template <typename NdiSourceSettingsT = NdiSourceSettings>
  SetSourceRequest& WithNdiSourceSettings(NdiSourceSettingsT&& value) {
    SetNdiSourceSettings(std::forward<NdiSourceSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The key-value pairs that can be used to tag and organize the source. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetSourceTags() const { return m_sourceTags; }
  inline bool SourceTagsHasBeenSet() const { return m_sourceTagsHasBeenSet; }
  template <typename SourceTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetSourceTags(SourceTagsT&& value) {
    m_sourceTagsHasBeenSet = true;
    m_sourceTags = std::forward<SourceTagsT>(value);
  }
  template <typename SourceTagsT = Aws::Map<Aws::String, Aws::String>>
  SetSourceRequest& WithSourceTags(SourceTagsT&& value) {
    SetSourceTags(std::forward<SourceTagsT>(value));
    return *this;
  }
  template <typename SourceTagsKeyT = Aws::String, typename SourceTagsValueT = Aws::String>
  SetSourceRequest& AddSourceTags(SourceTagsKeyT&& key, SourceTagsValueT&& value) {
    m_sourceTagsHasBeenSet = true;
    m_sourceTags.emplace(std::forward<SourceTagsKeyT>(key), std::forward<SourceTagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to enable or disable router integration when setting a flow
   * source.</p>
   */
  inline State GetRouterIntegrationState() const { return m_routerIntegrationState; }
  inline bool RouterIntegrationStateHasBeenSet() const { return m_routerIntegrationStateHasBeenSet; }
  inline void SetRouterIntegrationState(State value) {
    m_routerIntegrationStateHasBeenSet = true;
    m_routerIntegrationState = value;
  }
  inline SetSourceRequest& WithRouterIntegrationState(State value) {
    SetRouterIntegrationState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The decryption configuration for the flow source when router integration is
   * enabled. Specifies how the source content should be decrypted when router
   * integration is used.</p>
   */
  inline const FlowTransitEncryption& GetRouterIntegrationTransitDecryption() const { return m_routerIntegrationTransitDecryption; }
  inline bool RouterIntegrationTransitDecryptionHasBeenSet() const { return m_routerIntegrationTransitDecryptionHasBeenSet; }
  template <typename RouterIntegrationTransitDecryptionT = FlowTransitEncryption>
  void SetRouterIntegrationTransitDecryption(RouterIntegrationTransitDecryptionT&& value) {
    m_routerIntegrationTransitDecryptionHasBeenSet = true;
    m_routerIntegrationTransitDecryption = std::forward<RouterIntegrationTransitDecryptionT>(value);
  }
  template <typename RouterIntegrationTransitDecryptionT = FlowTransitEncryption>
  SetSourceRequest& WithRouterIntegrationTransitDecryption(RouterIntegrationTransitDecryptionT&& value) {
    SetRouterIntegrationTransitDecryption(std::forward<RouterIntegrationTransitDecryptionT>(value));
    return *this;
  }
  ///@}
 private:
  Encryption m_decryption;

  Aws::String m_description;

  Aws::String m_entitlementArn;

  int m_ingestPort{0};

  int m_maxBitrate{0};

  int m_maxLatency{0};

  int m_maxSyncBuffer{0};

  Aws::Vector<MediaStreamSourceConfigurationRequest> m_mediaStreamSourceConfigurations;

  int m_minLatency{0};

  Aws::String m_name;

  Protocol m_protocol{Protocol::NOT_SET};

  int m_senderControlPort{0};

  Aws::String m_senderIpAddress;

  Aws::String m_sourceListenerAddress;

  int m_sourceListenerPort{0};

  Aws::String m_streamId;

  Aws::String m_vpcInterfaceName;

  Aws::String m_whitelistCidr;

  SetGatewayBridgeSourceRequest m_gatewayBridgeSource;

  NdiSourceSettings m_ndiSourceSettings;

  Aws::Map<Aws::String, Aws::String> m_sourceTags;

  State m_routerIntegrationState{State::NOT_SET};

  FlowTransitEncryption m_routerIntegrationTransitDecryption;
  bool m_decryptionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_entitlementArnHasBeenSet = false;
  bool m_ingestPortHasBeenSet = false;
  bool m_maxBitrateHasBeenSet = false;
  bool m_maxLatencyHasBeenSet = false;
  bool m_maxSyncBufferHasBeenSet = false;
  bool m_mediaStreamSourceConfigurationsHasBeenSet = false;
  bool m_minLatencyHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_senderControlPortHasBeenSet = false;
  bool m_senderIpAddressHasBeenSet = false;
  bool m_sourceListenerAddressHasBeenSet = false;
  bool m_sourceListenerPortHasBeenSet = false;
  bool m_streamIdHasBeenSet = false;
  bool m_vpcInterfaceNameHasBeenSet = false;
  bool m_whitelistCidrHasBeenSet = false;
  bool m_gatewayBridgeSourceHasBeenSet = false;
  bool m_ndiSourceSettingsHasBeenSet = false;
  bool m_sourceTagsHasBeenSet = false;
  bool m_routerIntegrationStateHasBeenSet = false;
  bool m_routerIntegrationTransitDecryptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
