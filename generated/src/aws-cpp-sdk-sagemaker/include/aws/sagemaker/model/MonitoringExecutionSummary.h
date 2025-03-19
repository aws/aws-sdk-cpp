/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ExecutionStatus.h>
#include <aws/sagemaker/model/MonitoringType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Summary of information about the last monitoring job to run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringExecutionSummary">AWS
   * API Reference</a></p>
   */
  class MonitoringExecutionSummary
  {
  public:
    AWS_SAGEMAKER_API MonitoringExecutionSummary() = default;
    AWS_SAGEMAKER_API MonitoringExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const { return m_monitoringScheduleName; }
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }
    template<typename MonitoringScheduleNameT = Aws::String>
    void SetMonitoringScheduleName(MonitoringScheduleNameT&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::forward<MonitoringScheduleNameT>(value); }
    template<typename MonitoringScheduleNameT = Aws::String>
    MonitoringExecutionSummary& WithMonitoringScheduleName(MonitoringScheduleNameT&& value) { SetMonitoringScheduleName(std::forward<MonitoringScheduleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the monitoring job was scheduled.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTime() const { return m_scheduledTime; }
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }
    template<typename ScheduledTimeT = Aws::Utils::DateTime>
    void SetScheduledTime(ScheduledTimeT&& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = std::forward<ScheduledTimeT>(value); }
    template<typename ScheduledTimeT = Aws::Utils::DateTime>
    MonitoringExecutionSummary& WithScheduledTime(ScheduledTimeT&& value) { SetScheduledTime(std::forward<ScheduledTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the monitoring job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MonitoringExecutionSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates the last time the monitoring job was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    MonitoringExecutionSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the monitoring job.</p>
     */
    inline ExecutionStatus GetMonitoringExecutionStatus() const { return m_monitoringExecutionStatus; }
    inline bool MonitoringExecutionStatusHasBeenSet() const { return m_monitoringExecutionStatusHasBeenSet; }
    inline void SetMonitoringExecutionStatus(ExecutionStatus value) { m_monitoringExecutionStatusHasBeenSet = true; m_monitoringExecutionStatus = value; }
    inline MonitoringExecutionSummary& WithMonitoringExecutionStatus(ExecutionStatus value) { SetMonitoringExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline const Aws::String& GetProcessingJobArn() const { return m_processingJobArn; }
    inline bool ProcessingJobArnHasBeenSet() const { return m_processingJobArnHasBeenSet; }
    template<typename ProcessingJobArnT = Aws::String>
    void SetProcessingJobArn(ProcessingJobArnT&& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = std::forward<ProcessingJobArnT>(value); }
    template<typename ProcessingJobArnT = Aws::String>
    MonitoringExecutionSummary& WithProcessingJobArn(ProcessingJobArnT&& value) { SetProcessingJobArn(std::forward<ProcessingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint used to run the monitoring job.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    MonitoringExecutionSummary& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the reason a monitoring job failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    MonitoringExecutionSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the monitoring job.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionName() const { return m_monitoringJobDefinitionName; }
    inline bool MonitoringJobDefinitionNameHasBeenSet() const { return m_monitoringJobDefinitionNameHasBeenSet; }
    template<typename MonitoringJobDefinitionNameT = Aws::String>
    void SetMonitoringJobDefinitionName(MonitoringJobDefinitionNameT&& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = std::forward<MonitoringJobDefinitionNameT>(value); }
    template<typename MonitoringJobDefinitionNameT = Aws::String>
    MonitoringExecutionSummary& WithMonitoringJobDefinitionName(MonitoringJobDefinitionNameT&& value) { SetMonitoringJobDefinitionName(std::forward<MonitoringJobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the monitoring job.</p>
     */
    inline MonitoringType GetMonitoringType() const { return m_monitoringType; }
    inline bool MonitoringTypeHasBeenSet() const { return m_monitoringTypeHasBeenSet; }
    inline void SetMonitoringType(MonitoringType value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = value; }
    inline MonitoringExecutionSummary& WithMonitoringType(MonitoringType value) { SetMonitoringType(value); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTime{};
    bool m_scheduledTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    ExecutionStatus m_monitoringExecutionStatus{ExecutionStatus::NOT_SET};
    bool m_monitoringExecutionStatusHasBeenSet = false;

    Aws::String m_processingJobArn;
    bool m_processingJobArnHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_monitoringJobDefinitionName;
    bool m_monitoringJobDefinitionNameHasBeenSet = false;

    MonitoringType m_monitoringType{MonitoringType::NOT_SET};
    bool m_monitoringTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
