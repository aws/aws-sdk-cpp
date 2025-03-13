/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class DisassociateTransitGatewayConnectPeerRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API DisassociateTransitGatewayConnectPeerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateTransitGatewayConnectPeer"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    template<typename GlobalNetworkIdT = Aws::String>
    void SetGlobalNetworkId(GlobalNetworkIdT&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::forward<GlobalNetworkIdT>(value); }
    template<typename GlobalNetworkIdT = Aws::String>
    DisassociateTransitGatewayConnectPeerRequest& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway Connect peer.</p>
     */
    inline const Aws::String& GetTransitGatewayConnectPeerArn() const { return m_transitGatewayConnectPeerArn; }
    inline bool TransitGatewayConnectPeerArnHasBeenSet() const { return m_transitGatewayConnectPeerArnHasBeenSet; }
    template<typename TransitGatewayConnectPeerArnT = Aws::String>
    void SetTransitGatewayConnectPeerArn(TransitGatewayConnectPeerArnT&& value) { m_transitGatewayConnectPeerArnHasBeenSet = true; m_transitGatewayConnectPeerArn = std::forward<TransitGatewayConnectPeerArnT>(value); }
    template<typename TransitGatewayConnectPeerArnT = Aws::String>
    DisassociateTransitGatewayConnectPeerRequest& WithTransitGatewayConnectPeerArn(TransitGatewayConnectPeerArnT&& value) { SetTransitGatewayConnectPeerArn(std::forward<TransitGatewayConnectPeerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_transitGatewayConnectPeerArn;
    bool m_transitGatewayConnectPeerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
