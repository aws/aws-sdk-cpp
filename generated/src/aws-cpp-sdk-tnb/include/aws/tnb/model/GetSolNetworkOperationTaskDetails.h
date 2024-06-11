/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/tnb/model/ErrorInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/TaskStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace tnb
{
namespace Model
{

  /**
   * <p>Gets the details of a network operation.</p> <p>A network operation is any
   * operation that is done to your network, such as network instance instantiation
   * or termination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolNetworkOperationTaskDetails">AWS
   * API Reference</a></p>
   */
  class GetSolNetworkOperationTaskDetails
  {
  public:
    AWS_TNB_API GetSolNetworkOperationTaskDetails();
    AWS_TNB_API GetSolNetworkOperationTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolNetworkOperationTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Context for the network operation task.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTaskContext() const{ return m_taskContext; }
    inline bool TaskContextHasBeenSet() const { return m_taskContextHasBeenSet; }
    inline void SetTaskContext(const Aws::Map<Aws::String, Aws::String>& value) { m_taskContextHasBeenSet = true; m_taskContext = value; }
    inline void SetTaskContext(Aws::Map<Aws::String, Aws::String>&& value) { m_taskContextHasBeenSet = true; m_taskContext = std::move(value); }
    inline GetSolNetworkOperationTaskDetails& WithTaskContext(const Aws::Map<Aws::String, Aws::String>& value) { SetTaskContext(value); return *this;}
    inline GetSolNetworkOperationTaskDetails& WithTaskContext(Aws::Map<Aws::String, Aws::String>&& value) { SetTaskContext(std::move(value)); return *this;}
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(const Aws::String& key, const Aws::String& value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(key, value); return *this; }
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(Aws::String&& key, const Aws::String& value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(std::move(key), value); return *this; }
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(const Aws::String& key, Aws::String&& value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(key, std::move(value)); return *this; }
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(Aws::String&& key, Aws::String&& value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(std::move(key), std::move(value)); return *this; }
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(const char* key, Aws::String&& value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(key, std::move(value)); return *this; }
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(Aws::String&& key, const char* value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(std::move(key), value); return *this; }
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(const char* key, const char* value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Task end time.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskEndTime() const{ return m_taskEndTime; }
    inline bool TaskEndTimeHasBeenSet() const { return m_taskEndTimeHasBeenSet; }
    inline void SetTaskEndTime(const Aws::Utils::DateTime& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = value; }
    inline void SetTaskEndTime(Aws::Utils::DateTime&& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = std::move(value); }
    inline GetSolNetworkOperationTaskDetails& WithTaskEndTime(const Aws::Utils::DateTime& value) { SetTaskEndTime(value); return *this;}
    inline GetSolNetworkOperationTaskDetails& WithTaskEndTime(Aws::Utils::DateTime&& value) { SetTaskEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Task error details.</p>
     */
    inline const ErrorInfo& GetTaskErrorDetails() const{ return m_taskErrorDetails; }
    inline bool TaskErrorDetailsHasBeenSet() const { return m_taskErrorDetailsHasBeenSet; }
    inline void SetTaskErrorDetails(const ErrorInfo& value) { m_taskErrorDetailsHasBeenSet = true; m_taskErrorDetails = value; }
    inline void SetTaskErrorDetails(ErrorInfo&& value) { m_taskErrorDetailsHasBeenSet = true; m_taskErrorDetails = std::move(value); }
    inline GetSolNetworkOperationTaskDetails& WithTaskErrorDetails(const ErrorInfo& value) { SetTaskErrorDetails(value); return *this;}
    inline GetSolNetworkOperationTaskDetails& WithTaskErrorDetails(ErrorInfo&& value) { SetTaskErrorDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Task name.</p>
     */
    inline const Aws::String& GetTaskName() const{ return m_taskName; }
    inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
    inline void SetTaskName(const Aws::String& value) { m_taskNameHasBeenSet = true; m_taskName = value; }
    inline void SetTaskName(Aws::String&& value) { m_taskNameHasBeenSet = true; m_taskName = std::move(value); }
    inline void SetTaskName(const char* value) { m_taskNameHasBeenSet = true; m_taskName.assign(value); }
    inline GetSolNetworkOperationTaskDetails& WithTaskName(const Aws::String& value) { SetTaskName(value); return *this;}
    inline GetSolNetworkOperationTaskDetails& WithTaskName(Aws::String&& value) { SetTaskName(std::move(value)); return *this;}
    inline GetSolNetworkOperationTaskDetails& WithTaskName(const char* value) { SetTaskName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Task start time.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const{ return m_taskStartTime; }
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }
    inline void SetTaskStartTime(const Aws::Utils::DateTime& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = value; }
    inline void SetTaskStartTime(Aws::Utils::DateTime&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::move(value); }
    inline GetSolNetworkOperationTaskDetails& WithTaskStartTime(const Aws::Utils::DateTime& value) { SetTaskStartTime(value); return *this;}
    inline GetSolNetworkOperationTaskDetails& WithTaskStartTime(Aws::Utils::DateTime&& value) { SetTaskStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Task status.</p>
     */
    inline const TaskStatus& GetTaskStatus() const{ return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(const TaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline void SetTaskStatus(TaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }
    inline GetSolNetworkOperationTaskDetails& WithTaskStatus(const TaskStatus& value) { SetTaskStatus(value); return *this;}
    inline GetSolNetworkOperationTaskDetails& WithTaskStatus(TaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_taskContext;
    bool m_taskContextHasBeenSet = false;

    Aws::Utils::DateTime m_taskEndTime;
    bool m_taskEndTimeHasBeenSet = false;

    ErrorInfo m_taskErrorDetails;
    bool m_taskErrorDetailsHasBeenSet = false;

    Aws::String m_taskName;
    bool m_taskNameHasBeenSet = false;

    Aws::Utils::DateTime m_taskStartTime;
    bool m_taskStartTimeHasBeenSet = false;

    TaskStatus m_taskStatus;
    bool m_taskStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
