/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/RomaniaAdditionalInfo.h>
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

RomaniaAdditionalInfo::RomaniaAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

RomaniaAdditionalInfo& RomaniaAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taxRegistrationNumberType"))
  {
    m_taxRegistrationNumberType = TaxRegistrationNumberTypeMapper::GetTaxRegistrationNumberTypeForName(jsonValue.GetString("taxRegistrationNumberType"));
    m_taxRegistrationNumberTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue RomaniaAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_taxRegistrationNumberTypeHasBeenSet)
  {
   payload.WithString("taxRegistrationNumberType", TaxRegistrationNumberTypeMapper::GetNameForTaxRegistrationNumberType(m_taxRegistrationNumberType));
  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
