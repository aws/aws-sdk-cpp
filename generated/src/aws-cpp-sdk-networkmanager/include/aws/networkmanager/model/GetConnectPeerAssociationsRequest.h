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
  class GetConnectPeerAssociationsRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetConnectPeerAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnectPeerAssociations"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

    AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetConnectPeerAssociationsRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetConnectPeerAssociationsRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetConnectPeerAssociationsRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The IDs of the Connect peers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectPeerIds() const{ return m_connectPeerIds; }

    /**
     * <p>The IDs of the Connect peers.</p>
     */
    inline bool ConnectPeerIdsHasBeenSet() const { return m_connectPeerIdsHasBeenSet; }

    /**
     * <p>The IDs of the Connect peers.</p>
     */
    inline void SetConnectPeerIds(const Aws::Vector<Aws::String>& value) { m_connectPeerIdsHasBeenSet = true; m_connectPeerIds = value; }

    /**
     * <p>The IDs of the Connect peers.</p>
     */
    inline void SetConnectPeerIds(Aws::Vector<Aws::String>&& value) { m_connectPeerIdsHasBeenSet = true; m_connectPeerIds = std::move(value); }

    /**
     * <p>The IDs of the Connect peers.</p>
     */
    inline GetConnectPeerAssociationsRequest& WithConnectPeerIds(const Aws::Vector<Aws::String>& value) { SetConnectPeerIds(value); return *this;}

    /**
     * <p>The IDs of the Connect peers.</p>
     */
    inline GetConnectPeerAssociationsRequest& WithConnectPeerIds(Aws::Vector<Aws::String>&& value) { SetConnectPeerIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Connect peers.</p>
     */
    inline GetConnectPeerAssociationsRequest& AddConnectPeerIds(const Aws::String& value) { m_connectPeerIdsHasBeenSet = true; m_connectPeerIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Connect peers.</p>
     */
    inline GetConnectPeerAssociationsRequest& AddConnectPeerIds(Aws::String&& value) { m_connectPeerIdsHasBeenSet = true; m_connectPeerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Connect peers.</p>
     */
    inline GetConnectPeerAssociationsRequest& AddConnectPeerIds(const char* value) { m_connectPeerIdsHasBeenSet = true; m_connectPeerIds.push_back(value); return *this; }


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
    inline GetConnectPeerAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline GetConnectPeerAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetConnectPeerAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetConnectPeerAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectPeerIds;
    bool m_connectPeerIdsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
