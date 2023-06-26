/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CandidateGenerationConfig.h>
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

CandidateGenerationConfig::CandidateGenerationConfig() : 
    m_algorithmsConfigHasBeenSet(false)
{
}

CandidateGenerationConfig::CandidateGenerationConfig(JsonView jsonValue) : 
    m_algorithmsConfigHasBeenSet(false)
{
  *this = jsonValue;
}

CandidateGenerationConfig& CandidateGenerationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlgorithmsConfig"))
  {
    Aws::Utils::Array<JsonView> algorithmsConfigJsonList = jsonValue.GetArray("AlgorithmsConfig");
    for(unsigned algorithmsConfigIndex = 0; algorithmsConfigIndex < algorithmsConfigJsonList.GetLength(); ++algorithmsConfigIndex)
    {
      m_algorithmsConfig.push_back(algorithmsConfigJsonList[algorithmsConfigIndex].AsObject());
    }
    m_algorithmsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue CandidateGenerationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmsConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> algorithmsConfigJsonList(m_algorithmsConfig.size());
   for(unsigned algorithmsConfigIndex = 0; algorithmsConfigIndex < algorithmsConfigJsonList.GetLength(); ++algorithmsConfigIndex)
   {
     algorithmsConfigJsonList[algorithmsConfigIndex].AsObject(m_algorithmsConfig[algorithmsConfigIndex].Jsonize());
   }
   payload.WithArray("AlgorithmsConfig", std::move(algorithmsConfigJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
