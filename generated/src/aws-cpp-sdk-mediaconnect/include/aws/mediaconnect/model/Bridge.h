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
   * A Bridge is the connection between your datacenter's Instances and the AWS
   * cloud. A bridge can be used to send video from the AWS cloud to your datacenter
   * or from your datacenter to the AWS cloud.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Bridge">AWS
   * API Reference</a></p>
   */
  class Bridge
  {
  public:
    AWS_MEDIACONNECT_API Bridge();
    AWS_MEDIACONNECT_API Bridge(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Bridge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = value; }

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::move(value); }

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline void SetBridgeArn(const char* value) { m_bridgeArnHasBeenSet = true; m_bridgeArn.assign(value); }

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline Bridge& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline Bridge& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline Bridge& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    
    inline const Aws::Vector<MessageDetail>& GetBridgeMessages() const{ return m_bridgeMessages; }

    
    inline bool BridgeMessagesHasBeenSet() const { return m_bridgeMessagesHasBeenSet; }

    
    inline void SetBridgeMessages(const Aws::Vector<MessageDetail>& value) { m_bridgeMessagesHasBeenSet = true; m_bridgeMessages = value; }

    
    inline void SetBridgeMessages(Aws::Vector<MessageDetail>&& value) { m_bridgeMessagesHasBeenSet = true; m_bridgeMessages = std::move(value); }

    
    inline Bridge& WithBridgeMessages(const Aws::Vector<MessageDetail>& value) { SetBridgeMessages(value); return *this;}

    
    inline Bridge& WithBridgeMessages(Aws::Vector<MessageDetail>&& value) { SetBridgeMessages(std::move(value)); return *this;}

    
    inline Bridge& AddBridgeMessages(const MessageDetail& value) { m_bridgeMessagesHasBeenSet = true; m_bridgeMessages.push_back(value); return *this; }

    
    inline Bridge& AddBridgeMessages(MessageDetail&& value) { m_bridgeMessagesHasBeenSet = true; m_bridgeMessages.push_back(std::move(value)); return *this; }


    
    inline const BridgeState& GetBridgeState() const{ return m_bridgeState; }

    
    inline bool BridgeStateHasBeenSet() const { return m_bridgeStateHasBeenSet; }

    
    inline void SetBridgeState(const BridgeState& value) { m_bridgeStateHasBeenSet = true; m_bridgeState = value; }

    
    inline void SetBridgeState(BridgeState&& value) { m_bridgeStateHasBeenSet = true; m_bridgeState = std::move(value); }

    
    inline Bridge& WithBridgeState(const BridgeState& value) { SetBridgeState(value); return *this;}

    
    inline Bridge& WithBridgeState(BridgeState&& value) { SetBridgeState(std::move(value)); return *this;}


    
    inline const EgressGatewayBridge& GetEgressGatewayBridge() const{ return m_egressGatewayBridge; }

    
    inline bool EgressGatewayBridgeHasBeenSet() const { return m_egressGatewayBridgeHasBeenSet; }

    
    inline void SetEgressGatewayBridge(const EgressGatewayBridge& value) { m_egressGatewayBridgeHasBeenSet = true; m_egressGatewayBridge = value; }

    
    inline void SetEgressGatewayBridge(EgressGatewayBridge&& value) { m_egressGatewayBridgeHasBeenSet = true; m_egressGatewayBridge = std::move(value); }

    
    inline Bridge& WithEgressGatewayBridge(const EgressGatewayBridge& value) { SetEgressGatewayBridge(value); return *this;}

    
    inline Bridge& WithEgressGatewayBridge(EgressGatewayBridge&& value) { SetEgressGatewayBridge(std::move(value)); return *this;}


    
    inline const IngressGatewayBridge& GetIngressGatewayBridge() const{ return m_ingressGatewayBridge; }

    
    inline bool IngressGatewayBridgeHasBeenSet() const { return m_ingressGatewayBridgeHasBeenSet; }

    
    inline void SetIngressGatewayBridge(const IngressGatewayBridge& value) { m_ingressGatewayBridgeHasBeenSet = true; m_ingressGatewayBridge = value; }

    
    inline void SetIngressGatewayBridge(IngressGatewayBridge&& value) { m_ingressGatewayBridgeHasBeenSet = true; m_ingressGatewayBridge = std::move(value); }

    
    inline Bridge& WithIngressGatewayBridge(const IngressGatewayBridge& value) { SetIngressGatewayBridge(value); return *this;}

    
    inline Bridge& WithIngressGatewayBridge(IngressGatewayBridge&& value) { SetIngressGatewayBridge(std::move(value)); return *this;}


    /**
     * The name of the bridge.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the bridge.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the bridge.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the bridge.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the bridge.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the bridge.
     */
    inline Bridge& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the bridge.
     */
    inline Bridge& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the bridge.
     */
    inline Bridge& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The outputs on this bridge.
     */
    inline const Aws::Vector<BridgeOutput>& GetOutputs() const{ return m_outputs; }

    /**
     * The outputs on this bridge.
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * The outputs on this bridge.
     */
    inline void SetOutputs(const Aws::Vector<BridgeOutput>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * The outputs on this bridge.
     */
    inline void SetOutputs(Aws::Vector<BridgeOutput>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * The outputs on this bridge.
     */
    inline Bridge& WithOutputs(const Aws::Vector<BridgeOutput>& value) { SetOutputs(value); return *this;}

    /**
     * The outputs on this bridge.
     */
    inline Bridge& WithOutputs(Aws::Vector<BridgeOutput>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * The outputs on this bridge.
     */
    inline Bridge& AddOutputs(const BridgeOutput& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * The outputs on this bridge.
     */
    inline Bridge& AddOutputs(BridgeOutput&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * The placement Amazon Resource Number (ARN) of the bridge.
     */
    inline const Aws::String& GetPlacementArn() const{ return m_placementArn; }

    /**
     * The placement Amazon Resource Number (ARN) of the bridge.
     */
    inline bool PlacementArnHasBeenSet() const { return m_placementArnHasBeenSet; }

    /**
     * The placement Amazon Resource Number (ARN) of the bridge.
     */
    inline void SetPlacementArn(const Aws::String& value) { m_placementArnHasBeenSet = true; m_placementArn = value; }

    /**
     * The placement Amazon Resource Number (ARN) of the bridge.
     */
    inline void SetPlacementArn(Aws::String&& value) { m_placementArnHasBeenSet = true; m_placementArn = std::move(value); }

    /**
     * The placement Amazon Resource Number (ARN) of the bridge.
     */
    inline void SetPlacementArn(const char* value) { m_placementArnHasBeenSet = true; m_placementArn.assign(value); }

    /**
     * The placement Amazon Resource Number (ARN) of the bridge.
     */
    inline Bridge& WithPlacementArn(const Aws::String& value) { SetPlacementArn(value); return *this;}

    /**
     * The placement Amazon Resource Number (ARN) of the bridge.
     */
    inline Bridge& WithPlacementArn(Aws::String&& value) { SetPlacementArn(std::move(value)); return *this;}

    /**
     * The placement Amazon Resource Number (ARN) of the bridge.
     */
    inline Bridge& WithPlacementArn(const char* value) { SetPlacementArn(value); return *this;}


    
    inline const FailoverConfig& GetSourceFailoverConfig() const{ return m_sourceFailoverConfig; }

    
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }

    
    inline void SetSourceFailoverConfig(const FailoverConfig& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = value; }

    
    inline void SetSourceFailoverConfig(FailoverConfig&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::move(value); }

    
    inline Bridge& WithSourceFailoverConfig(const FailoverConfig& value) { SetSourceFailoverConfig(value); return *this;}

    
    inline Bridge& WithSourceFailoverConfig(FailoverConfig&& value) { SetSourceFailoverConfig(std::move(value)); return *this;}


    /**
     * The sources on this bridge.
     */
    inline const Aws::Vector<BridgeSource>& GetSources() const{ return m_sources; }

    /**
     * The sources on this bridge.
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * The sources on this bridge.
     */
    inline void SetSources(const Aws::Vector<BridgeSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * The sources on this bridge.
     */
    inline void SetSources(Aws::Vector<BridgeSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * The sources on this bridge.
     */
    inline Bridge& WithSources(const Aws::Vector<BridgeSource>& value) { SetSources(value); return *this;}

    /**
     * The sources on this bridge.
     */
    inline Bridge& WithSources(Aws::Vector<BridgeSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * The sources on this bridge.
     */
    inline Bridge& AddSources(const BridgeSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * The sources on this bridge.
     */
    inline Bridge& AddSources(BridgeSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    Aws::Vector<MessageDetail> m_bridgeMessages;
    bool m_bridgeMessagesHasBeenSet = false;

    BridgeState m_bridgeState;
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
