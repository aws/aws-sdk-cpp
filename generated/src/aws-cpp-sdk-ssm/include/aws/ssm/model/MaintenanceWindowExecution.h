/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes the information about an execution of a maintenance window.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowExecution">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowExecution
  {
  public:
    AWS_SSM_API MaintenanceWindowExecution();
    AWS_SSM_API MaintenanceWindowExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }
    inline MaintenanceWindowExecution& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline MaintenanceWindowExecution& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline MaintenanceWindowExecution& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the maintenance window execution.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }
    inline bool WindowExecutionIdHasBeenSet() const { return m_windowExecutionIdHasBeenSet; }
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = value; }
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = std::move(value); }
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId.assign(value); }
    inline MaintenanceWindowExecution& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}
    inline MaintenanceWindowExecution& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(std::move(value)); return *this;}
    inline MaintenanceWindowExecution& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the execution.</p>
     */
    inline const MaintenanceWindowExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MaintenanceWindowExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MaintenanceWindowExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MaintenanceWindowExecution& WithStatus(const MaintenanceWindowExecutionStatus& value) { SetStatus(value); return *this;}
    inline MaintenanceWindowExecution& WithStatus(MaintenanceWindowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details explaining the status. Not available for all status values.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }
    inline MaintenanceWindowExecution& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}
    inline MaintenanceWindowExecution& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}
    inline MaintenanceWindowExecution& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline MaintenanceWindowExecution& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline MaintenanceWindowExecution& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the execution finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline MaintenanceWindowExecution& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline MaintenanceWindowExecution& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_windowExecutionId;
    bool m_windowExecutionIdHasBeenSet = false;

    MaintenanceWindowExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
