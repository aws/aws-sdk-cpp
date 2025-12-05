/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CustomizationTechnique.h>
#include <aws/sagemaker/model/EvaluationType.h>
#include <aws/sagemaker/model/Peft.h>
#include <aws/sagemaker/model/ServerlessJobType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p> The configuration for the serverless training job. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ServerlessJobConfig">AWS
 * API Reference</a></p>
 */
class ServerlessJobConfig {
 public:
  AWS_SAGEMAKER_API ServerlessJobConfig() = default;
  AWS_SAGEMAKER_API ServerlessJobConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ServerlessJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The base model Amazon Resource Name (ARN) in <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/jumpstart-foundation-models-use.html">SageMaker
   * Public Hub</a>. SageMaker always selects the latest version of the provided
   * model. </p>
   */
  inline const Aws::String& GetBaseModelArn() const { return m_baseModelArn; }
  inline bool BaseModelArnHasBeenSet() const { return m_baseModelArnHasBeenSet; }
  template <typename BaseModelArnT = Aws::String>
  void SetBaseModelArn(BaseModelArnT&& value) {
    m_baseModelArnHasBeenSet = true;
    m_baseModelArn = std::forward<BaseModelArnT>(value);
  }
  template <typename BaseModelArnT = Aws::String>
  ServerlessJobConfig& WithBaseModelArn(BaseModelArnT&& value) {
    SetBaseModelArn(std::forward<BaseModelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Specifies agreement to the model end-user license agreement (EULA). The
   * <code>AcceptEula</code> value must be explicitly defined as <code>True</code> in
   * order to accept the EULA that this model requires. You are responsible for
   * reviewing and complying with any applicable license terms and making sure they
   * are acceptable for your use case before downloading or using a model. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/jumpstart-foundation-models-choose.html#jumpstart-foundation-models-choose-eula">End-user
   * license agreements</a> section for more details on accepting the EULA. </p>
   */
  inline bool GetAcceptEula() const { return m_acceptEula; }
  inline bool AcceptEulaHasBeenSet() const { return m_acceptEulaHasBeenSet; }
  inline void SetAcceptEula(bool value) {
    m_acceptEulaHasBeenSet = true;
    m_acceptEula = value;
  }
  inline ServerlessJobConfig& WithAcceptEula(bool value) {
    SetAcceptEula(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The serverless training job type. </p>
   */
  inline ServerlessJobType GetJobType() const { return m_jobType; }
  inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
  inline void SetJobType(ServerlessJobType value) {
    m_jobTypeHasBeenSet = true;
    m_jobType = value;
  }
  inline ServerlessJobConfig& WithJobType(ServerlessJobType value) {
    SetJobType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The model customization technique. </p>
   */
  inline CustomizationTechnique GetCustomizationTechnique() const { return m_customizationTechnique; }
  inline bool CustomizationTechniqueHasBeenSet() const { return m_customizationTechniqueHasBeenSet; }
  inline void SetCustomizationTechnique(CustomizationTechnique value) {
    m_customizationTechniqueHasBeenSet = true;
    m_customizationTechnique = value;
  }
  inline ServerlessJobConfig& WithCustomizationTechnique(CustomizationTechnique value) {
    SetCustomizationTechnique(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The parameter-efficient fine-tuning configuration. </p>
   */
  inline Peft GetPeft() const { return m_peft; }
  inline bool PeftHasBeenSet() const { return m_peftHasBeenSet; }
  inline void SetPeft(Peft value) {
    m_peftHasBeenSet = true;
    m_peft = value;
  }
  inline ServerlessJobConfig& WithPeft(Peft value) {
    SetPeft(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The evaluation job type. Required when serverless job type is
   * <code>Evaluation</code>. </p>
   */
  inline EvaluationType GetEvaluationType() const { return m_evaluationType; }
  inline bool EvaluationTypeHasBeenSet() const { return m_evaluationTypeHasBeenSet; }
  inline void SetEvaluationType(EvaluationType value) {
    m_evaluationTypeHasBeenSet = true;
    m_evaluationType = value;
  }
  inline ServerlessJobConfig& WithEvaluationType(EvaluationType value) {
    SetEvaluationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The evaluator Amazon Resource Name (ARN) used as reward function or reward
   * prompt. </p>
   */
  inline const Aws::String& GetEvaluatorArn() const { return m_evaluatorArn; }
  inline bool EvaluatorArnHasBeenSet() const { return m_evaluatorArnHasBeenSet; }
  template <typename EvaluatorArnT = Aws::String>
  void SetEvaluatorArn(EvaluatorArnT&& value) {
    m_evaluatorArnHasBeenSet = true;
    m_evaluatorArn = std::forward<EvaluatorArnT>(value);
  }
  template <typename EvaluatorArnT = Aws::String>
  ServerlessJobConfig& WithEvaluatorArn(EvaluatorArnT&& value) {
    SetEvaluatorArn(std::forward<EvaluatorArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_baseModelArn;

  bool m_acceptEula{false};

  ServerlessJobType m_jobType{ServerlessJobType::NOT_SET};

  CustomizationTechnique m_customizationTechnique{CustomizationTechnique::NOT_SET};

  Peft m_peft{Peft::NOT_SET};

  EvaluationType m_evaluationType{EvaluationType::NOT_SET};

  Aws::String m_evaluatorArn;
  bool m_baseModelArnHasBeenSet = false;
  bool m_acceptEulaHasBeenSet = false;
  bool m_jobTypeHasBeenSet = false;
  bool m_customizationTechniqueHasBeenSet = false;
  bool m_peftHasBeenSet = false;
  bool m_evaluationTypeHasBeenSet = false;
  bool m_evaluatorArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
