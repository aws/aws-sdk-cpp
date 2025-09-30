/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class ListSourceLocationsRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API ListSourceLocationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSourceLocations"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;

    AWS_MEDIATAILOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The maximum number of source locations that you want MediaTailor to return
     * in response to the current request. If there are more than
     * <code>MaxResults</code> source locations, use the value of
     * <code>NextToken</code> in the response to get the next page of results.</p>
     * <p>The default value is 100. MediaTailor uses DynamoDB-based pagination, which
     * means that a response might contain fewer than <code>MaxResults</code> items,
     * including 0 items, even when more results are available. To retrieve all
     * results, you must continue making requests using the <code>NextToken</code>
     * value from each response until the response no longer includes a
     * <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSourceLocationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p> <p>For the first
     * <code>ListSourceLocations</code> request, omit this value. For subsequent
     * requests, get the value of <code>NextToken</code> from the previous response and
     * specify that value for <code>NextToken</code> in the request. Continue making
     * requests until the response no longer includes a <code>NextToken</code> value,
     * which indicates that all results have been retrieved.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSourceLocationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
