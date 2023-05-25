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
    AWS_MEDIACONNECT_API CreateBridgeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBridge"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * Create a bridge with the egress bridge type. An egress bridge is a
     * cloud-to-ground bridge. The content comes from an existing MediaConnect flow and
     * is delivered to your premises.
     */
    inline const AddEgressGatewayBridgeRequest& GetEgressGatewayBridge() const{ return m_egressGatewayBridge; }

    /**
     * Create a bridge with the egress bridge type. An egress bridge is a
     * cloud-to-ground bridge. The content comes from an existing MediaConnect flow and
     * is delivered to your premises.
     */
    inline bool EgressGatewayBridgeHasBeenSet() const { return m_egressGatewayBridgeHasBeenSet; }

    /**
     * Create a bridge with the egress bridge type. An egress bridge is a
     * cloud-to-ground bridge. The content comes from an existing MediaConnect flow and
     * is delivered to your premises.
     */
    inline void SetEgressGatewayBridge(const AddEgressGatewayBridgeRequest& value) { m_egressGatewayBridgeHasBeenSet = true; m_egressGatewayBridge = value; }

    /**
     * Create a bridge with the egress bridge type. An egress bridge is a
     * cloud-to-ground bridge. The content comes from an existing MediaConnect flow and
     * is delivered to your premises.
     */
    inline void SetEgressGatewayBridge(AddEgressGatewayBridgeRequest&& value) { m_egressGatewayBridgeHasBeenSet = true; m_egressGatewayBridge = std::move(value); }

    /**
     * Create a bridge with the egress bridge type. An egress bridge is a
     * cloud-to-ground bridge. The content comes from an existing MediaConnect flow and
     * is delivered to your premises.
     */
    inline CreateBridgeRequest& WithEgressGatewayBridge(const AddEgressGatewayBridgeRequest& value) { SetEgressGatewayBridge(value); return *this;}

    /**
     * Create a bridge with the egress bridge type. An egress bridge is a
     * cloud-to-ground bridge. The content comes from an existing MediaConnect flow and
     * is delivered to your premises.
     */
    inline CreateBridgeRequest& WithEgressGatewayBridge(AddEgressGatewayBridgeRequest&& value) { SetEgressGatewayBridge(std::move(value)); return *this;}


    /**
     * Create a bridge with the ingress bridge type. An ingress bridge is a
     * ground-to-cloud bridge. The content originates at your premises and is delivered
     * to the cloud.
     */
    inline const AddIngressGatewayBridgeRequest& GetIngressGatewayBridge() const{ return m_ingressGatewayBridge; }

    /**
     * Create a bridge with the ingress bridge type. An ingress bridge is a
     * ground-to-cloud bridge. The content originates at your premises and is delivered
     * to the cloud.
     */
    inline bool IngressGatewayBridgeHasBeenSet() const { return m_ingressGatewayBridgeHasBeenSet; }

    /**
     * Create a bridge with the ingress bridge type. An ingress bridge is a
     * ground-to-cloud bridge. The content originates at your premises and is delivered
     * to the cloud.
     */
    inline void SetIngressGatewayBridge(const AddIngressGatewayBridgeRequest& value) { m_ingressGatewayBridgeHasBeenSet = true; m_ingressGatewayBridge = value; }

    /**
     * Create a bridge with the ingress bridge type. An ingress bridge is a
     * ground-to-cloud bridge. The content originates at your premises and is delivered
     * to the cloud.
     */
    inline void SetIngressGatewayBridge(AddIngressGatewayBridgeRequest&& value) { m_ingressGatewayBridgeHasBeenSet = true; m_ingressGatewayBridge = std::move(value); }

    /**
     * Create a bridge with the ingress bridge type. An ingress bridge is a
     * ground-to-cloud bridge. The content originates at your premises and is delivered
     * to the cloud.
     */
    inline CreateBridgeRequest& WithIngressGatewayBridge(const AddIngressGatewayBridgeRequest& value) { SetIngressGatewayBridge(value); return *this;}

    /**
     * Create a bridge with the ingress bridge type. An ingress bridge is a
     * ground-to-cloud bridge. The content originates at your premises and is delivered
     * to the cloud.
     */
    inline CreateBridgeRequest& WithIngressGatewayBridge(AddIngressGatewayBridgeRequest&& value) { SetIngressGatewayBridge(std::move(value)); return *this;}


    /**
     * The name of the bridge. This name can not be modified after the bridge is
     * created.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the bridge. This name can not be modified after the bridge is
     * created.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the bridge. This name can not be modified after the bridge is
     * created.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the bridge. This name can not be modified after the bridge is
     * created.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the bridge. This name can not be modified after the bridge is
     * created.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the bridge. This name can not be modified after the bridge is
     * created.
     */
    inline CreateBridgeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the bridge. This name can not be modified after the bridge is
     * created.
     */
    inline CreateBridgeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the bridge. This name can not be modified after the bridge is
     * created.
     */
    inline CreateBridgeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The outputs that you want to add to this bridge.
     */
    inline const Aws::Vector<AddBridgeOutputRequest>& GetOutputs() const{ return m_outputs; }

    /**
     * The outputs that you want to add to this bridge.
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * The outputs that you want to add to this bridge.
     */
    inline void SetOutputs(const Aws::Vector<AddBridgeOutputRequest>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * The outputs that you want to add to this bridge.
     */
    inline void SetOutputs(Aws::Vector<AddBridgeOutputRequest>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * The outputs that you want to add to this bridge.
     */
    inline CreateBridgeRequest& WithOutputs(const Aws::Vector<AddBridgeOutputRequest>& value) { SetOutputs(value); return *this;}

    /**
     * The outputs that you want to add to this bridge.
     */
    inline CreateBridgeRequest& WithOutputs(Aws::Vector<AddBridgeOutputRequest>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * The outputs that you want to add to this bridge.
     */
    inline CreateBridgeRequest& AddOutputs(const AddBridgeOutputRequest& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * The outputs that you want to add to this bridge.
     */
    inline CreateBridgeRequest& AddOutputs(AddBridgeOutputRequest&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * The bridge placement Amazon Resource Number (ARN).
     */
    inline const Aws::String& GetPlacementArn() const{ return m_placementArn; }

    /**
     * The bridge placement Amazon Resource Number (ARN).
     */
    inline bool PlacementArnHasBeenSet() const { return m_placementArnHasBeenSet; }

    /**
     * The bridge placement Amazon Resource Number (ARN).
     */
    inline void SetPlacementArn(const Aws::String& value) { m_placementArnHasBeenSet = true; m_placementArn = value; }

    /**
     * The bridge placement Amazon Resource Number (ARN).
     */
    inline void SetPlacementArn(Aws::String&& value) { m_placementArnHasBeenSet = true; m_placementArn = std::move(value); }

    /**
     * The bridge placement Amazon Resource Number (ARN).
     */
    inline void SetPlacementArn(const char* value) { m_placementArnHasBeenSet = true; m_placementArn.assign(value); }

    /**
     * The bridge placement Amazon Resource Number (ARN).
     */
    inline CreateBridgeRequest& WithPlacementArn(const Aws::String& value) { SetPlacementArn(value); return *this;}

    /**
     * The bridge placement Amazon Resource Number (ARN).
     */
    inline CreateBridgeRequest& WithPlacementArn(Aws::String&& value) { SetPlacementArn(std::move(value)); return *this;}

    /**
     * The bridge placement Amazon Resource Number (ARN).
     */
    inline CreateBridgeRequest& WithPlacementArn(const char* value) { SetPlacementArn(value); return *this;}


    /**
     * The settings for source failover.
     */
    inline const FailoverConfig& GetSourceFailoverConfig() const{ return m_sourceFailoverConfig; }

    /**
     * The settings for source failover.
     */
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }

    /**
     * The settings for source failover.
     */
    inline void SetSourceFailoverConfig(const FailoverConfig& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = value; }

    /**
     * The settings for source failover.
     */
    inline void SetSourceFailoverConfig(FailoverConfig&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::move(value); }

    /**
     * The settings for source failover.
     */
    inline CreateBridgeRequest& WithSourceFailoverConfig(const FailoverConfig& value) { SetSourceFailoverConfig(value); return *this;}

    /**
     * The settings for source failover.
     */
    inline CreateBridgeRequest& WithSourceFailoverConfig(FailoverConfig&& value) { SetSourceFailoverConfig(std::move(value)); return *this;}


    /**
     * The sources that you want to add to this bridge.
     */
    inline const Aws::Vector<AddBridgeSourceRequest>& GetSources() const{ return m_sources; }

    /**
     * The sources that you want to add to this bridge.
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * The sources that you want to add to this bridge.
     */
    inline void SetSources(const Aws::Vector<AddBridgeSourceRequest>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * The sources that you want to add to this bridge.
     */
    inline void SetSources(Aws::Vector<AddBridgeSourceRequest>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * The sources that you want to add to this bridge.
     */
    inline CreateBridgeRequest& WithSources(const Aws::Vector<AddBridgeSourceRequest>& value) { SetSources(value); return *this;}

    /**
     * The sources that you want to add to this bridge.
     */
    inline CreateBridgeRequest& WithSources(Aws::Vector<AddBridgeSourceRequest>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * The sources that you want to add to this bridge.
     */
    inline CreateBridgeRequest& AddSources(const AddBridgeSourceRequest& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * The sources that you want to add to this bridge.
     */
    inline CreateBridgeRequest& AddSources(AddBridgeSourceRequest&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

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
