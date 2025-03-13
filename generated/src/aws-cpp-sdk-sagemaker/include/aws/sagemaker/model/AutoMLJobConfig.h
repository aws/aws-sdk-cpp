/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
#include <aws/sagemaker/model/AutoMLSecurityConfig.h>
#include <aws/sagemaker/model/AutoMLCandidateGenerationConfig.h>
#include <aws/sagemaker/model/AutoMLDataSplitConfig.h>
#include <aws/sagemaker/model/AutoMLMode.h>
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
   * <p>A collection of settings used for an AutoML job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobConfig">AWS
   * API Reference</a></p>
   */
  class AutoMLJobConfig
  {
  public:
    AWS_SAGEMAKER_API AutoMLJobConfig() = default;
    AWS_SAGEMAKER_API AutoMLJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>How long an AutoML job is allowed to run, or how many candidates a job is
     * allowed to generate.</p>
     */
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const { return m_completionCriteria; }
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }
    template<typename CompletionCriteriaT = AutoMLJobCompletionCriteria>
    void SetCompletionCriteria(CompletionCriteriaT&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::forward<CompletionCriteriaT>(value); }
    template<typename CompletionCriteriaT = AutoMLJobCompletionCriteria>
    AutoMLJobConfig& WithCompletionCriteria(CompletionCriteriaT&& value) { SetCompletionCriteria(std::forward<CompletionCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline const AutoMLSecurityConfig& GetSecurityConfig() const { return m_securityConfig; }
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }
    template<typename SecurityConfigT = AutoMLSecurityConfig>
    void SetSecurityConfig(SecurityConfigT&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::forward<SecurityConfigT>(value); }
    template<typename SecurityConfigT = AutoMLSecurityConfig>
    AutoMLJobConfig& WithSecurityConfig(SecurityConfigT&& value) { SetSecurityConfig(std::forward<SecurityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for generating a candidate for an AutoML job (optional).
     * </p>
     */
    inline const AutoMLCandidateGenerationConfig& GetCandidateGenerationConfig() const { return m_candidateGenerationConfig; }
    inline bool CandidateGenerationConfigHasBeenSet() const { return m_candidateGenerationConfigHasBeenSet; }
    template<typename CandidateGenerationConfigT = AutoMLCandidateGenerationConfig>
    void SetCandidateGenerationConfig(CandidateGenerationConfigT&& value) { m_candidateGenerationConfigHasBeenSet = true; m_candidateGenerationConfig = std::forward<CandidateGenerationConfigT>(value); }
    template<typename CandidateGenerationConfigT = AutoMLCandidateGenerationConfig>
    AutoMLJobConfig& WithCandidateGenerationConfig(CandidateGenerationConfigT&& value) { SetCandidateGenerationConfig(std::forward<CandidateGenerationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for splitting the input training dataset.</p> <p>Type:
     * AutoMLDataSplitConfig</p>
     */
    inline const AutoMLDataSplitConfig& GetDataSplitConfig() const { return m_dataSplitConfig; }
    inline bool DataSplitConfigHasBeenSet() const { return m_dataSplitConfigHasBeenSet; }
    template<typename DataSplitConfigT = AutoMLDataSplitConfig>
    void SetDataSplitConfig(DataSplitConfigT&& value) { m_dataSplitConfigHasBeenSet = true; m_dataSplitConfig = std::forward<DataSplitConfigT>(value); }
    template<typename DataSplitConfigT = AutoMLDataSplitConfig>
    AutoMLJobConfig& WithDataSplitConfig(DataSplitConfigT&& value) { SetDataSplitConfig(std::forward<DataSplitConfigT>(value)); return *this;}
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
    inline AutoMLJobConfig& WithMode(AutoMLMode value) { SetMode(value); return *this;}
    ///@}
  private:

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet = false;

    AutoMLSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    AutoMLCandidateGenerationConfig m_candidateGenerationConfig;
    bool m_candidateGenerationConfigHasBeenSet = false;

    AutoMLDataSplitConfig m_dataSplitConfig;
    bool m_dataSplitConfigHasBeenSet = false;

    AutoMLMode m_mode{AutoMLMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
