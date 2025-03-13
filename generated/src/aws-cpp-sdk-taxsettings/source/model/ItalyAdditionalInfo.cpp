/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/ItalyAdditionalInfo.h>
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

ItalyAdditionalInfo::ItalyAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

ItalyAdditionalInfo& ItalyAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cigNumber"))
  {
    m_cigNumber = jsonValue.GetString("cigNumber");
    m_cigNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cupNumber"))
  {
    m_cupNumber = jsonValue.GetString("cupNumber");
    m_cupNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sdiAccountId"))
  {
    m_sdiAccountId = jsonValue.GetString("sdiAccountId");
    m_sdiAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taxCode"))
  {
    m_taxCode = jsonValue.GetString("taxCode");
    m_taxCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ItalyAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_cigNumberHasBeenSet)
  {
   payload.WithString("cigNumber", m_cigNumber);

  }

  if(m_cupNumberHasBeenSet)
  {
   payload.WithString("cupNumber", m_cupNumber);

  }

  if(m_sdiAccountIdHasBeenSet)
  {
   payload.WithString("sdiAccountId", m_sdiAccountId);

  }

  if(m_taxCodeHasBeenSet)
  {
   payload.WithString("taxCode", m_taxCode);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
