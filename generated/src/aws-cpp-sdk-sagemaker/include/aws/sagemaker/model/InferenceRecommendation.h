/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationMetrics.h>
#include <aws/sagemaker/model/EndpointOutputConfiguration.h>
#include <aws/sagemaker/model/ModelConfiguration.h>
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
   * <p>A list of recommendations made by Amazon SageMaker Inference
   * Recommender.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceRecommendation">AWS
   * API Reference</a></p>
   */
  class InferenceRecommendation
  {
  public:
    AWS_SAGEMAKER_API InferenceRecommendation();
    AWS_SAGEMAKER_API InferenceRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The recommendation ID which uniquely identifies each recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The recommendation ID which uniquely identifies each recommendation.</p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p>The recommendation ID which uniquely identifies each recommendation.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p>The recommendation ID which uniquely identifies each recommendation.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p>The recommendation ID which uniquely identifies each recommendation.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p>The recommendation ID which uniquely identifies each recommendation.</p>
     */
    inline InferenceRecommendation& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The recommendation ID which uniquely identifies each recommendation.</p>
     */
    inline InferenceRecommendation& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The recommendation ID which uniquely identifies each recommendation.</p>
     */
    inline InferenceRecommendation& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>The metrics used to decide what recommendation to make.</p>
     */
    inline const RecommendationMetrics& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The metrics used to decide what recommendation to make.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>The metrics used to decide what recommendation to make.</p>
     */
    inline void SetMetrics(const RecommendationMetrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>The metrics used to decide what recommendation to make.</p>
     */
    inline void SetMetrics(RecommendationMetrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>The metrics used to decide what recommendation to make.</p>
     */
    inline InferenceRecommendation& WithMetrics(const RecommendationMetrics& value) { SetMetrics(value); return *this;}

    /**
     * <p>The metrics used to decide what recommendation to make.</p>
     */
    inline InferenceRecommendation& WithMetrics(RecommendationMetrics&& value) { SetMetrics(std::move(value)); return *this;}


    /**
     * <p>Defines the endpoint configuration parameters.</p>
     */
    inline const EndpointOutputConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }

    /**
     * <p>Defines the endpoint configuration parameters.</p>
     */
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }

    /**
     * <p>Defines the endpoint configuration parameters.</p>
     */
    inline void SetEndpointConfiguration(const EndpointOutputConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }

    /**
     * <p>Defines the endpoint configuration parameters.</p>
     */
    inline void SetEndpointConfiguration(EndpointOutputConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }

    /**
     * <p>Defines the endpoint configuration parameters.</p>
     */
    inline InferenceRecommendation& WithEndpointConfiguration(const EndpointOutputConfiguration& value) { SetEndpointConfiguration(value); return *this;}

    /**
     * <p>Defines the endpoint configuration parameters.</p>
     */
    inline InferenceRecommendation& WithEndpointConfiguration(EndpointOutputConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}


    /**
     * <p>Defines the model configuration.</p>
     */
    inline const ModelConfiguration& GetModelConfiguration() const{ return m_modelConfiguration; }

    /**
     * <p>Defines the model configuration.</p>
     */
    inline bool ModelConfigurationHasBeenSet() const { return m_modelConfigurationHasBeenSet; }

    /**
     * <p>Defines the model configuration.</p>
     */
    inline void SetModelConfiguration(const ModelConfiguration& value) { m_modelConfigurationHasBeenSet = true; m_modelConfiguration = value; }

    /**
     * <p>Defines the model configuration.</p>
     */
    inline void SetModelConfiguration(ModelConfiguration&& value) { m_modelConfigurationHasBeenSet = true; m_modelConfiguration = std::move(value); }

    /**
     * <p>Defines the model configuration.</p>
     */
    inline InferenceRecommendation& WithModelConfiguration(const ModelConfiguration& value) { SetModelConfiguration(value); return *this;}

    /**
     * <p>Defines the model configuration.</p>
     */
    inline InferenceRecommendation& WithModelConfiguration(ModelConfiguration&& value) { SetModelConfiguration(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the benchmark completed.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationEndTime() const{ return m_invocationEndTime; }

    /**
     * <p>A timestamp that shows when the benchmark completed.</p>
     */
    inline bool InvocationEndTimeHasBeenSet() const { return m_invocationEndTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the benchmark completed.</p>
     */
    inline void SetInvocationEndTime(const Aws::Utils::DateTime& value) { m_invocationEndTimeHasBeenSet = true; m_invocationEndTime = value; }

    /**
     * <p>A timestamp that shows when the benchmark completed.</p>
     */
    inline void SetInvocationEndTime(Aws::Utils::DateTime&& value) { m_invocationEndTimeHasBeenSet = true; m_invocationEndTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the benchmark completed.</p>
     */
    inline InferenceRecommendation& WithInvocationEndTime(const Aws::Utils::DateTime& value) { SetInvocationEndTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the benchmark completed.</p>
     */
    inline InferenceRecommendation& WithInvocationEndTime(Aws::Utils::DateTime&& value) { SetInvocationEndTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the benchmark started.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationStartTime() const{ return m_invocationStartTime; }

    /**
     * <p>A timestamp that shows when the benchmark started.</p>
     */
    inline bool InvocationStartTimeHasBeenSet() const { return m_invocationStartTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the benchmark started.</p>
     */
    inline void SetInvocationStartTime(const Aws::Utils::DateTime& value) { m_invocationStartTimeHasBeenSet = true; m_invocationStartTime = value; }

    /**
     * <p>A timestamp that shows when the benchmark started.</p>
     */
    inline void SetInvocationStartTime(Aws::Utils::DateTime&& value) { m_invocationStartTimeHasBeenSet = true; m_invocationStartTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the benchmark started.</p>
     */
    inline InferenceRecommendation& WithInvocationStartTime(const Aws::Utils::DateTime& value) { SetInvocationStartTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the benchmark started.</p>
     */
    inline InferenceRecommendation& WithInvocationStartTime(Aws::Utils::DateTime&& value) { SetInvocationStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    RecommendationMetrics m_metrics;
    bool m_metricsHasBeenSet = false;

    EndpointOutputConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;

    ModelConfiguration m_modelConfiguration;
    bool m_modelConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_invocationEndTime;
    bool m_invocationEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_invocationStartTime;
    bool m_invocationStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
