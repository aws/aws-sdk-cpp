/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateMonitoringAlertRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateMonitoringAlertRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMonitoringAlert"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const { return m_monitoringScheduleName; }
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }
    template<typename MonitoringScheduleNameT = Aws::String>
    void SetMonitoringScheduleName(MonitoringScheduleNameT&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::forward<MonitoringScheduleNameT>(value); }
    template<typename MonitoringScheduleNameT = Aws::String>
    UpdateMonitoringAlertRequest& WithMonitoringScheduleName(MonitoringScheduleNameT&& value) { SetMonitoringScheduleName(std::forward<MonitoringScheduleNameT>(value)); return *this;}
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
    UpdateMonitoringAlertRequest& WithMonitoringAlertName(MonitoringAlertNameT&& value) { SetMonitoringAlertName(std::forward<MonitoringAlertNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Within <code>EvaluationPeriod</code>, how many execution failures will raise
     * an alert.</p>
     */
    inline int GetDatapointsToAlert() const { return m_datapointsToAlert; }
    inline bool DatapointsToAlertHasBeenSet() const { return m_datapointsToAlertHasBeenSet; }
    inline void SetDatapointsToAlert(int value) { m_datapointsToAlertHasBeenSet = true; m_datapointsToAlert = value; }
    inline UpdateMonitoringAlertRequest& WithDatapointsToAlert(int value) { SetDatapointsToAlert(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of most recent monitoring executions to consider when evaluating
     * alert status.</p>
     */
    inline int GetEvaluationPeriod() const { return m_evaluationPeriod; }
    inline bool EvaluationPeriodHasBeenSet() const { return m_evaluationPeriodHasBeenSet; }
    inline void SetEvaluationPeriod(int value) { m_evaluationPeriodHasBeenSet = true; m_evaluationPeriod = value; }
    inline UpdateMonitoringAlertRequest& WithEvaluationPeriod(int value) { SetEvaluationPeriod(value); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::String m_monitoringAlertName;
    bool m_monitoringAlertNameHasBeenSet = false;

    int m_datapointsToAlert{0};
    bool m_datapointsToAlertHasBeenSet = false;

    int m_evaluationPeriod{0};
    bool m_evaluationPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
