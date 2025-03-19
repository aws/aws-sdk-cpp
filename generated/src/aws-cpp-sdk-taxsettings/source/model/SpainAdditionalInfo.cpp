/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/SpainAdditionalInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

SpainAdditionalInfo::SpainAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

SpainAdditionalInfo& SpainAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("registrationType"))
  {
    m_registrationType = RegistrationTypeMapper::GetRegistrationTypeForName(jsonValue.GetString("registrationType"));
    m_registrationTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SpainAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_registrationTypeHasBeenSet)
  {
   payload.WithString("registrationType", RegistrationTypeMapper::GetNameForRegistrationType(m_registrationType));
  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
