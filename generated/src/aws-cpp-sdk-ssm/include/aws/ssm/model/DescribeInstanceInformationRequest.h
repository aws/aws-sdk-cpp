/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InstanceInformationFilter.h>
#include <aws/ssm/model/InstanceInformationStringFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeInstanceInformationRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeInstanceInformationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceInformation"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>This is a legacy method. We recommend that you don't use this method.
     * Instead, use the <code>Filters</code> data type. <code>Filters</code> enables
     * you to return node information by filtering based on tags applied to managed
     * nodes.</p>  <p>Attempting to use
     * <code>InstanceInformationFilterList</code> and <code>Filters</code> leads to an
     * exception error. </p> 
     */
    inline const Aws::Vector<InstanceInformationFilter>& GetInstanceInformationFilterList() const{ return m_instanceInformationFilterList; }
    inline bool InstanceInformationFilterListHasBeenSet() const { return m_instanceInformationFilterListHasBeenSet; }
    inline void SetInstanceInformationFilterList(const Aws::Vector<InstanceInformationFilter>& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList = value; }
    inline void SetInstanceInformationFilterList(Aws::Vector<InstanceInformationFilter>&& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList = std::move(value); }
    inline DescribeInstanceInformationRequest& WithInstanceInformationFilterList(const Aws::Vector<InstanceInformationFilter>& value) { SetInstanceInformationFilterList(value); return *this;}
    inline DescribeInstanceInformationRequest& WithInstanceInformationFilterList(Aws::Vector<InstanceInformationFilter>&& value) { SetInstanceInformationFilterList(std::move(value)); return *this;}
    inline DescribeInstanceInformationRequest& AddInstanceInformationFilterList(const InstanceInformationFilter& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList.push_back(value); return *this; }
    inline DescribeInstanceInformationRequest& AddInstanceInformationFilterList(InstanceInformationFilter&& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters. Use a filter to return a more specific list of managed
     * nodes. You can filter based on tags applied to your managed nodes. Tag filters
     * can't be combined with other filter types. Use this <code>Filters</code> data
     * type instead of <code>InstanceInformationFilterList</code>, which is
     * deprecated.</p>
     */
    inline const Aws::Vector<InstanceInformationStringFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<InstanceInformationStringFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<InstanceInformationStringFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeInstanceInformationRequest& WithFilters(const Aws::Vector<InstanceInformationStringFilter>& value) { SetFilters(value); return *this;}
    inline DescribeInstanceInformationRequest& WithFilters(Aws::Vector<InstanceInformationStringFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeInstanceInformationRequest& AddFilters(const InstanceInformationStringFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeInstanceInformationRequest& AddFilters(InstanceInformationStringFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of results.
     * The default value is 10 items. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeInstanceInformationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline DescribeInstanceInformationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeInstanceInformationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeInstanceInformationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceInformationFilter> m_instanceInformationFilterList;
    bool m_instanceInformationFilterListHasBeenSet = false;

    Aws::Vector<InstanceInformationStringFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
