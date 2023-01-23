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
    AWS_SAGEMAKER_API ModelDashboardMonitoringSchedule();
    AWS_SAGEMAKER_API ModelDashboardMonitoringSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDashboardMonitoringSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const{ return m_monitoringScheduleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a monitoring schedule.</p>
     */
    inline bool MonitoringScheduleArnHasBeenSet() const { return m_monitoringScheduleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(const Aws::String& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(Aws::String&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(const char* value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a monitoring schedule.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleArn(const Aws::String& value) { SetMonitoringScheduleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a monitoring schedule.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleArn(Aws::String&& value) { SetMonitoringScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a monitoring schedule.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleArn(const char* value) { SetMonitoringScheduleArn(value); return *this;}


    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}


    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline const ScheduleStatus& GetMonitoringScheduleStatus() const{ return m_monitoringScheduleStatus; }

    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline bool MonitoringScheduleStatusHasBeenSet() const { return m_monitoringScheduleStatusHasBeenSet; }

    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleStatus(const ScheduleStatus& value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = value; }

    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleStatus(ScheduleStatus&& value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = std::move(value); }

    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleStatus(const ScheduleStatus& value) { SetMonitoringScheduleStatus(value); return *this;}

    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleStatus(ScheduleStatus&& value) { SetMonitoringScheduleStatus(std::move(value)); return *this;}


    /**
     * <p>The monitor type of a model monitor.</p>
     */
    inline const MonitoringType& GetMonitoringType() const{ return m_monitoringType; }

    /**
     * <p>The monitor type of a model monitor.</p>
     */
    inline bool MonitoringTypeHasBeenSet() const { return m_monitoringTypeHasBeenSet; }

    /**
     * <p>The monitor type of a model monitor.</p>
     */
    inline void SetMonitoringType(const MonitoringType& value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = value; }

    /**
     * <p>The monitor type of a model monitor.</p>
     */
    inline void SetMonitoringType(MonitoringType&& value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = std::move(value); }

    /**
     * <p>The monitor type of a model monitor.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringType(const MonitoringType& value) { SetMonitoringType(value); return *this;}

    /**
     * <p>The monitor type of a model monitor.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringType(MonitoringType&& value) { SetMonitoringType(std::move(value)); return *this;}


    /**
     * <p>If a monitoring job failed, provides the reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If a monitoring job failed, provides the reason.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If a monitoring job failed, provides the reason.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If a monitoring job failed, provides the reason.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If a monitoring job failed, provides the reason.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If a monitoring job failed, provides the reason.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If a monitoring job failed, provides the reason.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If a monitoring job failed, provides the reason.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>A timestamp that indicates when the monitoring schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that indicates when the monitoring schedule was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the monitoring schedule was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that indicates when the monitoring schedule was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the monitoring schedule was created.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the monitoring schedule was created.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the monitoring schedule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that indicates when the monitoring schedule was last updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the monitoring schedule was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that indicates when the monitoring schedule was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the monitoring schedule was last updated.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the monitoring schedule was last updated.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const MonitoringScheduleConfig& GetMonitoringScheduleConfig() const{ return m_monitoringScheduleConfig; }

    
    inline bool MonitoringScheduleConfigHasBeenSet() const { return m_monitoringScheduleConfigHasBeenSet; }

    
    inline void SetMonitoringScheduleConfig(const MonitoringScheduleConfig& value) { m_monitoringScheduleConfigHasBeenSet = true; m_monitoringScheduleConfig = value; }

    
    inline void SetMonitoringScheduleConfig(MonitoringScheduleConfig&& value) { m_monitoringScheduleConfigHasBeenSet = true; m_monitoringScheduleConfig = std::move(value); }

    
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleConfig(const MonitoringScheduleConfig& value) { SetMonitoringScheduleConfig(value); return *this;}

    
    inline ModelDashboardMonitoringSchedule& WithMonitoringScheduleConfig(MonitoringScheduleConfig&& value) { SetMonitoringScheduleConfig(std::move(value)); return *this;}


    /**
     * <p>The endpoint which is monitored.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The endpoint which is monitored.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The endpoint which is monitored.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The endpoint which is monitored.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The endpoint which is monitored.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The endpoint which is monitored.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The endpoint which is monitored.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The endpoint which is monitored.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline const Aws::Vector<MonitoringAlertSummary>& GetMonitoringAlertSummaries() const{ return m_monitoringAlertSummaries; }

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline bool MonitoringAlertSummariesHasBeenSet() const { return m_monitoringAlertSummariesHasBeenSet; }

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline void SetMonitoringAlertSummaries(const Aws::Vector<MonitoringAlertSummary>& value) { m_monitoringAlertSummariesHasBeenSet = true; m_monitoringAlertSummaries = value; }

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline void SetMonitoringAlertSummaries(Aws::Vector<MonitoringAlertSummary>&& value) { m_monitoringAlertSummariesHasBeenSet = true; m_monitoringAlertSummaries = std::move(value); }

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringAlertSummaries(const Aws::Vector<MonitoringAlertSummary>& value) { SetMonitoringAlertSummaries(value); return *this;}

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline ModelDashboardMonitoringSchedule& WithMonitoringAlertSummaries(Aws::Vector<MonitoringAlertSummary>&& value) { SetMonitoringAlertSummaries(std::move(value)); return *this;}

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline ModelDashboardMonitoringSchedule& AddMonitoringAlertSummaries(const MonitoringAlertSummary& value) { m_monitoringAlertSummariesHasBeenSet = true; m_monitoringAlertSummaries.push_back(value); return *this; }

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline ModelDashboardMonitoringSchedule& AddMonitoringAlertSummaries(MonitoringAlertSummary&& value) { m_monitoringAlertSummariesHasBeenSet = true; m_monitoringAlertSummaries.push_back(std::move(value)); return *this; }


    
    inline const MonitoringExecutionSummary& GetLastMonitoringExecutionSummary() const{ return m_lastMonitoringExecutionSummary; }

    
    inline bool LastMonitoringExecutionSummaryHasBeenSet() const { return m_lastMonitoringExecutionSummaryHasBeenSet; }

    
    inline void SetLastMonitoringExecutionSummary(const MonitoringExecutionSummary& value) { m_lastMonitoringExecutionSummaryHasBeenSet = true; m_lastMonitoringExecutionSummary = value; }

    
    inline void SetLastMonitoringExecutionSummary(MonitoringExecutionSummary&& value) { m_lastMonitoringExecutionSummaryHasBeenSet = true; m_lastMonitoringExecutionSummary = std::move(value); }

    
    inline ModelDashboardMonitoringSchedule& WithLastMonitoringExecutionSummary(const MonitoringExecutionSummary& value) { SetLastMonitoringExecutionSummary(value); return *this;}

    
    inline ModelDashboardMonitoringSchedule& WithLastMonitoringExecutionSummary(MonitoringExecutionSummary&& value) { SetLastMonitoringExecutionSummary(std::move(value)); return *this;}

  private:

    Aws::String m_monitoringScheduleArn;
    bool m_monitoringScheduleArnHasBeenSet = false;

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    ScheduleStatus m_monitoringScheduleStatus;
    bool m_monitoringScheduleStatusHasBeenSet = false;

    MonitoringType m_monitoringType;
    bool m_monitoringTypeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    MonitoringScheduleConfig m_monitoringScheduleConfig;
    bool m_monitoringScheduleConfigHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::Vector<MonitoringAlertSummary> m_monitoringAlertSummaries;
    bool m_monitoringAlertSummariesHasBeenSet = false;

    MonitoringExecutionSummary m_lastMonitoringExecutionSummary;
    bool m_lastMonitoringExecutionSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
