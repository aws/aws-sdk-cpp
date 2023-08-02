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
    AWS_SAGEMAKER_API GetScalingConfigurationRecommendationResult();
    AWS_SAGEMAKER_API GetScalingConfigurationRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API GetScalingConfigurationRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of a previously completed Inference Recommender job.</p>
     */
    inline const Aws::String& GetInferenceRecommendationsJobName() const{ return m_inferenceRecommendationsJobName; }

    /**
     * <p>The name of a previously completed Inference Recommender job.</p>
     */
    inline void SetInferenceRecommendationsJobName(const Aws::String& value) { m_inferenceRecommendationsJobName = value; }

    /**
     * <p>The name of a previously completed Inference Recommender job.</p>
     */
    inline void SetInferenceRecommendationsJobName(Aws::String&& value) { m_inferenceRecommendationsJobName = std::move(value); }

    /**
     * <p>The name of a previously completed Inference Recommender job.</p>
     */
    inline void SetInferenceRecommendationsJobName(const char* value) { m_inferenceRecommendationsJobName.assign(value); }

    /**
     * <p>The name of a previously completed Inference Recommender job.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithInferenceRecommendationsJobName(const Aws::String& value) { SetInferenceRecommendationsJobName(value); return *this;}

    /**
     * <p>The name of a previously completed Inference Recommender job.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithInferenceRecommendationsJobName(Aws::String&& value) { SetInferenceRecommendationsJobName(std::move(value)); return *this;}

    /**
     * <p>The name of a previously completed Inference Recommender job.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithInferenceRecommendationsJobName(const char* value) { SetInferenceRecommendationsJobName(value); return *this;}


    /**
     * <p>The recommendation ID of a previously completed inference recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The recommendation ID of a previously completed inference recommendation.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationId = value; }

    /**
     * <p>The recommendation ID of a previously completed inference recommendation.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationId = std::move(value); }

    /**
     * <p>The recommendation ID of a previously completed inference recommendation.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationId.assign(value); }

    /**
     * <p>The recommendation ID of a previously completed inference recommendation.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The recommendation ID of a previously completed inference recommendation.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The recommendation ID of a previously completed inference recommendation.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>The name of an endpoint benchmarked during a previously completed Inference
     * Recommender job.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of an endpoint benchmarked during a previously completed Inference
     * Recommender job.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointName = value; }

    /**
     * <p>The name of an endpoint benchmarked during a previously completed Inference
     * Recommender job.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointName = std::move(value); }

    /**
     * <p>The name of an endpoint benchmarked during a previously completed Inference
     * Recommender job.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointName.assign(value); }

    /**
     * <p>The name of an endpoint benchmarked during a previously completed Inference
     * Recommender job.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of an endpoint benchmarked during a previously completed Inference
     * Recommender job.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of an endpoint benchmarked during a previously completed Inference
     * Recommender job.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The percentage of how much utilization you want an instance to use before
     * autoscaling, which you specified in the request. The default value is 50%.</p>
     */
    inline int GetTargetCpuUtilizationPerCore() const{ return m_targetCpuUtilizationPerCore; }

    /**
     * <p>The percentage of how much utilization you want an instance to use before
     * autoscaling, which you specified in the request. The default value is 50%.</p>
     */
    inline void SetTargetCpuUtilizationPerCore(int value) { m_targetCpuUtilizationPerCore = value; }

    /**
     * <p>The percentage of how much utilization you want an instance to use before
     * autoscaling, which you specified in the request. The default value is 50%.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithTargetCpuUtilizationPerCore(int value) { SetTargetCpuUtilizationPerCore(value); return *this;}


    /**
     * <p>An object representing the anticipated traffic pattern for an endpoint that
     * you specified in the request.</p>
     */
    inline const ScalingPolicyObjective& GetScalingPolicyObjective() const{ return m_scalingPolicyObjective; }

    /**
     * <p>An object representing the anticipated traffic pattern for an endpoint that
     * you specified in the request.</p>
     */
    inline void SetScalingPolicyObjective(const ScalingPolicyObjective& value) { m_scalingPolicyObjective = value; }

    /**
     * <p>An object representing the anticipated traffic pattern for an endpoint that
     * you specified in the request.</p>
     */
    inline void SetScalingPolicyObjective(ScalingPolicyObjective&& value) { m_scalingPolicyObjective = std::move(value); }

    /**
     * <p>An object representing the anticipated traffic pattern for an endpoint that
     * you specified in the request.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithScalingPolicyObjective(const ScalingPolicyObjective& value) { SetScalingPolicyObjective(value); return *this;}

    /**
     * <p>An object representing the anticipated traffic pattern for an endpoint that
     * you specified in the request.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithScalingPolicyObjective(ScalingPolicyObjective&& value) { SetScalingPolicyObjective(std::move(value)); return *this;}


    /**
     * <p>An object with a list of metrics that were benchmarked during the previously
     * completed Inference Recommender job.</p>
     */
    inline const ScalingPolicyMetric& GetMetric() const{ return m_metric; }

    /**
     * <p>An object with a list of metrics that were benchmarked during the previously
     * completed Inference Recommender job.</p>
     */
    inline void SetMetric(const ScalingPolicyMetric& value) { m_metric = value; }

    /**
     * <p>An object with a list of metrics that were benchmarked during the previously
     * completed Inference Recommender job.</p>
     */
    inline void SetMetric(ScalingPolicyMetric&& value) { m_metric = std::move(value); }

    /**
     * <p>An object with a list of metrics that were benchmarked during the previously
     * completed Inference Recommender job.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithMetric(const ScalingPolicyMetric& value) { SetMetric(value); return *this;}

    /**
     * <p>An object with a list of metrics that were benchmarked during the previously
     * completed Inference Recommender job.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithMetric(ScalingPolicyMetric&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>An object with the recommended values for you to specify when creating an
     * autoscaling policy.</p>
     */
    inline const DynamicScalingConfiguration& GetDynamicScalingConfiguration() const{ return m_dynamicScalingConfiguration; }

    /**
     * <p>An object with the recommended values for you to specify when creating an
     * autoscaling policy.</p>
     */
    inline void SetDynamicScalingConfiguration(const DynamicScalingConfiguration& value) { m_dynamicScalingConfiguration = value; }

    /**
     * <p>An object with the recommended values for you to specify when creating an
     * autoscaling policy.</p>
     */
    inline void SetDynamicScalingConfiguration(DynamicScalingConfiguration&& value) { m_dynamicScalingConfiguration = std::move(value); }

    /**
     * <p>An object with the recommended values for you to specify when creating an
     * autoscaling policy.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithDynamicScalingConfiguration(const DynamicScalingConfiguration& value) { SetDynamicScalingConfiguration(value); return *this;}

    /**
     * <p>An object with the recommended values for you to specify when creating an
     * autoscaling policy.</p>
     */
    inline GetScalingConfigurationRecommendationResult& WithDynamicScalingConfiguration(DynamicScalingConfiguration&& value) { SetDynamicScalingConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetScalingConfigurationRecommendationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetScalingConfigurationRecommendationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetScalingConfigurationRecommendationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_inferenceRecommendationsJobName;

    Aws::String m_recommendationId;

    Aws::String m_endpointName;

    int m_targetCpuUtilizationPerCore;

    ScalingPolicyObjective m_scalingPolicyObjective;

    ScalingPolicyMetric m_metric;

    DynamicScalingConfiguration m_dynamicScalingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
