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
    AWS_NETWORKMANAGER_API DescribeGlobalNetworksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGlobalNetworks"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

    AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The IDs of one or more global networks. The maximum is 10.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlobalNetworkIds() const { return m_globalNetworkIds; }
    inline bool GlobalNetworkIdsHasBeenSet() const { return m_globalNetworkIdsHasBeenSet; }
    template<typename GlobalNetworkIdsT = Aws::Vector<Aws::String>>
    void SetGlobalNetworkIds(GlobalNetworkIdsT&& value) { m_globalNetworkIdsHasBeenSet = true; m_globalNetworkIds = std::forward<GlobalNetworkIdsT>(value); }
    template<typename GlobalNetworkIdsT = Aws::Vector<Aws::String>>
    DescribeGlobalNetworksRequest& WithGlobalNetworkIds(GlobalNetworkIdsT&& value) { SetGlobalNetworkIds(std::forward<GlobalNetworkIdsT>(value)); return *this;}
    template<typename GlobalNetworkIdsT = Aws::String>
    DescribeGlobalNetworksRequest& AddGlobalNetworkIds(GlobalNetworkIdsT&& value) { m_globalNetworkIdsHasBeenSet = true; m_globalNetworkIds.emplace_back(std::forward<GlobalNetworkIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeGlobalNetworksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeGlobalNetworksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_globalNetworkIds;
    bool m_globalNetworkIdsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
