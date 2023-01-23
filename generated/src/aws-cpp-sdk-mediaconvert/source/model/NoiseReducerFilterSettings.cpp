/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NoiseReducerFilterSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

NoiseReducerFilterSettings::NoiseReducerFilterSettings() : 
    m_strength(0),
    m_strengthHasBeenSet(false)
{
}

NoiseReducerFilterSettings::NoiseReducerFilterSettings(JsonView jsonValue) : 
    m_strength(0),
    m_strengthHasBeenSet(false)
{
  *this = jsonValue;
}

NoiseReducerFilterSettings& NoiseReducerFilterSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("strength"))
  {
    m_strength = jsonValue.GetInteger("strength");

    m_strengthHasBeenSet = true;
  }

  return *this;
}

JsonValue NoiseReducerFilterSettings::Jsonize() const
{
  JsonValue payload;

  if(m_strengthHasBeenSet)
  {
   payload.WithInteger("strength", m_strength);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
