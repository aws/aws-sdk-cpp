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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Omics
{
namespace Model
{
  class GetRunTaskResult
  {
  public:
    AWS_OMICS_API GetRunTaskResult();
    AWS_OMICS_API GetRunTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetRunTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The task's ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline GetRunTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline GetRunTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline GetRunTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's status.</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TaskStatus& value) { m_status = value; }
    inline void SetStatus(TaskStatus&& value) { m_status = std::move(value); }
    inline GetRunTaskResult& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}
    inline GetRunTaskResult& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetRunTaskResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetRunTaskResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetRunTaskResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's CPU usage.</p>
     */
    inline int GetCpus() const{ return m_cpus; }
    inline void SetCpus(int value) { m_cpus = value; }
    inline GetRunTaskResult& WithCpus(int value) { SetCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to true if AWS HealthOmics found a matching entry in the run cache for
     * this task.</p>
     */
    inline bool GetCacheHit() const{ return m_cacheHit; }
    inline void SetCacheHit(bool value) { m_cacheHit = value; }
    inline GetRunTaskResult& WithCacheHit(bool value) { SetCacheHit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of the cache location.</p>
     */
    inline const Aws::String& GetCacheS3Uri() const{ return m_cacheS3Uri; }
    inline void SetCacheS3Uri(const Aws::String& value) { m_cacheS3Uri = value; }
    inline void SetCacheS3Uri(Aws::String&& value) { m_cacheS3Uri = std::move(value); }
    inline void SetCacheS3Uri(const char* value) { m_cacheS3Uri.assign(value); }
    inline GetRunTaskResult& WithCacheS3Uri(const Aws::String& value) { SetCacheS3Uri(value); return *this;}
    inline GetRunTaskResult& WithCacheS3Uri(Aws::String&& value) { SetCacheS3Uri(std::move(value)); return *this;}
    inline GetRunTaskResult& WithCacheS3Uri(const char* value) { SetCacheS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's memory use in gigabytes.</p>
     */
    inline int GetMemory() const{ return m_memory; }
    inline void SetMemory(int value) { m_memory = value; }
    inline GetRunTaskResult& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetRunTaskResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetRunTaskResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetRunTaskResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetRunTaskResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTime = value; }
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTime = std::move(value); }
    inline GetRunTaskResult& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}
    inline GetRunTaskResult& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetRunTaskResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetRunTaskResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetRunTaskResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's log stream.</p>
     */
    inline const Aws::String& GetLogStream() const{ return m_logStream; }
    inline void SetLogStream(const Aws::String& value) { m_logStream = value; }
    inline void SetLogStream(Aws::String&& value) { m_logStream = std::move(value); }
    inline void SetLogStream(const char* value) { m_logStream.assign(value); }
    inline GetRunTaskResult& WithLogStream(const Aws::String& value) { SetLogStream(value); return *this;}
    inline GetRunTaskResult& WithLogStream(Aws::String&& value) { SetLogStream(std::move(value)); return *this;}
    inline GetRunTaskResult& WithLogStream(const char* value) { SetLogStream(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Graphics Processing Units (GPU) specified in the task.</p>
     */
    inline int GetGpus() const{ return m_gpus; }
    inline void SetGpus(int value) { m_gpus = value; }
    inline GetRunTaskResult& WithGpus(int value) { SetGpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for a task.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceType.assign(value); }
    inline GetRunTaskResult& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline GetRunTaskResult& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline GetRunTaskResult& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason a task has failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline GetRunTaskResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline GetRunTaskResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline GetRunTaskResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRunTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRunTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRunTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;

    TaskStatus m_status;

    Aws::String m_name;

    int m_cpus;

    bool m_cacheHit;

    Aws::String m_cacheS3Uri;

    int m_memory;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_stopTime;

    Aws::String m_statusMessage;

    Aws::String m_logStream;

    int m_gpus;

    Aws::String m_instanceType;

    Aws::String m_failureReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
