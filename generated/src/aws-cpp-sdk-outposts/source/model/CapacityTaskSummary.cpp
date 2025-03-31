/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CapacityTaskSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

CapacityTaskSummary::CapacityTaskSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CapacityTaskSummary& CapacityTaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CapacityTaskId"))
  {
    m_capacityTaskId = jsonValue.GetString("CapacityTaskId");
    m_capacityTaskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutpostId"))
  {
    m_outpostId = jsonValue.GetString("OutpostId");
    m_outpostIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrderId"))
  {
    m_orderId = jsonValue.GetString("OrderId");
    m_orderIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssetId"))
  {
    m_assetId = jsonValue.GetString("AssetId");
    m_assetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityTaskStatus"))
  {
    m_capacityTaskStatus = CapacityTaskStatusMapper::GetCapacityTaskStatusForName(jsonValue.GetString("CapacityTaskStatus"));
    m_capacityTaskStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetDouble("CompletionDate");
    m_completionDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityTaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_capacityTaskIdHasBeenSet)
  {
   payload.WithString("CapacityTaskId", m_capacityTaskId);

  }

  if(m_outpostIdHasBeenSet)
  {
   payload.WithString("OutpostId", m_outpostId);

  }

  if(m_orderIdHasBeenSet)
  {
   payload.WithString("OrderId", m_orderId);

  }

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("AssetId", m_assetId);

  }

  if(m_capacityTaskStatusHasBeenSet)
  {
   payload.WithString("CapacityTaskStatus", CapacityTaskStatusMapper::GetNameForCapacityTaskStatus(m_capacityTaskStatus));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_completionDateHasBeenSet)
  {
   payload.WithDouble("CompletionDate", m_completionDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
