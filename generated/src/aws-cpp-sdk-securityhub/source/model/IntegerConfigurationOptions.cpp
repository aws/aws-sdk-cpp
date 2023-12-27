/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/IntegerConfigurationOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

IntegerConfigurationOptions::IntegerConfigurationOptions() : 
    m_defaultValue(0),
    m_defaultValueHasBeenSet(false),
    m_min(0),
    m_minHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
}

IntegerConfigurationOptions::IntegerConfigurationOptions(JsonView jsonValue) : 
    m_defaultValue(0),
    m_defaultValueHasBeenSet(false),
    m_min(0),
    m_minHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
  *this = jsonValue;
}

IntegerConfigurationOptions& IntegerConfigurationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetInteger("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetInteger("Min");

    m_minHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetInteger("Max");

    m_maxHasBeenSet = true;
  }

  return *this;
}

JsonValue IntegerConfigurationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   payload.WithInteger("DefaultValue", m_defaultValue);

  }

  if(m_minHasBeenSet)
  {
   payload.WithInteger("Min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithInteger("Max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
