/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/EgyptAdditionalInfo.h>
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

EgyptAdditionalInfo::EgyptAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

EgyptAdditionalInfo& EgyptAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uniqueIdentificationNumber"))
  {
    m_uniqueIdentificationNumber = jsonValue.GetString("uniqueIdentificationNumber");
    m_uniqueIdentificationNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uniqueIdentificationNumberExpirationDate"))
  {
    m_uniqueIdentificationNumberExpirationDate = jsonValue.GetString("uniqueIdentificationNumberExpirationDate");
    m_uniqueIdentificationNumberExpirationDateHasBeenSet = true;
  }
  return *this;
}

JsonValue EgyptAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_uniqueIdentificationNumberHasBeenSet)
  {
   payload.WithString("uniqueIdentificationNumber", m_uniqueIdentificationNumber);

  }

  if(m_uniqueIdentificationNumberExpirationDateHasBeenSet)
  {
   payload.WithString("uniqueIdentificationNumberExpirationDate", m_uniqueIdentificationNumberExpirationDate);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
