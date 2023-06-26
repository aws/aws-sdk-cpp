/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OfflineStoreStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

OfflineStoreStatus::OfflineStoreStatus() : 
    m_status(OfflineStoreStatusValue::NOT_SET),
    m_statusHasBeenSet(false),
    m_blockedReasonHasBeenSet(false)
{
}

OfflineStoreStatus::OfflineStoreStatus(JsonView jsonValue) : 
    m_status(OfflineStoreStatusValue::NOT_SET),
    m_statusHasBeenSet(false),
    m_blockedReasonHasBeenSet(false)
{
  *this = jsonValue;
}

OfflineStoreStatus& OfflineStoreStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = OfflineStoreStatusValueMapper::GetOfflineStoreStatusValueForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlockedReason"))
  {
    m_blockedReason = jsonValue.GetString("BlockedReason");

    m_blockedReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue OfflineStoreStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OfflineStoreStatusValueMapper::GetNameForOfflineStoreStatusValue(m_status));
  }

  if(m_blockedReasonHasBeenSet)
  {
   payload.WithString("BlockedReason", m_blockedReason);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
