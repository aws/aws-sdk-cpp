/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ExportDataSource.h>
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

ExportDataSource::ExportDataSource() : 
    m_metricsDataSourceHasBeenSet(false),
    m_messageInsightsDataSourceHasBeenSet(false)
{
}

ExportDataSource::ExportDataSource(JsonView jsonValue) : 
    m_metricsDataSourceHasBeenSet(false),
    m_messageInsightsDataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

ExportDataSource& ExportDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricsDataSource"))
  {
    m_metricsDataSource = jsonValue.GetObject("MetricsDataSource");

    m_metricsDataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageInsightsDataSource"))
  {
    m_messageInsightsDataSource = jsonValue.GetObject("MessageInsightsDataSource");

    m_messageInsightsDataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_metricsDataSourceHasBeenSet)
  {
   payload.WithObject("MetricsDataSource", m_metricsDataSource.Jsonize());

  }

  if(m_messageInsightsDataSourceHasBeenSet)
  {
   payload.WithObject("MessageInsightsDataSource", m_messageInsightsDataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
