/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/Parameters.h>
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

Parameters::Parameters(JsonView jsonValue)
{
  *this = jsonValue;
}

Parameters& Parameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InfluxDBv2"))
  {
    m_influxDBv2 = jsonValue.GetObject("InfluxDBv2");
    m_influxDBv2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("InfluxDBv3Core"))
  {
    m_influxDBv3Core = jsonValue.GetObject("InfluxDBv3Core");
    m_influxDBv3CoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InfluxDBv3Enterprise"))
  {
    m_influxDBv3Enterprise = jsonValue.GetObject("InfluxDBv3Enterprise");
    m_influxDBv3EnterpriseHasBeenSet = true;
  }
  return *this;
}

JsonValue Parameters::Jsonize() const
{
  JsonValue payload;

  if(m_influxDBv2HasBeenSet)
  {
   payload.WithObject("InfluxDBv2", m_influxDBv2.Jsonize());

  }

  if(m_influxDBv3CoreHasBeenSet)
  {
   payload.WithObject("InfluxDBv3Core", m_influxDBv3Core.Jsonize());

  }

  if(m_influxDBv3EnterpriseHasBeenSet)
  {
   payload.WithObject("InfluxDBv3Enterprise", m_influxDBv3Enterprise.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
