/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ServerlessJobConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ServerlessJobConfig::ServerlessJobConfig(JsonView jsonValue) { *this = jsonValue; }

ServerlessJobConfig& ServerlessJobConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BaseModelArn")) {
    m_baseModelArn = jsonValue.GetString("BaseModelArn");
    m_baseModelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcceptEula")) {
    m_acceptEula = jsonValue.GetBool("AcceptEula");
    m_acceptEulaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobType")) {
    m_jobType = ServerlessJobTypeMapper::GetServerlessJobTypeForName(jsonValue.GetString("JobType"));
    m_jobTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomizationTechnique")) {
    m_customizationTechnique =
        CustomizationTechniqueMapper::GetCustomizationTechniqueForName(jsonValue.GetString("CustomizationTechnique"));
    m_customizationTechniqueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Peft")) {
    m_peft = PeftMapper::GetPeftForName(jsonValue.GetString("Peft"));
    m_peftHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationType")) {
    m_evaluationType = EvaluationTypeMapper::GetEvaluationTypeForName(jsonValue.GetString("EvaluationType"));
    m_evaluationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluatorArn")) {
    m_evaluatorArn = jsonValue.GetString("EvaluatorArn");
    m_evaluatorArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ServerlessJobConfig::Jsonize() const {
  JsonValue payload;

  if (m_baseModelArnHasBeenSet) {
    payload.WithString("BaseModelArn", m_baseModelArn);
  }

  if (m_acceptEulaHasBeenSet) {
    payload.WithBool("AcceptEula", m_acceptEula);
  }

  if (m_jobTypeHasBeenSet) {
    payload.WithString("JobType", ServerlessJobTypeMapper::GetNameForServerlessJobType(m_jobType));
  }

  if (m_customizationTechniqueHasBeenSet) {
    payload.WithString("CustomizationTechnique", CustomizationTechniqueMapper::GetNameForCustomizationTechnique(m_customizationTechnique));
  }

  if (m_peftHasBeenSet) {
    payload.WithString("Peft", PeftMapper::GetNameForPeft(m_peft));
  }

  if (m_evaluationTypeHasBeenSet) {
    payload.WithString("EvaluationType", EvaluationTypeMapper::GetNameForEvaluationType(m_evaluationType));
  }

  if (m_evaluatorArnHasBeenSet) {
    payload.WithString("EvaluatorArn", m_evaluatorArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
