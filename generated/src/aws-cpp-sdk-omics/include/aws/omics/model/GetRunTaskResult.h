/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ImageDetails.h>
#include <aws/omics/model/TaskStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {
class GetRunTaskResult {
 public:
  AWS_OMICS_API GetRunTaskResult() = default;
  AWS_OMICS_API GetRunTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OMICS_API GetRunTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The task's ID.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  GetRunTaskResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task's status.</p>
   */
  inline TaskStatus GetStatus() const { return m_status; }
  inline void SetStatus(TaskStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRunTaskResult& WithStatus(TaskStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task's name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetRunTaskResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task's CPU usage.</p>
   */
  inline int GetCpus() const { return m_cpus; }
  inline void SetCpus(int value) {
    m_cpusHasBeenSet = true;
    m_cpus = value;
  }
  inline GetRunTaskResult& WithCpus(int value) {
    SetCpus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true if Amazon Web Services HealthOmics found a matching entry in the
   * run cache for this task.</p>
   */
  inline bool GetCacheHit() const { return m_cacheHit; }
  inline void SetCacheHit(bool value) {
    m_cacheHitHasBeenSet = true;
    m_cacheHit = value;
  }
  inline GetRunTaskResult& WithCacheHit(bool value) {
    SetCacheHit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 URI of the cache location.</p>
   */
  inline const Aws::String& GetCacheS3Uri() const { return m_cacheS3Uri; }
  template <typename CacheS3UriT = Aws::String>
  void SetCacheS3Uri(CacheS3UriT&& value) {
    m_cacheS3UriHasBeenSet = true;
    m_cacheS3Uri = std::forward<CacheS3UriT>(value);
  }
  template <typename CacheS3UriT = Aws::String>
  GetRunTaskResult& WithCacheS3Uri(CacheS3UriT&& value) {
    SetCacheS3Uri(std::forward<CacheS3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task's memory use in gigabytes.</p>
   */
  inline int GetMemory() const { return m_memory; }
  inline void SetMemory(int value) {
    m_memoryHasBeenSet = true;
    m_memory = value;
  }
  inline GetRunTaskResult& WithMemory(int value) {
    SetMemory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the task was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  GetRunTaskResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task's start time.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetRunTaskResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task's stop time.</p>
   */
  inline const Aws::Utils::DateTime& GetStopTime() const { return m_stopTime; }
  template <typename StopTimeT = Aws::Utils::DateTime>
  void SetStopTime(StopTimeT&& value) {
    m_stopTimeHasBeenSet = true;
    m_stopTime = std::forward<StopTimeT>(value);
  }
  template <typename StopTimeT = Aws::Utils::DateTime>
  GetRunTaskResult& WithStopTime(StopTimeT&& value) {
    SetStopTime(std::forward<StopTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task's status message.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  GetRunTaskResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task's log stream.</p>
   */
  inline const Aws::String& GetLogStream() const { return m_logStream; }
  template <typename LogStreamT = Aws::String>
  void SetLogStream(LogStreamT&& value) {
    m_logStreamHasBeenSet = true;
    m_logStream = std::forward<LogStreamT>(value);
  }
  template <typename LogStreamT = Aws::String>
  GetRunTaskResult& WithLogStream(LogStreamT&& value) {
    SetLogStream(std::forward<LogStreamT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of Graphics Processing Units (GPU) specified in the task.</p>
   */
  inline int GetGpus() const { return m_gpus; }
  inline void SetGpus(int value) {
    m_gpusHasBeenSet = true;
    m_gpus = value;
  }
  inline GetRunTaskResult& WithGpus(int value) {
    SetGpus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance type for a task.</p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  GetRunTaskResult& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason a task has failed.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetRunTaskResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the container image that this task uses.</p>
   */
  inline const ImageDetails& GetImageDetails() const { return m_imageDetails; }
  template <typename ImageDetailsT = ImageDetails>
  void SetImageDetails(ImageDetailsT&& value) {
    m_imageDetailsHasBeenSet = true;
    m_imageDetails = std::forward<ImageDetailsT>(value);
  }
  template <typename ImageDetailsT = ImageDetails>
  GetRunTaskResult& WithImageDetails(ImageDetailsT&& value) {
    SetImageDetails(std::forward<ImageDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetRunTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_taskId;

  TaskStatus m_status{TaskStatus::NOT_SET};

  Aws::String m_name;

  int m_cpus{0};

  bool m_cacheHit{false};

  Aws::String m_cacheS3Uri;

  int m_memory{0};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_stopTime{};

  Aws::String m_statusMessage;

  Aws::String m_logStream;

  int m_gpus{0};

  Aws::String m_instanceType;

  Aws::String m_failureReason;

  ImageDetails m_imageDetails;

  Aws::String m_requestId;
  bool m_taskIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_cpusHasBeenSet = false;
  bool m_cacheHitHasBeenSet = false;
  bool m_cacheS3UriHasBeenSet = false;
  bool m_memoryHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_stopTimeHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_logStreamHasBeenSet = false;
  bool m_gpusHasBeenSet = false;
  bool m_instanceTypeHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_imageDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
