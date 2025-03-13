/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/MonitoringAlertStatus.h>
#include <aws/sagemaker/model/MonitoringAlertActions.h>
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
   * <p>Provides summary information about a monitor alert.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringAlertSummary">AWS
   * API Reference</a></p>
   */
  class MonitoringAlertSummary
  {
  public:
    AWS_SAGEMAKER_API MonitoringAlertSummary() = default;
    AWS_SAGEMAKER_API MonitoringAlertSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringAlertSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline const Aws::String& GetMonitoringAlertName() const { return m_monitoringAlertName; }
    inline bool MonitoringAlertNameHasBeenSet() const { return m_monitoringAlertNameHasBeenSet; }
    template<typename MonitoringAlertNameT = Aws::String>
    void SetMonitoringAlertName(MonitoringAlertNameT&& value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName = std::forward<MonitoringAlertNameT>(value); }
    template<typename MonitoringAlertNameT = Aws::String>
    MonitoringAlertSummary& WithMonitoringAlertName(MonitoringAlertNameT&& value) { SetMonitoringAlertName(std::forward<MonitoringAlertNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when a monitor alert was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MonitoringAlertSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when a monitor alert was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    MonitoringAlertSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of an alert.</p>
     */
    inline MonitoringAlertStatus GetAlertStatus() const { return m_alertStatus; }
    inline bool AlertStatusHasBeenSet() const { return m_alertStatusHasBeenSet; }
    inline void SetAlertStatus(MonitoringAlertStatus value) { m_alertStatusHasBeenSet = true; m_alertStatus = value; }
    inline MonitoringAlertSummary& WithAlertStatus(MonitoringAlertStatus value) { SetAlertStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Within <code>EvaluationPeriod</code>, how many execution failures will raise
     * an alert.</p>
     */
    inline int GetDatapointsToAlert() const { return m_datapointsToAlert; }
    inline bool DatapointsToAlertHasBeenSet() const { return m_datapointsToAlertHasBeenSet; }
    inline void SetDatapointsToAlert(int value) { m_datapointsToAlertHasBeenSet = true; m_datapointsToAlert = value; }
    inline MonitoringAlertSummary& WithDatapointsToAlert(int value) { SetDatapointsToAlert(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of most recent monitoring executions to consider when evaluating
     * alert status.</p>
     */
    inline int GetEvaluationPeriod() const { return m_evaluationPeriod; }
    inline bool EvaluationPeriodHasBeenSet() const { return m_evaluationPeriodHasBeenSet; }
    inline void SetEvaluationPeriod(int value) { m_evaluationPeriodHasBeenSet = true; m_evaluationPeriod = value; }
    inline MonitoringAlertSummary& WithEvaluationPeriod(int value) { SetEvaluationPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of alert actions taken in response to an alert going into
     * <code>InAlert</code> status.</p>
     */
    inline const MonitoringAlertActions& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = MonitoringAlertActions>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = MonitoringAlertActions>
    MonitoringAlertSummary& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitoringAlertName;
    bool m_monitoringAlertNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    MonitoringAlertStatus m_alertStatus{MonitoringAlertStatus::NOT_SET};
    bool m_alertStatusHasBeenSet = false;

    int m_datapointsToAlert{0};
    bool m_datapointsToAlertHasBeenSet = false;

    int m_evaluationPeriod{0};
    bool m_evaluationPeriodHasBeenSet = false;

    MonitoringAlertActions m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
