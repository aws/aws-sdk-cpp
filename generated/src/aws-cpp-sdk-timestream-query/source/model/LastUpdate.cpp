/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/LastUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

LastUpdate::LastUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

LastUpdate& LastUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetQueryTCU"))
  {
    m_targetQueryTCU = jsonValue.GetInteger("TargetQueryTCU");
    m_targetQueryTCUHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = LastUpdateStatusMapper::GetLastUpdateStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue LastUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_targetQueryTCUHasBeenSet)
  {
   payload.WithInteger("TargetQueryTCU", m_targetQueryTCU);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", LastUpdateStatusMapper::GetNameForLastUpdateStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
