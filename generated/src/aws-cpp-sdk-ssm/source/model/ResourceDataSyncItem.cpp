/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourceDataSyncItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceDataSyncItem::ResourceDataSyncItem() : 
    m_syncNameHasBeenSet(false),
    m_syncTypeHasBeenSet(false),
    m_syncSourceHasBeenSet(false),
    m_s3DestinationHasBeenSet(false),
    m_lastSyncTimeHasBeenSet(false),
    m_lastSuccessfulSyncTimeHasBeenSet(false),
    m_syncLastModifiedTimeHasBeenSet(false),
    m_lastStatus(LastResourceDataSyncStatus::NOT_SET),
    m_lastStatusHasBeenSet(false),
    m_syncCreatedTimeHasBeenSet(false),
    m_lastSyncStatusMessageHasBeenSet(false)
{
}

ResourceDataSyncItem::ResourceDataSyncItem(JsonView jsonValue) : 
    m_syncNameHasBeenSet(false),
    m_syncTypeHasBeenSet(false),
    m_syncSourceHasBeenSet(false),
    m_s3DestinationHasBeenSet(false),
    m_lastSyncTimeHasBeenSet(false),
    m_lastSuccessfulSyncTimeHasBeenSet(false),
    m_syncLastModifiedTimeHasBeenSet(false),
    m_lastStatus(LastResourceDataSyncStatus::NOT_SET),
    m_lastStatusHasBeenSet(false),
    m_syncCreatedTimeHasBeenSet(false),
    m_lastSyncStatusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncItem& ResourceDataSyncItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SyncName"))
  {
    m_syncName = jsonValue.GetString("SyncName");

    m_syncNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncType"))
  {
    m_syncType = jsonValue.GetString("SyncType");

    m_syncTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncSource"))
  {
    m_syncSource = jsonValue.GetObject("SyncSource");

    m_syncSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Destination"))
  {
    m_s3Destination = jsonValue.GetObject("S3Destination");

    m_s3DestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSyncTime"))
  {
    m_lastSyncTime = jsonValue.GetDouble("LastSyncTime");

    m_lastSyncTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulSyncTime"))
  {
    m_lastSuccessfulSyncTime = jsonValue.GetDouble("LastSuccessfulSyncTime");

    m_lastSuccessfulSyncTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncLastModifiedTime"))
  {
    m_syncLastModifiedTime = jsonValue.GetDouble("SyncLastModifiedTime");

    m_syncLastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStatus"))
  {
    m_lastStatus = LastResourceDataSyncStatusMapper::GetLastResourceDataSyncStatusForName(jsonValue.GetString("LastStatus"));

    m_lastStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncCreatedTime"))
  {
    m_syncCreatedTime = jsonValue.GetDouble("SyncCreatedTime");

    m_syncCreatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSyncStatusMessage"))
  {
    m_lastSyncStatusMessage = jsonValue.GetString("LastSyncStatusMessage");

    m_lastSyncStatusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncItem::Jsonize() const
{
  JsonValue payload;

  if(m_syncNameHasBeenSet)
  {
   payload.WithString("SyncName", m_syncName);

  }

  if(m_syncTypeHasBeenSet)
  {
   payload.WithString("SyncType", m_syncType);

  }

  if(m_syncSourceHasBeenSet)
  {
   payload.WithObject("SyncSource", m_syncSource.Jsonize());

  }

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("S3Destination", m_s3Destination.Jsonize());

  }

  if(m_lastSyncTimeHasBeenSet)
  {
   payload.WithDouble("LastSyncTime", m_lastSyncTime.SecondsWithMSPrecision());
  }

  if(m_lastSuccessfulSyncTimeHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulSyncTime", m_lastSuccessfulSyncTime.SecondsWithMSPrecision());
  }

  if(m_syncLastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("SyncLastModifiedTime", m_syncLastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastStatusHasBeenSet)
  {
   payload.WithString("LastStatus", LastResourceDataSyncStatusMapper::GetNameForLastResourceDataSyncStatus(m_lastStatus));
  }

  if(m_syncCreatedTimeHasBeenSet)
  {
   payload.WithDouble("SyncCreatedTime", m_syncCreatedTime.SecondsWithMSPrecision());
  }

  if(m_lastSyncStatusMessageHasBeenSet)
  {
   payload.WithString("LastSyncStatusMessage", m_lastSyncStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
