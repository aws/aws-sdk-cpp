/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/PeeringType.h>
#include <aws/networkmanager/model/PeeringState.h>
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
  class ListPeeringsRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API ListPeeringsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPeerings"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

    AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline ListPeeringsRequest& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline ListPeeringsRequest& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline ListPeeringsRequest& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>Returns a list of a peering requests.</p>
     */
    inline const PeeringType& GetPeeringType() const{ return m_peeringType; }

    /**
     * <p>Returns a list of a peering requests.</p>
     */
    inline bool PeeringTypeHasBeenSet() const { return m_peeringTypeHasBeenSet; }

    /**
     * <p>Returns a list of a peering requests.</p>
     */
    inline void SetPeeringType(const PeeringType& value) { m_peeringTypeHasBeenSet = true; m_peeringType = value; }

    /**
     * <p>Returns a list of a peering requests.</p>
     */
    inline void SetPeeringType(PeeringType&& value) { m_peeringTypeHasBeenSet = true; m_peeringType = std::move(value); }

    /**
     * <p>Returns a list of a peering requests.</p>
     */
    inline ListPeeringsRequest& WithPeeringType(const PeeringType& value) { SetPeeringType(value); return *this;}

    /**
     * <p>Returns a list of a peering requests.</p>
     */
    inline ListPeeringsRequest& WithPeeringType(PeeringType&& value) { SetPeeringType(std::move(value)); return *this;}


    /**
     * <p>Returns a list edge locations for the </p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }

    /**
     * <p>Returns a list edge locations for the </p>
     */
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }

    /**
     * <p>Returns a list edge locations for the </p>
     */
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }

    /**
     * <p>Returns a list edge locations for the </p>
     */
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }

    /**
     * <p>Returns a list edge locations for the </p>
     */
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }

    /**
     * <p>Returns a list edge locations for the </p>
     */
    inline ListPeeringsRequest& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}

    /**
     * <p>Returns a list edge locations for the </p>
     */
    inline ListPeeringsRequest& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}

    /**
     * <p>Returns a list edge locations for the </p>
     */
    inline ListPeeringsRequest& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}


    /**
     * <p>Returns a list of the peering request states.</p>
     */
    inline const PeeringState& GetState() const{ return m_state; }

    /**
     * <p>Returns a list of the peering request states.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Returns a list of the peering request states.</p>
     */
    inline void SetState(const PeeringState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Returns a list of the peering request states.</p>
     */
    inline void SetState(PeeringState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Returns a list of the peering request states.</p>
     */
    inline ListPeeringsRequest& WithState(const PeeringState& value) { SetState(value); return *this;}

    /**
     * <p>Returns a list of the peering request states.</p>
     */
    inline ListPeeringsRequest& WithState(PeeringState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline ListPeeringsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListPeeringsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListPeeringsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListPeeringsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    PeeringType m_peeringType;
    bool m_peeringTypeHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    PeeringState m_state;
    bool m_stateHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
