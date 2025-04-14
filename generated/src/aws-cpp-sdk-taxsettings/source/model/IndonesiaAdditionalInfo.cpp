/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/IndonesiaAdditionalInfo.h>
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

IndonesiaAdditionalInfo::IndonesiaAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

IndonesiaAdditionalInfo& IndonesiaAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("decisionNumber"))
  {
    m_decisionNumber = jsonValue.GetString("decisionNumber");
    m_decisionNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ppnExceptionDesignationCode"))
  {
    m_ppnExceptionDesignationCode = jsonValue.GetString("ppnExceptionDesignationCode");
    m_ppnExceptionDesignationCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taxRegistrationNumberType"))
  {
    m_taxRegistrationNumberType = IndonesiaTaxRegistrationNumberTypeMapper::GetIndonesiaTaxRegistrationNumberTypeForName(jsonValue.GetString("taxRegistrationNumberType"));
    m_taxRegistrationNumberTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue IndonesiaAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_decisionNumberHasBeenSet)
  {
   payload.WithString("decisionNumber", m_decisionNumber);

  }

  if(m_ppnExceptionDesignationCodeHasBeenSet)
  {
   payload.WithString("ppnExceptionDesignationCode", m_ppnExceptionDesignationCode);

  }

  if(m_taxRegistrationNumberTypeHasBeenSet)
  {
   payload.WithString("taxRegistrationNumberType", IndonesiaTaxRegistrationNumberTypeMapper::GetNameForIndonesiaTaxRegistrationNumberType(m_taxRegistrationNumberType));
  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
