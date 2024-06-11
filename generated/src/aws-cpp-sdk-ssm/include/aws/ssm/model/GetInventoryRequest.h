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
    AWS_SSM_API GetInventoryRequest();

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
    inline const Aws::Vector<InventoryFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<InventoryFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<InventoryFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GetInventoryRequest& WithFilters(const Aws::Vector<InventoryFilter>& value) { SetFilters(value); return *this;}
    inline GetInventoryRequest& WithFilters(Aws::Vector<InventoryFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline GetInventoryRequest& AddFilters(const InventoryFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline GetInventoryRequest& AddFilters(InventoryFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns counts of inventory types based on one or more expressions. For
     * example, if you aggregate by using an expression that uses the
     * <code>AWS:InstanceInformation.PlatformType</code> type, you can see a count of
     * how many Windows and Linux managed nodes exist in your inventoried fleet.</p>
     */
    inline const Aws::Vector<InventoryAggregator>& GetAggregators() const{ return m_aggregators; }
    inline bool AggregatorsHasBeenSet() const { return m_aggregatorsHasBeenSet; }
    inline void SetAggregators(const Aws::Vector<InventoryAggregator>& value) { m_aggregatorsHasBeenSet = true; m_aggregators = value; }
    inline void SetAggregators(Aws::Vector<InventoryAggregator>&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::move(value); }
    inline GetInventoryRequest& WithAggregators(const Aws::Vector<InventoryAggregator>& value) { SetAggregators(value); return *this;}
    inline GetInventoryRequest& WithAggregators(Aws::Vector<InventoryAggregator>&& value) { SetAggregators(std::move(value)); return *this;}
    inline GetInventoryRequest& AddAggregators(const InventoryAggregator& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(value); return *this; }
    inline GetInventoryRequest& AddAggregators(InventoryAggregator&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of inventory item types to return.</p>
     */
    inline const Aws::Vector<ResultAttribute>& GetResultAttributes() const{ return m_resultAttributes; }
    inline bool ResultAttributesHasBeenSet() const { return m_resultAttributesHasBeenSet; }
    inline void SetResultAttributes(const Aws::Vector<ResultAttribute>& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes = value; }
    inline void SetResultAttributes(Aws::Vector<ResultAttribute>&& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes = std::move(value); }
    inline GetInventoryRequest& WithResultAttributes(const Aws::Vector<ResultAttribute>& value) { SetResultAttributes(value); return *this;}
    inline GetInventoryRequest& WithResultAttributes(Aws::Vector<ResultAttribute>&& value) { SetResultAttributes(std::move(value)); return *this;}
    inline GetInventoryRequest& AddResultAttributes(const ResultAttribute& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes.push_back(value); return *this; }
    inline GetInventoryRequest& AddResultAttributes(ResultAttribute&& value) { m_resultAttributesHasBeenSet = true; m_resultAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetInventoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetInventoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetInventoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
