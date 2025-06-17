/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/ListApprovalTeamsResponseApprovalTeam.h>
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

ListApprovalTeamsResponseApprovalTeam::ListApprovalTeamsResponseApprovalTeam(JsonView jsonValue)
{
  *this = jsonValue;
}

ListApprovalTeamsResponseApprovalTeam& ListApprovalTeamsResponseApprovalTeam::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
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
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
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
  return *this;
}

JsonValue ListApprovalTeamsResponseApprovalTeam::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_approvalStrategyHasBeenSet)
  {
   payload.WithObject("ApprovalStrategy", m_approvalStrategy.Jsonize());

  }

  if(m_numberOfApproversHasBeenSet)
  {
   payload.WithInteger("NumberOfApprovers", m_numberOfApprovers);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
