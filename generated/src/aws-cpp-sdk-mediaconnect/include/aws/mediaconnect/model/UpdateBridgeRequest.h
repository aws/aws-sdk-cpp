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
   * A request to update the bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBridgeRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBridge"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Number (ARN) of the bridge that you want to update.
     */
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }

    /**
     * The Amazon Resource Number (ARN) of the bridge that you want to update.
     */
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }

    /**
     * The Amazon Resource Number (ARN) of the bridge that you want to update.
     */
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = value; }

    /**
     * The Amazon Resource Number (ARN) of the bridge that you want to update.
     */
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::move(value); }

    /**
     * The Amazon Resource Number (ARN) of the bridge that you want to update.
     */
    inline void SetBridgeArn(const char* value) { m_bridgeArnHasBeenSet = true; m_bridgeArn.assign(value); }

    /**
     * The Amazon Resource Number (ARN) of the bridge that you want to update.
     */
    inline UpdateBridgeRequest& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge that you want to update.
     */
    inline UpdateBridgeRequest& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge that you want to update.
     */
    inline UpdateBridgeRequest& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    
    inline const UpdateEgressGatewayBridgeRequest& GetEgressGatewayBridge() const{ return m_egressGatewayBridge; }

    
    inline bool EgressGatewayBridgeHasBeenSet() const { return m_egressGatewayBridgeHasBeenSet; }

    
    inline void SetEgressGatewayBridge(const UpdateEgressGatewayBridgeRequest& value) { m_egressGatewayBridgeHasBeenSet = true; m_egressGatewayBridge = value; }

    
    inline void SetEgressGatewayBridge(UpdateEgressGatewayBridgeRequest&& value) { m_egressGatewayBridgeHasBeenSet = true; m_egressGatewayBridge = std::move(value); }

    
    inline UpdateBridgeRequest& WithEgressGatewayBridge(const UpdateEgressGatewayBridgeRequest& value) { SetEgressGatewayBridge(value); return *this;}

    
    inline UpdateBridgeRequest& WithEgressGatewayBridge(UpdateEgressGatewayBridgeRequest&& value) { SetEgressGatewayBridge(std::move(value)); return *this;}


    
    inline const UpdateIngressGatewayBridgeRequest& GetIngressGatewayBridge() const{ return m_ingressGatewayBridge; }

    
    inline bool IngressGatewayBridgeHasBeenSet() const { return m_ingressGatewayBridgeHasBeenSet; }

    
    inline void SetIngressGatewayBridge(const UpdateIngressGatewayBridgeRequest& value) { m_ingressGatewayBridgeHasBeenSet = true; m_ingressGatewayBridge = value; }

    
    inline void SetIngressGatewayBridge(UpdateIngressGatewayBridgeRequest&& value) { m_ingressGatewayBridgeHasBeenSet = true; m_ingressGatewayBridge = std::move(value); }

    
    inline UpdateBridgeRequest& WithIngressGatewayBridge(const UpdateIngressGatewayBridgeRequest& value) { SetIngressGatewayBridge(value); return *this;}

    
    inline UpdateBridgeRequest& WithIngressGatewayBridge(UpdateIngressGatewayBridgeRequest&& value) { SetIngressGatewayBridge(std::move(value)); return *this;}


    
    inline const UpdateFailoverConfig& GetSourceFailoverConfig() const{ return m_sourceFailoverConfig; }

    
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }

    
    inline void SetSourceFailoverConfig(const UpdateFailoverConfig& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = value; }

    
    inline void SetSourceFailoverConfig(UpdateFailoverConfig&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::move(value); }

    
    inline UpdateBridgeRequest& WithSourceFailoverConfig(const UpdateFailoverConfig& value) { SetSourceFailoverConfig(value); return *this;}

    
    inline UpdateBridgeRequest& WithSourceFailoverConfig(UpdateFailoverConfig&& value) { SetSourceFailoverConfig(std::move(value)); return *this;}

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
