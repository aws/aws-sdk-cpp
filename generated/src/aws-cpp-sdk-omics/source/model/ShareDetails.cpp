/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ShareDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ShareDetails::ShareDetails() : 
    m_shareIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_principalSubscriberHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_status(ShareStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_shareNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

ShareDetails::ShareDetails(JsonView jsonValue) : 
    m_shareIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_principalSubscriberHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_status(ShareStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_shareNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ShareDetails& ShareDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("shareId"))
  {
    m_shareId = jsonValue.GetString("shareId");

    m_shareIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalSubscriber"))
  {
    m_principalSubscriber = jsonValue.GetString("principalSubscriber");

    m_principalSubscriberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerId"))
  {
    m_ownerId = jsonValue.GetString("ownerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shareName"))
  {
    m_shareName = jsonValue.GetString("shareName");

    m_shareNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareDetails::Jsonize() const
{
  JsonValue payload;

  if(m_shareIdHasBeenSet)
  {
   payload.WithString("shareId", m_shareId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_principalSubscriberHasBeenSet)
  {
   payload.WithString("principalSubscriber", m_principalSubscriber);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("ownerId", m_ownerId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ShareStatusMapper::GetNameForShareStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_shareNameHasBeenSet)
  {
   payload.WithString("shareName", m_shareName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
