/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StringConfigurationOptions.h>
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

StringConfigurationOptions::StringConfigurationOptions() : 
    m_defaultValueHasBeenSet(false),
    m_re2ExpressionHasBeenSet(false),
    m_expressionDescriptionHasBeenSet(false)
{
}

StringConfigurationOptions::StringConfigurationOptions(JsonView jsonValue) : 
    m_defaultValueHasBeenSet(false),
    m_re2ExpressionHasBeenSet(false),
    m_expressionDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

StringConfigurationOptions& StringConfigurationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetString("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Re2Expression"))
  {
    m_re2Expression = jsonValue.GetString("Re2Expression");

    m_re2ExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpressionDescription"))
  {
    m_expressionDescription = jsonValue.GetString("ExpressionDescription");

    m_expressionDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue StringConfigurationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  if(m_re2ExpressionHasBeenSet)
  {
   payload.WithString("Re2Expression", m_re2Expression);

  }

  if(m_expressionDescriptionHasBeenSet)
  {
   payload.WithString("ExpressionDescription", m_expressionDescription);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
