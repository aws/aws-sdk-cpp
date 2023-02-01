/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/CustomIndicesInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

CustomIndicesInput::CustomIndicesInput() : 
    m_operationsHasBeenSet(false)
{
}

CustomIndicesInput::CustomIndicesInput(JsonView jsonValue) : 
    m_operationsHasBeenSet(false)
{
  *this = jsonValue;
}

CustomIndicesInput& CustomIndicesInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operations"))
  {
    Aws::Utils::Array<JsonView> operationsJsonList = jsonValue.GetArray("Operations");
    for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
    {
      m_operations.push_back(operationsJsonList[operationsIndex].AsObject());
    }
    m_operationsHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomIndicesInput::Jsonize() const
{
  JsonValue payload;

  if(m_operationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operationsJsonList(m_operations.size());
   for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
   {
     operationsJsonList[operationsIndex].AsObject(m_operations[operationsIndex].Jsonize());
   }
   payload.WithArray("Operations", std::move(operationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
