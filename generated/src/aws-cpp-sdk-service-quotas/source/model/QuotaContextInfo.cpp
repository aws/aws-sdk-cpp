/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/QuotaContextInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

QuotaContextInfo::QuotaContextInfo() : 
    m_contextScope(QuotaContextScope::NOT_SET),
    m_contextScopeHasBeenSet(false),
    m_contextScopeTypeHasBeenSet(false),
    m_contextIdHasBeenSet(false)
{
}

QuotaContextInfo::QuotaContextInfo(JsonView jsonValue) : 
    m_contextScope(QuotaContextScope::NOT_SET),
    m_contextScopeHasBeenSet(false),
    m_contextScopeTypeHasBeenSet(false),
    m_contextIdHasBeenSet(false)
{
  *this = jsonValue;
}

QuotaContextInfo& QuotaContextInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContextScope"))
  {
    m_contextScope = QuotaContextScopeMapper::GetQuotaContextScopeForName(jsonValue.GetString("ContextScope"));

    m_contextScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContextScopeType"))
  {
    m_contextScopeType = jsonValue.GetString("ContextScopeType");

    m_contextScopeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContextId"))
  {
    m_contextId = jsonValue.GetString("ContextId");

    m_contextIdHasBeenSet = true;
  }

  return *this;
}

JsonValue QuotaContextInfo::Jsonize() const
{
  JsonValue payload;

  if(m_contextScopeHasBeenSet)
  {
   payload.WithString("ContextScope", QuotaContextScopeMapper::GetNameForQuotaContextScope(m_contextScope));
  }

  if(m_contextScopeTypeHasBeenSet)
  {
   payload.WithString("ContextScopeType", m_contextScopeType);

  }

  if(m_contextIdHasBeenSet)
  {
   payload.WithString("ContextId", m_contextId);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
