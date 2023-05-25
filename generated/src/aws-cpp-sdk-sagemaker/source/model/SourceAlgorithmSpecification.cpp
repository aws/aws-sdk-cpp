/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SourceAlgorithmSpecification.h>
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

SourceAlgorithmSpecification::SourceAlgorithmSpecification() : 
    m_sourceAlgorithmsHasBeenSet(false)
{
}

SourceAlgorithmSpecification::SourceAlgorithmSpecification(JsonView jsonValue) : 
    m_sourceAlgorithmsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceAlgorithmSpecification& SourceAlgorithmSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceAlgorithms"))
  {
    Aws::Utils::Array<JsonView> sourceAlgorithmsJsonList = jsonValue.GetArray("SourceAlgorithms");
    for(unsigned sourceAlgorithmsIndex = 0; sourceAlgorithmsIndex < sourceAlgorithmsJsonList.GetLength(); ++sourceAlgorithmsIndex)
    {
      m_sourceAlgorithms.push_back(sourceAlgorithmsJsonList[sourceAlgorithmsIndex].AsObject());
    }
    m_sourceAlgorithmsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceAlgorithmSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_sourceAlgorithmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceAlgorithmsJsonList(m_sourceAlgorithms.size());
   for(unsigned sourceAlgorithmsIndex = 0; sourceAlgorithmsIndex < sourceAlgorithmsJsonList.GetLength(); ++sourceAlgorithmsIndex)
   {
     sourceAlgorithmsJsonList[sourceAlgorithmsIndex].AsObject(m_sourceAlgorithms[sourceAlgorithmsIndex].Jsonize());
   }
   payload.WithArray("SourceAlgorithms", std::move(sourceAlgorithmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
