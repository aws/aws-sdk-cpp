/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/BrazilAdditionalInfo.h>
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

BrazilAdditionalInfo::BrazilAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

BrazilAdditionalInfo& BrazilAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ccmCode"))
  {
    m_ccmCode = jsonValue.GetString("ccmCode");
    m_ccmCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("legalNatureCode"))
  {
    m_legalNatureCode = jsonValue.GetString("legalNatureCode");
    m_legalNatureCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue BrazilAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_ccmCodeHasBeenSet)
  {
   payload.WithString("ccmCode", m_ccmCode);

  }

  if(m_legalNatureCodeHasBeenSet)
  {
   payload.WithString("legalNatureCode", m_legalNatureCode);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
