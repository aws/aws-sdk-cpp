/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LambdaStepMetadata.h>
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

LambdaStepMetadata::LambdaStepMetadata() : 
    m_arnHasBeenSet(false),
    m_outputParametersHasBeenSet(false)
{
}

LambdaStepMetadata::LambdaStepMetadata(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_outputParametersHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaStepMetadata& LambdaStepMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputParameters"))
  {
    Aws::Utils::Array<JsonView> outputParametersJsonList = jsonValue.GetArray("OutputParameters");
    for(unsigned outputParametersIndex = 0; outputParametersIndex < outputParametersJsonList.GetLength(); ++outputParametersIndex)
    {
      m_outputParameters.push_back(outputParametersJsonList[outputParametersIndex].AsObject());
    }
    m_outputParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaStepMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_outputParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputParametersJsonList(m_outputParameters.size());
   for(unsigned outputParametersIndex = 0; outputParametersIndex < outputParametersJsonList.GetLength(); ++outputParametersIndex)
   {
     outputParametersJsonList[outputParametersIndex].AsObject(m_outputParameters[outputParametersIndex].Jsonize());
   }
   payload.WithArray("OutputParameters", std::move(outputParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
