/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RecommendationMetrics.h>
#include <aws/sagemaker/model/InferenceMetrics.h>
#include <aws/sagemaker/model/EndpointOutputConfiguration.h>
#include <aws/sagemaker/model/ModelConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The details for a specific benchmark from an Inference Recommender
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobInferenceBenchmark">AWS
   * API Reference</a></p>
   */
  class RecommendationJobInferenceBenchmark
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobInferenceBenchmark() = default;
    AWS_SAGEMAKER_API RecommendationJobInferenceBenchmark(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobInferenceBenchmark& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const RecommendationMetrics& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = RecommendationMetrics>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = RecommendationMetrics>
    RecommendationJobInferenceBenchmark& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const InferenceMetrics& GetEndpointMetrics() const { return m_endpointMetrics; }
    inline bool EndpointMetricsHasBeenSet() const { return m_endpointMetricsHasBeenSet; }
    template<typename EndpointMetricsT = InferenceMetrics>
    void SetEndpointMetrics(EndpointMetricsT&& value) { m_endpointMetricsHasBeenSet = true; m_endpointMetrics = std::forward<EndpointMetricsT>(value); }
    template<typename EndpointMetricsT = InferenceMetrics>
    RecommendationJobInferenceBenchmark& WithEndpointMetrics(EndpointMetricsT&& value) { SetEndpointMetrics(std::forward<EndpointMetricsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EndpointOutputConfiguration& GetEndpointConfiguration() const { return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    template<typename EndpointConfigurationT = EndpointOutputConfiguration>
    void SetEndpointConfiguration(EndpointConfigurationT&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::forward<EndpointConfigurationT>(value); }
    template<typename EndpointConfigurationT = EndpointOutputConfiguration>
    RecommendationJobInferenceBenchmark& WithEndpointConfiguration(EndpointConfigurationT&& value) { SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModelConfiguration& GetModelConfiguration() const { return m_modelConfiguration; }
    inline bool ModelConfigurationHasBeenSet() const { return m_modelConfigurationHasBeenSet; }
    template<typename ModelConfigurationT = ModelConfiguration>
    void SetModelConfiguration(ModelConfigurationT&& value) { m_modelConfigurationHasBeenSet = true; m_modelConfiguration = std::forward<ModelConfigurationT>(value); }
    template<typename ModelConfigurationT = ModelConfiguration>
    RecommendationJobInferenceBenchmark& WithModelConfiguration(ModelConfigurationT&& value) { SetModelConfiguration(std::forward<ModelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why a benchmark failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    RecommendationJobInferenceBenchmark& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the benchmark completed.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationEndTime() const { return m_invocationEndTime; }
    inline bool InvocationEndTimeHasBeenSet() const { return m_invocationEndTimeHasBeenSet; }
    template<typename InvocationEndTimeT = Aws::Utils::DateTime>
    void SetInvocationEndTime(InvocationEndTimeT&& value) { m_invocationEndTimeHasBeenSet = true; m_invocationEndTime = std::forward<InvocationEndTimeT>(value); }
    template<typename InvocationEndTimeT = Aws::Utils::DateTime>
    RecommendationJobInferenceBenchmark& WithInvocationEndTime(InvocationEndTimeT&& value) { SetInvocationEndTime(std::forward<InvocationEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the benchmark started.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationStartTime() const { return m_invocationStartTime; }
    inline bool InvocationStartTimeHasBeenSet() const { return m_invocationStartTimeHasBeenSet; }
    template<typename InvocationStartTimeT = Aws::Utils::DateTime>
    void SetInvocationStartTime(InvocationStartTimeT&& value) { m_invocationStartTimeHasBeenSet = true; m_invocationStartTime = std::forward<InvocationStartTimeT>(value); }
    template<typename InvocationStartTimeT = Aws::Utils::DateTime>
    RecommendationJobInferenceBenchmark& WithInvocationStartTime(InvocationStartTimeT&& value) { SetInvocationStartTime(std::forward<InvocationStartTimeT>(value)); return *this;}
    ///@}
  private:

    RecommendationMetrics m_metrics;
    bool m_metricsHasBeenSet = false;

    InferenceMetrics m_endpointMetrics;
    bool m_endpointMetricsHasBeenSet = false;

    EndpointOutputConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;

    ModelConfiguration m_modelConfiguration;
    bool m_modelConfigurationHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_invocationEndTime{};
    bool m_invocationEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_invocationStartTime{};
    bool m_invocationStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
