/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ExecutionTimeFilter.h>
#include <aws/swf/model/WorkflowTypeFilter.h>
#include <aws/swf/model/TagFilter.h>
#include <aws/swf/model/WorkflowExecutionFilter.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class ListOpenWorkflowExecutionsRequest : public SWFRequest
  {
  public:
    AWS_SWF_API ListOpenWorkflowExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOpenWorkflowExecutions"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain that contains the workflow executions to list.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline ListOpenWorkflowExecutionsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline ListOpenWorkflowExecutionsRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline ListOpenWorkflowExecutionsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Workflow executions are included in the returned results based on whether
     * their start times are within the range specified by this filter.</p>
     */
    inline const ExecutionTimeFilter& GetStartTimeFilter() const{ return m_startTimeFilter; }
    inline bool StartTimeFilterHasBeenSet() const { return m_startTimeFilterHasBeenSet; }
    inline void SetStartTimeFilter(const ExecutionTimeFilter& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = value; }
    inline void SetStartTimeFilter(ExecutionTimeFilter&& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = std::move(value); }
    inline ListOpenWorkflowExecutionsRequest& WithStartTimeFilter(const ExecutionTimeFilter& value) { SetStartTimeFilter(value); return *this;}
    inline ListOpenWorkflowExecutionsRequest& WithStartTimeFilter(ExecutionTimeFilter&& value) { SetStartTimeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only executions of the type specified in the filter are
     * returned.</p>  <p> <code>executionFilter</code>, <code>typeFilter</code>
     * and <code>tagFilter</code> are mutually exclusive. You can specify at most one
     * of these in a request.</p> 
     */
    inline const WorkflowTypeFilter& GetTypeFilter() const{ return m_typeFilter; }
    inline bool TypeFilterHasBeenSet() const { return m_typeFilterHasBeenSet; }
    inline void SetTypeFilter(const WorkflowTypeFilter& value) { m_typeFilterHasBeenSet = true; m_typeFilter = value; }
    inline void SetTypeFilter(WorkflowTypeFilter&& value) { m_typeFilterHasBeenSet = true; m_typeFilter = std::move(value); }
    inline ListOpenWorkflowExecutionsRequest& WithTypeFilter(const WorkflowTypeFilter& value) { SetTypeFilter(value); return *this;}
    inline ListOpenWorkflowExecutionsRequest& WithTypeFilter(WorkflowTypeFilter&& value) { SetTypeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only executions that have the matching tag are listed.</p>
     *  <p> <code>executionFilter</code>, <code>typeFilter</code> and
     * <code>tagFilter</code> are mutually exclusive. You can specify at most one of
     * these in a request.</p> 
     */
    inline const TagFilter& GetTagFilter() const{ return m_tagFilter; }
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
    inline void SetTagFilter(const TagFilter& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }
    inline void SetTagFilter(TagFilter&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::move(value); }
    inline ListOpenWorkflowExecutionsRequest& WithTagFilter(const TagFilter& value) { SetTagFilter(value); return *this;}
    inline ListOpenWorkflowExecutionsRequest& WithTagFilter(TagFilter&& value) { SetTagFilter(std::move(value)); return *this;}
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
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }
    inline ListOpenWorkflowExecutionsRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListOpenWorkflowExecutionsRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListOpenWorkflowExecutionsRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p>
     */
    inline int GetMaximumPageSize() const{ return m_maximumPageSize; }
    inline bool MaximumPageSizeHasBeenSet() const { return m_maximumPageSizeHasBeenSet; }
    inline void SetMaximumPageSize(int value) { m_maximumPageSizeHasBeenSet = true; m_maximumPageSize = value; }
    inline ListOpenWorkflowExecutionsRequest& WithMaximumPageSize(int value) { SetMaximumPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in descending order of the start time of the
     * executions.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }
    inline ListOpenWorkflowExecutionsRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only workflow executions matching the workflow ID specified in
     * the filter are returned.</p>  <p> <code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</p> 
     */
    inline const WorkflowExecutionFilter& GetExecutionFilter() const{ return m_executionFilter; }
    inline bool ExecutionFilterHasBeenSet() const { return m_executionFilterHasBeenSet; }
    inline void SetExecutionFilter(const WorkflowExecutionFilter& value) { m_executionFilterHasBeenSet = true; m_executionFilter = value; }
    inline void SetExecutionFilter(WorkflowExecutionFilter&& value) { m_executionFilterHasBeenSet = true; m_executionFilter = std::move(value); }
    inline ListOpenWorkflowExecutionsRequest& WithExecutionFilter(const WorkflowExecutionFilter& value) { SetExecutionFilter(value); return *this;}
    inline ListOpenWorkflowExecutionsRequest& WithExecutionFilter(WorkflowExecutionFilter&& value) { SetExecutionFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    ExecutionTimeFilter m_startTimeFilter;
    bool m_startTimeFilterHasBeenSet = false;

    WorkflowTypeFilter m_typeFilter;
    bool m_typeFilterHasBeenSet = false;

    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_maximumPageSize;
    bool m_maximumPageSizeHasBeenSet = false;

    bool m_reverseOrder;
    bool m_reverseOrderHasBeenSet = false;

    WorkflowExecutionFilter m_executionFilter;
    bool m_executionFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
