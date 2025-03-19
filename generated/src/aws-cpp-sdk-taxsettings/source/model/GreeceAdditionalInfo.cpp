/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/GreeceAdditionalInfo.h>
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

GreeceAdditionalInfo::GreeceAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

GreeceAdditionalInfo& GreeceAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contractingAuthorityCode"))
  {
    m_contractingAuthorityCode = jsonValue.GetString("contractingAuthorityCode");
    m_contractingAuthorityCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue GreeceAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_contractingAuthorityCodeHasBeenSet)
  {
   payload.WithString("contractingAuthorityCode", m_contractingAuthorityCode);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
