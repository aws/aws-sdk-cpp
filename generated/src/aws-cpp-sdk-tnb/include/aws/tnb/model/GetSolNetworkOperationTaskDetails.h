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
    AWS_TNB_API GetSolNetworkOperationTaskDetails() = default;
    AWS_TNB_API GetSolNetworkOperationTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolNetworkOperationTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Context for the network operation task.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTaskContext() const { return m_taskContext; }
    inline bool TaskContextHasBeenSet() const { return m_taskContextHasBeenSet; }
    template<typename TaskContextT = Aws::Map<Aws::String, Aws::String>>
    void SetTaskContext(TaskContextT&& value) { m_taskContextHasBeenSet = true; m_taskContext = std::forward<TaskContextT>(value); }
    template<typename TaskContextT = Aws::Map<Aws::String, Aws::String>>
    GetSolNetworkOperationTaskDetails& WithTaskContext(TaskContextT&& value) { SetTaskContext(std::forward<TaskContextT>(value)); return *this;}
    template<typename TaskContextKeyT = Aws::String, typename TaskContextValueT = Aws::String>
    GetSolNetworkOperationTaskDetails& AddTaskContext(TaskContextKeyT&& key, TaskContextValueT&& value) {
      m_taskContextHasBeenSet = true; m_taskContext.emplace(std::forward<TaskContextKeyT>(key), std::forward<TaskContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Task end time.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskEndTime() const { return m_taskEndTime; }
    inline bool TaskEndTimeHasBeenSet() const { return m_taskEndTimeHasBeenSet; }
    template<typename TaskEndTimeT = Aws::Utils::DateTime>
    void SetTaskEndTime(TaskEndTimeT&& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = std::forward<TaskEndTimeT>(value); }
    template<typename TaskEndTimeT = Aws::Utils::DateTime>
    GetSolNetworkOperationTaskDetails& WithTaskEndTime(TaskEndTimeT&& value) { SetTaskEndTime(std::forward<TaskEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Task error details.</p>
     */
    inline const ErrorInfo& GetTaskErrorDetails() const { return m_taskErrorDetails; }
    inline bool TaskErrorDetailsHasBeenSet() const { return m_taskErrorDetailsHasBeenSet; }
    template<typename TaskErrorDetailsT = ErrorInfo>
    void SetTaskErrorDetails(TaskErrorDetailsT&& value) { m_taskErrorDetailsHasBeenSet = true; m_taskErrorDetails = std::forward<TaskErrorDetailsT>(value); }
    template<typename TaskErrorDetailsT = ErrorInfo>
    GetSolNetworkOperationTaskDetails& WithTaskErrorDetails(TaskErrorDetailsT&& value) { SetTaskErrorDetails(std::forward<TaskErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Task name.</p>
     */
    inline const Aws::String& GetTaskName() const { return m_taskName; }
    inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
    template<typename TaskNameT = Aws::String>
    void SetTaskName(TaskNameT&& value) { m_taskNameHasBeenSet = true; m_taskName = std::forward<TaskNameT>(value); }
    template<typename TaskNameT = Aws::String>
    GetSolNetworkOperationTaskDetails& WithTaskName(TaskNameT&& value) { SetTaskName(std::forward<TaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Task start time.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const { return m_taskStartTime; }
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    void SetTaskStartTime(TaskStartTimeT&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::forward<TaskStartTimeT>(value); }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    GetSolNetworkOperationTaskDetails& WithTaskStartTime(TaskStartTimeT&& value) { SetTaskStartTime(std::forward<TaskStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Task status.</p>
     */
    inline TaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(TaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline GetSolNetworkOperationTaskDetails& WithTaskStatus(TaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_taskContext;
    bool m_taskContextHasBeenSet = false;

    Aws::Utils::DateTime m_taskEndTime{};
    bool m_taskEndTimeHasBeenSet = false;

    ErrorInfo m_taskErrorDetails;
    bool m_taskErrorDetailsHasBeenSet = false;

    Aws::String m_taskName;
    bool m_taskNameHasBeenSet = false;

    Aws::Utils::DateTime m_taskStartTime{};
    bool m_taskStartTimeHasBeenSet = false;

    TaskStatus m_taskStatus{TaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
