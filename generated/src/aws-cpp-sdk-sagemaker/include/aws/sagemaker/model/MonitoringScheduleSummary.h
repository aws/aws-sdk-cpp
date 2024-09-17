/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ScheduleStatus.h>
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
   * <p>Summarizes the monitoring schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringScheduleSummary">AWS
   * API Reference</a></p>
   */
  class MonitoringScheduleSummary
  {
  public:
    AWS_SAGEMAKER_API MonitoringScheduleSummary();
    AWS_SAGEMAKER_API MonitoringScheduleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringScheduleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }
    inline MonitoringScheduleSummary& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}
    inline MonitoringScheduleSummary& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}
    inline MonitoringScheduleSummary& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const{ return m_monitoringScheduleArn; }
    inline bool MonitoringScheduleArnHasBeenSet() const { return m_monitoringScheduleArnHasBeenSet; }
    inline void SetMonitoringScheduleArn(const Aws::String& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = value; }
    inline void SetMonitoringScheduleArn(Aws::String&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::move(value); }
    inline void SetMonitoringScheduleArn(const char* value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn.assign(value); }
    inline MonitoringScheduleSummary& WithMonitoringScheduleArn(const Aws::String& value) { SetMonitoringScheduleArn(value); return *this;}
    inline MonitoringScheduleSummary& WithMonitoringScheduleArn(Aws::String&& value) { SetMonitoringScheduleArn(std::move(value)); return *this;}
    inline MonitoringScheduleSummary& WithMonitoringScheduleArn(const char* value) { SetMonitoringScheduleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the monitoring schedule.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline MonitoringScheduleSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline MonitoringScheduleSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the monitoring schedule was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline MonitoringScheduleSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline MonitoringScheduleSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline const ScheduleStatus& GetMonitoringScheduleStatus() const{ return m_monitoringScheduleStatus; }
    inline bool MonitoringScheduleStatusHasBeenSet() const { return m_monitoringScheduleStatusHasBeenSet; }
    inline void SetMonitoringScheduleStatus(const ScheduleStatus& value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = value; }
    inline void SetMonitoringScheduleStatus(ScheduleStatus&& value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = std::move(value); }
    inline MonitoringScheduleSummary& WithMonitoringScheduleStatus(const ScheduleStatus& value) { SetMonitoringScheduleStatus(value); return *this;}
    inline MonitoringScheduleSummary& WithMonitoringScheduleStatus(ScheduleStatus&& value) { SetMonitoringScheduleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint using the monitoring schedule.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline MonitoringScheduleSummary& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline MonitoringScheduleSummary& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline MonitoringScheduleSummary& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the monitoring job definition that the schedule is for.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionName() const{ return m_monitoringJobDefinitionName; }
    inline bool MonitoringJobDefinitionNameHasBeenSet() const { return m_monitoringJobDefinitionNameHasBeenSet; }
    inline void SetMonitoringJobDefinitionName(const Aws::String& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = value; }
    inline void SetMonitoringJobDefinitionName(Aws::String&& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = std::move(value); }
    inline void SetMonitoringJobDefinitionName(const char* value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName.assign(value); }
    inline MonitoringScheduleSummary& WithMonitoringJobDefinitionName(const Aws::String& value) { SetMonitoringJobDefinitionName(value); return *this;}
    inline MonitoringScheduleSummary& WithMonitoringJobDefinitionName(Aws::String&& value) { SetMonitoringJobDefinitionName(std::move(value)); return *this;}
    inline MonitoringScheduleSummary& WithMonitoringJobDefinitionName(const char* value) { SetMonitoringJobDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the monitoring job definition that the schedule is for.</p>
     */
    inline const MonitoringType& GetMonitoringType() const{ return m_monitoringType; }
    inline bool MonitoringTypeHasBeenSet() const { return m_monitoringTypeHasBeenSet; }
    inline void SetMonitoringType(const MonitoringType& value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = value; }
    inline void SetMonitoringType(MonitoringType&& value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = std::move(value); }
    inline MonitoringScheduleSummary& WithMonitoringType(const MonitoringType& value) { SetMonitoringType(value); return *this;}
    inline MonitoringScheduleSummary& WithMonitoringType(MonitoringType&& value) { SetMonitoringType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::String m_monitoringScheduleArn;
    bool m_monitoringScheduleArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    ScheduleStatus m_monitoringScheduleStatus;
    bool m_monitoringScheduleStatusHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_monitoringJobDefinitionName;
    bool m_monitoringJobDefinitionNameHasBeenSet = false;

    MonitoringType m_monitoringType;
    bool m_monitoringTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
