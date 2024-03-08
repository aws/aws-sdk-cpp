/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DoubleConfigurationOptions.h>
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

DoubleConfigurationOptions::DoubleConfigurationOptions() : 
    m_defaultValue(0.0),
    m_defaultValueHasBeenSet(false),
    m_min(0.0),
    m_minHasBeenSet(false),
    m_max(0.0),
    m_maxHasBeenSet(false)
{
}

DoubleConfigurationOptions::DoubleConfigurationOptions(JsonView jsonValue) : 
    m_defaultValue(0.0),
    m_defaultValueHasBeenSet(false),
    m_min(0.0),
    m_minHasBeenSet(false),
    m_max(0.0),
    m_maxHasBeenSet(false)
{
  *this = jsonValue;
}

DoubleConfigurationOptions& DoubleConfigurationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetDouble("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetDouble("Min");

    m_minHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetDouble("Max");

    m_maxHasBeenSet = true;
  }

  return *this;
}

JsonValue DoubleConfigurationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   payload.WithDouble("DefaultValue", m_defaultValue);

  }

  if(m_minHasBeenSet)
  {
   payload.WithDouble("Min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("Max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
