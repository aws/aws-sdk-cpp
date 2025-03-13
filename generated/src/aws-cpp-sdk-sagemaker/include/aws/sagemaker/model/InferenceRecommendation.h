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
    AWS_SAGEMAKER_API InferenceRecommendation() = default;
    AWS_SAGEMAKER_API InferenceRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The recommendation ID which uniquely identifies each recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    InferenceRecommendation& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics used to decide what recommendation to make.</p>
     */
    inline const RecommendationMetrics& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = RecommendationMetrics>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = RecommendationMetrics>
    InferenceRecommendation& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the endpoint configuration parameters.</p>
     */
    inline const EndpointOutputConfiguration& GetEndpointConfiguration() const { return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    template<typename EndpointConfigurationT = EndpointOutputConfiguration>
    void SetEndpointConfiguration(EndpointConfigurationT&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::forward<EndpointConfigurationT>(value); }
    template<typename EndpointConfigurationT = EndpointOutputConfiguration>
    InferenceRecommendation& WithEndpointConfiguration(EndpointConfigurationT&& value) { SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the model configuration.</p>
     */
    inline const ModelConfiguration& GetModelConfiguration() const { return m_modelConfiguration; }
    inline bool ModelConfigurationHasBeenSet() const { return m_modelConfigurationHasBeenSet; }
    template<typename ModelConfigurationT = ModelConfiguration>
    void SetModelConfiguration(ModelConfigurationT&& value) { m_modelConfigurationHasBeenSet = true; m_modelConfiguration = std::forward<ModelConfigurationT>(value); }
    template<typename ModelConfigurationT = ModelConfiguration>
    InferenceRecommendation& WithModelConfiguration(ModelConfigurationT&& value) { SetModelConfiguration(std::forward<ModelConfigurationT>(value)); return *this;}
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
    InferenceRecommendation& WithInvocationEndTime(InvocationEndTimeT&& value) { SetInvocationEndTime(std::forward<InvocationEndTimeT>(value)); return *this;}
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
    InferenceRecommendation& WithInvocationStartTime(InvocationStartTimeT&& value) { SetInvocationStartTime(std::forward<InvocationStartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    RecommendationMetrics m_metrics;
    bool m_metricsHasBeenSet = false;

    EndpointOutputConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;

    ModelConfiguration m_modelConfiguration;
    bool m_modelConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_invocationEndTime{};
    bool m_invocationEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_invocationStartTime{};
    bool m_invocationStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
