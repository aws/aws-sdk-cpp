/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BooleanConfigurationOptions.h>
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

BooleanConfigurationOptions::BooleanConfigurationOptions() : 
    m_defaultValue(false),
    m_defaultValueHasBeenSet(false)
{
}

BooleanConfigurationOptions::BooleanConfigurationOptions(JsonView jsonValue) : 
    m_defaultValue(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

BooleanConfigurationOptions& BooleanConfigurationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetBool("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue BooleanConfigurationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   payload.WithBool("DefaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
