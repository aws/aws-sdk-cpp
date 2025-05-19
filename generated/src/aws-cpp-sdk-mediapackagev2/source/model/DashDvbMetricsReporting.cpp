/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashDvbMetricsReporting.h>
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

DashDvbMetricsReporting::DashDvbMetricsReporting(JsonView jsonValue)
{
  *this = jsonValue;
}

DashDvbMetricsReporting& DashDvbMetricsReporting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReportingUrl"))
  {
    m_reportingUrl = jsonValue.GetString("ReportingUrl");
    m_reportingUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Probability"))
  {
    m_probability = jsonValue.GetInteger("Probability");
    m_probabilityHasBeenSet = true;
  }
  return *this;
}

JsonValue DashDvbMetricsReporting::Jsonize() const
{
  JsonValue payload;

  if(m_reportingUrlHasBeenSet)
  {
   payload.WithString("ReportingUrl", m_reportingUrl);

  }

  if(m_probabilityHasBeenSet)
  {
   payload.WithInteger("Probability", m_probability);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
