/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/MonitoringAlertStatus.h>
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
   * <p>Provides summary information of an alert's history.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringAlertHistorySummary">AWS
   * API Reference</a></p>
   */
  class MonitoringAlertHistorySummary
  {
  public:
    AWS_SAGEMAKER_API MonitoringAlertHistorySummary() = default;
    AWS_SAGEMAKER_API MonitoringAlertHistorySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringAlertHistorySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const { return m_monitoringScheduleName; }
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }
    template<typename MonitoringScheduleNameT = Aws::String>
    void SetMonitoringScheduleName(MonitoringScheduleNameT&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::forward<MonitoringScheduleNameT>(value); }
    template<typename MonitoringScheduleNameT = Aws::String>
    MonitoringAlertHistorySummary& WithMonitoringScheduleName(MonitoringScheduleNameT&& value) { SetMonitoringScheduleName(std::forward<MonitoringScheduleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline const Aws::String& GetMonitoringAlertName() const { return m_monitoringAlertName; }
    inline bool MonitoringAlertNameHasBeenSet() const { return m_monitoringAlertNameHasBeenSet; }
    template<typename MonitoringAlertNameT = Aws::String>
    void SetMonitoringAlertName(MonitoringAlertNameT&& value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName = std::forward<MonitoringAlertNameT>(value); }
    template<typename MonitoringAlertNameT = Aws::String>
    MonitoringAlertHistorySummary& WithMonitoringAlertName(MonitoringAlertNameT&& value) { SetMonitoringAlertName(std::forward<MonitoringAlertNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the first alert transition occurred in an
     * alert history. An alert transition can be from status <code>InAlert</code> to
     * <code>OK</code>, or from <code>OK</code> to <code>InAlert</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MonitoringAlertHistorySummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current alert status of an alert.</p>
     */
    inline MonitoringAlertStatus GetAlertStatus() const { return m_alertStatus; }
    inline bool AlertStatusHasBeenSet() const { return m_alertStatusHasBeenSet; }
    inline void SetAlertStatus(MonitoringAlertStatus value) { m_alertStatusHasBeenSet = true; m_alertStatus = value; }
    inline MonitoringAlertHistorySummary& WithAlertStatus(MonitoringAlertStatus value) { SetAlertStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::String m_monitoringAlertName;
    bool m_monitoringAlertNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    MonitoringAlertStatus m_alertStatus{MonitoringAlertStatus::NOT_SET};
    bool m_alertStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
