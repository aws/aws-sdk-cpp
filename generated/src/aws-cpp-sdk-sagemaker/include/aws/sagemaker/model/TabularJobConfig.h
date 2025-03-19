/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CandidateGenerationConfig.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AutoMLMode.h>
#include <aws/sagemaker/model/ProblemType.h>
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
   * <p>The collection of settings used by an AutoML job V2 for the tabular problem
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TabularJobConfig">AWS
   * API Reference</a></p>
   */
  class TabularJobConfig
  {
  public:
    AWS_SAGEMAKER_API TabularJobConfig() = default;
    AWS_SAGEMAKER_API TabularJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TabularJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration information of how model candidates are generated.</p>
     */
    inline const CandidateGenerationConfig& GetCandidateGenerationConfig() const { return m_candidateGenerationConfig; }
    inline bool CandidateGenerationConfigHasBeenSet() const { return m_candidateGenerationConfigHasBeenSet; }
    template<typename CandidateGenerationConfigT = CandidateGenerationConfig>
    void SetCandidateGenerationConfig(CandidateGenerationConfigT&& value) { m_candidateGenerationConfigHasBeenSet = true; m_candidateGenerationConfig = std::forward<CandidateGenerationConfigT>(value); }
    template<typename CandidateGenerationConfigT = CandidateGenerationConfig>
    TabularJobConfig& WithCandidateGenerationConfig(CandidateGenerationConfigT&& value) { SetCandidateGenerationConfig(std::forward<CandidateGenerationConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const { return m_completionCriteria; }
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }
    template<typename CompletionCriteriaT = AutoMLJobCompletionCriteria>
    void SetCompletionCriteria(CompletionCriteriaT&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::forward<CompletionCriteriaT>(value); }
    template<typename CompletionCriteriaT = AutoMLJobCompletionCriteria>
    TabularJobConfig& WithCompletionCriteria(CompletionCriteriaT&& value) { SetCompletionCriteria(std::forward<CompletionCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL to the Amazon S3 data source containing selected features from the
     * input data source to run an Autopilot job V2. You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p>  <p>These column keys may not
     * include the target column.</p>  <p>In ensembling mode, Autopilot only
     * supports the following data types: <code>numeric</code>,
     * <code>categorical</code>, <code>text</code>, and <code>datetime</code>. In HPO
     * mode, Autopilot can support <code>numeric</code>, <code>categorical</code>,
     * <code>text</code>, <code>datetime</code>, and <code>sequence</code>.</p> <p>If
     * only <code>FeatureDataTypes</code> is provided, the column keys
     * (<code>col1</code>, <code>col2</code>,..) should be a subset of the column names
     * in the input data. </p> <p>If both <code>FeatureDataTypes</code> and
     * <code>FeatureAttributeNames</code> are provided, then the column keys should be
     * a subset of the column names provided in <code>FeatureAttributeNames</code>.
     * </p> <p>The key name <code>FeatureAttributeNames</code> is fixed. The values
     * listed in <code>["col1", "col2", ...]</code> are case sensitive and should be a
     * list of strings containing unique values that are a subset of the column names
     * in the input data. The list of columns provided must not include the target
     * column.</p>
     */
    inline const Aws::String& GetFeatureSpecificationS3Uri() const { return m_featureSpecificationS3Uri; }
    inline bool FeatureSpecificationS3UriHasBeenSet() const { return m_featureSpecificationS3UriHasBeenSet; }
    template<typename FeatureSpecificationS3UriT = Aws::String>
    void SetFeatureSpecificationS3Uri(FeatureSpecificationS3UriT&& value) { m_featureSpecificationS3UriHasBeenSet = true; m_featureSpecificationS3Uri = std::forward<FeatureSpecificationS3UriT>(value); }
    template<typename FeatureSpecificationS3UriT = Aws::String>
    TabularJobConfig& WithFeatureSpecificationS3Uri(FeatureSpecificationS3UriT&& value) { SetFeatureSpecificationS3Uri(std::forward<FeatureSpecificationS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that Autopilot uses to train the data. You can either specify the
     * mode manually or let Autopilot choose for you based on the dataset size by
     * selecting <code>AUTO</code>. In <code>AUTO</code> mode, Autopilot chooses
     * <code>ENSEMBLING</code> for datasets smaller than 100 MB, and
     * <code>HYPERPARAMETER_TUNING</code> for larger ones.</p> <p>The
     * <code>ENSEMBLING</code> mode uses a multi-stack ensemble model to predict
     * classification and regression tasks directly from your dataset. This machine
     * learning mode combines several base models to produce an optimal predictive
     * model. It then uses a stacking ensemble method to combine predictions from
     * contributing members. A multi-stack ensemble model can provide better
     * performance over a single model by combining the predictive capabilities of
     * multiple models. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>ENSEMBLING</code> mode.</p> <p>The <code>HYPERPARAMETER_TUNING</code>
     * (HPO) mode uses the best hyperparameters to train the best version of a model.
     * HPO automatically selects an algorithm for the type of problem you want to
     * solve. Then HPO finds the best hyperparameters according to your objective
     * metric. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-algorithm-support">Autopilot
     * algorithm support</a> for a list of algorithms supported by
     * <code>HYPERPARAMETER_TUNING</code> mode.</p>
     */
    inline AutoMLMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(AutoMLMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline TabularJobConfig& WithMode(AutoMLMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Generates possible candidates without training the models. A model candidate
     * is a combination of data preprocessors, algorithms, and algorithm parameter
     * settings.</p>
     */
    inline bool GetGenerateCandidateDefinitionsOnly() const { return m_generateCandidateDefinitionsOnly; }
    inline bool GenerateCandidateDefinitionsOnlyHasBeenSet() const { return m_generateCandidateDefinitionsOnlyHasBeenSet; }
    inline void SetGenerateCandidateDefinitionsOnly(bool value) { m_generateCandidateDefinitionsOnlyHasBeenSet = true; m_generateCandidateDefinitionsOnly = value; }
    inline TabularJobConfig& WithGenerateCandidateDefinitionsOnly(bool value) { SetGenerateCandidateDefinitionsOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of supervised learning problem available for the model candidates of
     * the AutoML job V2. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-datasets-problem-types.html#autopilot-problem-types">
     * SageMaker Autopilot problem types</a>.</p>  <p>You must either specify the
     * type of supervised learning problem in <code>ProblemType</code> and provide the
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateAutoMLJobV2.html#sagemaker-CreateAutoMLJobV2-request-AutoMLJobObjective">AutoMLJobObjective</a>
     * metric, or none at all.</p> 
     */
    inline ProblemType GetProblemType() const { return m_problemType; }
    inline bool ProblemTypeHasBeenSet() const { return m_problemTypeHasBeenSet; }
    inline void SetProblemType(ProblemType value) { m_problemTypeHasBeenSet = true; m_problemType = value; }
    inline TabularJobConfig& WithProblemType(ProblemType value) { SetProblemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target variable in supervised learning, usually represented
     * by 'y'.</p>
     */
    inline const Aws::String& GetTargetAttributeName() const { return m_targetAttributeName; }
    inline bool TargetAttributeNameHasBeenSet() const { return m_targetAttributeNameHasBeenSet; }
    template<typename TargetAttributeNameT = Aws::String>
    void SetTargetAttributeName(TargetAttributeNameT&& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = std::forward<TargetAttributeNameT>(value); }
    template<typename TargetAttributeNameT = Aws::String>
    TabularJobConfig& WithTargetAttributeName(TargetAttributeNameT&& value) { SetTargetAttributeName(std::forward<TargetAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, this column name indicates which column of the dataset should
     * be treated as sample weights for use by the objective metric during the
     * training, evaluation, and the selection of the best model. This column is not
     * considered as a predictive feature. For more information on Autopilot metrics,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html">Metrics
     * and validation</a>.</p> <p>Sample weights should be numeric, non-negative, with
     * larger values indicating which rows are more important than others. Data points
     * that have invalid or no weight value are excluded.</p> <p>Support for sample
     * weights is available in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">Ensembling</a>
     * mode only.</p>
     */
    inline const Aws::String& GetSampleWeightAttributeName() const { return m_sampleWeightAttributeName; }
    inline bool SampleWeightAttributeNameHasBeenSet() const { return m_sampleWeightAttributeNameHasBeenSet; }
    template<typename SampleWeightAttributeNameT = Aws::String>
    void SetSampleWeightAttributeName(SampleWeightAttributeNameT&& value) { m_sampleWeightAttributeNameHasBeenSet = true; m_sampleWeightAttributeName = std::forward<SampleWeightAttributeNameT>(value); }
    template<typename SampleWeightAttributeNameT = Aws::String>
    TabularJobConfig& WithSampleWeightAttributeName(SampleWeightAttributeNameT&& value) { SetSampleWeightAttributeName(std::forward<SampleWeightAttributeNameT>(value)); return *this;}
    ///@}
  private:

    CandidateGenerationConfig m_candidateGenerationConfig;
    bool m_candidateGenerationConfigHasBeenSet = false;

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet = false;

    Aws::String m_featureSpecificationS3Uri;
    bool m_featureSpecificationS3UriHasBeenSet = false;

    AutoMLMode m_mode{AutoMLMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    bool m_generateCandidateDefinitionsOnly{false};
    bool m_generateCandidateDefinitionsOnlyHasBeenSet = false;

    ProblemType m_problemType{ProblemType::NOT_SET};
    bool m_problemTypeHasBeenSet = false;

    Aws::String m_targetAttributeName;
    bool m_targetAttributeNameHasBeenSet = false;

    Aws::String m_sampleWeightAttributeName;
    bool m_sampleWeightAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
