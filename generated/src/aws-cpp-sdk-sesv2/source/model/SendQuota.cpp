﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SendQuota.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

SendQuota::SendQuota(JsonView jsonValue)
{
  *this = jsonValue;
}

SendQuota& SendQuota::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Max24HourSend"))
  {
    m_max24HourSend = jsonValue.GetDouble("Max24HourSend");
    m_max24HourSendHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxSendRate"))
  {
    m_maxSendRate = jsonValue.GetDouble("MaxSendRate");
    m_maxSendRateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SentLast24Hours"))
  {
    m_sentLast24Hours = jsonValue.GetDouble("SentLast24Hours");
    m_sentLast24HoursHasBeenSet = true;
  }
  return *this;
}

JsonValue SendQuota::Jsonize() const
{
  JsonValue payload;

  if(m_max24HourSendHasBeenSet)
  {
   payload.WithDouble("Max24HourSend", m_max24HourSend);

  }

  if(m_maxSendRateHasBeenSet)
  {
   payload.WithDouble("MaxSendRate", m_maxSendRate);

  }

  if(m_sentLast24HoursHasBeenSet)
  {
   payload.WithDouble("SentLast24Hours", m_sentLast24Hours);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
