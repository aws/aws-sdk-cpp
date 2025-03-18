/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ValidateStateMachineDefinitionDiagnostic.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ValidateStateMachineDefinitionDiagnostic::ValidateStateMachineDefinitionDiagnostic(JsonView jsonValue)
{
  *this = jsonValue;
}

ValidateStateMachineDefinitionDiagnostic& ValidateStateMachineDefinitionDiagnostic::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("severity"))
  {
    m_severity = ValidateStateMachineDefinitionSeverityMapper::GetValidateStateMachineDefinitionSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");
    m_locationHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidateStateMachineDefinitionDiagnostic::Jsonize() const
{
  JsonValue payload;

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", ValidateStateMachineDefinitionSeverityMapper::GetNameForValidateStateMachineDefinitionSeverity(m_severity));
  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
