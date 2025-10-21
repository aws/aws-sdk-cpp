/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/Order.h>
#include <aws/mediaconvert/model/JobsQueryFilter.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class StartJobsQueryRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API StartJobsQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJobsQuery"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Optional. Provide an array of JobsQueryFilters for your StartJobsQuery request.
     */
    inline const Aws::Vector<JobsQueryFilter>& GetFilterList() const { return m_filterList; }
    inline bool FilterListHasBeenSet() const { return m_filterListHasBeenSet; }
    template<typename FilterListT = Aws::Vector<JobsQueryFilter>>
    void SetFilterList(FilterListT&& value) { m_filterListHasBeenSet = true; m_filterList = std::forward<FilterListT>(value); }
    template<typename FilterListT = Aws::Vector<JobsQueryFilter>>
    StartJobsQueryRequest& WithFilterList(FilterListT&& value) { SetFilterList(std::forward<FilterListT>(value)); return *this;}
    template<typename FilterListT = JobsQueryFilter>
    StartJobsQueryRequest& AddFilterList(FilterListT&& value) { m_filterListHasBeenSet = true; m_filterList.emplace_back(std::forward<FilterListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Optional. Number of jobs, up to twenty, that will be included in the jobs query.
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline StartJobsQueryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this string to request the next batch of jobs matched by a jobs query.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    StartJobsQueryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. When you request lists of resources, you can specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline Order GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(Order value) { m_orderHasBeenSet = true; m_order = value; }
    inline StartJobsQueryRequest& WithOrder(Order value) { SetOrder(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobsQueryFilter> m_filterList;
    bool m_filterListHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Order m_order{Order::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
