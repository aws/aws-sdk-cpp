/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ThemeGenerationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

ThemeGenerationConfig::ThemeGenerationConfig() : 
    m_fieldsForThemeGenerationHasBeenSet(false)
{
}

ThemeGenerationConfig::ThemeGenerationConfig(JsonView jsonValue) : 
    m_fieldsForThemeGenerationHasBeenSet(false)
{
  *this = jsonValue;
}

ThemeGenerationConfig& ThemeGenerationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldsForThemeGeneration"))
  {
    m_fieldsForThemeGeneration = jsonValue.GetObject("fieldsForThemeGeneration");

    m_fieldsForThemeGenerationHasBeenSet = true;
  }

  return *this;
}

JsonValue ThemeGenerationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fieldsForThemeGenerationHasBeenSet)
  {
   payload.WithObject("fieldsForThemeGeneration", m_fieldsForThemeGeneration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
