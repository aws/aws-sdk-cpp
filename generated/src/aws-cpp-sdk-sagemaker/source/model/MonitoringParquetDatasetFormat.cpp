/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringParquetDatasetFormat.h>
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

MonitoringParquetDatasetFormat::MonitoringParquetDatasetFormat()
{
}

MonitoringParquetDatasetFormat::MonitoringParquetDatasetFormat(JsonView jsonValue)
{
  *this = jsonValue;
}

MonitoringParquetDatasetFormat& MonitoringParquetDatasetFormat::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue MonitoringParquetDatasetFormat::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
