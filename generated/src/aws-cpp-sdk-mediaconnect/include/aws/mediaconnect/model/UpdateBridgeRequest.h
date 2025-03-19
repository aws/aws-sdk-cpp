/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateEgressGatewayBridgeRequest.h>
#include <aws/mediaconnect/model/UpdateIngressGatewayBridgeRequest.h>
#include <aws/mediaconnect/model/UpdateFailoverConfig.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class UpdateBridgeRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBridge"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> TheAmazon Resource Name (ARN) of the bridge that you want to update. </p>
     */
    inline const Aws::String& GetBridgeArn() const { return m_bridgeArn; }
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }
    template<typename BridgeArnT = Aws::String>
    void SetBridgeArn(BridgeArnT&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::forward<BridgeArnT>(value); }
    template<typename BridgeArnT = Aws::String>
    UpdateBridgeRequest& WithBridgeArn(BridgeArnT&& value) { SetBridgeArn(std::forward<BridgeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A cloud-to-ground bridge. The content comes from an existing MediaConnect
     * flow and is delivered to your premises. </p>
     */
    inline const UpdateEgressGatewayBridgeRequest& GetEgressGatewayBridge() const { return m_egressGatewayBridge; }
    inline bool EgressGatewayBridgeHasBeenSet() const { return m_egressGatewayBridgeHasBeenSet; }
    template<typename EgressGatewayBridgeT = UpdateEgressGatewayBridgeRequest>
    void SetEgressGatewayBridge(EgressGatewayBridgeT&& value) { m_egressGatewayBridgeHasBeenSet = true; m_egressGatewayBridge = std::forward<EgressGatewayBridgeT>(value); }
    template<typename EgressGatewayBridgeT = UpdateEgressGatewayBridgeRequest>
    UpdateBridgeRequest& WithEgressGatewayBridge(EgressGatewayBridgeT&& value) { SetEgressGatewayBridge(std::forward<EgressGatewayBridgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A ground-to-cloud bridge. The content originates at your premises and is
     * delivered to the cloud. </p>
     */
    inline const UpdateIngressGatewayBridgeRequest& GetIngressGatewayBridge() const { return m_ingressGatewayBridge; }
    inline bool IngressGatewayBridgeHasBeenSet() const { return m_ingressGatewayBridgeHasBeenSet; }
    template<typename IngressGatewayBridgeT = UpdateIngressGatewayBridgeRequest>
    void SetIngressGatewayBridge(IngressGatewayBridgeT&& value) { m_ingressGatewayBridgeHasBeenSet = true; m_ingressGatewayBridge = std::forward<IngressGatewayBridgeT>(value); }
    template<typename IngressGatewayBridgeT = UpdateIngressGatewayBridgeRequest>
    UpdateBridgeRequest& WithIngressGatewayBridge(IngressGatewayBridgeT&& value) { SetIngressGatewayBridge(std::forward<IngressGatewayBridgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings for source failover. </p>
     */
    inline const UpdateFailoverConfig& GetSourceFailoverConfig() const { return m_sourceFailoverConfig; }
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }
    template<typename SourceFailoverConfigT = UpdateFailoverConfig>
    void SetSourceFailoverConfig(SourceFailoverConfigT&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::forward<SourceFailoverConfigT>(value); }
    template<typename SourceFailoverConfigT = UpdateFailoverConfig>
    UpdateBridgeRequest& WithSourceFailoverConfig(SourceFailoverConfigT&& value) { SetSourceFailoverConfig(std::forward<SourceFailoverConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    UpdateEgressGatewayBridgeRequest m_egressGatewayBridge;
    bool m_egressGatewayBridgeHasBeenSet = false;

    UpdateIngressGatewayBridgeRequest m_ingressGatewayBridge;
    bool m_ingressGatewayBridgeHasBeenSet = false;

    UpdateFailoverConfig m_sourceFailoverConfig;
    bool m_sourceFailoverConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
