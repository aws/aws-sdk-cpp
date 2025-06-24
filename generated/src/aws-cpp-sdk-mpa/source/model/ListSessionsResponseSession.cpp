/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/ListSessionsResponseSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MPA
{
namespace Model
{

ListSessionsResponseSession::ListSessionsResponseSession(JsonView jsonValue)
{
  *this = jsonValue;
}

ListSessionsResponseSession& ListSessionsResponseSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SessionArn"))
  {
    m_sessionArn = jsonValue.GetString("SessionArn");
    m_sessionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovalTeamName"))
  {
    m_approvalTeamName = jsonValue.GetString("ApprovalTeamName");
    m_approvalTeamNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovalTeamArn"))
  {
    m_approvalTeamArn = jsonValue.GetString("ApprovalTeamArn");
    m_approvalTeamArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitiationTime"))
  {
    m_initiationTime = jsonValue.GetString("InitiationTime");
    m_initiationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetString("ExpirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetString("CompletionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActionName"))
  {
    m_actionName = jsonValue.GetString("ActionName");
    m_actionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProtectedResourceArn"))
  {
    m_protectedResourceArn = jsonValue.GetString("ProtectedResourceArn");
    m_protectedResourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequesterServicePrincipal"))
  {
    m_requesterServicePrincipal = jsonValue.GetString("RequesterServicePrincipal");
    m_requesterServicePrincipalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequesterPrincipalArn"))
  {
    m_requesterPrincipalArn = jsonValue.GetString("RequesterPrincipalArn");
    m_requesterPrincipalArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequesterRegion"))
  {
    m_requesterRegion = jsonValue.GetString("RequesterRegion");
    m_requesterRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequesterAccountId"))
  {
    m_requesterAccountId = jsonValue.GetString("RequesterAccountId");
    m_requesterAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SessionStatusMapper::GetSessionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = SessionStatusCodeMapper::GetSessionStatusCodeForName(jsonValue.GetString("StatusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActionCompletionStrategy"))
  {
    m_actionCompletionStrategy = ActionCompletionStrategyMapper::GetActionCompletionStrategyForName(jsonValue.GetString("ActionCompletionStrategy"));
    m_actionCompletionStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue ListSessionsResponseSession::Jsonize() const
{
  JsonValue payload;

  if(m_sessionArnHasBeenSet)
  {
   payload.WithString("SessionArn", m_sessionArn);

  }

  if(m_approvalTeamNameHasBeenSet)
  {
   payload.WithString("ApprovalTeamName", m_approvalTeamName);

  }

  if(m_approvalTeamArnHasBeenSet)
  {
   payload.WithString("ApprovalTeamArn", m_approvalTeamArn);

  }

  if(m_initiationTimeHasBeenSet)
  {
   payload.WithString("InitiationTime", m_initiationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithString("ExpirationTime", m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithString("CompletionTime", m_completionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("ActionName", m_actionName);

  }

  if(m_protectedResourceArnHasBeenSet)
  {
   payload.WithString("ProtectedResourceArn", m_protectedResourceArn);

  }

  if(m_requesterServicePrincipalHasBeenSet)
  {
   payload.WithString("RequesterServicePrincipal", m_requesterServicePrincipal);

  }

  if(m_requesterPrincipalArnHasBeenSet)
  {
   payload.WithString("RequesterPrincipalArn", m_requesterPrincipalArn);

  }

  if(m_requesterRegionHasBeenSet)
  {
   payload.WithString("RequesterRegion", m_requesterRegion);

  }

  if(m_requesterAccountIdHasBeenSet)
  {
   payload.WithString("RequesterAccountId", m_requesterAccountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SessionStatusMapper::GetNameForSessionStatus(m_status));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", SessionStatusCodeMapper::GetNameForSessionStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_actionCompletionStrategyHasBeenSet)
  {
   payload.WithString("ActionCompletionStrategy", ActionCompletionStrategyMapper::GetNameForActionCompletionStrategy(m_actionCompletionStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
