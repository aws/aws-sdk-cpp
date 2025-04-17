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
    AWS_OMICS_API TaskListItem() = default;
    AWS_OMICS_API TaskListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API TaskListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The task's ID.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    TaskListItem& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's status.</p>
     */
    inline TaskStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TaskListItem& WithStatus(TaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TaskListItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's CPU count.</p>
     */
    inline int GetCpus() const { return m_cpus; }
    inline bool CpusHasBeenSet() const { return m_cpusHasBeenSet; }
    inline void SetCpus(int value) { m_cpusHasBeenSet = true; m_cpus = value; }
    inline TaskListItem& WithCpus(int value) { SetCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to true if Amazon Web Services HealthOmics found a matching entry in the
     * run cache for this task.</p>
     */
    inline bool GetCacheHit() const { return m_cacheHit; }
    inline bool CacheHitHasBeenSet() const { return m_cacheHitHasBeenSet; }
    inline void SetCacheHit(bool value) { m_cacheHitHasBeenSet = true; m_cacheHit = value; }
    inline TaskListItem& WithCacheHit(bool value) { SetCacheHit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of the cache location.</p>
     */
    inline const Aws::String& GetCacheS3Uri() const { return m_cacheS3Uri; }
    inline bool CacheS3UriHasBeenSet() const { return m_cacheS3UriHasBeenSet; }
    template<typename CacheS3UriT = Aws::String>
    void SetCacheS3Uri(CacheS3UriT&& value) { m_cacheS3UriHasBeenSet = true; m_cacheS3Uri = std::forward<CacheS3UriT>(value); }
    template<typename CacheS3UriT = Aws::String>
    TaskListItem& WithCacheS3Uri(CacheS3UriT&& value) { SetCacheS3Uri(std::forward<CacheS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's memory use in gigabyes.</p>
     */
    inline int GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline TaskListItem& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TaskListItem& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    TaskListItem& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the task stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const { return m_stopTime; }
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }
    template<typename StopTimeT = Aws::Utils::DateTime>
    void SetStopTime(StopTimeT&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::forward<StopTimeT>(value); }
    template<typename StopTimeT = Aws::Utils::DateTime>
    TaskListItem& WithStopTime(StopTimeT&& value) { SetStopTime(std::forward<StopTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of Graphics Processing Units (GPU) specified for the task. </p>
     */
    inline int GetGpus() const { return m_gpus; }
    inline bool GpusHasBeenSet() const { return m_gpusHasBeenSet; }
    inline void SetGpus(int value) { m_gpusHasBeenSet = true; m_gpus = value; }
    inline TaskListItem& WithGpus(int value) { SetGpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance type for a task.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    TaskListItem& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    TaskStatus m_status{TaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_cpus{0};
    bool m_cpusHasBeenSet = false;

    bool m_cacheHit{false};
    bool m_cacheHitHasBeenSet = false;

    Aws::String m_cacheS3Uri;
    bool m_cacheS3UriHasBeenSet = false;

    int m_memory{0};
    bool m_memoryHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime{};
    bool m_stopTimeHasBeenSet = false;

    int m_gpus{0};
    bool m_gpusHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
