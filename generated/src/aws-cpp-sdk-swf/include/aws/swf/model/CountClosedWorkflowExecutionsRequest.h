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
#include <aws/swf/model/WorkflowTypeFilter.h>
#include <aws/swf/model/TagFilter.h>
#include <aws/swf/model/CloseStatusFilter.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class CountClosedWorkflowExecutionsRequest : public SWFRequest
  {
  public:
    AWS_SWF_API CountClosedWorkflowExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CountClosedWorkflowExecutions"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain containing the workflow executions to count.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    CountClosedWorkflowExecutionsRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only workflow executions that meet the start time criteria of
     * the filter are counted.</p>  <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> 
     */
    inline const ExecutionTimeFilter& GetStartTimeFilter() const { return m_startTimeFilter; }
    inline bool StartTimeFilterHasBeenSet() const { return m_startTimeFilterHasBeenSet; }
    template<typename StartTimeFilterT = ExecutionTimeFilter>
    void SetStartTimeFilter(StartTimeFilterT&& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = std::forward<StartTimeFilterT>(value); }
    template<typename StartTimeFilterT = ExecutionTimeFilter>
    CountClosedWorkflowExecutionsRequest& WithStartTimeFilter(StartTimeFilterT&& value) { SetStartTimeFilter(std::forward<StartTimeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only workflow executions that meet the close time criteria of
     * the filter are counted.</p>  <p> <code>startTimeFilter</code> and
     * <code>closeTimeFilter</code> are mutually exclusive. You must specify one of
     * these in a request but not both.</p> 
     */
    inline const ExecutionTimeFilter& GetCloseTimeFilter() const { return m_closeTimeFilter; }
    inline bool CloseTimeFilterHasBeenSet() const { return m_closeTimeFilterHasBeenSet; }
    template<typename CloseTimeFilterT = ExecutionTimeFilter>
    void SetCloseTimeFilter(CloseTimeFilterT&& value) { m_closeTimeFilterHasBeenSet = true; m_closeTimeFilter = std::forward<CloseTimeFilterT>(value); }
    template<typename CloseTimeFilterT = ExecutionTimeFilter>
    CountClosedWorkflowExecutionsRequest& WithCloseTimeFilter(CloseTimeFilterT&& value) { SetCloseTimeFilter(std::forward<CloseTimeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p>  <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * 
     */
    inline const WorkflowExecutionFilter& GetExecutionFilter() const { return m_executionFilter; }
    inline bool ExecutionFilterHasBeenSet() const { return m_executionFilterHasBeenSet; }
    template<typename ExecutionFilterT = WorkflowExecutionFilter>
    void SetExecutionFilter(ExecutionFilterT&& value) { m_executionFilterHasBeenSet = true; m_executionFilter = std::forward<ExecutionFilterT>(value); }
    template<typename ExecutionFilterT = WorkflowExecutionFilter>
    CountClosedWorkflowExecutionsRequest& WithExecutionFilter(ExecutionFilterT&& value) { SetExecutionFilter(std::forward<ExecutionFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, indicates the type of the workflow executions to be
     * counted.</p>  <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * 
     */
    inline const WorkflowTypeFilter& GetTypeFilter() const { return m_typeFilter; }
    inline bool TypeFilterHasBeenSet() const { return m_typeFilterHasBeenSet; }
    template<typename TypeFilterT = WorkflowTypeFilter>
    void SetTypeFilter(TypeFilterT&& value) { m_typeFilterHasBeenSet = true; m_typeFilter = std::forward<TypeFilterT>(value); }
    template<typename TypeFilterT = WorkflowTypeFilter>
    CountClosedWorkflowExecutionsRequest& WithTypeFilter(TypeFilterT&& value) { SetTypeFilter(std::forward<TypeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p>  <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * 
     */
    inline const TagFilter& GetTagFilter() const { return m_tagFilter; }
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
    template<typename TagFilterT = TagFilter>
    void SetTagFilter(TagFilterT&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::forward<TagFilterT>(value); }
    template<typename TagFilterT = TagFilter>
    CountClosedWorkflowExecutionsRequest& WithTagFilter(TagFilterT&& value) { SetTagFilter(std::forward<TagFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only workflow executions that match this close status are
     * counted. This filter has an affect only if <code>executionStatus</code> is
     * specified as <code>CLOSED</code>.</p>  <p> <code>closeStatusFilter</code>,
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * 
     */
    inline const CloseStatusFilter& GetCloseStatusFilter() const { return m_closeStatusFilter; }
    inline bool CloseStatusFilterHasBeenSet() const { return m_closeStatusFilterHasBeenSet; }
    template<typename CloseStatusFilterT = CloseStatusFilter>
    void SetCloseStatusFilter(CloseStatusFilterT&& value) { m_closeStatusFilterHasBeenSet = true; m_closeStatusFilter = std::forward<CloseStatusFilterT>(value); }
    template<typename CloseStatusFilterT = CloseStatusFilter>
    CountClosedWorkflowExecutionsRequest& WithCloseStatusFilter(CloseStatusFilterT&& value) { SetCloseStatusFilter(std::forward<CloseStatusFilterT>(value)); return *this;}
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

    WorkflowTypeFilter m_typeFilter;
    bool m_typeFilterHasBeenSet = false;

    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet = false;

    CloseStatusFilter m_closeStatusFilter;
    bool m_closeStatusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
