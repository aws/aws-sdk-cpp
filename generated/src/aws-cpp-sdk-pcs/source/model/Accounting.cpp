/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/Accounting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

Accounting::Accounting(JsonView jsonValue)
{
  *this = jsonValue;
}

Accounting& Accounting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = AccountingModeMapper::GetAccountingModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultPurgeTimeInDays"))
  {
    m_defaultPurgeTimeInDays = jsonValue.GetInteger("defaultPurgeTimeInDays");
    m_defaultPurgeTimeInDaysHasBeenSet = true;
  }
  return *this;
}

JsonValue Accounting::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", AccountingModeMapper::GetNameForAccountingMode(m_mode));
  }

  if(m_defaultPurgeTimeInDaysHasBeenSet)
  {
   payload.WithInteger("defaultPurgeTimeInDays", m_defaultPurgeTimeInDays);

  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws
