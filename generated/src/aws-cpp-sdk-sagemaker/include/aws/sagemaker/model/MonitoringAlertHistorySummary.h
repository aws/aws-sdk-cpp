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
    AWS_SAGEMAKER_API MonitoringAlertHistorySummary();
    AWS_SAGEMAKER_API MonitoringAlertHistorySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringAlertHistorySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline MonitoringAlertHistorySummary& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline MonitoringAlertHistorySummary& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline MonitoringAlertHistorySummary& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}


    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline const Aws::String& GetMonitoringAlertName() const{ return m_monitoringAlertName; }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline bool MonitoringAlertNameHasBeenSet() const { return m_monitoringAlertNameHasBeenSet; }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline void SetMonitoringAlertName(const Aws::String& value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName = value; }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline void SetMonitoringAlertName(Aws::String&& value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName = std::move(value); }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline void SetMonitoringAlertName(const char* value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName.assign(value); }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline MonitoringAlertHistorySummary& WithMonitoringAlertName(const Aws::String& value) { SetMonitoringAlertName(value); return *this;}

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline MonitoringAlertHistorySummary& WithMonitoringAlertName(Aws::String&& value) { SetMonitoringAlertName(std::move(value)); return *this;}

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline MonitoringAlertHistorySummary& WithMonitoringAlertName(const char* value) { SetMonitoringAlertName(value); return *this;}


    /**
     * <p>A timestamp that indicates when the first alert transition occurred in an
     * alert history. An alert transition can be from status <code>InAlert</code> to
     * <code>OK</code>, or from <code>OK</code> to <code>InAlert</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that indicates when the first alert transition occurred in an
     * alert history. An alert transition can be from status <code>InAlert</code> to
     * <code>OK</code>, or from <code>OK</code> to <code>InAlert</code>.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the first alert transition occurred in an
     * alert history. An alert transition can be from status <code>InAlert</code> to
     * <code>OK</code>, or from <code>OK</code> to <code>InAlert</code>.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that indicates when the first alert transition occurred in an
     * alert history. An alert transition can be from status <code>InAlert</code> to
     * <code>OK</code>, or from <code>OK</code> to <code>InAlert</code>.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the first alert transition occurred in an
     * alert history. An alert transition can be from status <code>InAlert</code> to
     * <code>OK</code>, or from <code>OK</code> to <code>InAlert</code>.</p>
     */
    inline MonitoringAlertHistorySummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the first alert transition occurred in an
     * alert history. An alert transition can be from status <code>InAlert</code> to
     * <code>OK</code>, or from <code>OK</code> to <code>InAlert</code>.</p>
     */
    inline MonitoringAlertHistorySummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The current alert status of an alert.</p>
     */
    inline const MonitoringAlertStatus& GetAlertStatus() const{ return m_alertStatus; }

    /**
     * <p>The current alert status of an alert.</p>
     */
    inline bool AlertStatusHasBeenSet() const { return m_alertStatusHasBeenSet; }

    /**
     * <p>The current alert status of an alert.</p>
     */
    inline void SetAlertStatus(const MonitoringAlertStatus& value) { m_alertStatusHasBeenSet = true; m_alertStatus = value; }

    /**
     * <p>The current alert status of an alert.</p>
     */
    inline void SetAlertStatus(MonitoringAlertStatus&& value) { m_alertStatusHasBeenSet = true; m_alertStatus = std::move(value); }

    /**
     * <p>The current alert status of an alert.</p>
     */
    inline MonitoringAlertHistorySummary& WithAlertStatus(const MonitoringAlertStatus& value) { SetAlertStatus(value); return *this;}

    /**
     * <p>The current alert status of an alert.</p>
     */
    inline MonitoringAlertHistorySummary& WithAlertStatus(MonitoringAlertStatus&& value) { SetAlertStatus(std::move(value)); return *this;}

  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::String m_monitoringAlertName;
    bool m_monitoringAlertNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    MonitoringAlertStatus m_alertStatus;
    bool m_alertStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
