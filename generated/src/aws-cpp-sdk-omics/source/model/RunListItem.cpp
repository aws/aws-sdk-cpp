﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/RunListItem.h>
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

RunListItem::RunListItem(JsonView jsonValue)
{
  *this = jsonValue;
}

RunListItem& RunListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = RunStatusMapper::GetRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");
    m_workflowIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageCapacity"))
  {
    m_storageCapacity = jsonValue.GetInteger("storageCapacity");
    m_storageCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stopTime"))
  {
    m_stopTime = jsonValue.GetString("stopTime");
    m_stopTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("storageType"));
    m_storageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowVersionName"))
  {
    m_workflowVersionName = jsonValue.GetString("workflowVersionName");
    m_workflowVersionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RunListItem::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RunStatusMapper::GetNameForRunStatus(m_status));
  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_storageCapacityHasBeenSet)
  {
   payload.WithInteger("storageCapacity", m_storageCapacity);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_stopTimeHasBeenSet)
  {
   payload.WithString("stopTime", m_stopTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("storageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  if(m_workflowVersionNameHasBeenSet)
  {
   payload.WithString("workflowVersionName", m_workflowVersionName);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
