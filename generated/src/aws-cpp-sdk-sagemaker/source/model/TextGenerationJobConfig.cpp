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
    m_baseModelNameHasBeenSet(false)
{
}

TextGenerationJobConfig::TextGenerationJobConfig(JsonView jsonValue) : 
    m_completionCriteriaHasBeenSet(false),
    m_baseModelNameHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
