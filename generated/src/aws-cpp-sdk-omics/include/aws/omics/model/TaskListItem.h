/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/TaskStatus.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A workflow run task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/TaskListItem">AWS
   * API Reference</a></p>
   */
  class TaskListItem
  {
  public:
    AWS_OMICS_API TaskListItem();
    AWS_OMICS_API TaskListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API TaskListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The task's CPU count.</p>
     */
    inline int GetCpus() const{ return m_cpus; }

    /**
     * <p>The task's CPU count.</p>
     */
    inline bool CpusHasBeenSet() const { return m_cpusHasBeenSet; }

    /**
     * <p>The task's CPU count.</p>
     */
    inline void SetCpus(int value) { m_cpusHasBeenSet = true; m_cpus = value; }

    /**
     * <p>The task's CPU count.</p>
     */
    inline TaskListItem& WithCpus(int value) { SetCpus(value); return *this;}


    /**
     * <p>When the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the task was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the task was created.</p>
     */
    inline TaskListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the task was created.</p>
     */
    inline TaskListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The task's memory.</p>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p>The task's memory.</p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The task's memory.</p>
     */
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The task's memory.</p>
     */
    inline TaskListItem& WithMemory(int value) { SetMemory(value); return *this;}


    /**
     * <p>The task's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The task's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The task's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The task's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The task's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The task's name.</p>
     */
    inline TaskListItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The task's name.</p>
     */
    inline TaskListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The task's name.</p>
     */
    inline TaskListItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>When the task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>When the task started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>When the task started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>When the task started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>When the task started.</p>
     */
    inline TaskListItem& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>When the task started.</p>
     */
    inline TaskListItem& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The task's status.</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The task's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The task's status.</p>
     */
    inline void SetStatus(const TaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The task's status.</p>
     */
    inline void SetStatus(TaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The task's status.</p>
     */
    inline TaskListItem& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The task's status.</p>
     */
    inline TaskListItem& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the task stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }

    /**
     * <p>When the task stopped.</p>
     */
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }

    /**
     * <p>When the task stopped.</p>
     */
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTimeHasBeenSet = true; m_stopTime = value; }

    /**
     * <p>When the task stopped.</p>
     */
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::move(value); }

    /**
     * <p>When the task stopped.</p>
     */
    inline TaskListItem& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}

    /**
     * <p>When the task stopped.</p>
     */
    inline TaskListItem& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}


    /**
     * <p>The task's ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The task's ID.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The task's ID.</p>
     */
    inline TaskListItem& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The task's ID.</p>
     */
    inline TaskListItem& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The task's ID.</p>
     */
    inline TaskListItem& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    int m_cpus;
    bool m_cpusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    int m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    TaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime;
    bool m_stopTimeHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
