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
    AWS_SAGEMAKER_API UpdateMonitoringAlertRequest();

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
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }
    inline UpdateMonitoringAlertRequest& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}
    inline UpdateMonitoringAlertRequest& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}
    inline UpdateMonitoringAlertRequest& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline const Aws::String& GetMonitoringAlertName() const{ return m_monitoringAlertName; }
    inline bool MonitoringAlertNameHasBeenSet() const { return m_monitoringAlertNameHasBeenSet; }
    inline void SetMonitoringAlertName(const Aws::String& value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName = value; }
    inline void SetMonitoringAlertName(Aws::String&& value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName = std::move(value); }
    inline void SetMonitoringAlertName(const char* value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName.assign(value); }
    inline UpdateMonitoringAlertRequest& WithMonitoringAlertName(const Aws::String& value) { SetMonitoringAlertName(value); return *this;}
    inline UpdateMonitoringAlertRequest& WithMonitoringAlertName(Aws::String&& value) { SetMonitoringAlertName(std::move(value)); return *this;}
    inline UpdateMonitoringAlertRequest& WithMonitoringAlertName(const char* value) { SetMonitoringAlertName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Within <code>EvaluationPeriod</code>, how many execution failures will raise
     * an alert.</p>
     */
    inline int GetDatapointsToAlert() const{ return m_datapointsToAlert; }
    inline bool DatapointsToAlertHasBeenSet() const { return m_datapointsToAlertHasBeenSet; }
    inline void SetDatapointsToAlert(int value) { m_datapointsToAlertHasBeenSet = true; m_datapointsToAlert = value; }
    inline UpdateMonitoringAlertRequest& WithDatapointsToAlert(int value) { SetDatapointsToAlert(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of most recent monitoring executions to consider when evaluating
     * alert status.</p>
     */
    inline int GetEvaluationPeriod() const{ return m_evaluationPeriod; }
    inline bool EvaluationPeriodHasBeenSet() const { return m_evaluationPeriodHasBeenSet; }
    inline void SetEvaluationPeriod(int value) { m_evaluationPeriodHasBeenSet = true; m_evaluationPeriod = value; }
    inline UpdateMonitoringAlertRequest& WithEvaluationPeriod(int value) { SetEvaluationPeriod(value); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::String m_monitoringAlertName;
    bool m_monitoringAlertNameHasBeenSet = false;

    int m_datapointsToAlert;
    bool m_datapointsToAlertHasBeenSet = false;

    int m_evaluationPeriod;
    bool m_evaluationPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
