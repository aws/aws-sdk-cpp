/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class GetTransitGatewayConnectPeerAssociationsRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayConnectPeerAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTransitGatewayConnectPeerAssociations"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

    AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    template<typename GlobalNetworkIdT = Aws::String>
    void SetGlobalNetworkId(GlobalNetworkIdT&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::forward<GlobalNetworkIdT>(value); }
    template<typename GlobalNetworkIdT = Aws::String>
    GetTransitGatewayConnectPeerAssociationsRequest& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more transit gateway Connect peer Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayConnectPeerArns() const { return m_transitGatewayConnectPeerArns; }
    inline bool TransitGatewayConnectPeerArnsHasBeenSet() const { return m_transitGatewayConnectPeerArnsHasBeenSet; }
    template<typename TransitGatewayConnectPeerArnsT = Aws::Vector<Aws::String>>
    void SetTransitGatewayConnectPeerArns(TransitGatewayConnectPeerArnsT&& value) { m_transitGatewayConnectPeerArnsHasBeenSet = true; m_transitGatewayConnectPeerArns = std::forward<TransitGatewayConnectPeerArnsT>(value); }
    template<typename TransitGatewayConnectPeerArnsT = Aws::Vector<Aws::String>>
    GetTransitGatewayConnectPeerAssociationsRequest& WithTransitGatewayConnectPeerArns(TransitGatewayConnectPeerArnsT&& value) { SetTransitGatewayConnectPeerArns(std::forward<TransitGatewayConnectPeerArnsT>(value)); return *this;}
    template<typename TransitGatewayConnectPeerArnsT = Aws::String>
    GetTransitGatewayConnectPeerAssociationsRequest& AddTransitGatewayConnectPeerArns(TransitGatewayConnectPeerArnsT&& value) { m_transitGatewayConnectPeerArnsHasBeenSet = true; m_transitGatewayConnectPeerArns.emplace_back(std::forward<TransitGatewayConnectPeerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetTransitGatewayConnectPeerAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTransitGatewayConnectPeerAssociationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_transitGatewayConnectPeerArns;
    bool m_transitGatewayConnectPeerArnsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
