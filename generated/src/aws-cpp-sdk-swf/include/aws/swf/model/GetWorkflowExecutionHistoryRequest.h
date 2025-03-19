/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/WorkflowExecution.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class GetWorkflowExecutionHistoryRequest : public SWFRequest
  {
  public:
    AWS_SWF_API GetWorkflowExecutionHistoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflowExecutionHistory"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain containing the workflow execution.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    GetWorkflowExecutionHistoryRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the workflow execution for which to return the history.</p>
     */
    inline const WorkflowExecution& GetExecution() const { return m_execution; }
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }
    template<typename ExecutionT = WorkflowExecution>
    void SetExecution(ExecutionT&& value) { m_executionHasBeenSet = true; m_execution = std::forward<ExecutionT>(value); }
    template<typename ExecutionT = WorkflowExecution>
    GetWorkflowExecutionHistoryRequest& WithExecution(ExecutionT&& value) { SetExecution(std::forward<ExecutionT>(value)); return *this;}
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
    GetWorkflowExecutionHistoryRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p>
     */
    inline int GetMaximumPageSize() const { return m_maximumPageSize; }
    inline bool MaximumPageSizeHasBeenSet() const { return m_maximumPageSizeHasBeenSet; }
    inline void SetMaximumPageSize(int value) { m_maximumPageSizeHasBeenSet = true; m_maximumPageSize = value; }
    inline GetWorkflowExecutionHistoryRequest& WithMaximumPageSize(int value) { SetMaximumPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, returns the events in reverse order. By
     * default the results are returned in ascending order of the
     * <code>eventTimeStamp</code> of the events.</p>
     */
    inline bool GetReverseOrder() const { return m_reverseOrder; }
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }
    inline GetWorkflowExecutionHistoryRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    WorkflowExecution m_execution;
    bool m_executionHasBeenSet = false;

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
