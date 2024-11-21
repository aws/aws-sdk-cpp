/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/NodeFilter.h>
#include <aws/ssm/model/NodeAggregator.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class ListNodesSummaryRequest : public SSMRequest
  {
  public:
    AWS_SSM_API ListNodesSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNodesSummary"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the resource data sync to retrieve information about. Required
     * for cross-account/cross-Region configuration. Optional for single
     * account/single-Region configurations.</p>
     */
    inline const Aws::String& GetSyncName() const{ return m_syncName; }
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }
    inline void SetSyncName(const Aws::String& value) { m_syncNameHasBeenSet = true; m_syncName = value; }
    inline void SetSyncName(Aws::String&& value) { m_syncNameHasBeenSet = true; m_syncName = std::move(value); }
    inline void SetSyncName(const char* value) { m_syncNameHasBeenSet = true; m_syncName.assign(value); }
    inline ListNodesSummaryRequest& WithSyncName(const Aws::String& value) { SetSyncName(value); return *this;}
    inline ListNodesSummaryRequest& WithSyncName(Aws::String&& value) { SetSyncName(std::move(value)); return *this;}
    inline ListNodesSummaryRequest& WithSyncName(const char* value) { SetSyncName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters. Use a filter to generate a summary that matches your
     * specified filter criteria.</p>
     */
    inline const Aws::Vector<NodeFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<NodeFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<NodeFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListNodesSummaryRequest& WithFilters(const Aws::Vector<NodeFilter>& value) { SetFilters(value); return *this;}
    inline ListNodesSummaryRequest& WithFilters(Aws::Vector<NodeFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListNodesSummaryRequest& AddFilters(const NodeFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListNodesSummaryRequest& AddFilters(NodeFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify one or more aggregators to return a count of managed nodes that match
     * that expression. For example, a count of managed nodes by operating system.</p>
     */
    inline const Aws::Vector<NodeAggregator>& GetAggregators() const{ return m_aggregators; }
    inline bool AggregatorsHasBeenSet() const { return m_aggregatorsHasBeenSet; }
    inline void SetAggregators(const Aws::Vector<NodeAggregator>& value) { m_aggregatorsHasBeenSet = true; m_aggregators = value; }
    inline void SetAggregators(Aws::Vector<NodeAggregator>&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::move(value); }
    inline ListNodesSummaryRequest& WithAggregators(const Aws::Vector<NodeAggregator>& value) { SetAggregators(value); return *this;}
    inline ListNodesSummaryRequest& WithAggregators(Aws::Vector<NodeAggregator>&& value) { SetAggregators(std::move(value)); return *this;}
    inline ListNodesSummaryRequest& AddAggregators(const NodeAggregator& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(value); return *this; }
    inline ListNodesSummaryRequest& AddAggregators(NodeAggregator&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.) The call also returns a token that you can specify in a
     * subsequent call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListNodesSummaryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNodesSummaryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNodesSummaryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListNodesSummaryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;

    Aws::Vector<NodeFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<NodeAggregator> m_aggregators;
    bool m_aggregatorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
