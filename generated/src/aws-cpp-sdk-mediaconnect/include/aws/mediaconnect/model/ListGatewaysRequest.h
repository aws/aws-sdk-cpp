/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class ListGatewaysRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API ListGatewaysRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGateways"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

    AWS_MEDIACONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The maximum number of results to return per API request. </p> <p>For
     * example, you submit a <code>ListGateways</code> request with
     * <code>MaxResults</code> set at 5. Although 20 items match your request, the
     * service returns no more than the first 5 items. (The service also returns a
     * <code>NextToken</code> value that you can use to fetch the next batch of
     * results.) </p> <p>The service might return fewer results than the
     * <code>MaxResults</code> value. If <code>MaxResults</code> is not included in the
     * request, the service defaults to pagination with a maximum of 10 results per
     * page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListGatewaysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token that identifies the batch of results that you want to see. </p>
     * <p>For example, you submit a <code>ListGateways</code> request with
     * <code>MaxResults</code> set at 5. The service returns the first batch of results
     * (up to 5) and a <code>NextToken</code> value. To see the next batch of results,
     * you can submit the <code>ListGateways</code> request a second time and specify
     * the <code>NextToken</code> value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGatewaysRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
