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
  class PollForActivityTaskRequest : public SWFRequest
  {
  public:
    AWS_SWF_API PollForActivityTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PollForActivityTask"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain that contains the task lists being polled.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    PollForActivityTaskRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the task list to poll for activity tasks.</p> <p>The specified
     * string must not start or end with whitespace. It must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must <i>not</i> be the literal string
     * <code>arn</code>.</p>
     */
    inline const TaskList& GetTaskList() const { return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    template<typename TaskListT = TaskList>
    void SetTaskList(TaskListT&& value) { m_taskListHasBeenSet = true; m_taskList = std::forward<TaskListT>(value); }
    template<typename TaskListT = TaskList>
    PollForActivityTaskRequest& WithTaskList(TaskListT&& value) { SetTaskList(std::forward<TaskListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identity of the worker making the request, recorded in the
     * <code>ActivityTaskStarted</code> event in the workflow history. This enables
     * diagnostic tracing when problems arise. The form of this identity is user
     * defined.</p>
     */
    inline const Aws::String& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Aws::String>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Aws::String>
    PollForActivityTaskRequest& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
