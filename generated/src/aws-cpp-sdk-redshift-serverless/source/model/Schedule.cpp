/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/Schedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

Schedule::Schedule() : 
    m_atHasBeenSet(false),
    m_cronHasBeenSet(false)
{
}

Schedule::Schedule(JsonView jsonValue) : 
    m_atHasBeenSet(false),
    m_cronHasBeenSet(false)
{
  *this = jsonValue;
}

Schedule& Schedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("at"))
  {
    m_at = jsonValue.GetDouble("at");

    m_atHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cron"))
  {
    m_cron = jsonValue.GetString("cron");

    m_cronHasBeenSet = true;
  }

  return *this;
}

JsonValue Schedule::Jsonize() const
{
  JsonValue payload;

  if(m_atHasBeenSet)
  {
   payload.WithDouble("at", m_at.SecondsWithMSPrecision());
  }

  if(m_cronHasBeenSet)
  {
   payload.WithString("cron", m_cron);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
