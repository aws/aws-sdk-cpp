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


    /**
     * <p>Context for the network operation task.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTaskContext() const{ return m_taskContext; }

    /**
     * <p>Context for the network operation task.</p>
     */
    inline bool TaskContextHasBeenSet() const { return m_taskContextHasBeenSet; }

    /**
     * <p>Context for the network operation task.</p>
     */
    inline void SetTaskContext(const Aws::Map<Aws::String, Aws::String>& value) { m_taskContextHasBeenSet = true; m_taskContext = value; }

    /**
     * <p>Context for the network operation task.</p>
     */
    inline void SetTaskContext(Aws::Map<Aws::String, Aws::String>&& value) { m_taskContextHasBeenSet = true; m_taskContext = std::move(value); }

    /**
     * <p>Context for the network operation task.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskContext(const Aws::Map<Aws::String, Aws::String>& value) { SetTaskContext(value); return *this;}

    /**
     * <p>Context for the network operation task.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskContext(Aws::Map<Aws::String, Aws::String>&& value) { SetTaskContext(std::move(value)); return *this;}

    /**
     * <p>Context for the network operation task.</p>
     */
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(const Aws::String& key, const Aws::String& value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(key, value); return *this; }

    /**
     * <p>Context for the network operation task.</p>
     */
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(Aws::String&& key, const Aws::String& value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Context for the network operation task.</p>
     */
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(const Aws::String& key, Aws::String&& value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Context for the network operation task.</p>
     */
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(Aws::String&& key, Aws::String&& value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Context for the network operation task.</p>
     */
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(const char* key, Aws::String&& value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Context for the network operation task.</p>
     */
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(Aws::String&& key, const char* value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Context for the network operation task.</p>
     */
    inline GetSolNetworkOperationTaskDetails& AddTaskContext(const char* key, const char* value) { m_taskContextHasBeenSet = true; m_taskContext.emplace(key, value); return *this; }


    /**
     * <p>Task end time.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskEndTime() const{ return m_taskEndTime; }

    /**
     * <p>Task end time.</p>
     */
    inline bool TaskEndTimeHasBeenSet() const { return m_taskEndTimeHasBeenSet; }

    /**
     * <p>Task end time.</p>
     */
    inline void SetTaskEndTime(const Aws::Utils::DateTime& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = value; }

    /**
     * <p>Task end time.</p>
     */
    inline void SetTaskEndTime(Aws::Utils::DateTime&& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = std::move(value); }

    /**
     * <p>Task end time.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskEndTime(const Aws::Utils::DateTime& value) { SetTaskEndTime(value); return *this;}

    /**
     * <p>Task end time.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskEndTime(Aws::Utils::DateTime&& value) { SetTaskEndTime(std::move(value)); return *this;}


    /**
     * <p>Task error details.</p>
     */
    inline const ErrorInfo& GetTaskErrorDetails() const{ return m_taskErrorDetails; }

    /**
     * <p>Task error details.</p>
     */
    inline bool TaskErrorDetailsHasBeenSet() const { return m_taskErrorDetailsHasBeenSet; }

    /**
     * <p>Task error details.</p>
     */
    inline void SetTaskErrorDetails(const ErrorInfo& value) { m_taskErrorDetailsHasBeenSet = true; m_taskErrorDetails = value; }

    /**
     * <p>Task error details.</p>
     */
    inline void SetTaskErrorDetails(ErrorInfo&& value) { m_taskErrorDetailsHasBeenSet = true; m_taskErrorDetails = std::move(value); }

    /**
     * <p>Task error details.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskErrorDetails(const ErrorInfo& value) { SetTaskErrorDetails(value); return *this;}

    /**
     * <p>Task error details.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskErrorDetails(ErrorInfo&& value) { SetTaskErrorDetails(std::move(value)); return *this;}


    /**
     * <p>Task name.</p>
     */
    inline const Aws::String& GetTaskName() const{ return m_taskName; }

    /**
     * <p>Task name.</p>
     */
    inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }

    /**
     * <p>Task name.</p>
     */
    inline void SetTaskName(const Aws::String& value) { m_taskNameHasBeenSet = true; m_taskName = value; }

    /**
     * <p>Task name.</p>
     */
    inline void SetTaskName(Aws::String&& value) { m_taskNameHasBeenSet = true; m_taskName = std::move(value); }

    /**
     * <p>Task name.</p>
     */
    inline void SetTaskName(const char* value) { m_taskNameHasBeenSet = true; m_taskName.assign(value); }

    /**
     * <p>Task name.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskName(const Aws::String& value) { SetTaskName(value); return *this;}

    /**
     * <p>Task name.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskName(Aws::String&& value) { SetTaskName(std::move(value)); return *this;}

    /**
     * <p>Task name.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskName(const char* value) { SetTaskName(value); return *this;}


    /**
     * <p>Task start time.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const{ return m_taskStartTime; }

    /**
     * <p>Task start time.</p>
     */
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }

    /**
     * <p>Task start time.</p>
     */
    inline void SetTaskStartTime(const Aws::Utils::DateTime& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = value; }

    /**
     * <p>Task start time.</p>
     */
    inline void SetTaskStartTime(Aws::Utils::DateTime&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::move(value); }

    /**
     * <p>Task start time.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskStartTime(const Aws::Utils::DateTime& value) { SetTaskStartTime(value); return *this;}

    /**
     * <p>Task start time.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskStartTime(Aws::Utils::DateTime&& value) { SetTaskStartTime(std::move(value)); return *this;}


    /**
     * <p>Task status.</p>
     */
    inline const TaskStatus& GetTaskStatus() const{ return m_taskStatus; }

    /**
     * <p>Task status.</p>
     */
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }

    /**
     * <p>Task status.</p>
     */
    inline void SetTaskStatus(const TaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }

    /**
     * <p>Task status.</p>
     */
    inline void SetTaskStatus(TaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }

    /**
     * <p>Task status.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskStatus(const TaskStatus& value) { SetTaskStatus(value); return *this;}

    /**
     * <p>Task status.</p>
     */
    inline GetSolNetworkOperationTaskDetails& WithTaskStatus(TaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}

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
