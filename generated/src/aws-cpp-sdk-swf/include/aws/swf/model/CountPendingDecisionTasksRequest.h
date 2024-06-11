﻿/**
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
  class CountPendingDecisionTasksRequest : public SWFRequest
  {
  public:
    AWS_SWF_API CountPendingDecisionTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CountPendingDecisionTasks"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain that contains the task list.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline CountPendingDecisionTasksRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline CountPendingDecisionTasksRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline CountPendingDecisionTasksRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task list.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }
    inline CountPendingDecisionTasksRequest& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}
    inline CountPendingDecisionTasksRequest& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
