/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/UzbekistanAdditionalInfo.h>
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

UzbekistanAdditionalInfo::UzbekistanAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

UzbekistanAdditionalInfo& UzbekistanAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taxRegistrationNumberType"))
  {
    m_taxRegistrationNumberType = UzbekistanTaxRegistrationNumberTypeMapper::GetUzbekistanTaxRegistrationNumberTypeForName(jsonValue.GetString("taxRegistrationNumberType"));
    m_taxRegistrationNumberTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vatRegistrationNumber"))
  {
    m_vatRegistrationNumber = jsonValue.GetString("vatRegistrationNumber");
    m_vatRegistrationNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue UzbekistanAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_taxRegistrationNumberTypeHasBeenSet)
  {
   payload.WithString("taxRegistrationNumberType", UzbekistanTaxRegistrationNumberTypeMapper::GetNameForUzbekistanTaxRegistrationNumberType(m_taxRegistrationNumberType));
  }

  if(m_vatRegistrationNumberHasBeenSet)
  {
   payload.WithString("vatRegistrationNumber", m_vatRegistrationNumber);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
