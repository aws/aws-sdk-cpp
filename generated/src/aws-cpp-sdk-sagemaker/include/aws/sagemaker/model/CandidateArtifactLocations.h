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
    AWS_SAGEMAKER_API CandidateArtifactLocations();
    AWS_SAGEMAKER_API CandidateArtifactLocations(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CandidateArtifactLocations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 prefix to the explainability artifacts generated for the AutoML
     * candidate.</p>
     */
    inline const Aws::String& GetExplainability() const{ return m_explainability; }
    inline bool ExplainabilityHasBeenSet() const { return m_explainabilityHasBeenSet; }
    inline void SetExplainability(const Aws::String& value) { m_explainabilityHasBeenSet = true; m_explainability = value; }
    inline void SetExplainability(Aws::String&& value) { m_explainabilityHasBeenSet = true; m_explainability = std::move(value); }
    inline void SetExplainability(const char* value) { m_explainabilityHasBeenSet = true; m_explainability.assign(value); }
    inline CandidateArtifactLocations& WithExplainability(const Aws::String& value) { SetExplainability(value); return *this;}
    inline CandidateArtifactLocations& WithExplainability(Aws::String&& value) { SetExplainability(std::move(value)); return *this;}
    inline CandidateArtifactLocations& WithExplainability(const char* value) { SetExplainability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 prefix to the model insight artifacts generated for the AutoML
     * candidate.</p>
     */
    inline const Aws::String& GetModelInsights() const{ return m_modelInsights; }
    inline bool ModelInsightsHasBeenSet() const { return m_modelInsightsHasBeenSet; }
    inline void SetModelInsights(const Aws::String& value) { m_modelInsightsHasBeenSet = true; m_modelInsights = value; }
    inline void SetModelInsights(Aws::String&& value) { m_modelInsightsHasBeenSet = true; m_modelInsights = std::move(value); }
    inline void SetModelInsights(const char* value) { m_modelInsightsHasBeenSet = true; m_modelInsights.assign(value); }
    inline CandidateArtifactLocations& WithModelInsights(const Aws::String& value) { SetModelInsights(value); return *this;}
    inline CandidateArtifactLocations& WithModelInsights(Aws::String&& value) { SetModelInsights(std::move(value)); return *this;}
    inline CandidateArtifactLocations& WithModelInsights(const char* value) { SetModelInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 prefix to the accuracy metrics and the inference results
     * observed over the testing window. Available only for the time-series forecasting
     * problem type.</p>
     */
    inline const Aws::String& GetBacktestResults() const{ return m_backtestResults; }
    inline bool BacktestResultsHasBeenSet() const { return m_backtestResultsHasBeenSet; }
    inline void SetBacktestResults(const Aws::String& value) { m_backtestResultsHasBeenSet = true; m_backtestResults = value; }
    inline void SetBacktestResults(Aws::String&& value) { m_backtestResultsHasBeenSet = true; m_backtestResults = std::move(value); }
    inline void SetBacktestResults(const char* value) { m_backtestResultsHasBeenSet = true; m_backtestResults.assign(value); }
    inline CandidateArtifactLocations& WithBacktestResults(const Aws::String& value) { SetBacktestResults(value); return *this;}
    inline CandidateArtifactLocations& WithBacktestResults(Aws::String&& value) { SetBacktestResults(std::move(value)); return *this;}
    inline CandidateArtifactLocations& WithBacktestResults(const char* value) { SetBacktestResults(value); return *this;}
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
