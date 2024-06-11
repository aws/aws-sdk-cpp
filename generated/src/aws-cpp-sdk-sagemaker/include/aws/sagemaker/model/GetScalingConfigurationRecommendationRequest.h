﻿/**
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
    AWS_SAGEMAKER_API GetScalingConfigurationRecommendationRequest();

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
    inline const Aws::String& GetInferenceRecommendationsJobName() const{ return m_inferenceRecommendationsJobName; }
    inline bool InferenceRecommendationsJobNameHasBeenSet() const { return m_inferenceRecommendationsJobNameHasBeenSet; }
    inline void SetInferenceRecommendationsJobName(const Aws::String& value) { m_inferenceRecommendationsJobNameHasBeenSet = true; m_inferenceRecommendationsJobName = value; }
    inline void SetInferenceRecommendationsJobName(Aws::String&& value) { m_inferenceRecommendationsJobNameHasBeenSet = true; m_inferenceRecommendationsJobName = std::move(value); }
    inline void SetInferenceRecommendationsJobName(const char* value) { m_inferenceRecommendationsJobNameHasBeenSet = true; m_inferenceRecommendationsJobName.assign(value); }
    inline GetScalingConfigurationRecommendationRequest& WithInferenceRecommendationsJobName(const Aws::String& value) { SetInferenceRecommendationsJobName(value); return *this;}
    inline GetScalingConfigurationRecommendationRequest& WithInferenceRecommendationsJobName(Aws::String&& value) { SetInferenceRecommendationsJobName(std::move(value)); return *this;}
    inline GetScalingConfigurationRecommendationRequest& WithInferenceRecommendationsJobName(const char* value) { SetInferenceRecommendationsJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation ID of a previously completed inference recommendation.
     * This ID should come from one of the recommendations returned by the job
     * specified in the <code>InferenceRecommendationsJobName</code> field.</p>
     * <p>Specify either this field or the <code>EndpointName</code> field.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline GetScalingConfigurationRecommendationRequest& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline GetScalingConfigurationRecommendationRequest& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline GetScalingConfigurationRecommendationRequest& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an endpoint benchmarked during a previously completed inference
     * recommendation job. This name should come from one of the recommendations
     * returned by the job specified in the
     * <code>InferenceRecommendationsJobName</code> field.</p> <p>Specify either this
     * field or the <code>RecommendationId</code> field.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline GetScalingConfigurationRecommendationRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline GetScalingConfigurationRecommendationRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline GetScalingConfigurationRecommendationRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of how much utilization you want an instance to use before
     * autoscaling. The default value is 50%.</p>
     */
    inline int GetTargetCpuUtilizationPerCore() const{ return m_targetCpuUtilizationPerCore; }
    inline bool TargetCpuUtilizationPerCoreHasBeenSet() const { return m_targetCpuUtilizationPerCoreHasBeenSet; }
    inline void SetTargetCpuUtilizationPerCore(int value) { m_targetCpuUtilizationPerCoreHasBeenSet = true; m_targetCpuUtilizationPerCore = value; }
    inline GetScalingConfigurationRecommendationRequest& WithTargetCpuUtilizationPerCore(int value) { SetTargetCpuUtilizationPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object where you specify the anticipated traffic pattern for an
     * endpoint.</p>
     */
    inline const ScalingPolicyObjective& GetScalingPolicyObjective() const{ return m_scalingPolicyObjective; }
    inline bool ScalingPolicyObjectiveHasBeenSet() const { return m_scalingPolicyObjectiveHasBeenSet; }
    inline void SetScalingPolicyObjective(const ScalingPolicyObjective& value) { m_scalingPolicyObjectiveHasBeenSet = true; m_scalingPolicyObjective = value; }
    inline void SetScalingPolicyObjective(ScalingPolicyObjective&& value) { m_scalingPolicyObjectiveHasBeenSet = true; m_scalingPolicyObjective = std::move(value); }
    inline GetScalingConfigurationRecommendationRequest& WithScalingPolicyObjective(const ScalingPolicyObjective& value) { SetScalingPolicyObjective(value); return *this;}
    inline GetScalingConfigurationRecommendationRequest& WithScalingPolicyObjective(ScalingPolicyObjective&& value) { SetScalingPolicyObjective(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceRecommendationsJobName;
    bool m_inferenceRecommendationsJobNameHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    int m_targetCpuUtilizationPerCore;
    bool m_targetCpuUtilizationPerCoreHasBeenSet = false;

    ScalingPolicyObjective m_scalingPolicyObjective;
    bool m_scalingPolicyObjectiveHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
