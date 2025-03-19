/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ScheduleStatus.h>
#include <aws/sagemaker/model/MonitoringType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/MonitoringScheduleConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/MonitoringExecutionSummary.h>
#include <aws/sagemaker/model/BatchTransformInput.h>
#include <aws/sagemaker/model/MonitoringAlertSummary.h>
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
   * <p>A monitoring schedule for a model displayed in the Amazon SageMaker Model
   * Dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDashboardMonitoringSchedule">AWS
   * API Reference</a></p>
   */
  class ModelDashboardMonitoringSchedule
  {
  public:
    AWS_SAGEMAKER_API ModelDashboardMonitoringSchedule() = default;
    AWS_SAGEMAKER_API ModelDashboardMonitoringSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDashboardMonitoringSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const { return m_monitoringScheduleArn; }
    inline bool MonitoringScheduleArnHasBeenSet() const { return m_monitoringScheduleArnHasBeenSet; }
    template<typename MonitoringScheduleArnT = Aws::String>
    void SetMonitoringScheduleArn(MonitoringScheduleArnT&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::forward<MonitoringScheduleArnT>(value); }
    template<typename MonitoringScheduleArnT = Aws::String>
    ModelDashboardMonitoringSchedule& WithMonitoringScheduleArn(MonitoringScheduleArnT&& value) { SetMonitoringScheduleArn(std::forward<MonitoringScheduleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const { return m_monitoringScheduleName; }
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }
    template<typename MonitoringScheduleNameT = Aws::String>
    void SetMonitoringScheduleName(MonitoringScheduleNameT&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::forward<MonitoringScheduleNameT>(value); }
    template<typename MonitoringScheduleNameT = Aws::String>
    ModelDashboardMonitoringSchedule& WithMonitoringScheduleName(MonitoringScheduleNameT&& value) { SetMonitoringScheduleName(std::forward<MonitoringScheduleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline ScheduleStatus GetMonitoringScheduleStatus() const { return m_monitoringScheduleStatus; }
    inline bool MonitoringScheduleStatusHasBeenSet() const { return m_monitoringScheduleStatusHasBeenSet; }
    inline void SetMonitoringScheduleStatus(ScheduleStatus value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = value; }
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleStatus(ScheduleStatus value) { SetMonitoringScheduleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitor type of a model monitor.</p>
     */
    inline MonitoringType GetMonitoringType() const { return m_monitoringType; }
    inline bool MonitoringTypeHasBeenSet() const { return m_monitoringTypeHasBeenSet; }
    inline void SetMonitoringType(MonitoringType value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = value; }
    inline ModelDashboardMonitoringSchedule& WithMonitoringType(MonitoringType value) { SetMonitoringType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a monitoring job failed, provides the reason.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    ModelDashboardMonitoringSchedule& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the monitoring schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ModelDashboardMonitoringSchedule& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the monitoring schedule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ModelDashboardMonitoringSchedule& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringScheduleConfig& GetMonitoringScheduleConfig() const { return m_monitoringScheduleConfig; }
    inline bool MonitoringScheduleConfigHasBeenSet() const { return m_monitoringScheduleConfigHasBeenSet; }
    template<typename MonitoringScheduleConfigT = MonitoringScheduleConfig>
    void SetMonitoringScheduleConfig(MonitoringScheduleConfigT&& value) { m_monitoringScheduleConfigHasBeenSet = true; m_monitoringScheduleConfig = std::forward<MonitoringScheduleConfigT>(value); }
    template<typename MonitoringScheduleConfigT = MonitoringScheduleConfig>
    ModelDashboardMonitoringSchedule& WithMonitoringScheduleConfig(MonitoringScheduleConfigT&& value) { SetMonitoringScheduleConfig(std::forward<MonitoringScheduleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint which is monitored.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    ModelDashboardMonitoringSchedule& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline const Aws::Vector<MonitoringAlertSummary>& GetMonitoringAlertSummaries() const { return m_monitoringAlertSummaries; }
    inline bool MonitoringAlertSummariesHasBeenSet() const { return m_monitoringAlertSummariesHasBeenSet; }
    template<typename MonitoringAlertSummariesT = Aws::Vector<MonitoringAlertSummary>>
    void SetMonitoringAlertSummaries(MonitoringAlertSummariesT&& value) { m_monitoringAlertSummariesHasBeenSet = true; m_monitoringAlertSummaries = std::forward<MonitoringAlertSummariesT>(value); }
    template<typename MonitoringAlertSummariesT = Aws::Vector<MonitoringAlertSummary>>
    ModelDashboardMonitoringSchedule& WithMonitoringAlertSummaries(MonitoringAlertSummariesT&& value) { SetMonitoringAlertSummaries(std::forward<MonitoringAlertSummariesT>(value)); return *this;}
    template<typename MonitoringAlertSummariesT = MonitoringAlertSummary>
    ModelDashboardMonitoringSchedule& AddMonitoringAlertSummaries(MonitoringAlertSummariesT&& value) { m_monitoringAlertSummariesHasBeenSet = true; m_monitoringAlertSummaries.emplace_back(std::forward<MonitoringAlertSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const MonitoringExecutionSummary& GetLastMonitoringExecutionSummary() const { return m_lastMonitoringExecutionSummary; }
    inline bool LastMonitoringExecutionSummaryHasBeenSet() const { return m_lastMonitoringExecutionSummaryHasBeenSet; }
    template<typename LastMonitoringExecutionSummaryT = MonitoringExecutionSummary>
    void SetLastMonitoringExecutionSummary(LastMonitoringExecutionSummaryT&& value) { m_lastMonitoringExecutionSummaryHasBeenSet = true; m_lastMonitoringExecutionSummary = std::forward<LastMonitoringExecutionSummaryT>(value); }
    template<typename LastMonitoringExecutionSummaryT = MonitoringExecutionSummary>
    ModelDashboardMonitoringSchedule& WithLastMonitoringExecutionSummary(LastMonitoringExecutionSummaryT&& value) { SetLastMonitoringExecutionSummary(std::forward<LastMonitoringExecutionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BatchTransformInput& GetBatchTransformInput() const { return m_batchTransformInput; }
    inline bool BatchTransformInputHasBeenSet() const { return m_batchTransformInputHasBeenSet; }
    template<typename BatchTransformInputT = BatchTransformInput>
    void SetBatchTransformInput(BatchTransformInputT&& value) { m_batchTransformInputHasBeenSet = true; m_batchTransformInput = std::forward<BatchTransformInputT>(value); }
    template<typename BatchTransformInputT = BatchTransformInput>
    ModelDashboardMonitoringSchedule& WithBatchTransformInput(BatchTransformInputT&& value) { SetBatchTransformInput(std::forward<BatchTransformInputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleArn;
    bool m_monitoringScheduleArnHasBeenSet = false;

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    ScheduleStatus m_monitoringScheduleStatus{ScheduleStatus::NOT_SET};
    bool m_monitoringScheduleStatusHasBeenSet = false;

    MonitoringType m_monitoringType{MonitoringType::NOT_SET};
    bool m_monitoringTypeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    MonitoringScheduleConfig m_monitoringScheduleConfig;
    bool m_monitoringScheduleConfigHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::Vector<MonitoringAlertSummary> m_monitoringAlertSummaries;
    bool m_monitoringAlertSummariesHasBeenSet = false;

    MonitoringExecutionSummary m_lastMonitoringExecutionSummary;
    bool m_lastMonitoringExecutionSummaryHasBeenSet = false;

    BatchTransformInput m_batchTransformInput;
    bool m_batchTransformInputHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
