/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TabularJobConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TabularJobConfig::TabularJobConfig() : 
    m_candidateGenerationConfigHasBeenSet(false),
    m_completionCriteriaHasBeenSet(false),
    m_featureSpecificationS3UriHasBeenSet(false),
    m_mode(AutoMLMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_generateCandidateDefinitionsOnly(false),
    m_generateCandidateDefinitionsOnlyHasBeenSet(false),
    m_problemType(ProblemType::NOT_SET),
    m_problemTypeHasBeenSet(false),
    m_targetAttributeNameHasBeenSet(false),
    m_sampleWeightAttributeNameHasBeenSet(false)
{
}

TabularJobConfig::TabularJobConfig(JsonView jsonValue) : 
    m_candidateGenerationConfigHasBeenSet(false),
    m_completionCriteriaHasBeenSet(false),
    m_featureSpecificationS3UriHasBeenSet(false),
    m_mode(AutoMLMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_generateCandidateDefinitionsOnly(false),
    m_generateCandidateDefinitionsOnlyHasBeenSet(false),
    m_problemType(ProblemType::NOT_SET),
    m_problemTypeHasBeenSet(false),
    m_targetAttributeNameHasBeenSet(false),
    m_sampleWeightAttributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

TabularJobConfig& TabularJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CandidateGenerationConfig"))
  {
    m_candidateGenerationConfig = jsonValue.GetObject("CandidateGenerationConfig");

    m_candidateGenerationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionCriteria"))
  {
    m_completionCriteria = jsonValue.GetObject("CompletionCriteria");

    m_completionCriteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureSpecificationS3Uri"))
  {
    m_featureSpecificationS3Uri = jsonValue.GetString("FeatureSpecificationS3Uri");

    m_featureSpecificationS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = AutoMLModeMapper::GetAutoMLModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenerateCandidateDefinitionsOnly"))
  {
    m_generateCandidateDefinitionsOnly = jsonValue.GetBool("GenerateCandidateDefinitionsOnly");

    m_generateCandidateDefinitionsOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProblemType"))
  {
    m_problemType = ProblemTypeMapper::GetProblemTypeForName(jsonValue.GetString("ProblemType"));

    m_problemTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetAttributeName"))
  {
    m_targetAttributeName = jsonValue.GetString("TargetAttributeName");

    m_targetAttributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampleWeightAttributeName"))
  {
    m_sampleWeightAttributeName = jsonValue.GetString("SampleWeightAttributeName");

    m_sampleWeightAttributeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TabularJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_candidateGenerationConfigHasBeenSet)
  {
   payload.WithObject("CandidateGenerationConfig", m_candidateGenerationConfig.Jsonize());

  }

  if(m_completionCriteriaHasBeenSet)
  {
   payload.WithObject("CompletionCriteria", m_completionCriteria.Jsonize());

  }

  if(m_featureSpecificationS3UriHasBeenSet)
  {
   payload.WithString("FeatureSpecificationS3Uri", m_featureSpecificationS3Uri);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", AutoMLModeMapper::GetNameForAutoMLMode(m_mode));
  }

  if(m_generateCandidateDefinitionsOnlyHasBeenSet)
  {
   payload.WithBool("GenerateCandidateDefinitionsOnly", m_generateCandidateDefinitionsOnly);

  }

  if(m_problemTypeHasBeenSet)
  {
   payload.WithString("ProblemType", ProblemTypeMapper::GetNameForProblemType(m_problemType));
  }

  if(m_targetAttributeNameHasBeenSet)
  {
   payload.WithString("TargetAttributeName", m_targetAttributeName);

  }

  if(m_sampleWeightAttributeNameHasBeenSet)
  {
   payload.WithString("SampleWeightAttributeName", m_sampleWeightAttributeName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
