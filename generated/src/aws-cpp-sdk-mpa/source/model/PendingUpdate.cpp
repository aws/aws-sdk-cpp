/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/PendingUpdate.h>
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

PendingUpdate::PendingUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

PendingUpdate& PendingUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");
    m_versionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovalStrategy"))
  {
    m_approvalStrategy = jsonValue.GetObject("ApprovalStrategy");
    m_approvalStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfApprovers"))
  {
    m_numberOfApprovers = jsonValue.GetInteger("NumberOfApprovers");
    m_numberOfApproversHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApprovalTeamStatusMapper::GetApprovalTeamStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = ApprovalTeamStatusCodeMapper::GetApprovalTeamStatusCodeForName(jsonValue.GetString("StatusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Approvers"))
  {
    Aws::Utils::Array<JsonView> approversJsonList = jsonValue.GetArray("Approvers");
    for(unsigned approversIndex = 0; approversIndex < approversJsonList.GetLength(); ++approversIndex)
    {
      m_approvers.push_back(approversJsonList[approversIndex].AsObject());
    }
    m_approversHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateInitiationTime"))
  {
    m_updateInitiationTime = jsonValue.GetString("UpdateInitiationTime");
    m_updateInitiationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue PendingUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_approvalStrategyHasBeenSet)
  {
   payload.WithObject("ApprovalStrategy", m_approvalStrategy.Jsonize());

  }

  if(m_numberOfApproversHasBeenSet)
  {
   payload.WithInteger("NumberOfApprovers", m_numberOfApprovers);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ApprovalTeamStatusMapper::GetNameForApprovalTeamStatus(m_status));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", ApprovalTeamStatusCodeMapper::GetNameForApprovalTeamStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_approversHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> approversJsonList(m_approvers.size());
   for(unsigned approversIndex = 0; approversIndex < approversJsonList.GetLength(); ++approversIndex)
   {
     approversJsonList[approversIndex].AsObject(m_approvers[approversIndex].Jsonize());
   }
   payload.WithArray("Approvers", std::move(approversJsonList));

  }

  if(m_updateInitiationTimeHasBeenSet)
  {
   payload.WithString("UpdateInitiationTime", m_updateInitiationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
