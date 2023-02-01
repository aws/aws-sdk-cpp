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
  class ListVodSourcesRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API ListVodSourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVodSources"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;

    AWS_MEDIATAILOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The maximum number of VOD sources that you want MediaTailor to return in
     * response to the current request. If there are more than <code>MaxResults</code>
     * VOD sources, use the value of <code>NextToken</code> in the response to get the
     * next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of VOD sources that you want MediaTailor to return in
     * response to the current request. If there are more than <code>MaxResults</code>
     * VOD sources, use the value of <code>NextToken</code> in the response to get the
     * next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of VOD sources that you want MediaTailor to return in
     * response to the current request. If there are more than <code>MaxResults</code>
     * VOD sources, use the value of <code>NextToken</code> in the response to get the
     * next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of VOD sources that you want MediaTailor to return in
     * response to the current request. If there are more than <code>MaxResults</code>
     * VOD sources, use the value of <code>NextToken</code> in the response to get the
     * next page of results.</p>
     */
    inline ListVodSourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListVodSourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListVodSourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListVodSourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the source location associated with this VOD Source list.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name of the source location associated with this VOD Source list.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The name of the source location associated with this VOD Source list.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The name of the source location associated with this VOD Source list.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The name of the source location associated with this VOD Source list.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The name of the source location associated with this VOD Source list.</p>
     */
    inline ListVodSourcesRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location associated with this VOD Source list.</p>
     */
    inline ListVodSourcesRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location associated with this VOD Source list.</p>
     */
    inline ListVodSourcesRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
