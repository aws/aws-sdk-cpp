/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ScalingPolicyObjective.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class GetScalingConfigurationRecommendationRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API GetScalingConfigurationRecommendationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetScalingConfigurationRecommendation"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of a previously completed Inference Recommender job.</p>
     */
    inline const Aws::String& GetInferenceRecommendationsJobName() const { return m_inferenceRecommendationsJobName; }
    inline bool InferenceRecommendationsJobNameHasBeenSet() const { return m_inferenceRecommendationsJobNameHasBeenSet; }
    template<typename InferenceRecommendationsJobNameT = Aws::String>
    void SetInferenceRecommendationsJobName(InferenceRecommendationsJobNameT&& value) { m_inferenceRecommendationsJobNameHasBeenSet = true; m_inferenceRecommendationsJobName = std::forward<InferenceRecommendationsJobNameT>(value); }
    template<typename InferenceRecommendationsJobNameT = Aws::String>
    GetScalingConfigurationRecommendationRequest& WithInferenceRecommendationsJobName(InferenceRecommendationsJobNameT&& value) { SetInferenceRecommendationsJobName(std::forward<InferenceRecommendationsJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation ID of a previously completed inference recommendation.
     * This ID should come from one of the recommendations returned by the job
     * specified in the <code>InferenceRecommendationsJobName</code> field.</p>
     * <p>Specify either this field or the <code>EndpointName</code> field.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    GetScalingConfigurationRecommendationRequest& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an endpoint benchmarked during a previously completed inference
     * recommendation job. This name should come from one of the recommendations
     * returned by the job specified in the
     * <code>InferenceRecommendationsJobName</code> field.</p> <p>Specify either this
     * field or the <code>RecommendationId</code> field.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    GetScalingConfigurationRecommendationRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of how much utilization you want an instance to use before
     * autoscaling. The default value is 50%.</p>
     */
    inline int GetTargetCpuUtilizationPerCore() const { return m_targetCpuUtilizationPerCore; }
    inline bool TargetCpuUtilizationPerCoreHasBeenSet() const { return m_targetCpuUtilizationPerCoreHasBeenSet; }
    inline void SetTargetCpuUtilizationPerCore(int value) { m_targetCpuUtilizationPerCoreHasBeenSet = true; m_targetCpuUtilizationPerCore = value; }
    inline GetScalingConfigurationRecommendationRequest& WithTargetCpuUtilizationPerCore(int value) { SetTargetCpuUtilizationPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object where you specify the anticipated traffic pattern for an
     * endpoint.</p>
     */
    inline const ScalingPolicyObjective& GetScalingPolicyObjective() const { return m_scalingPolicyObjective; }
    inline bool ScalingPolicyObjectiveHasBeenSet() const { return m_scalingPolicyObjectiveHasBeenSet; }
    template<typename ScalingPolicyObjectiveT = ScalingPolicyObjective>
    void SetScalingPolicyObjective(ScalingPolicyObjectiveT&& value) { m_scalingPolicyObjectiveHasBeenSet = true; m_scalingPolicyObjective = std::forward<ScalingPolicyObjectiveT>(value); }
    template<typename ScalingPolicyObjectiveT = ScalingPolicyObjective>
    GetScalingConfigurationRecommendationRequest& WithScalingPolicyObjective(ScalingPolicyObjectiveT&& value) { SetScalingPolicyObjective(std::forward<ScalingPolicyObjectiveT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
