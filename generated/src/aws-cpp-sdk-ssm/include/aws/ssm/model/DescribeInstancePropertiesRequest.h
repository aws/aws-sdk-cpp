/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InstancePropertyFilter.h>
#include <aws/ssm/model/InstancePropertyStringFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeInstancePropertiesRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeInstancePropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceProperties"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of instance property filters.</p>
     */
    inline const Aws::Vector<InstancePropertyFilter>& GetInstancePropertyFilterList() const { return m_instancePropertyFilterList; }
    inline bool InstancePropertyFilterListHasBeenSet() const { return m_instancePropertyFilterListHasBeenSet; }
    template<typename InstancePropertyFilterListT = Aws::Vector<InstancePropertyFilter>>
    void SetInstancePropertyFilterList(InstancePropertyFilterListT&& value) { m_instancePropertyFilterListHasBeenSet = true; m_instancePropertyFilterList = std::forward<InstancePropertyFilterListT>(value); }
    template<typename InstancePropertyFilterListT = Aws::Vector<InstancePropertyFilter>>
    DescribeInstancePropertiesRequest& WithInstancePropertyFilterList(InstancePropertyFilterListT&& value) { SetInstancePropertyFilterList(std::forward<InstancePropertyFilterListT>(value)); return *this;}
    template<typename InstancePropertyFilterListT = InstancePropertyFilter>
    DescribeInstancePropertiesRequest& AddInstancePropertyFilterList(InstancePropertyFilterListT&& value) { m_instancePropertyFilterListHasBeenSet = true; m_instancePropertyFilterList.emplace_back(std::forward<InstancePropertyFilterListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The request filters to use with the operator.</p>
     */
    inline const Aws::Vector<InstancePropertyStringFilter>& GetFiltersWithOperator() const { return m_filtersWithOperator; }
    inline bool FiltersWithOperatorHasBeenSet() const { return m_filtersWithOperatorHasBeenSet; }
    template<typename FiltersWithOperatorT = Aws::Vector<InstancePropertyStringFilter>>
    void SetFiltersWithOperator(FiltersWithOperatorT&& value) { m_filtersWithOperatorHasBeenSet = true; m_filtersWithOperator = std::forward<FiltersWithOperatorT>(value); }
    template<typename FiltersWithOperatorT = Aws::Vector<InstancePropertyStringFilter>>
    DescribeInstancePropertiesRequest& WithFiltersWithOperator(FiltersWithOperatorT&& value) { SetFiltersWithOperator(std::forward<FiltersWithOperatorT>(value)); return *this;}
    template<typename FiltersWithOperatorT = InstancePropertyStringFilter>
    DescribeInstancePropertiesRequest& AddFiltersWithOperator(FiltersWithOperatorT&& value) { m_filtersWithOperatorHasBeenSet = true; m_filtersWithOperator.emplace_back(std::forward<FiltersWithOperatorT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for the call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeInstancePropertiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token provided by a previous request to use to return the next set of
     * properties.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInstancePropertiesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstancePropertyFilter> m_instancePropertyFilterList;
    bool m_instancePropertyFilterListHasBeenSet = false;

    Aws::Vector<InstancePropertyStringFilter> m_filtersWithOperator;
    bool m_filtersWithOperatorHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
