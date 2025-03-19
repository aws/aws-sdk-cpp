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
  class CountOpenWorkflowExecutionsRequest : public SWFRequest
  {
  public:
    AWS_SWF_API CountOpenWorkflowExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CountOpenWorkflowExecutions"; }

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
    CountOpenWorkflowExecutionsRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the start time criteria that workflow executions must meet in order
     * to be counted.</p>
     */
    inline const ExecutionTimeFilter& GetStartTimeFilter() const { return m_startTimeFilter; }
    inline bool StartTimeFilterHasBeenSet() const { return m_startTimeFilterHasBeenSet; }
    template<typename StartTimeFilterT = ExecutionTimeFilter>
    void SetStartTimeFilter(StartTimeFilterT&& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = std::forward<StartTimeFilterT>(value); }
    template<typename StartTimeFilterT = ExecutionTimeFilter>
    CountOpenWorkflowExecutionsRequest& WithStartTimeFilter(StartTimeFilterT&& value) { SetStartTimeFilter(std::forward<StartTimeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the workflow executions to be counted.</p>  <p>
     * <code>executionFilter</code>, <code>typeFilter</code> and <code>tagFilter</code>
     * are mutually exclusive. You can specify at most one of these in a request.</p>
     * 
     */
    inline const WorkflowTypeFilter& GetTypeFilter() const { return m_typeFilter; }
    inline bool TypeFilterHasBeenSet() const { return m_typeFilterHasBeenSet; }
    template<typename TypeFilterT = WorkflowTypeFilter>
    void SetTypeFilter(TypeFilterT&& value) { m_typeFilterHasBeenSet = true; m_typeFilter = std::forward<TypeFilterT>(value); }
    template<typename TypeFilterT = WorkflowTypeFilter>
    CountOpenWorkflowExecutionsRequest& WithTypeFilter(TypeFilterT&& value) { SetTypeFilter(std::forward<TypeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only executions that have a tag that matches the filter are
     * counted.</p>  <p> <code>executionFilter</code>, <code>typeFilter</code>
     * and <code>tagFilter</code> are mutually exclusive. You can specify at most one
     * of these in a request.</p> 
     */
    inline const TagFilter& GetTagFilter() const { return m_tagFilter; }
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
    template<typename TagFilterT = TagFilter>
    void SetTagFilter(TagFilterT&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::forward<TagFilterT>(value); }
    template<typename TagFilterT = TagFilter>
    CountOpenWorkflowExecutionsRequest& WithTagFilter(TagFilterT&& value) { SetTagFilter(std::forward<TagFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only workflow executions matching the <code>WorkflowId</code>
     * in the filter are counted.</p>  <p> <code>executionFilter</code>,
     * <code>typeFilter</code> and <code>tagFilter</code> are mutually exclusive. You
     * can specify at most one of these in a request.</p> 
     */
    inline const WorkflowExecutionFilter& GetExecutionFilter() const { return m_executionFilter; }
    inline bool ExecutionFilterHasBeenSet() const { return m_executionFilterHasBeenSet; }
    template<typename ExecutionFilterT = WorkflowExecutionFilter>
    void SetExecutionFilter(ExecutionFilterT&& value) { m_executionFilterHasBeenSet = true; m_executionFilter = std::forward<ExecutionFilterT>(value); }
    template<typename ExecutionFilterT = WorkflowExecutionFilter>
    CountOpenWorkflowExecutionsRequest& WithExecutionFilter(ExecutionFilterT&& value) { SetExecutionFilter(std::forward<ExecutionFilterT>(value)); return *this;}
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

    WorkflowExecutionFilter m_executionFilter;
    bool m_executionFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
