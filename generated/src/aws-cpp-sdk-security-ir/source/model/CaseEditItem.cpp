/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/CaseEditItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

CaseEditItem::CaseEditItem(JsonView jsonValue)
{
  *this = jsonValue;
}

CaseEditItem& CaseEditItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventTimestamp"))
  {
    m_eventTimestamp = jsonValue.GetDouble("eventTimestamp");
    m_eventTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetString("principal");
    m_principalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseEditItem::Jsonize() const
{
  JsonValue payload;

  if(m_eventTimestampHasBeenSet)
  {
   payload.WithDouble("eventTimestamp", m_eventTimestamp.SecondsWithMSPrecision());
  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
