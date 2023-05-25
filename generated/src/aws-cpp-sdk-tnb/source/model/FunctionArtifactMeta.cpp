/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/FunctionArtifactMeta.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

FunctionArtifactMeta::FunctionArtifactMeta() : 
    m_overridesHasBeenSet(false)
{
}

FunctionArtifactMeta::FunctionArtifactMeta(JsonView jsonValue) : 
    m_overridesHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionArtifactMeta& FunctionArtifactMeta::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("overrides"))
  {
    Aws::Utils::Array<JsonView> overridesJsonList = jsonValue.GetArray("overrides");
    for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
    {
      m_overrides.push_back(overridesJsonList[overridesIndex].AsObject());
    }
    m_overridesHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionArtifactMeta::Jsonize() const
{
  JsonValue payload;

  if(m_overridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> overridesJsonList(m_overrides.size());
   for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
   {
     overridesJsonList[overridesIndex].AsObject(m_overrides[overridesIndex].Jsonize());
   }
   payload.WithArray("overrides", std::move(overridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
