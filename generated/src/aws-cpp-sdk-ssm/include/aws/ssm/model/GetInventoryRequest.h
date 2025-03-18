/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InventoryFilter.h>
#include <aws/ssm/model/InventoryAggregator.h>
#include <aws/ssm/model/ResultAttribute.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetInventoryRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetInventoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInventory"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline const Aws::Vector<InventoryFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<InventoryFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<InventoryFilter>>
    GetInventoryRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = InventoryFilter>
    GetInventoryRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns counts of inventory types based on one or more expressions. For
     * example, if you aggregate by using an expression that uses the
     * <code>AWS:InstanceInformation.PlatformType</code> type, you can see a count of
     * how many Windows and Linux managed nodes exist in your inventoried fleet.</p>
     */
    inline const Aws::Vector<InventoryAggregator>& GetAggregators() const { return m_aggregators; }
    inline bool AggregatorsHasBeenSet() const { return m_aggregatorsHasBeenSet; }
    template<typename AggregatorsT = Aws::Vector<InventoryAggregator>>
    void SetAggregators(AggregatorsT&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::forward<AggregatorsT>(value); }
    template<typename AggregatorsT = Aws::Vector<InventoryAggregator>>
    GetInventoryRequest& WithAggregators(AggregatorsT&& value) { SetAggregators(std::forward<AggregatorsT>(value)); return *this;}
    template<typename AggregatorsT = InventoryAggregator>
    GetInventoryRequest& AddAggregators(AggregatorsT&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.emplace_back(std::forward<AggregatorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of inventory item types to return.</p>
     */
    inline const Aws::Vector<ResultAttribute>& GetResultAttributes() const { return m_resultAttributes; }
    inline bool ResultAttributesHasBeenSet() const { return m_resultAttributesHasBeenSet; }
    template<typename ResultAttributesT = Aws::Vector<ResultAttribute>>
    void SetResultAttributes(ResultAttributesT&& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes = std::forward<ResultAttributesT>(value); }
    template<typename ResultAttributesT = Aws::Vector<ResultAttribute>>
    GetInventoryRequest& WithResultAttributes(ResultAttributesT&& value) { SetResultAttributes(std::forward<ResultAttributesT>(value)); return *this;}
    template<typename ResultAttributesT = ResultAttribute>
    GetInventoryRequest& AddResultAttributes(ResultAttributesT&& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes.emplace_back(std::forward<ResultAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetInventoryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline GetInventoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<InventoryFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<InventoryAggregator> m_aggregators;
    bool m_aggregatorsHasBeenSet = false;

    Aws::Vector<ResultAttribute> m_resultAttributes;
    bool m_resultAttributesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
