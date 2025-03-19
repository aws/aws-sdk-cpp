/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/ValidationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

ValidationSettings::ValidationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ValidationSettings& ValidationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = ValidationModeMapper::GetValidationModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", ValidationModeMapper::GetNameForValidationMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
