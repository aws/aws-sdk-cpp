/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLAlgorithmConfig.h>
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

AutoMLAlgorithmConfig::AutoMLAlgorithmConfig() : 
    m_autoMLAlgorithmsHasBeenSet(false)
{
}

AutoMLAlgorithmConfig::AutoMLAlgorithmConfig(JsonView jsonValue) : 
    m_autoMLAlgorithmsHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLAlgorithmConfig& AutoMLAlgorithmConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoMLAlgorithms"))
  {
    Aws::Utils::Array<JsonView> autoMLAlgorithmsJsonList = jsonValue.GetArray("AutoMLAlgorithms");
    for(unsigned autoMLAlgorithmsIndex = 0; autoMLAlgorithmsIndex < autoMLAlgorithmsJsonList.GetLength(); ++autoMLAlgorithmsIndex)
    {
      m_autoMLAlgorithms.push_back(AutoMLAlgorithmMapper::GetAutoMLAlgorithmForName(autoMLAlgorithmsJsonList[autoMLAlgorithmsIndex].AsString()));
    }
    m_autoMLAlgorithmsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLAlgorithmConfig::Jsonize() const
{
  JsonValue payload;

  if(m_autoMLAlgorithmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoMLAlgorithmsJsonList(m_autoMLAlgorithms.size());
   for(unsigned autoMLAlgorithmsIndex = 0; autoMLAlgorithmsIndex < autoMLAlgorithmsJsonList.GetLength(); ++autoMLAlgorithmsIndex)
   {
     autoMLAlgorithmsJsonList[autoMLAlgorithmsIndex].AsString(AutoMLAlgorithmMapper::GetNameForAutoMLAlgorithm(m_autoMLAlgorithms[autoMLAlgorithmsIndex]));
   }
   payload.WithArray("AutoMLAlgorithms", std::move(autoMLAlgorithmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
