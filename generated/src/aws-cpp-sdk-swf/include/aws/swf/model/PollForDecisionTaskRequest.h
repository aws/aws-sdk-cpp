/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class PollForDecisionTaskRequest : public SWFRequest
  {
  public:
    AWS_SWF_API PollForDecisionTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PollForDecisionTask"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain containing the task lists to poll.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    PollForDecisionTaskRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the task list to poll for decision tasks.</p> <p>The specified
     * string must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must
     * <i>not</i> be the literal string <code>arn</code>.</p>
     */
    inline const TaskList& GetTaskList() const { return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    template<typename TaskListT = TaskList>
    void SetTaskList(TaskListT&& value) { m_taskListHasBeenSet = true; m_taskList = std::forward<TaskListT>(value); }
    template<typename TaskListT = TaskList>
    PollForDecisionTaskRequest& WithTaskList(TaskListT&& value) { SetTaskList(std::forward<TaskListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identity of the decider making the request, which is recorded in the
     * DecisionTaskStarted event in the workflow history. This enables diagnostic
     * tracing when problems arise. The form of this identity is user defined.</p>
     */
    inline const Aws::String& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Aws::String>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Aws::String>
    PollForDecisionTaskRequest& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
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
     * returned in a single call. </p>  <p>The <code>nextPageToken</code>
     * returned by this action cannot be used with <a>GetWorkflowExecutionHistory</a>
     * to get the next page. You must call <a>PollForDecisionTask</a> again (with the
     * <code>nextPageToken</code>) to retrieve the next page of history records.
     * Calling <a>PollForDecisionTask</a> with a <code>nextPageToken</code> doesn't
     * return a new decision task.</p> 
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    PollForDecisionTaskRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p> <p>This is
     * an upper limit only; the actual number of results returned per call may be fewer
     * than the specified maximum.</p>
     */
    inline int GetMaximumPageSize() const { return m_maximumPageSize; }
    inline bool MaximumPageSizeHasBeenSet() const { return m_maximumPageSizeHasBeenSet; }
    inline void SetMaximumPageSize(int value) { m_maximumPageSizeHasBeenSet = true; m_maximumPageSize = value; }
    inline PollForDecisionTaskRequest& WithMaximumPageSize(int value) { SetMaximumPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, returns the events in reverse order. By
     * default the results are returned in ascending order of the
     * <code>eventTimestamp</code> of the events.</p>
     */
    inline bool GetReverseOrder() const { return m_reverseOrder; }
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }
    inline PollForDecisionTaskRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, returns the events with
     * <code>eventTimestamp</code> greater than or equal to <code>eventTimestamp</code>
     * of the most recent <code>DecisionTaskStarted</code> event. By default, this
     * parameter is set to <code>false</code>.</p>
     */
    inline bool GetStartAtPreviousStartedEvent() const { return m_startAtPreviousStartedEvent; }
    inline bool StartAtPreviousStartedEventHasBeenSet() const { return m_startAtPreviousStartedEventHasBeenSet; }
    inline void SetStartAtPreviousStartedEvent(bool value) { m_startAtPreviousStartedEventHasBeenSet = true; m_startAtPreviousStartedEvent = value; }
    inline PollForDecisionTaskRequest& WithStartAtPreviousStartedEvent(bool value) { SetStartAtPreviousStartedEvent(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_maximumPageSize{0};
    bool m_maximumPageSizeHasBeenSet = false;

    bool m_reverseOrder{false};
    bool m_reverseOrderHasBeenSet = false;

    bool m_startAtPreviousStartedEvent{false};
    bool m_startAtPreviousStartedEventHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
