/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/Alarm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

Alarm::Alarm(JsonView jsonValue)
{
  *this = jsonValue;
}

Alarm& Alarm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alarmArn"))
  {
    m_alarmArn = jsonValue.GetString("alarmArn");
    m_alarmArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue Alarm::Jsonize() const
{
  JsonValue payload;

  if(m_alarmArnHasBeenSet)
  {
   payload.WithString("alarmArn", m_alarmArn);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
