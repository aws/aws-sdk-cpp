/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/mediastore-data/MediaStoreDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaStoreData
{
namespace Model
{

  /**
   */
  class ListItemsRequest : public MediaStoreDataRequest
  {
  public:
    AWS_MEDIASTOREDATA_API ListItemsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListItems"; }

    AWS_MEDIASTOREDATA_API Aws::String SerializePayload() const override;

    AWS_MEDIASTOREDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The path in the container from which to retrieve items. Format: &lt;folder
     * name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    ListItemsRequest& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per API request. For example, you
     * submit a <code>ListItems</code> request with <code>MaxResults</code> set at 500.
     * Although 2,000 items match your request, the service returns no more than the
     * first 500 items. (The service also returns a <code>NextToken</code> value that
     * you can use to fetch the next batch of results.) The service might return fewer
     * results than the <code>MaxResults</code> value.</p> <p>If
     * <code>MaxResults</code> is not included in the request, the service defaults to
     * pagination with a maximum of 1,000 results per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that identifies which batch of results that you want to see. For
     * example, you submit a <code>ListItems</code> request with
     * <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value. To see the next batch of
     * results, you can submit the <code>ListItems</code> request a second time and
     * specify the <code>NextToken</code> value.</p> <p>Tokens expire after 15
     * minutes.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListItemsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
