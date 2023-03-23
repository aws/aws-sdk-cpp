/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ImageClassificationJobConfig.h>
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

ImageClassificationJobConfig::ImageClassificationJobConfig() : 
    m_completionCriteriaHasBeenSet(false)
{
}

ImageClassificationJobConfig::ImageClassificationJobConfig(JsonView jsonValue) : 
    m_completionCriteriaHasBeenSet(false)
{
  *this = jsonValue;
}

ImageClassificationJobConfig& ImageClassificationJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompletionCriteria"))
  {
    m_completionCriteria = jsonValue.GetObject("CompletionCriteria");

    m_completionCriteriaHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageClassificationJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_completionCriteriaHasBeenSet)
  {
   payload.WithObject("CompletionCriteria", m_completionCriteria.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
