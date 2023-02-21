/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/NetworkArtifactMeta.h>
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

NetworkArtifactMeta::NetworkArtifactMeta() : 
    m_overridesHasBeenSet(false)
{
}

NetworkArtifactMeta::NetworkArtifactMeta(JsonView jsonValue) : 
    m_overridesHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkArtifactMeta& NetworkArtifactMeta::operator =(JsonView jsonValue)
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

JsonValue NetworkArtifactMeta::Jsonize() const
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
