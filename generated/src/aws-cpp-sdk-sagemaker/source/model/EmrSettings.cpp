/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EmrSettings.h>
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

EmrSettings::EmrSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

EmrSettings& EmrSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssumableRoleArns"))
  {
    Aws::Utils::Array<JsonView> assumableRoleArnsJsonList = jsonValue.GetArray("AssumableRoleArns");
    for(unsigned assumableRoleArnsIndex = 0; assumableRoleArnsIndex < assumableRoleArnsJsonList.GetLength(); ++assumableRoleArnsIndex)
    {
      m_assumableRoleArns.push_back(assumableRoleArnsJsonList[assumableRoleArnsIndex].AsString());
    }
    m_assumableRoleArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionRoleArns"))
  {
    Aws::Utils::Array<JsonView> executionRoleArnsJsonList = jsonValue.GetArray("ExecutionRoleArns");
    for(unsigned executionRoleArnsIndex = 0; executionRoleArnsIndex < executionRoleArnsJsonList.GetLength(); ++executionRoleArnsIndex)
    {
      m_executionRoleArns.push_back(executionRoleArnsJsonList[executionRoleArnsIndex].AsString());
    }
    m_executionRoleArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue EmrSettings::Jsonize() const
{
  JsonValue payload;

  if(m_assumableRoleArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assumableRoleArnsJsonList(m_assumableRoleArns.size());
   for(unsigned assumableRoleArnsIndex = 0; assumableRoleArnsIndex < assumableRoleArnsJsonList.GetLength(); ++assumableRoleArnsIndex)
   {
     assumableRoleArnsJsonList[assumableRoleArnsIndex].AsString(m_assumableRoleArns[assumableRoleArnsIndex]);
   }
   payload.WithArray("AssumableRoleArns", std::move(assumableRoleArnsJsonList));

  }

  if(m_executionRoleArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> executionRoleArnsJsonList(m_executionRoleArns.size());
   for(unsigned executionRoleArnsIndex = 0; executionRoleArnsIndex < executionRoleArnsJsonList.GetLength(); ++executionRoleArnsIndex)
   {
     executionRoleArnsJsonList[executionRoleArnsIndex].AsString(m_executionRoleArns[executionRoleArnsIndex]);
   }
   payload.WithArray("ExecutionRoleArns", std::move(executionRoleArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
