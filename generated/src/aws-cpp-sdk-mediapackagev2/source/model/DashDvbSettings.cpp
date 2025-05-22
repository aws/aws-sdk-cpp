/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashDvbSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

DashDvbSettings::DashDvbSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

DashDvbSettings& DashDvbSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FontDownload"))
  {
    m_fontDownload = jsonValue.GetObject("FontDownload");
    m_fontDownloadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMetrics"))
  {
    Aws::Utils::Array<JsonView> errorMetricsJsonList = jsonValue.GetArray("ErrorMetrics");
    for(unsigned errorMetricsIndex = 0; errorMetricsIndex < errorMetricsJsonList.GetLength(); ++errorMetricsIndex)
    {
      m_errorMetrics.push_back(errorMetricsJsonList[errorMetricsIndex].AsObject());
    }
    m_errorMetricsHasBeenSet = true;
  }
  return *this;
}

JsonValue DashDvbSettings::Jsonize() const
{
  JsonValue payload;

  if(m_fontDownloadHasBeenSet)
  {
   payload.WithObject("FontDownload", m_fontDownload.Jsonize());

  }

  if(m_errorMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorMetricsJsonList(m_errorMetrics.size());
   for(unsigned errorMetricsIndex = 0; errorMetricsIndex < errorMetricsJsonList.GetLength(); ++errorMetricsIndex)
   {
     errorMetricsJsonList[errorMetricsIndex].AsObject(m_errorMetrics[errorMetricsIndex].Jsonize());
   }
   payload.WithArray("ErrorMetrics", std::move(errorMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
