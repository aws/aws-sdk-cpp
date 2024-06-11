/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
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
namespace SSM
{
namespace Model
{
  class GetMaintenanceWindowExecutionResult
  {
  public:
    AWS_SSM_API GetMaintenanceWindowExecutionResult();
    AWS_SSM_API GetMaintenanceWindowExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetMaintenanceWindowExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the maintenance window execution.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionId = value; }
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionId = std::move(value); }
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionId.assign(value); }
    inline GetMaintenanceWindowExecutionResult& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}
    inline GetMaintenanceWindowExecutionResult& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionResult& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the task executions from the maintenance window execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskIds() const{ return m_taskIds; }
    inline void SetTaskIds(const Aws::Vector<Aws::String>& value) { m_taskIds = value; }
    inline void SetTaskIds(Aws::Vector<Aws::String>&& value) { m_taskIds = std::move(value); }
    inline GetMaintenanceWindowExecutionResult& WithTaskIds(const Aws::Vector<Aws::String>& value) { SetTaskIds(value); return *this;}
    inline GetMaintenanceWindowExecutionResult& WithTaskIds(Aws::Vector<Aws::String>&& value) { SetTaskIds(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionResult& AddTaskIds(const Aws::String& value) { m_taskIds.push_back(value); return *this; }
    inline GetMaintenanceWindowExecutionResult& AddTaskIds(Aws::String&& value) { m_taskIds.push_back(std::move(value)); return *this; }
    inline GetMaintenanceWindowExecutionResult& AddTaskIds(const char* value) { m_taskIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the maintenance window execution.</p>
     */
    inline const MaintenanceWindowExecutionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const MaintenanceWindowExecutionStatus& value) { m_status = value; }
    inline void SetStatus(MaintenanceWindowExecutionStatus&& value) { m_status = std::move(value); }
    inline GetMaintenanceWindowExecutionResult& WithStatus(const MaintenanceWindowExecutionStatus& value) { SetStatus(value); return *this;}
    inline GetMaintenanceWindowExecutionResult& WithStatus(MaintenanceWindowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details explaining the status. Not available for all status values.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetails = value; }
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetails = std::move(value); }
    inline void SetStatusDetails(const char* value) { m_statusDetails.assign(value); }
    inline GetMaintenanceWindowExecutionResult& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}
    inline GetMaintenanceWindowExecutionResult& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionResult& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the maintenance window started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetMaintenanceWindowExecutionResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetMaintenanceWindowExecutionResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the maintenance window finished running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetMaintenanceWindowExecutionResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetMaintenanceWindowExecutionResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMaintenanceWindowExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMaintenanceWindowExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_windowExecutionId;

    Aws::Vector<Aws::String> m_taskIds;

    MaintenanceWindowExecutionStatus m_status;

    Aws::String m_statusDetails;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
