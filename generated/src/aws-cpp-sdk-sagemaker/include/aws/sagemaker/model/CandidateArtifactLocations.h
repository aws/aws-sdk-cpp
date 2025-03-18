/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The location of artifacts for an AutoML candidate job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CandidateArtifactLocations">AWS
   * API Reference</a></p>
   */
  class CandidateArtifactLocations
  {
  public:
    AWS_SAGEMAKER_API CandidateArtifactLocations() = default;
    AWS_SAGEMAKER_API CandidateArtifactLocations(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CandidateArtifactLocations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 prefix to the explainability artifacts generated for the AutoML
     * candidate.</p>
     */
    inline const Aws::String& GetExplainability() const { return m_explainability; }
    inline bool ExplainabilityHasBeenSet() const { return m_explainabilityHasBeenSet; }
    template<typename ExplainabilityT = Aws::String>
    void SetExplainability(ExplainabilityT&& value) { m_explainabilityHasBeenSet = true; m_explainability = std::forward<ExplainabilityT>(value); }
    template<typename ExplainabilityT = Aws::String>
    CandidateArtifactLocations& WithExplainability(ExplainabilityT&& value) { SetExplainability(std::forward<ExplainabilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 prefix to the model insight artifacts generated for the AutoML
     * candidate.</p>
     */
    inline const Aws::String& GetModelInsights() const { return m_modelInsights; }
    inline bool ModelInsightsHasBeenSet() const { return m_modelInsightsHasBeenSet; }
    template<typename ModelInsightsT = Aws::String>
    void SetModelInsights(ModelInsightsT&& value) { m_modelInsightsHasBeenSet = true; m_modelInsights = std::forward<ModelInsightsT>(value); }
    template<typename ModelInsightsT = Aws::String>
    CandidateArtifactLocations& WithModelInsights(ModelInsightsT&& value) { SetModelInsights(std::forward<ModelInsightsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 prefix to the accuracy metrics and the inference results
     * observed over the testing window. Available only for the time-series forecasting
     * problem type.</p>
     */
    inline const Aws::String& GetBacktestResults() const { return m_backtestResults; }
    inline bool BacktestResultsHasBeenSet() const { return m_backtestResultsHasBeenSet; }
    template<typename BacktestResultsT = Aws::String>
    void SetBacktestResults(BacktestResultsT&& value) { m_backtestResultsHasBeenSet = true; m_backtestResults = std::forward<BacktestResultsT>(value); }
    template<typename BacktestResultsT = Aws::String>
    CandidateArtifactLocations& WithBacktestResults(BacktestResultsT&& value) { SetBacktestResults(std::forward<BacktestResultsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_explainability;
    bool m_explainabilityHasBeenSet = false;

    Aws::String m_modelInsights;
    bool m_modelInsightsHasBeenSet = false;

    Aws::String m_backtestResults;
    bool m_backtestResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
