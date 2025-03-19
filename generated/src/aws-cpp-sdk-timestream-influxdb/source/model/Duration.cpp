/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/Duration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Model
{

Duration::Duration(JsonView jsonValue)
{
  *this = jsonValue;
}

Duration& Duration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("durationType"))
  {
    m_durationType = DurationTypeMapper::GetDurationTypeForName(jsonValue.GetString("durationType"));
    m_durationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInt64("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue Duration::Jsonize() const
{
  JsonValue payload;

  if(m_durationTypeHasBeenSet)
  {
   payload.WithString("durationType", DurationTypeMapper::GetNameForDurationType(m_durationType));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
