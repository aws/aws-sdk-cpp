/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ActivateReadSetJobItem.h>
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

ActivateReadSetJobItem::ActivateReadSetJobItem() : 
    m_completionTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_sequenceStoreIdHasBeenSet(false),
    m_status(ReadSetActivationJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ActivateReadSetJobItem::ActivateReadSetJobItem(JsonView jsonValue) : 
    m_completionTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_sequenceStoreIdHasBeenSet(false),
    m_status(ReadSetActivationJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ActivateReadSetJobItem& ActivateReadSetJobItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetString("completionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sequenceStoreId"))
  {
    m_sequenceStoreId = jsonValue.GetString("sequenceStoreId");

    m_sequenceStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetActivationJobStatusMapper::GetReadSetActivationJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivateReadSetJobItem::Jsonize() const
{
  JsonValue payload;

  if(m_completionTimeHasBeenSet)
  {
   payload.WithString("completionTime", m_completionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_sequenceStoreIdHasBeenSet)
  {
   payload.WithString("sequenceStoreId", m_sequenceStoreId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReadSetActivationJobStatusMapper::GetNameForReadSetActivationJobStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
