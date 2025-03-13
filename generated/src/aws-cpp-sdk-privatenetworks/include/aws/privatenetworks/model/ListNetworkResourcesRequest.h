/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/NetworkResourceFilterKeys.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class ListNetworkResourcesRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API ListNetworkResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNetworkResources"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>ORDER</code> - The Amazon Resource Name
     * (ARN) of the order.</p> </li> <li> <p> <code>STATUS</code> - The status
     * (<code>AVAILABLE</code> | <code>DELETED</code> | <code>DELETING</code> |
     * <code>PENDING</code> | <code>PENDING_RETURN</code> | <code>PROVISIONING</code> |
     * <code>SHIPPED</code>).</p> </li> </ul> <p>Filter values are case sensitive. If
     * you specify multiple values for a filter, the values are joined with an
     * <code>OR</code>, and the request returns all results that match any of the
     * specified values.</p>
     */
    inline const Aws::Map<NetworkResourceFilterKeys, Aws::Vector<Aws::String>>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Map<NetworkResourceFilterKeys, Aws::Vector<Aws::String>>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Map<NetworkResourceFilterKeys, Aws::Vector<Aws::String>>>
    ListNetworkResourcesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    inline ListNetworkResourcesRequest& AddFilters(NetworkResourceFilterKeys key, Aws::Vector<Aws::String> value) {
      m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListNetworkResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline const Aws::String& GetNetworkArn() const { return m_networkArn; }
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }
    template<typename NetworkArnT = Aws::String>
    void SetNetworkArn(NetworkArnT&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::forward<NetworkArnT>(value); }
    template<typename NetworkArnT = Aws::String>
    ListNetworkResourcesRequest& WithNetworkArn(NetworkArnT&& value) { SetNetworkArn(std::forward<NetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetStartToken() const { return m_startToken; }
    inline bool StartTokenHasBeenSet() const { return m_startTokenHasBeenSet; }
    template<typename StartTokenT = Aws::String>
    void SetStartToken(StartTokenT&& value) { m_startTokenHasBeenSet = true; m_startToken = std::forward<StartTokenT>(value); }
    template<typename StartTokenT = Aws::String>
    ListNetworkResourcesRequest& WithStartToken(StartTokenT&& value) { SetStartToken(std::forward<StartTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<NetworkResourceFilterKeys, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;

    Aws::String m_startToken;
    bool m_startTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
