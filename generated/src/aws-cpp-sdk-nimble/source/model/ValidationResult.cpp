/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ValidationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

ValidationResult::ValidationResult() : 
    m_state(LaunchProfileValidationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(LaunchProfileValidationStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_type(LaunchProfileValidationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ValidationResult::ValidationResult(JsonView jsonValue) : 
    m_state(LaunchProfileValidationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(LaunchProfileValidationStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_type(LaunchProfileValidationType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationResult& ValidationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = LaunchProfileValidationStateMapper::GetLaunchProfileValidationStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = LaunchProfileValidationStatusCodeMapper::GetLaunchProfileValidationStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = LaunchProfileValidationTypeMapper::GetLaunchProfileValidationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationResult::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", LaunchProfileValidationStateMapper::GetNameForLaunchProfileValidationState(m_state));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", LaunchProfileValidationStatusCodeMapper::GetNameForLaunchProfileValidationStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", LaunchProfileValidationTypeMapper::GetNameForLaunchProfileValidationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
