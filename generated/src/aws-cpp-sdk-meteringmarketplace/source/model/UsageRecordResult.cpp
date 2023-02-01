/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/model/UsageRecordResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{

UsageRecordResult::UsageRecordResult() : 
    m_usageRecordHasBeenSet(false),
    m_meteringRecordIdHasBeenSet(false),
    m_status(UsageRecordResultStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

UsageRecordResult::UsageRecordResult(JsonView jsonValue) : 
    m_usageRecordHasBeenSet(false),
    m_meteringRecordIdHasBeenSet(false),
    m_status(UsageRecordResultStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

UsageRecordResult& UsageRecordResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UsageRecord"))
  {
    m_usageRecord = jsonValue.GetObject("UsageRecord");

    m_usageRecordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeteringRecordId"))
  {
    m_meteringRecordId = jsonValue.GetString("MeteringRecordId");

    m_meteringRecordIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = UsageRecordResultStatusMapper::GetUsageRecordResultStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageRecordResult::Jsonize() const
{
  JsonValue payload;

  if(m_usageRecordHasBeenSet)
  {
   payload.WithObject("UsageRecord", m_usageRecord.Jsonize());

  }

  if(m_meteringRecordIdHasBeenSet)
  {
   payload.WithString("MeteringRecordId", m_meteringRecordId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", UsageRecordResultStatusMapper::GetNameForUsageRecordResultStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
