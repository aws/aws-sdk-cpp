﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/OperationFilter.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class ListOperationsRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API ListOperationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOperations"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>For the first <code>ListOperations</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListOperations</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> operations and
     * then filters them based on the specified criteria. It's possible that no
     * operations in the first <code>MaxResults</code> operations matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> operations do
     * contain operations that match the criteria.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOperationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items that you want Cloud Map to return in the response
     * to a <code>ListOperations</code> request. If you don't specify a value for
     * <code>MaxResults</code>, Cloud Map returns up to 100 operations.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListOperationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains specifications for the operations that you want
     * to list, for example, operations that you started between a specified start date
     * and end date.</p> <p>If you specify more than one filter, an operation must
     * match all filters to be returned by <code>ListOperations</code>.</p>
     */
    inline const Aws::Vector<OperationFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<OperationFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<OperationFilter>>
    ListOperationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = OperationFilter>
    ListOperationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<OperationFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
