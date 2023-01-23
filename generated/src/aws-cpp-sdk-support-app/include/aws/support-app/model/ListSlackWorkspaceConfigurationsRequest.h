/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/SupportAppRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SupportApp
{
namespace Model
{

  /**
   */
  class ListSlackWorkspaceConfigurationsRequest : public SupportAppRequest
  {
  public:
    AWS_SUPPORTAPP_API ListSlackWorkspaceConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSlackWorkspaceConfigurations"; }

    AWS_SUPPORTAPP_API Aws::String SerializePayload() const override;


    /**
     * <p>If the results of a search are large, the API only returns a portion of the
     * results and includes a <code>nextToken</code> pagination token in the response.
     * To retrieve the next batch of results, reissue the search request and include
     * the returned token. When the API returns the last set of results, the response
     * doesn't include a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the results of a search are large, the API only returns a portion of the
     * results and includes a <code>nextToken</code> pagination token in the response.
     * To retrieve the next batch of results, reissue the search request and include
     * the returned token. When the API returns the last set of results, the response
     * doesn't include a pagination token value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the results of a search are large, the API only returns a portion of the
     * results and includes a <code>nextToken</code> pagination token in the response.
     * To retrieve the next batch of results, reissue the search request and include
     * the returned token. When the API returns the last set of results, the response
     * doesn't include a pagination token value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the results of a search are large, the API only returns a portion of the
     * results and includes a <code>nextToken</code> pagination token in the response.
     * To retrieve the next batch of results, reissue the search request and include
     * the returned token. When the API returns the last set of results, the response
     * doesn't include a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the results of a search are large, the API only returns a portion of the
     * results and includes a <code>nextToken</code> pagination token in the response.
     * To retrieve the next batch of results, reissue the search request and include
     * the returned token. When the API returns the last set of results, the response
     * doesn't include a pagination token value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the results of a search are large, the API only returns a portion of the
     * results and includes a <code>nextToken</code> pagination token in the response.
     * To retrieve the next batch of results, reissue the search request and include
     * the returned token. When the API returns the last set of results, the response
     * doesn't include a pagination token value.</p>
     */
    inline ListSlackWorkspaceConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, the API only returns a portion of the
     * results and includes a <code>nextToken</code> pagination token in the response.
     * To retrieve the next batch of results, reissue the search request and include
     * the returned token. When the API returns the last set of results, the response
     * doesn't include a pagination token value.</p>
     */
    inline ListSlackWorkspaceConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the results of a search are large, the API only returns a portion of the
     * results and includes a <code>nextToken</code> pagination token in the response.
     * To retrieve the next batch of results, reissue the search request and include
     * the returned token. When the API returns the last set of results, the response
     * doesn't include a pagination token value.</p>
     */
    inline ListSlackWorkspaceConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
