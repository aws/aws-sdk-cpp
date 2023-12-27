/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TextGenerationJobConfig.h>
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

TextGenerationJobConfig::TextGenerationJobConfig() : 
    m_completionCriteriaHasBeenSet(false),
    m_baseModelNameHasBeenSet(false),
    m_textGenerationHyperParametersHasBeenSet(false),
    m_modelAccessConfigHasBeenSet(false)
{
}

TextGenerationJobConfig::TextGenerationJobConfig(JsonView jsonValue) : 
    m_completionCriteriaHasBeenSet(false),
    m_baseModelNameHasBeenSet(false),
    m_textGenerationHyperParametersHasBeenSet(false),
    m_modelAccessConfigHasBeenSet(false)
{
  *this = jsonValue;
}

TextGenerationJobConfig& TextGenerationJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompletionCriteria"))
  {
    m_completionCriteria = jsonValue.GetObject("CompletionCriteria");

    m_completionCriteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaseModelName"))
  {
    m_baseModelName = jsonValue.GetString("BaseModelName");

    m_baseModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextGenerationHyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> textGenerationHyperParametersJsonMap = jsonValue.GetObject("TextGenerationHyperParameters").GetAllObjects();
    for(auto& textGenerationHyperParametersItem : textGenerationHyperParametersJsonMap)
    {
      m_textGenerationHyperParameters[textGenerationHyperParametersItem.first] = textGenerationHyperParametersItem.second.AsString();
    }
    m_textGenerationHyperParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelAccessConfig"))
  {
    m_modelAccessConfig = jsonValue.GetObject("ModelAccessConfig");

    m_modelAccessConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue TextGenerationJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_completionCriteriaHasBeenSet)
  {
   payload.WithObject("CompletionCriteria", m_completionCriteria.Jsonize());

  }

  if(m_baseModelNameHasBeenSet)
  {
   payload.WithString("BaseModelName", m_baseModelName);

  }

  if(m_textGenerationHyperParametersHasBeenSet)
  {
   JsonValue textGenerationHyperParametersJsonMap;
   for(auto& textGenerationHyperParametersItem : m_textGenerationHyperParameters)
   {
     textGenerationHyperParametersJsonMap.WithString(textGenerationHyperParametersItem.first, textGenerationHyperParametersItem.second);
   }
   payload.WithObject("TextGenerationHyperParameters", std::move(textGenerationHyperParametersJsonMap));

  }

  if(m_modelAccessConfigHasBeenSet)
  {
   payload.WithObject("ModelAccessConfig", m_modelAccessConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
