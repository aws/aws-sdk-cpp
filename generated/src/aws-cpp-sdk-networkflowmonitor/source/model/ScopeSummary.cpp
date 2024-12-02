/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/ScopeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

ScopeSummary::ScopeSummary() : 
    m_scopeIdHasBeenSet(false),
    m_status(ScopeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_scopeArnHasBeenSet(false)
{
}

ScopeSummary::ScopeSummary(JsonView jsonValue)
  : ScopeSummary()
{
  *this = jsonValue;
}

ScopeSummary& ScopeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scopeId"))
  {
    m_scopeId = jsonValue.GetString("scopeId");

    m_scopeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ScopeStatusMapper::GetScopeStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scopeArn"))
  {
    m_scopeArn = jsonValue.GetString("scopeArn");

    m_scopeArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ScopeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_scopeIdHasBeenSet)
  {
   payload.WithString("scopeId", m_scopeId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ScopeStatusMapper::GetNameForScopeStatus(m_status));
  }

  if(m_scopeArnHasBeenSet)
  {
   payload.WithString("scopeArn", m_scopeArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
