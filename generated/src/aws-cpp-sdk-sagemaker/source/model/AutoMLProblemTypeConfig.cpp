/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLProblemTypeConfig.h>
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

AutoMLProblemTypeConfig::AutoMLProblemTypeConfig() : 
    m_imageClassificationJobConfigHasBeenSet(false),
    m_textClassificationJobConfigHasBeenSet(false)
{
}

AutoMLProblemTypeConfig::AutoMLProblemTypeConfig(JsonView jsonValue) : 
    m_imageClassificationJobConfigHasBeenSet(false),
    m_textClassificationJobConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLProblemTypeConfig& AutoMLProblemTypeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImageClassificationJobConfig"))
  {
    m_imageClassificationJobConfig = jsonValue.GetObject("ImageClassificationJobConfig");

    m_imageClassificationJobConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextClassificationJobConfig"))
  {
    m_textClassificationJobConfig = jsonValue.GetObject("TextClassificationJobConfig");

    m_textClassificationJobConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLProblemTypeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_imageClassificationJobConfigHasBeenSet)
  {
   payload.WithObject("ImageClassificationJobConfig", m_imageClassificationJobConfig.Jsonize());

  }

  if(m_textClassificationJobConfigHasBeenSet)
  {
   payload.WithObject("TextClassificationJobConfig", m_textClassificationJobConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
