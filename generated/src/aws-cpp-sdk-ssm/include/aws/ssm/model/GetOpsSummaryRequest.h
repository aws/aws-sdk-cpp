/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsFilter.h>
#include <aws/ssm/model/OpsAggregator.h>
#include <aws/ssm/model/OpsResultAttribute.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetOpsSummaryRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetOpsSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOpsSummary"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify the name of a resource data sync to get.</p>
     */
    inline const Aws::String& GetSyncName() const{ return m_syncName; }
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }
    inline void SetSyncName(const Aws::String& value) { m_syncNameHasBeenSet = true; m_syncName = value; }
    inline void SetSyncName(Aws::String&& value) { m_syncNameHasBeenSet = true; m_syncName = std::move(value); }
    inline void SetSyncName(const char* value) { m_syncNameHasBeenSet = true; m_syncName.assign(value); }
    inline GetOpsSummaryRequest& WithSyncName(const Aws::String& value) { SetSyncName(value); return *this;}
    inline GetOpsSummaryRequest& WithSyncName(Aws::String&& value) { SetSyncName(std::move(value)); return *this;}
    inline GetOpsSummaryRequest& WithSyncName(const char* value) { SetSyncName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional filters used to scope down the returned OpsData. </p>
     */
    inline const Aws::Vector<OpsFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<OpsFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<OpsFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GetOpsSummaryRequest& WithFilters(const Aws::Vector<OpsFilter>& value) { SetFilters(value); return *this;}
    inline GetOpsSummaryRequest& WithFilters(Aws::Vector<OpsFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline GetOpsSummaryRequest& AddFilters(const OpsFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline GetOpsSummaryRequest& AddFilters(OpsFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional aggregators that return counts of OpsData based on one or more
     * expressions.</p>
     */
    inline const Aws::Vector<OpsAggregator>& GetAggregators() const{ return m_aggregators; }
    inline bool AggregatorsHasBeenSet() const { return m_aggregatorsHasBeenSet; }
    inline void SetAggregators(const Aws::Vector<OpsAggregator>& value) { m_aggregatorsHasBeenSet = true; m_aggregators = value; }
    inline void SetAggregators(Aws::Vector<OpsAggregator>&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::move(value); }
    inline GetOpsSummaryRequest& WithAggregators(const Aws::Vector<OpsAggregator>& value) { SetAggregators(value); return *this;}
    inline GetOpsSummaryRequest& WithAggregators(Aws::Vector<OpsAggregator>&& value) { SetAggregators(std::move(value)); return *this;}
    inline GetOpsSummaryRequest& AddAggregators(const OpsAggregator& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(value); return *this; }
    inline GetOpsSummaryRequest& AddAggregators(OpsAggregator&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The OpsData data type to return.</p>
     */
    inline const Aws::Vector<OpsResultAttribute>& GetResultAttributes() const{ return m_resultAttributes; }
    inline bool ResultAttributesHasBeenSet() const { return m_resultAttributesHasBeenSet; }
    inline void SetResultAttributes(const Aws::Vector<OpsResultAttribute>& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes = value; }
    inline void SetResultAttributes(Aws::Vector<OpsResultAttribute>&& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes = std::move(value); }
    inline GetOpsSummaryRequest& WithResultAttributes(const Aws::Vector<OpsResultAttribute>& value) { SetResultAttributes(value); return *this;}
    inline GetOpsSummaryRequest& WithResultAttributes(Aws::Vector<OpsResultAttribute>&& value) { SetResultAttributes(std::move(value)); return *this;}
    inline GetOpsSummaryRequest& AddResultAttributes(const OpsResultAttribute& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes.push_back(value); return *this; }
    inline GetOpsSummaryRequest& AddResultAttributes(OpsResultAttribute&& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetOpsSummaryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetOpsSummaryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetOpsSummaryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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
    inline GetOpsSummaryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;

    Aws::Vector<OpsFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<OpsAggregator> m_aggregators;
    bool m_aggregatorsHasBeenSet = false;

    Aws::Vector<OpsResultAttribute> m_resultAttributes;
    bool m_resultAttributesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
