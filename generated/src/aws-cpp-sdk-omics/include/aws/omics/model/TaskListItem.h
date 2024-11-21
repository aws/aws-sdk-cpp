/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/TaskStatus.h>
#include <aws/core/utils/DateTime.h>
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


    ///@{
    /**
     * <p>The task's ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline TaskListItem& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline TaskListItem& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline TaskListItem& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's status.</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TaskListItem& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}
    inline TaskListItem& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TaskListItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TaskListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TaskListItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's CPU count.</p>
     */
    inline int GetCpus() const{ return m_cpus; }
    inline bool CpusHasBeenSet() const { return m_cpusHasBeenSet; }
    inline void SetCpus(int value) { m_cpusHasBeenSet = true; m_cpus = value; }
    inline TaskListItem& WithCpus(int value) { SetCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to true if AWS HealthOmics found a matching entry in the run cache for
     * this task.</p>
     */
    inline bool GetCacheHit() const{ return m_cacheHit; }
    inline bool CacheHitHasBeenSet() const { return m_cacheHitHasBeenSet; }
    inline void SetCacheHit(bool value) { m_cacheHitHasBeenSet = true; m_cacheHit = value; }
    inline TaskListItem& WithCacheHit(bool value) { SetCacheHit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of the cache location.</p>
     */
    inline const Aws::String& GetCacheS3Uri() const{ return m_cacheS3Uri; }
    inline bool CacheS3UriHasBeenSet() const { return m_cacheS3UriHasBeenSet; }
    inline void SetCacheS3Uri(const Aws::String& value) { m_cacheS3UriHasBeenSet = true; m_cacheS3Uri = value; }
    inline void SetCacheS3Uri(Aws::String&& value) { m_cacheS3UriHasBeenSet = true; m_cacheS3Uri = std::move(value); }
    inline void SetCacheS3Uri(const char* value) { m_cacheS3UriHasBeenSet = true; m_cacheS3Uri.assign(value); }
    inline TaskListItem& WithCacheS3Uri(const Aws::String& value) { SetCacheS3Uri(value); return *this;}
    inline TaskListItem& WithCacheS3Uri(Aws::String&& value) { SetCacheS3Uri(std::move(value)); return *this;}
    inline TaskListItem& WithCacheS3Uri(const char* value) { SetCacheS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's memory use in gigabyes.</p>
     */
    inline int GetMemory() const{ return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline TaskListItem& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TaskListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TaskListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline TaskListItem& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline TaskListItem& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the task stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTimeHasBeenSet = true; m_stopTime = value; }
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::move(value); }
    inline TaskListItem& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}
    inline TaskListItem& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of Graphics Processing Units (GPU) specified for the task. </p>
     */
    inline int GetGpus() const{ return m_gpus; }
    inline bool GpusHasBeenSet() const { return m_gpusHasBeenSet; }
    inline void SetGpus(int value) { m_gpusHasBeenSet = true; m_gpus = value; }
    inline TaskListItem& WithGpus(int value) { SetGpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance type for a task.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline TaskListItem& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline TaskListItem& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline TaskListItem& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    TaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_cpus;
    bool m_cpusHasBeenSet = false;

    bool m_cacheHit;
    bool m_cacheHitHasBeenSet = false;

    Aws::String m_cacheS3Uri;
    bool m_cacheS3UriHasBeenSet = false;

    int m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime;
    bool m_stopTimeHasBeenSet = false;

    int m_gpus;
    bool m_gpusHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
