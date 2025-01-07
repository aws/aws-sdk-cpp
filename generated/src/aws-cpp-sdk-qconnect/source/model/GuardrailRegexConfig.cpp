﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GuardrailRegexConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

GuardrailRegexConfig::GuardrailRegexConfig() : 
    m_action(GuardrailSensitiveInformationAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_patternHasBeenSet(false)
{
}

GuardrailRegexConfig::GuardrailRegexConfig(JsonView jsonValue)
  : GuardrailRegexConfig()
{
  *this = jsonValue;
}

GuardrailRegexConfig& GuardrailRegexConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailSensitiveInformationActionMapper::GetGuardrailSensitiveInformationActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pattern"))
  {
    m_pattern = jsonValue.GetString("pattern");

    m_patternHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailRegexConfig::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailSensitiveInformationActionMapper::GetNameForGuardrailSensitiveInformationAction(m_action));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("pattern", m_pattern);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
