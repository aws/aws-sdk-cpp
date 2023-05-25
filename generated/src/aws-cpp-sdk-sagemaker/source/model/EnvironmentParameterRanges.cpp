/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EnvironmentParameterRanges.h>
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

EnvironmentParameterRanges::EnvironmentParameterRanges() : 
    m_categoricalParameterRangesHasBeenSet(false)
{
}

EnvironmentParameterRanges::EnvironmentParameterRanges(JsonView jsonValue) : 
    m_categoricalParameterRangesHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentParameterRanges& EnvironmentParameterRanges::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategoricalParameterRanges"))
  {
    Aws::Utils::Array<JsonView> categoricalParameterRangesJsonList = jsonValue.GetArray("CategoricalParameterRanges");
    for(unsigned categoricalParameterRangesIndex = 0; categoricalParameterRangesIndex < categoricalParameterRangesJsonList.GetLength(); ++categoricalParameterRangesIndex)
    {
      m_categoricalParameterRanges.push_back(categoricalParameterRangesJsonList[categoricalParameterRangesIndex].AsObject());
    }
    m_categoricalParameterRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentParameterRanges::Jsonize() const
{
  JsonValue payload;

  if(m_categoricalParameterRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoricalParameterRangesJsonList(m_categoricalParameterRanges.size());
   for(unsigned categoricalParameterRangesIndex = 0; categoricalParameterRangesIndex < categoricalParameterRangesJsonList.GetLength(); ++categoricalParameterRangesIndex)
   {
     categoricalParameterRangesJsonList[categoricalParameterRangesIndex].AsObject(m_categoricalParameterRanges[categoricalParameterRangesIndex].Jsonize());
   }
   payload.WithArray("CategoricalParameterRanges", std::move(categoricalParameterRangesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
