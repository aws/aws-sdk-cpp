/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GuardrailPiiEntityConfig.h>
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

GuardrailPiiEntityConfig::GuardrailPiiEntityConfig() : 
    m_action(GuardrailSensitiveInformationAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_type(GuardrailPiiEntityType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

GuardrailPiiEntityConfig::GuardrailPiiEntityConfig(JsonView jsonValue)
  : GuardrailPiiEntityConfig()
{
  *this = jsonValue;
}

GuardrailPiiEntityConfig& GuardrailPiiEntityConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailSensitiveInformationActionMapper::GetGuardrailSensitiveInformationActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailPiiEntityTypeMapper::GetGuardrailPiiEntityTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailPiiEntityConfig::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailSensitiveInformationActionMapper::GetNameForGuardrailSensitiveInformationAction(m_action));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailPiiEntityTypeMapper::GetNameForGuardrailPiiEntityType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
