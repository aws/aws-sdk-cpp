/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/UserDataValidationParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

UserDataValidationParameters::UserDataValidationParameters() : 
    m_sourceHasBeenSet(false),
    m_scriptType(ScriptType::NOT_SET),
    m_scriptTypeHasBeenSet(false)
{
}

UserDataValidationParameters::UserDataValidationParameters(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_scriptType(ScriptType::NOT_SET),
    m_scriptTypeHasBeenSet(false)
{
  *this = jsonValue;
}

UserDataValidationParameters& UserDataValidationParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scriptType"))
  {
    m_scriptType = ScriptTypeMapper::GetScriptTypeForName(jsonValue.GetString("scriptType"));

    m_scriptTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue UserDataValidationParameters::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_scriptTypeHasBeenSet)
  {
   payload.WithString("scriptType", ScriptTypeMapper::GetNameForScriptType(m_scriptType));
  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
