/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/BridgeState.h>
#include <aws/mediaconnect/model/EgressGatewayBridge.h>
#include <aws/mediaconnect/model/IngressGatewayBridge.h>
#include <aws/mediaconnect/model/FailoverConfig.h>
#include <aws/mediaconnect/model/MessageDetail.h>
#include <aws/mediaconnect/model/BridgeOutput.h>
#include <aws/mediaconnect/model/BridgeSource.h>
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
   * <p> A Bridge is the connection between your data center's Instances and the
   * Amazon Web Services cloud. A bridge can be used to send video from the Amazon
   * Web Services cloud to your data center or from your data center to the Amazon
   * Web Services cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Bridge">AWS
   * API Reference</a></p>
   */
  class Bridge
  {
  public:
    AWS_MEDIACONNECT_API Bridge() = default;
    AWS_MEDIACONNECT_API Bridge(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Bridge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the bridge.</p>
     */
    inline const Aws::String& GetBridgeArn() const { return m_bridgeArn; }
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }
    template<typename BridgeArnT = Aws::String>
    void SetBridgeArn(BridgeArnT&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::forward<BridgeArnT>(value); }
    template<typename BridgeArnT = Aws::String>
    Bridge& WithBridgeArn(BridgeArnT&& value) { SetBridgeArn(std::forward<BridgeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Messages with details about the bridge. </p>
     */
    inline const Aws::Vector<MessageDetail>& GetBridgeMessages() const { return m_bridgeMessages; }
    inline bool BridgeMessagesHasBeenSet() const { return m_bridgeMessagesHasBeenSet; }
    template<typename BridgeMessagesT = Aws::Vector<MessageDetail>>
    void SetBridgeMessages(BridgeMessagesT&& value) { m_bridgeMessagesHasBeenSet = true; m_bridgeMessages = std::forward<BridgeMessagesT>(value); }
    template<typename BridgeMessagesT = Aws::Vector<MessageDetail>>
    Bridge& WithBridgeMessages(BridgeMessagesT&& value) { SetBridgeMessages(std::forward<BridgeMessagesT>(value)); return *this;}
    template<typename BridgeMessagesT = MessageDetail>
    Bridge& AddBridgeMessages(BridgeMessagesT&& value) { m_bridgeMessagesHasBeenSet = true; m_bridgeMessages.emplace_back(std::forward<BridgeMessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the bridge. </p>
     */
    inline BridgeState GetBridgeState() const { return m_bridgeState; }
    inline bool BridgeStateHasBeenSet() const { return m_bridgeStateHasBeenSet; }
    inline void SetBridgeState(BridgeState value) { m_bridgeStateHasBeenSet = true; m_bridgeState = value; }
    inline Bridge& WithBridgeState(BridgeState value) { SetBridgeState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An egress bridge is a cloud-to-ground bridge. The content comes from an
     * existing MediaConnect flow and is delivered to your premises. </p>
     */
    inline const EgressGatewayBridge& GetEgressGatewayBridge() const { return m_egressGatewayBridge; }
    inline bool EgressGatewayBridgeHasBeenSet() const { return m_egressGatewayBridgeHasBeenSet; }
    template<typename EgressGatewayBridgeT = EgressGatewayBridge>
    void SetEgressGatewayBridge(EgressGatewayBridgeT&& value) { m_egressGatewayBridgeHasBeenSet = true; m_egressGatewayBridge = std::forward<EgressGatewayBridgeT>(value); }
    template<typename EgressGatewayBridgeT = EgressGatewayBridge>
    Bridge& WithEgressGatewayBridge(EgressGatewayBridgeT&& value) { SetEgressGatewayBridge(std::forward<EgressGatewayBridgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An ingress bridge is a ground-to-cloud bridge. The content originates at
     * your premises and is delivered to the cloud. </p>
     */
    inline const IngressGatewayBridge& GetIngressGatewayBridge() const { return m_ingressGatewayBridge; }
    inline bool IngressGatewayBridgeHasBeenSet() const { return m_ingressGatewayBridgeHasBeenSet; }
    template<typename IngressGatewayBridgeT = IngressGatewayBridge>
    void SetIngressGatewayBridge(IngressGatewayBridgeT&& value) { m_ingressGatewayBridgeHasBeenSet = true; m_ingressGatewayBridge = std::forward<IngressGatewayBridgeT>(value); }
    template<typename IngressGatewayBridgeT = IngressGatewayBridge>
    Bridge& WithIngressGatewayBridge(IngressGatewayBridgeT&& value) { SetIngressGatewayBridge(std::forward<IngressGatewayBridgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the bridge.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Bridge& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The outputs on this bridge.</p>
     */
    inline const Aws::Vector<BridgeOutput>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<BridgeOutput>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<BridgeOutput>>
    Bridge& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = BridgeOutput>
    Bridge& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The placement Amazon Resource Number (ARN) of the bridge.</p>
     */
    inline const Aws::String& GetPlacementArn() const { return m_placementArn; }
    inline bool PlacementArnHasBeenSet() const { return m_placementArnHasBeenSet; }
    template<typename PlacementArnT = Aws::String>
    void SetPlacementArn(PlacementArnT&& value) { m_placementArnHasBeenSet = true; m_placementArn = std::forward<PlacementArnT>(value); }
    template<typename PlacementArnT = Aws::String>
    Bridge& WithPlacementArn(PlacementArnT&& value) { SetPlacementArn(std::forward<PlacementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings for source failover. </p>
     */
    inline const FailoverConfig& GetSourceFailoverConfig() const { return m_sourceFailoverConfig; }
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }
    template<typename SourceFailoverConfigT = FailoverConfig>
    void SetSourceFailoverConfig(SourceFailoverConfigT&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::forward<SourceFailoverConfigT>(value); }
    template<typename SourceFailoverConfigT = FailoverConfig>
    Bridge& WithSourceFailoverConfig(SourceFailoverConfigT&& value) { SetSourceFailoverConfig(std::forward<SourceFailoverConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The sources on this bridge.</p>
     */
    inline const Aws::Vector<BridgeSource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<BridgeSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<BridgeSource>>
    Bridge& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = BridgeSource>
    Bridge& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    Aws::Vector<MessageDetail> m_bridgeMessages;
    bool m_bridgeMessagesHasBeenSet = false;

    BridgeState m_bridgeState{BridgeState::NOT_SET};
    bool m_bridgeStateHasBeenSet = false;

    EgressGatewayBridge m_egressGatewayBridge;
    bool m_egressGatewayBridgeHasBeenSet = false;

    IngressGatewayBridge m_ingressGatewayBridge;
    bool m_ingressGatewayBridgeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<BridgeOutput> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_placementArn;
    bool m_placementArnHasBeenSet = false;

    FailoverConfig m_sourceFailoverConfig;
    bool m_sourceFailoverConfigHasBeenSet = false;

    Aws::Vector<BridgeSource> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
