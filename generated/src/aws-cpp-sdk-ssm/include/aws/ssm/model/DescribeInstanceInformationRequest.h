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
    AWS_SSM_API DescribeInstanceInformationRequest() = default;

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
    inline const Aws::Vector<InstanceInformationFilter>& GetInstanceInformationFilterList() const { return m_instanceInformationFilterList; }
    inline bool InstanceInformationFilterListHasBeenSet() const { return m_instanceInformationFilterListHasBeenSet; }
    template<typename InstanceInformationFilterListT = Aws::Vector<InstanceInformationFilter>>
    void SetInstanceInformationFilterList(InstanceInformationFilterListT&& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList = std::forward<InstanceInformationFilterListT>(value); }
    template<typename InstanceInformationFilterListT = Aws::Vector<InstanceInformationFilter>>
    DescribeInstanceInformationRequest& WithInstanceInformationFilterList(InstanceInformationFilterListT&& value) { SetInstanceInformationFilterList(std::forward<InstanceInformationFilterListT>(value)); return *this;}
    template<typename InstanceInformationFilterListT = InstanceInformationFilter>
    DescribeInstanceInformationRequest& AddInstanceInformationFilterList(InstanceInformationFilterListT&& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList.emplace_back(std::forward<InstanceInformationFilterListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters. Use a filter to return a more specific list of managed
     * nodes. You can filter based on tags applied to your managed nodes. Tag filters
     * can't be combined with other filter types. Use this <code>Filters</code> data
     * type instead of <code>InstanceInformationFilterList</code>, which is
     * deprecated.</p>
     */
    inline const Aws::Vector<InstanceInformationStringFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<InstanceInformationStringFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<InstanceInformationStringFilter>>
    DescribeInstanceInformationRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = InstanceInformationStringFilter>
    DescribeInstanceInformationRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of results.
     * The default value is 10 items. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeInstanceInformationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeInstanceInformationRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceInformationFilter> m_instanceInformationFilterList;
    bool m_instanceInformationFilterListHasBeenSet = false;

    Aws::Vector<InstanceInformationStringFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
