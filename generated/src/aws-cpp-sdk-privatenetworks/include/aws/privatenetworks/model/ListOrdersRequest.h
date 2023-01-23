/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/OrderFilterKeys.h>
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
  class ListOrdersRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API ListOrdersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOrders"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The filters.</p> <ul> <li> <p> <code>NETWORK_SITE</code> - The Amazon
     * Resource Name (ARN) of the network site.</p> </li> <li> <p> <code>STATUS</code>
     * - The status (<code>ACKNOWLEDGING</code> | <code>ACKNOWLEDGED</code> |
     * <code>UNACKNOWLEDGED</code>).</p> </li> </ul> <p>Filter values are case
     * sensitive. If you specify multiple values for a filter, the values are joined
     * with an <code>OR</code>, and the request returns all results that match any of
     * the specified values.</p>
     */
    inline const Aws::Map<OrderFilterKeys, Aws::Vector<Aws::String>>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>NETWORK_SITE</code> - The Amazon
     * Resource Name (ARN) of the network site.</p> </li> <li> <p> <code>STATUS</code>
     * - The status (<code>ACKNOWLEDGING</code> | <code>ACKNOWLEDGED</code> |
     * <code>UNACKNOWLEDGED</code>).</p> </li> </ul> <p>Filter values are case
     * sensitive. If you specify multiple values for a filter, the values are joined
     * with an <code>OR</code>, and the request returns all results that match any of
     * the specified values.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>NETWORK_SITE</code> - The Amazon
     * Resource Name (ARN) of the network site.</p> </li> <li> <p> <code>STATUS</code>
     * - The status (<code>ACKNOWLEDGING</code> | <code>ACKNOWLEDGED</code> |
     * <code>UNACKNOWLEDGED</code>).</p> </li> </ul> <p>Filter values are case
     * sensitive. If you specify multiple values for a filter, the values are joined
     * with an <code>OR</code>, and the request returns all results that match any of
     * the specified values.</p>
     */
    inline void SetFilters(const Aws::Map<OrderFilterKeys, Aws::Vector<Aws::String>>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>NETWORK_SITE</code> - The Amazon
     * Resource Name (ARN) of the network site.</p> </li> <li> <p> <code>STATUS</code>
     * - The status (<code>ACKNOWLEDGING</code> | <code>ACKNOWLEDGED</code> |
     * <code>UNACKNOWLEDGED</code>).</p> </li> </ul> <p>Filter values are case
     * sensitive. If you specify multiple values for a filter, the values are joined
     * with an <code>OR</code>, and the request returns all results that match any of
     * the specified values.</p>
     */
    inline void SetFilters(Aws::Map<OrderFilterKeys, Aws::Vector<Aws::String>>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>NETWORK_SITE</code> - The Amazon
     * Resource Name (ARN) of the network site.</p> </li> <li> <p> <code>STATUS</code>
     * - The status (<code>ACKNOWLEDGING</code> | <code>ACKNOWLEDGED</code> |
     * <code>UNACKNOWLEDGED</code>).</p> </li> </ul> <p>Filter values are case
     * sensitive. If you specify multiple values for a filter, the values are joined
     * with an <code>OR</code>, and the request returns all results that match any of
     * the specified values.</p>
     */
    inline ListOrdersRequest& WithFilters(const Aws::Map<OrderFilterKeys, Aws::Vector<Aws::String>>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>NETWORK_SITE</code> - The Amazon
     * Resource Name (ARN) of the network site.</p> </li> <li> <p> <code>STATUS</code>
     * - The status (<code>ACKNOWLEDGING</code> | <code>ACKNOWLEDGED</code> |
     * <code>UNACKNOWLEDGED</code>).</p> </li> </ul> <p>Filter values are case
     * sensitive. If you specify multiple values for a filter, the values are joined
     * with an <code>OR</code>, and the request returns all results that match any of
     * the specified values.</p>
     */
    inline ListOrdersRequest& WithFilters(Aws::Map<OrderFilterKeys, Aws::Vector<Aws::String>>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>NETWORK_SITE</code> - The Amazon
     * Resource Name (ARN) of the network site.</p> </li> <li> <p> <code>STATUS</code>
     * - The status (<code>ACKNOWLEDGING</code> | <code>ACKNOWLEDGED</code> |
     * <code>UNACKNOWLEDGED</code>).</p> </li> </ul> <p>Filter values are case
     * sensitive. If you specify multiple values for a filter, the values are joined
     * with an <code>OR</code>, and the request returns all results that match any of
     * the specified values.</p>
     */
    inline ListOrdersRequest& AddFilters(const OrderFilterKeys& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>NETWORK_SITE</code> - The Amazon
     * Resource Name (ARN) of the network site.</p> </li> <li> <p> <code>STATUS</code>
     * - The status (<code>ACKNOWLEDGING</code> | <code>ACKNOWLEDGED</code> |
     * <code>UNACKNOWLEDGED</code>).</p> </li> </ul> <p>Filter values are case
     * sensitive. If you specify multiple values for a filter, the values are joined
     * with an <code>OR</code>, and the request returns all results that match any of
     * the specified values.</p>
     */
    inline ListOrdersRequest& AddFilters(OrderFilterKeys&& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>NETWORK_SITE</code> - The Amazon
     * Resource Name (ARN) of the network site.</p> </li> <li> <p> <code>STATUS</code>
     * - The status (<code>ACKNOWLEDGING</code> | <code>ACKNOWLEDGED</code> |
     * <code>UNACKNOWLEDGED</code>).</p> </li> </ul> <p>Filter values are case
     * sensitive. If you specify multiple values for a filter, the values are joined
     * with an <code>OR</code>, and the request returns all results that match any of
     * the specified values.</p>
     */
    inline ListOrdersRequest& AddFilters(const OrderFilterKeys& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>NETWORK_SITE</code> - The Amazon
     * Resource Name (ARN) of the network site.</p> </li> <li> <p> <code>STATUS</code>
     * - The status (<code>ACKNOWLEDGING</code> | <code>ACKNOWLEDGED</code> |
     * <code>UNACKNOWLEDGED</code>).</p> </li> </ul> <p>Filter values are case
     * sensitive. If you specify multiple values for a filter, the values are joined
     * with an <code>OR</code>, and the request returns all results that match any of
     * the specified values.</p>
     */
    inline ListOrdersRequest& AddFilters(OrderFilterKeys&& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), std::move(value)); return *this; }


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
    inline ListOrdersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline const Aws::String& GetNetworkArn() const{ return m_networkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline void SetNetworkArn(const Aws::String& value) { m_networkArnHasBeenSet = true; m_networkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline void SetNetworkArn(Aws::String&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline void SetNetworkArn(const char* value) { m_networkArnHasBeenSet = true; m_networkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline ListOrdersRequest& WithNetworkArn(const Aws::String& value) { SetNetworkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline ListOrdersRequest& WithNetworkArn(Aws::String&& value) { SetNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline ListOrdersRequest& WithNetworkArn(const char* value) { SetNetworkArn(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetStartToken() const{ return m_startToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool StartTokenHasBeenSet() const { return m_startTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetStartToken(const Aws::String& value) { m_startTokenHasBeenSet = true; m_startToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetStartToken(Aws::String&& value) { m_startTokenHasBeenSet = true; m_startToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetStartToken(const char* value) { m_startTokenHasBeenSet = true; m_startToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListOrdersRequest& WithStartToken(const Aws::String& value) { SetStartToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListOrdersRequest& WithStartToken(Aws::String&& value) { SetStartToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListOrdersRequest& WithStartToken(const char* value) { SetStartToken(value); return *this;}

  private:

    Aws::Map<OrderFilterKeys, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;

    Aws::String m_startToken;
    bool m_startTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
