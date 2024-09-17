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
    AWS_SSM_API DescribeInstancePropertiesRequest();

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
    inline const Aws::Vector<InstancePropertyFilter>& GetInstancePropertyFilterList() const{ return m_instancePropertyFilterList; }
    inline bool InstancePropertyFilterListHasBeenSet() const { return m_instancePropertyFilterListHasBeenSet; }
    inline void SetInstancePropertyFilterList(const Aws::Vector<InstancePropertyFilter>& value) { m_instancePropertyFilterListHasBeenSet = true; m_instancePropertyFilterList = value; }
    inline void SetInstancePropertyFilterList(Aws::Vector<InstancePropertyFilter>&& value) { m_instancePropertyFilterListHasBeenSet = true; m_instancePropertyFilterList = std::move(value); }
    inline DescribeInstancePropertiesRequest& WithInstancePropertyFilterList(const Aws::Vector<InstancePropertyFilter>& value) { SetInstancePropertyFilterList(value); return *this;}
    inline DescribeInstancePropertiesRequest& WithInstancePropertyFilterList(Aws::Vector<InstancePropertyFilter>&& value) { SetInstancePropertyFilterList(std::move(value)); return *this;}
    inline DescribeInstancePropertiesRequest& AddInstancePropertyFilterList(const InstancePropertyFilter& value) { m_instancePropertyFilterListHasBeenSet = true; m_instancePropertyFilterList.push_back(value); return *this; }
    inline DescribeInstancePropertiesRequest& AddInstancePropertyFilterList(InstancePropertyFilter&& value) { m_instancePropertyFilterListHasBeenSet = true; m_instancePropertyFilterList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The request filters to use with the operator.</p>
     */
    inline const Aws::Vector<InstancePropertyStringFilter>& GetFiltersWithOperator() const{ return m_filtersWithOperator; }
    inline bool FiltersWithOperatorHasBeenSet() const { return m_filtersWithOperatorHasBeenSet; }
    inline void SetFiltersWithOperator(const Aws::Vector<InstancePropertyStringFilter>& value) { m_filtersWithOperatorHasBeenSet = true; m_filtersWithOperator = value; }
    inline void SetFiltersWithOperator(Aws::Vector<InstancePropertyStringFilter>&& value) { m_filtersWithOperatorHasBeenSet = true; m_filtersWithOperator = std::move(value); }
    inline DescribeInstancePropertiesRequest& WithFiltersWithOperator(const Aws::Vector<InstancePropertyStringFilter>& value) { SetFiltersWithOperator(value); return *this;}
    inline DescribeInstancePropertiesRequest& WithFiltersWithOperator(Aws::Vector<InstancePropertyStringFilter>&& value) { SetFiltersWithOperator(std::move(value)); return *this;}
    inline DescribeInstancePropertiesRequest& AddFiltersWithOperator(const InstancePropertyStringFilter& value) { m_filtersWithOperatorHasBeenSet = true; m_filtersWithOperator.push_back(value); return *this; }
    inline DescribeInstancePropertiesRequest& AddFiltersWithOperator(InstancePropertyStringFilter&& value) { m_filtersWithOperatorHasBeenSet = true; m_filtersWithOperator.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for the call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeInstancePropertiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token provided by a previous request to use to return the next set of
     * properties.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeInstancePropertiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeInstancePropertiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeInstancePropertiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstancePropertyFilter> m_instancePropertyFilterList;
    bool m_instancePropertyFilterListHasBeenSet = false;

    Aws::Vector<InstancePropertyStringFilter> m_filtersWithOperator;
    bool m_filtersWithOperatorHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
