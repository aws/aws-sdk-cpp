/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/SaudiArabiaAdditionalInfo.h>
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

SaudiArabiaAdditionalInfo::SaudiArabiaAdditionalInfo() : 
    m_taxRegistrationNumberType(SaudiArabiaTaxRegistrationNumberType::NOT_SET),
    m_taxRegistrationNumberTypeHasBeenSet(false)
{
}

SaudiArabiaAdditionalInfo::SaudiArabiaAdditionalInfo(JsonView jsonValue)
  : SaudiArabiaAdditionalInfo()
{
  *this = jsonValue;
}

SaudiArabiaAdditionalInfo& SaudiArabiaAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taxRegistrationNumberType"))
  {
    m_taxRegistrationNumberType = SaudiArabiaTaxRegistrationNumberTypeMapper::GetSaudiArabiaTaxRegistrationNumberTypeForName(jsonValue.GetString("taxRegistrationNumberType"));

    m_taxRegistrationNumberTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SaudiArabiaAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_taxRegistrationNumberTypeHasBeenSet)
  {
   payload.WithString("taxRegistrationNumberType", SaudiArabiaTaxRegistrationNumberTypeMapper::GetNameForSaudiArabiaTaxRegistrationNumberType(m_taxRegistrationNumberType));
  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
