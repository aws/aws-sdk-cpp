/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/SyncBlocker.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

SyncBlocker::SyncBlocker() : 
    m_contextsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdReasonHasBeenSet(false),
    m_idHasBeenSet(false),
    m_resolvedAtHasBeenSet(false),
    m_resolvedReasonHasBeenSet(false),
    m_status(BlockerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(BlockerType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SyncBlocker::SyncBlocker(JsonView jsonValue) : 
    m_contextsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdReasonHasBeenSet(false),
    m_idHasBeenSet(false),
    m_resolvedAtHasBeenSet(false),
    m_resolvedReasonHasBeenSet(false),
    m_status(BlockerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(BlockerType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SyncBlocker& SyncBlocker::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contexts"))
  {
    Aws::Utils::Array<JsonView> contextsJsonList = jsonValue.GetArray("contexts");
    for(unsigned contextsIndex = 0; contextsIndex < contextsJsonList.GetLength(); ++contextsIndex)
    {
      m_contexts.push_back(contextsJsonList[contextsIndex].AsObject());
    }
    m_contextsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdReason"))
  {
    m_createdReason = jsonValue.GetString("createdReason");

    m_createdReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolvedAt"))
  {
    m_resolvedAt = jsonValue.GetDouble("resolvedAt");

    m_resolvedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolvedReason"))
  {
    m_resolvedReason = jsonValue.GetString("resolvedReason");

    m_resolvedReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = BlockerStatusMapper::GetBlockerStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = BlockerTypeMapper::GetBlockerTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SyncBlocker::Jsonize() const
{
  JsonValue payload;

  if(m_contextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contextsJsonList(m_contexts.size());
   for(unsigned contextsIndex = 0; contextsIndex < contextsJsonList.GetLength(); ++contextsIndex)
   {
     contextsJsonList[contextsIndex].AsObject(m_contexts[contextsIndex].Jsonize());
   }
   payload.WithArray("contexts", std::move(contextsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_createdReasonHasBeenSet)
  {
   payload.WithString("createdReason", m_createdReason);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_resolvedAtHasBeenSet)
  {
   payload.WithDouble("resolvedAt", m_resolvedAt.SecondsWithMSPrecision());
  }

  if(m_resolvedReasonHasBeenSet)
  {
   payload.WithString("resolvedReason", m_resolvedReason);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", BlockerStatusMapper::GetNameForBlockerStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", BlockerTypeMapper::GetNameForBlockerType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
