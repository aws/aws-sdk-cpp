/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ScalingPolicyObjective.h>
#include <aws/sagemaker/model/ScalingPolicyMetric.h>
#include <aws/sagemaker/model/DynamicScalingConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class GetScalingConfigurationRecommendationResult
  {
  public:
    AWS_SAGEMAKER_API GetScalingConfigurationRecommendationResult() = default;
    AWS_SAGEMAKER_API GetScalingConfigurationRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API GetScalingConfigurationRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of a previously completed Inference Recommender job.</p>
     */
    inline const Aws::String& GetInferenceRecommendationsJobName() const { return m_inferenceRecommendationsJobName; }
    template<typename InferenceRecommendationsJobNameT = Aws::String>
    void SetInferenceRecommendationsJobName(InferenceRecommendationsJobNameT&& value) { m_inferenceRecommendationsJobNameHasBeenSet = true; m_inferenceRecommendationsJobName = std::forward<InferenceRecommendationsJobNameT>(value); }
    template<typename InferenceRecommendationsJobNameT = Aws::String>
    GetScalingConfigurationRecommendationResult& WithInferenceRecommendationsJobName(InferenceRecommendationsJobNameT&& value) { SetInferenceRecommendationsJobName(std::forward<InferenceRecommendationsJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation ID of a previously completed inference recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    GetScalingConfigurationRecommendationResult& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an endpoint benchmarked during a previously completed Inference
     * Recommender job.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    GetScalingConfigurationRecommendationResult& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of how much utilization you want an instance to use before
     * autoscaling, which you specified in the request. The default value is 50%.</p>
     */
    inline int GetTargetCpuUtilizationPerCore() const { return m_targetCpuUtilizationPerCore; }
    inline void SetTargetCpuUtilizationPerCore(int value) { m_targetCpuUtilizationPerCoreHasBeenSet = true; m_targetCpuUtilizationPerCore = value; }
    inline GetScalingConfigurationRecommendationResult& WithTargetCpuUtilizationPerCore(int value) { SetTargetCpuUtilizationPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the anticipated traffic pattern for an endpoint that
     * you specified in the request.</p>
     */
    inline const ScalingPolicyObjective& GetScalingPolicyObjective() const { return m_scalingPolicyObjective; }
    template<typename ScalingPolicyObjectiveT = ScalingPolicyObjective>
    void SetScalingPolicyObjective(ScalingPolicyObjectiveT&& value) { m_scalingPolicyObjectiveHasBeenSet = true; m_scalingPolicyObjective = std::forward<ScalingPolicyObjectiveT>(value); }
    template<typename ScalingPolicyObjectiveT = ScalingPolicyObjective>
    GetScalingConfigurationRecommendationResult& WithScalingPolicyObjective(ScalingPolicyObjectiveT&& value) { SetScalingPolicyObjective(std::forward<ScalingPolicyObjectiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with a list of metrics that were benchmarked during the previously
     * completed Inference Recommender job.</p>
     */
    inline const ScalingPolicyMetric& GetMetric() const { return m_metric; }
    template<typename MetricT = ScalingPolicyMetric>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = ScalingPolicyMetric>
    GetScalingConfigurationRecommendationResult& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with the recommended values for you to specify when creating an
     * autoscaling policy.</p>
     */
    inline const DynamicScalingConfiguration& GetDynamicScalingConfiguration() const { return m_dynamicScalingConfiguration; }
    template<typename DynamicScalingConfigurationT = DynamicScalingConfiguration>
    void SetDynamicScalingConfiguration(DynamicScalingConfigurationT&& value) { m_dynamicScalingConfigurationHasBeenSet = true; m_dynamicScalingConfiguration = std::forward<DynamicScalingConfigurationT>(value); }
    template<typename DynamicScalingConfigurationT = DynamicScalingConfiguration>
    GetScalingConfigurationRecommendationResult& WithDynamicScalingConfiguration(DynamicScalingConfigurationT&& value) { SetDynamicScalingConfiguration(std::forward<DynamicScalingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetScalingConfigurationRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceRecommendationsJobName;
    bool m_inferenceRecommendationsJobNameHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    int m_targetCpuUtilizationPerCore{0};
    bool m_targetCpuUtilizationPerCoreHasBeenSet = false;

    ScalingPolicyObjective m_scalingPolicyObjective;
    bool m_scalingPolicyObjectiveHasBeenSet = false;

    ScalingPolicyMetric m_metric;
    bool m_metricHasBeenSet = false;

    DynamicScalingConfiguration m_dynamicScalingConfiguration;
    bool m_dynamicScalingConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
