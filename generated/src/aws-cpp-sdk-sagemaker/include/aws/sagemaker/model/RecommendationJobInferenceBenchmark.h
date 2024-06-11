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
    AWS_SAGEMAKER_API RecommendationJobInferenceBenchmark();
    AWS_SAGEMAKER_API RecommendationJobInferenceBenchmark(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobInferenceBenchmark& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const RecommendationMetrics& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const RecommendationMetrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(RecommendationMetrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline RecommendationJobInferenceBenchmark& WithMetrics(const RecommendationMetrics& value) { SetMetrics(value); return *this;}
    inline RecommendationJobInferenceBenchmark& WithMetrics(RecommendationMetrics&& value) { SetMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const InferenceMetrics& GetEndpointMetrics() const{ return m_endpointMetrics; }
    inline bool EndpointMetricsHasBeenSet() const { return m_endpointMetricsHasBeenSet; }
    inline void SetEndpointMetrics(const InferenceMetrics& value) { m_endpointMetricsHasBeenSet = true; m_endpointMetrics = value; }
    inline void SetEndpointMetrics(InferenceMetrics&& value) { m_endpointMetricsHasBeenSet = true; m_endpointMetrics = std::move(value); }
    inline RecommendationJobInferenceBenchmark& WithEndpointMetrics(const InferenceMetrics& value) { SetEndpointMetrics(value); return *this;}
    inline RecommendationJobInferenceBenchmark& WithEndpointMetrics(InferenceMetrics&& value) { SetEndpointMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const EndpointOutputConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    inline void SetEndpointConfiguration(const EndpointOutputConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }
    inline void SetEndpointConfiguration(EndpointOutputConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }
    inline RecommendationJobInferenceBenchmark& WithEndpointConfiguration(const EndpointOutputConfiguration& value) { SetEndpointConfiguration(value); return *this;}
    inline RecommendationJobInferenceBenchmark& WithEndpointConfiguration(EndpointOutputConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModelConfiguration& GetModelConfiguration() const{ return m_modelConfiguration; }
    inline bool ModelConfigurationHasBeenSet() const { return m_modelConfigurationHasBeenSet; }
    inline void SetModelConfiguration(const ModelConfiguration& value) { m_modelConfigurationHasBeenSet = true; m_modelConfiguration = value; }
    inline void SetModelConfiguration(ModelConfiguration&& value) { m_modelConfigurationHasBeenSet = true; m_modelConfiguration = std::move(value); }
    inline RecommendationJobInferenceBenchmark& WithModelConfiguration(const ModelConfiguration& value) { SetModelConfiguration(value); return *this;}
    inline RecommendationJobInferenceBenchmark& WithModelConfiguration(ModelConfiguration&& value) { SetModelConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why a benchmark failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline RecommendationJobInferenceBenchmark& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline RecommendationJobInferenceBenchmark& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline RecommendationJobInferenceBenchmark& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the benchmark completed.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationEndTime() const{ return m_invocationEndTime; }
    inline bool InvocationEndTimeHasBeenSet() const { return m_invocationEndTimeHasBeenSet; }
    inline void SetInvocationEndTime(const Aws::Utils::DateTime& value) { m_invocationEndTimeHasBeenSet = true; m_invocationEndTime = value; }
    inline void SetInvocationEndTime(Aws::Utils::DateTime&& value) { m_invocationEndTimeHasBeenSet = true; m_invocationEndTime = std::move(value); }
    inline RecommendationJobInferenceBenchmark& WithInvocationEndTime(const Aws::Utils::DateTime& value) { SetInvocationEndTime(value); return *this;}
    inline RecommendationJobInferenceBenchmark& WithInvocationEndTime(Aws::Utils::DateTime&& value) { SetInvocationEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the benchmark started.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationStartTime() const{ return m_invocationStartTime; }
    inline bool InvocationStartTimeHasBeenSet() const { return m_invocationStartTimeHasBeenSet; }
    inline void SetInvocationStartTime(const Aws::Utils::DateTime& value) { m_invocationStartTimeHasBeenSet = true; m_invocationStartTime = value; }
    inline void SetInvocationStartTime(Aws::Utils::DateTime&& value) { m_invocationStartTimeHasBeenSet = true; m_invocationStartTime = std::move(value); }
    inline RecommendationJobInferenceBenchmark& WithInvocationStartTime(const Aws::Utils::DateTime& value) { SetInvocationStartTime(value); return *this;}
    inline RecommendationJobInferenceBenchmark& WithInvocationStartTime(Aws::Utils::DateTime&& value) { SetInvocationStartTime(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_invocationEndTime;
    bool m_invocationEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_invocationStartTime;
    bool m_invocationStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
