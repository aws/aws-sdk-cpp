/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/Model.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TransformJob.h>
#include <aws/sagemaker/model/ModelDashboardModelCard.h>
#include <aws/sagemaker/model/ModelDashboardEndpoint.h>
#include <aws/sagemaker/model/ModelDashboardMonitoringSchedule.h>
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
   * <p>A model displayed in the Amazon SageMaker Model Dashboard.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDashboardModel">AWS
   * API Reference</a></p>
   */
  class ModelDashboardModel
  {
  public:
    AWS_SAGEMAKER_API ModelDashboardModel() = default;
    AWS_SAGEMAKER_API ModelDashboardModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDashboardModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A model displayed in the Model Dashboard.</p>
     */
    inline const Model& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Model>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Model>
    ModelDashboardModel& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoints that host a model.</p>
     */
    inline const Aws::Vector<ModelDashboardEndpoint>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Vector<ModelDashboardEndpoint>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<ModelDashboardEndpoint>>
    ModelDashboardModel& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = ModelDashboardEndpoint>
    ModelDashboardModel& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const TransformJob& GetLastBatchTransformJob() const { return m_lastBatchTransformJob; }
    inline bool LastBatchTransformJobHasBeenSet() const { return m_lastBatchTransformJobHasBeenSet; }
    template<typename LastBatchTransformJobT = TransformJob>
    void SetLastBatchTransformJob(LastBatchTransformJobT&& value) { m_lastBatchTransformJobHasBeenSet = true; m_lastBatchTransformJob = std::forward<LastBatchTransformJobT>(value); }
    template<typename LastBatchTransformJobT = TransformJob>
    ModelDashboardModel& WithLastBatchTransformJob(LastBatchTransformJobT&& value) { SetLastBatchTransformJob(std::forward<LastBatchTransformJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring schedules for a model.</p>
     */
    inline const Aws::Vector<ModelDashboardMonitoringSchedule>& GetMonitoringSchedules() const { return m_monitoringSchedules; }
    inline bool MonitoringSchedulesHasBeenSet() const { return m_monitoringSchedulesHasBeenSet; }
    template<typename MonitoringSchedulesT = Aws::Vector<ModelDashboardMonitoringSchedule>>
    void SetMonitoringSchedules(MonitoringSchedulesT&& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules = std::forward<MonitoringSchedulesT>(value); }
    template<typename MonitoringSchedulesT = Aws::Vector<ModelDashboardMonitoringSchedule>>
    ModelDashboardModel& WithMonitoringSchedules(MonitoringSchedulesT&& value) { SetMonitoringSchedules(std::forward<MonitoringSchedulesT>(value)); return *this;}
    template<typename MonitoringSchedulesT = ModelDashboardMonitoringSchedule>
    ModelDashboardModel& AddMonitoringSchedules(MonitoringSchedulesT&& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules.emplace_back(std::forward<MonitoringSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The model card for a model.</p>
     */
    inline const ModelDashboardModelCard& GetModelCard() const { return m_modelCard; }
    inline bool ModelCardHasBeenSet() const { return m_modelCardHasBeenSet; }
    template<typename ModelCardT = ModelDashboardModelCard>
    void SetModelCard(ModelCardT&& value) { m_modelCardHasBeenSet = true; m_modelCard = std::forward<ModelCardT>(value); }
    template<typename ModelCardT = ModelDashboardModelCard>
    ModelDashboardModel& WithModelCard(ModelCardT&& value) { SetModelCard(std::forward<ModelCardT>(value)); return *this;}
    ///@}
  private:

    Model m_model;
    bool m_modelHasBeenSet = false;

    Aws::Vector<ModelDashboardEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    TransformJob m_lastBatchTransformJob;
    bool m_lastBatchTransformJobHasBeenSet = false;

    Aws::Vector<ModelDashboardMonitoringSchedule> m_monitoringSchedules;
    bool m_monitoringSchedulesHasBeenSet = false;

    ModelDashboardModelCard m_modelCard;
    bool m_modelCardHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
