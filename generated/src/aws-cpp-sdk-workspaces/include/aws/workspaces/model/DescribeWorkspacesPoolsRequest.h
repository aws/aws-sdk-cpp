/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/DescribeWorkspacesPoolsFilter.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeWorkspacesPoolsRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspacesPoolsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspacesPools"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the WorkSpaces Pools.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPoolIds() const{ return m_poolIds; }
    inline bool PoolIdsHasBeenSet() const { return m_poolIdsHasBeenSet; }
    inline void SetPoolIds(const Aws::Vector<Aws::String>& value) { m_poolIdsHasBeenSet = true; m_poolIds = value; }
    inline void SetPoolIds(Aws::Vector<Aws::String>&& value) { m_poolIdsHasBeenSet = true; m_poolIds = std::move(value); }
    inline DescribeWorkspacesPoolsRequest& WithPoolIds(const Aws::Vector<Aws::String>& value) { SetPoolIds(value); return *this;}
    inline DescribeWorkspacesPoolsRequest& WithPoolIds(Aws::Vector<Aws::String>&& value) { SetPoolIds(std::move(value)); return *this;}
    inline DescribeWorkspacesPoolsRequest& AddPoolIds(const Aws::String& value) { m_poolIdsHasBeenSet = true; m_poolIds.push_back(value); return *this; }
    inline DescribeWorkspacesPoolsRequest& AddPoolIds(Aws::String&& value) { m_poolIdsHasBeenSet = true; m_poolIds.push_back(std::move(value)); return *this; }
    inline DescribeWorkspacesPoolsRequest& AddPoolIds(const char* value) { m_poolIdsHasBeenSet = true; m_poolIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filter conditions for the WorkSpaces Pool to return.</p>
     */
    inline const Aws::Vector<DescribeWorkspacesPoolsFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<DescribeWorkspacesPoolsFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<DescribeWorkspacesPoolsFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeWorkspacesPoolsRequest& WithFilters(const Aws::Vector<DescribeWorkspacesPoolsFilter>& value) { SetFilters(value); return *this;}
    inline DescribeWorkspacesPoolsRequest& WithFilters(Aws::Vector<DescribeWorkspacesPoolsFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeWorkspacesPoolsRequest& AddFilters(const DescribeWorkspacesPoolsFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeWorkspacesPoolsRequest& AddFilters(DescribeWorkspacesPoolsFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeWorkspacesPoolsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeWorkspacesPoolsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeWorkspacesPoolsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeWorkspacesPoolsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_poolIds;
    bool m_poolIdsHasBeenSet = false;

    Aws::Vector<DescribeWorkspacesPoolsFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
