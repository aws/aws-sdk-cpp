/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/model/AddEgressGatewayBridgeRequest.h>
#include <aws/mediaconnect/model/AddIngressGatewayBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/FailoverConfig.h>
#include <aws/mediaconnect/model/AddBridgeOutputRequest.h>
#include <aws/mediaconnect/model/AddBridgeSourceRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * Creates a new bridge. The request must include one source.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateBridgeRequest">AWS
   * API Reference</a></p>
   */
  class CreateBridgeRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API CreateBridgeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBridge"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Create a bridge with the egress bridge type. An egress bridge is a
     * cloud-to-ground bridge. The content comes from an existing MediaConnect flow and
     * is delivered to your premises.
     */
    inline const AddEgressGatewayBridgeRequest& GetEgressGatewayBridge() const { return m_egressGatewayBridge; }
    inline bool EgressGatewayBridgeHasBeenSet() const { return m_egressGatewayBridgeHasBeenSet; }
    template<typename EgressGatewayBridgeT = AddEgressGatewayBridgeRequest>
    void SetEgressGatewayBridge(EgressGatewayBridgeT&& value) { m_egressGatewayBridgeHasBeenSet = true; m_egressGatewayBridge = std::forward<EgressGatewayBridgeT>(value); }
    template<typename EgressGatewayBridgeT = AddEgressGatewayBridgeRequest>
    CreateBridgeRequest& WithEgressGatewayBridge(EgressGatewayBridgeT&& value) { SetEgressGatewayBridge(std::forward<EgressGatewayBridgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Create a bridge with the ingress bridge type. An ingress bridge is a
     * ground-to-cloud bridge. The content originates at your premises and is delivered
     * to the cloud.
     */
    inline const AddIngressGatewayBridgeRequest& GetIngressGatewayBridge() const { return m_ingressGatewayBridge; }
    inline bool IngressGatewayBridgeHasBeenSet() const { return m_ingressGatewayBridgeHasBeenSet; }
    template<typename IngressGatewayBridgeT = AddIngressGatewayBridgeRequest>
    void SetIngressGatewayBridge(IngressGatewayBridgeT&& value) { m_ingressGatewayBridgeHasBeenSet = true; m_ingressGatewayBridge = std::forward<IngressGatewayBridgeT>(value); }
    template<typename IngressGatewayBridgeT = AddIngressGatewayBridgeRequest>
    CreateBridgeRequest& WithIngressGatewayBridge(IngressGatewayBridgeT&& value) { SetIngressGatewayBridge(std::forward<IngressGatewayBridgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the bridge. This name can not be modified after the bridge is
     * created.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateBridgeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The outputs that you want to add to this bridge.
     */
    inline const Aws::Vector<AddBridgeOutputRequest>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<AddBridgeOutputRequest>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<AddBridgeOutputRequest>>
    CreateBridgeRequest& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = AddBridgeOutputRequest>
    CreateBridgeRequest& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The bridge placement Amazon Resource Number (ARN).
     */
    inline const Aws::String& GetPlacementArn() const { return m_placementArn; }
    inline bool PlacementArnHasBeenSet() const { return m_placementArnHasBeenSet; }
    template<typename PlacementArnT = Aws::String>
    void SetPlacementArn(PlacementArnT&& value) { m_placementArnHasBeenSet = true; m_placementArn = std::forward<PlacementArnT>(value); }
    template<typename PlacementArnT = Aws::String>
    CreateBridgeRequest& WithPlacementArn(PlacementArnT&& value) { SetPlacementArn(std::forward<PlacementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The settings for source failover.
     */
    inline const FailoverConfig& GetSourceFailoverConfig() const { return m_sourceFailoverConfig; }
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }
    template<typename SourceFailoverConfigT = FailoverConfig>
    void SetSourceFailoverConfig(SourceFailoverConfigT&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::forward<SourceFailoverConfigT>(value); }
    template<typename SourceFailoverConfigT = FailoverConfig>
    CreateBridgeRequest& WithSourceFailoverConfig(SourceFailoverConfigT&& value) { SetSourceFailoverConfig(std::forward<SourceFailoverConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The sources that you want to add to this bridge.
     */
    inline const Aws::Vector<AddBridgeSourceRequest>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<AddBridgeSourceRequest>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<AddBridgeSourceRequest>>
    CreateBridgeRequest& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = AddBridgeSourceRequest>
    CreateBridgeRequest& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}
  private:

    AddEgressGatewayBridgeRequest m_egressGatewayBridge;
    bool m_egressGatewayBridgeHasBeenSet = false;

    AddIngressGatewayBridgeRequest m_ingressGatewayBridge;
    bool m_ingressGatewayBridgeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AddBridgeOutputRequest> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_placementArn;
    bool m_placementArnHasBeenSet = false;

    FailoverConfig m_sourceFailoverConfig;
    bool m_sourceFailoverConfigHasBeenSet = false;

    Aws::Vector<AddBridgeSourceRequest> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
