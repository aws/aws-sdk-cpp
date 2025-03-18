/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringCsvDatasetFormat.h>
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

MonitoringCsvDatasetFormat::MonitoringCsvDatasetFormat(JsonView jsonValue)
{
  *this = jsonValue;
}

MonitoringCsvDatasetFormat& MonitoringCsvDatasetFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Header"))
  {
    m_header = jsonValue.GetBool("Header");
    m_headerHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitoringCsvDatasetFormat::Jsonize() const
{
  JsonValue payload;

  if(m_headerHasBeenSet)
  {
   payload.WithBool("Header", m_header);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
