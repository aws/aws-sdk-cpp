/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ExecutionTimeFilter.h>
#include <aws/swf/model/WorkflowExecutionFilter.h>
#include <aws/swf/model/CloseStatusFilter.h>
#include <aws/swf/model/WorkflowTypeFilter.h>
#include <aws/swf/model/TagFilter.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class ListClosedWorkflowExecutionsRequest : public SWFRequest
  {
  public:
    AWS_SWF_API ListClosedWorkflowExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClosedWorkflowExecutions"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    ListClosedWorkflowExecutionsRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their start times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their start times.</p>  <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> 
     */
    inline const ExecutionTimeFilter& GetStartTimeFilter() const { return m_startTimeFilter; }
    inline bool StartTimeFilterHasBeenSet() const { return m_startTimeFilterHasBeenSet; }
    template<typename StartTimeFilterT = ExecutionTimeFilter>
    void SetStartTimeFilter(StartTimeFilterT&& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = std::forward<StartTimeFilterT>(value); }
    template<typename StartTimeFilterT = ExecutionTimeFilter>
    ListClosedWorkflowExecutionsRequest& WithStartTimeFilter(StartTimeFilterT&& value) { SetStartTimeFilter(std::forward<StartTimeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the workflow executions are included in the returned results
     * based on whether their close times are within the range specified by this
     * filter. Also, if this parameter is specified, the returned results are ordered
     * by their close times.</p>  <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> 
     */
    inline const ExecutionTimeFilter& GetCloseTimeFilter() const { return m_closeTimeFilter; }
    inline bool CloseTimeFilterHasBeenSet() const { return m_closeTimeFilterHasBeenSet; }
    template<typename CloseTimeFilterT = ExecutionTimeFilter>
    void SetCloseTimeFilter(CloseTimeFilterT&& value) { m_closeTimeFilterHasBeenSet = true; m_closeTimeFilter = std::forward<CloseTimeFilterT>(value); }
    template<typename CloseTimeFilterT = ExecutionTimeFilter>
    ListClosedWorkflowExecutionsRequest& WithCloseTimeFilter(CloseTimeFilterT&& value) { SetCloseTimeFilter(std::forward<CloseTimeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p>  <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * 
     */
    inline const WorkflowExecutionFilter& GetExecutionFilter() const { return m_executionFilter; }
    inline bool ExecutionFilterHasBeenSet() const { return m_executionFilterHasBeenSet; }
    template<typename ExecutionFilterT = WorkflowExecutionFilter>
    void SetExecutionFilter(ExecutionFilterT&& value) { m_executionFilterHasBeenSet = true; m_executionFilter = std::forward<ExecutionFilterT>(value); }
    template<typename ExecutionFilterT = WorkflowExecutionFilter>
    ListClosedWorkflowExecutionsRequest& WithExecutionFilter(ExecutionFilterT&& value) { SetExecutionFilter(std::forward<ExecutionFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only workflow executions that match this <i>close status</i>
     * are listed. For example, if TERMINATED is specified, then only TERMINATED
     * workflow executions are listed.</p>  <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * 
     */
    inline const CloseStatusFilter& GetCloseStatusFilter() const { return m_closeStatusFilter; }
    inline bool CloseStatusFilterHasBeenSet() const { return m_closeStatusFilterHasBeenSet; }
    template<typename CloseStatusFilterT = CloseStatusFilter>
    void SetCloseStatusFilter(CloseStatusFilterT&& value) { m_closeStatusFilterHasBeenSet = true; m_closeStatusFilter = std::forward<CloseStatusFilterT>(value); }
    template<typename CloseStatusFilterT = CloseStatusFilter>
    ListClosedWorkflowExecutionsRequest& WithCloseStatusFilter(CloseStatusFilterT&& value) { SetCloseStatusFilter(std::forward<CloseStatusFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p>  <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * 
     */
    inline const WorkflowTypeFilter& GetTypeFilter() const { return m_typeFilter; }
    inline bool TypeFilterHasBeenSet() const { return m_typeFilterHasBeenSet; }
    template<typename TypeFilterT = WorkflowTypeFilter>
    void SetTypeFilter(TypeFilterT&& value) { m_typeFilterHasBeenSet = true; m_typeFilter = std::forward<TypeFilterT>(value); }
    template<typename TypeFilterT = WorkflowTypeFilter>
    ListClosedWorkflowExecutionsRequest& WithTypeFilter(TypeFilterT&& value) { SetTypeFilter(std::forward<TypeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     *  <p> <code>closeStatusFilter</code>, <code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</p> 
     */
    inline const TagFilter& GetTagFilter() const { return m_tagFilter; }
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
    template<typename TagFilterT = TagFilter>
    void SetTagFilter(TagFilterT&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::forward<TagFilterT>(value); }
    template<typename TagFilterT = TagFilter>
    ListClosedWorkflowExecutionsRequest& WithTagFilter(TagFilterT&& value) { SetTagFilter(std::forward<TagFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 24
     * hours. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListClosedWorkflowExecutionsRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p>
     */
    inline int GetMaximumPageSize() const { return m_maximumPageSize; }
    inline bool MaximumPageSizeHasBeenSet() const { return m_maximumPageSizeHasBeenSet; }
    inline void SetMaximumPageSize(int value) { m_maximumPageSizeHasBeenSet = true; m_maximumPageSize = value; }
    inline ListClosedWorkflowExecutionsRequest& WithMaximumPageSize(int value) { SetMaximumPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in descending order of the start or the close
     * time of the executions.</p>
     */
    inline bool GetReverseOrder() const { return m_reverseOrder; }
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }
    inline ListClosedWorkflowExecutionsRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    ExecutionTimeFilter m_startTimeFilter;
    bool m_startTimeFilterHasBeenSet = false;

    ExecutionTimeFilter m_closeTimeFilter;
    bool m_closeTimeFilterHasBeenSet = false;

    WorkflowExecutionFilter m_executionFilter;
    bool m_executionFilterHasBeenSet = false;

    CloseStatusFilter m_closeStatusFilter;
    bool m_closeStatusFilterHasBeenSet = false;

    WorkflowTypeFilter m_typeFilter;
    bool m_typeFilterHasBeenSet = false;

    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_maximumPageSize{0};
    bool m_maximumPageSizeHasBeenSet = false;

    bool m_reverseOrder{false};
    bool m_reverseOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
