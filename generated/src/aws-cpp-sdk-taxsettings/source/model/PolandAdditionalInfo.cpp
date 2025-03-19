/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/PolandAdditionalInfo.h>
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

PolandAdditionalInfo::PolandAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

PolandAdditionalInfo& PolandAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("individualRegistrationNumber"))
  {
    m_individualRegistrationNumber = jsonValue.GetString("individualRegistrationNumber");
    m_individualRegistrationNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isGroupVatEnabled"))
  {
    m_isGroupVatEnabled = jsonValue.GetBool("isGroupVatEnabled");
    m_isGroupVatEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue PolandAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_individualRegistrationNumberHasBeenSet)
  {
   payload.WithString("individualRegistrationNumber", m_individualRegistrationNumber);

  }

  if(m_isGroupVatEnabledHasBeenSet)
  {
   payload.WithBool("isGroupVatEnabled", m_isGroupVatEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
