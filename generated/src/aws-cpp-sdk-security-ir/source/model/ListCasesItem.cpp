/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/ListCasesItem.h>
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

ListCasesItem::ListCasesItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ListCasesItem& ListCasesItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("caseId"))
  {
    m_caseId = jsonValue.GetString("caseId");
    m_caseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");
    m_lastUpdatedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("caseArn"))
  {
    m_caseArn = jsonValue.GetString("caseArn");
    m_caseArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engagementType"))
  {
    m_engagementType = EngagementTypeMapper::GetEngagementTypeForName(jsonValue.GetString("engagementType"));
    m_engagementTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("caseStatus"))
  {
    m_caseStatus = CaseStatusMapper::GetCaseStatusForName(jsonValue.GetString("caseStatus"));
    m_caseStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("closedDate"))
  {
    m_closedDate = jsonValue.GetDouble("closedDate");
    m_closedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolverType"))
  {
    m_resolverType = ResolverTypeMapper::GetResolverTypeForName(jsonValue.GetString("resolverType"));
    m_resolverTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingAction"))
  {
    m_pendingAction = PendingActionMapper::GetPendingActionForName(jsonValue.GetString("pendingAction"));
    m_pendingActionHasBeenSet = true;
  }
  return *this;
}

JsonValue ListCasesItem::Jsonize() const
{
  JsonValue payload;

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("caseId", m_caseId);

  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDate", m_lastUpdatedDate.SecondsWithMSPrecision());
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_caseArnHasBeenSet)
  {
   payload.WithString("caseArn", m_caseArn);

  }

  if(m_engagementTypeHasBeenSet)
  {
   payload.WithString("engagementType", EngagementTypeMapper::GetNameForEngagementType(m_engagementType));
  }

  if(m_caseStatusHasBeenSet)
  {
   payload.WithString("caseStatus", CaseStatusMapper::GetNameForCaseStatus(m_caseStatus));
  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_closedDateHasBeenSet)
  {
   payload.WithDouble("closedDate", m_closedDate.SecondsWithMSPrecision());
  }

  if(m_resolverTypeHasBeenSet)
  {
   payload.WithString("resolverType", ResolverTypeMapper::GetNameForResolverType(m_resolverType));
  }

  if(m_pendingActionHasBeenSet)
  {
   payload.WithString("pendingAction", PendingActionMapper::GetNameForPendingAction(m_pendingAction));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
