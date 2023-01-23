/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TimeSeriesForecastingSettings.h>
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

TimeSeriesForecastingSettings::TimeSeriesForecastingSettings() : 
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_amazonForecastRoleArnHasBeenSet(false)
{
}

TimeSeriesForecastingSettings::TimeSeriesForecastingSettings(JsonView jsonValue) : 
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_amazonForecastRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesForecastingSettings& TimeSeriesForecastingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmazonForecastRoleArn"))
  {
    m_amazonForecastRoleArn = jsonValue.GetString("AmazonForecastRoleArn");

    m_amazonForecastRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesForecastingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FeatureStatusMapper::GetNameForFeatureStatus(m_status));
  }

  if(m_amazonForecastRoleArnHasBeenSet)
  {
   payload.WithString("AmazonForecastRoleArn", m_amazonForecastRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
