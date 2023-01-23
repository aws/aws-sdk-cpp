/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/BandMathConfigInput.h>
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

BandMathConfigInput::BandMathConfigInput() : 
    m_customIndicesHasBeenSet(false),
    m_predefinedIndicesHasBeenSet(false)
{
}

BandMathConfigInput::BandMathConfigInput(JsonView jsonValue) : 
    m_customIndicesHasBeenSet(false),
    m_predefinedIndicesHasBeenSet(false)
{
  *this = jsonValue;
}

BandMathConfigInput& BandMathConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomIndices"))
  {
    m_customIndices = jsonValue.GetObject("CustomIndices");

    m_customIndicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredefinedIndices"))
  {
    Aws::Utils::Array<JsonView> predefinedIndicesJsonList = jsonValue.GetArray("PredefinedIndices");
    for(unsigned predefinedIndicesIndex = 0; predefinedIndicesIndex < predefinedIndicesJsonList.GetLength(); ++predefinedIndicesIndex)
    {
      m_predefinedIndices.push_back(predefinedIndicesJsonList[predefinedIndicesIndex].AsString());
    }
    m_predefinedIndicesHasBeenSet = true;
  }

  return *this;
}

JsonValue BandMathConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_customIndicesHasBeenSet)
  {
   payload.WithObject("CustomIndices", m_customIndices.Jsonize());

  }

  if(m_predefinedIndicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> predefinedIndicesJsonList(m_predefinedIndices.size());
   for(unsigned predefinedIndicesIndex = 0; predefinedIndicesIndex < predefinedIndicesJsonList.GetLength(); ++predefinedIndicesIndex)
   {
     predefinedIndicesJsonList[predefinedIndicesIndex].AsString(m_predefinedIndices[predefinedIndicesIndex]);
   }
   payload.WithArray("PredefinedIndices", std::move(predefinedIndicesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
