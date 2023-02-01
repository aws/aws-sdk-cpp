/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeGlobalNetworksRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API DescribeGlobalNetworksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGlobalNetworks"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

    AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The IDs of one or more global networks. The maximum is 10.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlobalNetworkIds() const{ return m_globalNetworkIds; }

    /**
     * <p>The IDs of one or more global networks. The maximum is 10.</p>
     */
    inline bool GlobalNetworkIdsHasBeenSet() const { return m_globalNetworkIdsHasBeenSet; }

    /**
     * <p>The IDs of one or more global networks. The maximum is 10.</p>
     */
    inline void SetGlobalNetworkIds(const Aws::Vector<Aws::String>& value) { m_globalNetworkIdsHasBeenSet = true; m_globalNetworkIds = value; }

    /**
     * <p>The IDs of one or more global networks. The maximum is 10.</p>
     */
    inline void SetGlobalNetworkIds(Aws::Vector<Aws::String>&& value) { m_globalNetworkIdsHasBeenSet = true; m_globalNetworkIds = std::move(value); }

    /**
     * <p>The IDs of one or more global networks. The maximum is 10.</p>
     */
    inline DescribeGlobalNetworksRequest& WithGlobalNetworkIds(const Aws::Vector<Aws::String>& value) { SetGlobalNetworkIds(value); return *this;}

    /**
     * <p>The IDs of one or more global networks. The maximum is 10.</p>
     */
    inline DescribeGlobalNetworksRequest& WithGlobalNetworkIds(Aws::Vector<Aws::String>&& value) { SetGlobalNetworkIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more global networks. The maximum is 10.</p>
     */
    inline DescribeGlobalNetworksRequest& AddGlobalNetworkIds(const Aws::String& value) { m_globalNetworkIdsHasBeenSet = true; m_globalNetworkIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more global networks. The maximum is 10.</p>
     */
    inline DescribeGlobalNetworksRequest& AddGlobalNetworkIds(Aws::String&& value) { m_globalNetworkIdsHasBeenSet = true; m_globalNetworkIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more global networks. The maximum is 10.</p>
     */
    inline DescribeGlobalNetworksRequest& AddGlobalNetworkIds(const char* value) { m_globalNetworkIdsHasBeenSet = true; m_globalNetworkIds.push_back(value); return *this; }


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
    inline DescribeGlobalNetworksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeGlobalNetworksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeGlobalNetworksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeGlobalNetworksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_globalNetworkIds;
    bool m_globalNetworkIdsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
