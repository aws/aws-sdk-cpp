/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/LedgerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDB
{
namespace Model
{

LedgerSummary::LedgerSummary() : 
    m_nameHasBeenSet(false),
    m_state(LedgerState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false)
{
}

LedgerSummary::LedgerSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_state(LedgerState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LedgerSummary& LedgerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = LedgerStateMapper::GetLedgerStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LedgerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", LedgerStateMapper::GetNameForLedgerState(m_state));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QLDB
} // namespace Aws
