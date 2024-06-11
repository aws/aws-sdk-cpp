/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/snow-device-management/model/ExecutionState.h>
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
namespace SnowDeviceManagement
{
namespace Model
{
  class DescribeExecutionResult
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API DescribeExecutionResult();
    AWS_SNOWDEVICEMANAGEMENT_API DescribeExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWDEVICEMANAGEMENT_API DescribeExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }
    inline DescribeExecutionResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline DescribeExecutionResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline DescribeExecutionResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the status of the execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline DescribeExecutionResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline DescribeExecutionResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the managed device that the task is being executed on.</p>
     */
    inline const Aws::String& GetManagedDeviceId() const{ return m_managedDeviceId; }
    inline void SetManagedDeviceId(const Aws::String& value) { m_managedDeviceId = value; }
    inline void SetManagedDeviceId(Aws::String&& value) { m_managedDeviceId = std::move(value); }
    inline void SetManagedDeviceId(const char* value) { m_managedDeviceId.assign(value); }
    inline DescribeExecutionResult& WithManagedDeviceId(const Aws::String& value) { SetManagedDeviceId(value); return *this;}
    inline DescribeExecutionResult& WithManagedDeviceId(Aws::String&& value) { SetManagedDeviceId(std::move(value)); return *this;}
    inline DescribeExecutionResult& WithManagedDeviceId(const char* value) { SetManagedDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the execution began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline DescribeExecutionResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline DescribeExecutionResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the execution.</p>
     */
    inline const ExecutionState& GetState() const{ return m_state; }
    inline void SetState(const ExecutionState& value) { m_state = value; }
    inline void SetState(ExecutionState&& value) { m_state = std::move(value); }
    inline DescribeExecutionResult& WithState(const ExecutionState& value) { SetState(value); return *this;}
    inline DescribeExecutionResult& WithState(ExecutionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the task being executed on the device.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline DescribeExecutionResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline DescribeExecutionResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline DescribeExecutionResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_executionId;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_managedDeviceId;

    Aws::Utils::DateTime m_startedAt;

    ExecutionState m_state;

    Aws::String m_taskId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
