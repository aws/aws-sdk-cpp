/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ReplacePermissionAssociationsWork.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RAM
{
namespace Model
{

ReplacePermissionAssociationsWork::ReplacePermissionAssociationsWork() : 
    m_idHasBeenSet(false),
    m_fromPermissionArnHasBeenSet(false),
    m_fromPermissionVersionHasBeenSet(false),
    m_toPermissionArnHasBeenSet(false),
    m_toPermissionVersionHasBeenSet(false),
    m_status(ReplacePermissionAssociationsWorkStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

ReplacePermissionAssociationsWork::ReplacePermissionAssociationsWork(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_fromPermissionArnHasBeenSet(false),
    m_fromPermissionVersionHasBeenSet(false),
    m_toPermissionArnHasBeenSet(false),
    m_toPermissionVersionHasBeenSet(false),
    m_status(ReplacePermissionAssociationsWorkStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ReplacePermissionAssociationsWork& ReplacePermissionAssociationsWork::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromPermissionArn"))
  {
    m_fromPermissionArn = jsonValue.GetString("fromPermissionArn");

    m_fromPermissionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromPermissionVersion"))
  {
    m_fromPermissionVersion = jsonValue.GetString("fromPermissionVersion");

    m_fromPermissionVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("toPermissionArn"))
  {
    m_toPermissionArn = jsonValue.GetString("toPermissionArn");

    m_toPermissionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("toPermissionVersion"))
  {
    m_toPermissionVersion = jsonValue.GetString("toPermissionVersion");

    m_toPermissionVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReplacePermissionAssociationsWorkStatusMapper::GetReplacePermissionAssociationsWorkStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplacePermissionAssociationsWork::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_fromPermissionArnHasBeenSet)
  {
   payload.WithString("fromPermissionArn", m_fromPermissionArn);

  }

  if(m_fromPermissionVersionHasBeenSet)
  {
   payload.WithString("fromPermissionVersion", m_fromPermissionVersion);

  }

  if(m_toPermissionArnHasBeenSet)
  {
   payload.WithString("toPermissionArn", m_toPermissionArn);

  }

  if(m_toPermissionVersionHasBeenSet)
  {
   payload.WithString("toPermissionVersion", m_toPermissionVersion);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReplacePermissionAssociationsWorkStatusMapper::GetNameForReplacePermissionAssociationsWorkStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace RAM
} // namespace Aws
