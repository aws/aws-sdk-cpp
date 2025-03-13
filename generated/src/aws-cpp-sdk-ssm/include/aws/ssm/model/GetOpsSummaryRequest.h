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
    AWS_SSM_API GetOpsSummaryRequest() = default;

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
    inline const Aws::String& GetSyncName() const { return m_syncName; }
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }
    template<typename SyncNameT = Aws::String>
    void SetSyncName(SyncNameT&& value) { m_syncNameHasBeenSet = true; m_syncName = std::forward<SyncNameT>(value); }
    template<typename SyncNameT = Aws::String>
    GetOpsSummaryRequest& WithSyncName(SyncNameT&& value) { SetSyncName(std::forward<SyncNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional filters used to scope down the returned OpsData. </p>
     */
    inline const Aws::Vector<OpsFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<OpsFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<OpsFilter>>
    GetOpsSummaryRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = OpsFilter>
    GetOpsSummaryRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional aggregators that return counts of OpsData based on one or more
     * expressions.</p>
     */
    inline const Aws::Vector<OpsAggregator>& GetAggregators() const { return m_aggregators; }
    inline bool AggregatorsHasBeenSet() const { return m_aggregatorsHasBeenSet; }
    template<typename AggregatorsT = Aws::Vector<OpsAggregator>>
    void SetAggregators(AggregatorsT&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::forward<AggregatorsT>(value); }
    template<typename AggregatorsT = Aws::Vector<OpsAggregator>>
    GetOpsSummaryRequest& WithAggregators(AggregatorsT&& value) { SetAggregators(std::forward<AggregatorsT>(value)); return *this;}
    template<typename AggregatorsT = OpsAggregator>
    GetOpsSummaryRequest& AddAggregators(AggregatorsT&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.emplace_back(std::forward<AggregatorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The OpsData data type to return.</p>
     */
    inline const Aws::Vector<OpsResultAttribute>& GetResultAttributes() const { return m_resultAttributes; }
    inline bool ResultAttributesHasBeenSet() const { return m_resultAttributesHasBeenSet; }
    template<typename ResultAttributesT = Aws::Vector<OpsResultAttribute>>
    void SetResultAttributes(ResultAttributesT&& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes = std::forward<ResultAttributesT>(value); }
    template<typename ResultAttributesT = Aws::Vector<OpsResultAttribute>>
    GetOpsSummaryRequest& WithResultAttributes(ResultAttributesT&& value) { SetResultAttributes(std::forward<ResultAttributesT>(value)); return *this;}
    template<typename ResultAttributesT = OpsResultAttribute>
    GetOpsSummaryRequest& AddResultAttributes(ResultAttributesT&& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes.emplace_back(std::forward<ResultAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetOpsSummaryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
