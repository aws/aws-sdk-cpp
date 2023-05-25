/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringDatasetFormat.h>
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

MonitoringDatasetFormat::MonitoringDatasetFormat() : 
    m_csvHasBeenSet(false),
    m_jsonHasBeenSet(false),
    m_parquetHasBeenSet(false)
{
}

MonitoringDatasetFormat::MonitoringDatasetFormat(JsonView jsonValue) : 
    m_csvHasBeenSet(false),
    m_jsonHasBeenSet(false),
    m_parquetHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringDatasetFormat& MonitoringDatasetFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Csv"))
  {
    m_csv = jsonValue.GetObject("Csv");

    m_csvHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Json"))
  {
    m_json = jsonValue.GetObject("Json");

    m_jsonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parquet"))
  {
    m_parquet = jsonValue.GetObject("Parquet");

    m_parquetHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringDatasetFormat::Jsonize() const
{
  JsonValue payload;

  if(m_csvHasBeenSet)
  {
   payload.WithObject("Csv", m_csv.Jsonize());

  }

  if(m_jsonHasBeenSet)
  {
   payload.WithObject("Json", m_json.Jsonize());

  }

  if(m_parquetHasBeenSet)
  {
   payload.WithObject("Parquet", m_parquet.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
