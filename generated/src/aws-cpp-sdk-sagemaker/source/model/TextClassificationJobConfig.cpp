/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TextClassificationJobConfig.h>
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

TextClassificationJobConfig::TextClassificationJobConfig() : 
    m_completionCriteriaHasBeenSet(false),
    m_contentColumnHasBeenSet(false),
    m_targetLabelColumnHasBeenSet(false)
{
}

TextClassificationJobConfig::TextClassificationJobConfig(JsonView jsonValue) : 
    m_completionCriteriaHasBeenSet(false),
    m_contentColumnHasBeenSet(false),
    m_targetLabelColumnHasBeenSet(false)
{
  *this = jsonValue;
}

TextClassificationJobConfig& TextClassificationJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompletionCriteria"))
  {
    m_completionCriteria = jsonValue.GetObject("CompletionCriteria");

    m_completionCriteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentColumn"))
  {
    m_contentColumn = jsonValue.GetString("ContentColumn");

    m_contentColumnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetLabelColumn"))
  {
    m_targetLabelColumn = jsonValue.GetString("TargetLabelColumn");

    m_targetLabelColumnHasBeenSet = true;
  }

  return *this;
}

JsonValue TextClassificationJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_completionCriteriaHasBeenSet)
  {
   payload.WithObject("CompletionCriteria", m_completionCriteria.Jsonize());

  }

  if(m_contentColumnHasBeenSet)
  {
   payload.WithString("ContentColumn", m_contentColumn);

  }

  if(m_targetLabelColumnHasBeenSet)
  {
   payload.WithString("TargetLabelColumn", m_targetLabelColumn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
