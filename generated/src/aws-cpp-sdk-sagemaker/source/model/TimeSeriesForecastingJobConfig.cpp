/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TimeSeriesForecastingJobConfig.h>
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

TimeSeriesForecastingJobConfig::TimeSeriesForecastingJobConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeSeriesForecastingJobConfig& TimeSeriesForecastingJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureSpecificationS3Uri"))
  {
    m_featureSpecificationS3Uri = jsonValue.GetString("FeatureSpecificationS3Uri");
    m_featureSpecificationS3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionCriteria"))
  {
    m_completionCriteria = jsonValue.GetObject("CompletionCriteria");
    m_completionCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForecastFrequency"))
  {
    m_forecastFrequency = jsonValue.GetString("ForecastFrequency");
    m_forecastFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForecastHorizon"))
  {
    m_forecastHorizon = jsonValue.GetInteger("ForecastHorizon");
    m_forecastHorizonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForecastQuantiles"))
  {
    Aws::Utils::Array<JsonView> forecastQuantilesJsonList = jsonValue.GetArray("ForecastQuantiles");
    for(unsigned forecastQuantilesIndex = 0; forecastQuantilesIndex < forecastQuantilesJsonList.GetLength(); ++forecastQuantilesIndex)
    {
      m_forecastQuantiles.push_back(forecastQuantilesJsonList[forecastQuantilesIndex].AsString());
    }
    m_forecastQuantilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Transformations"))
  {
    m_transformations = jsonValue.GetObject("Transformations");
    m_transformationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeSeriesConfig"))
  {
    m_timeSeriesConfig = jsonValue.GetObject("TimeSeriesConfig");
    m_timeSeriesConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HolidayConfig"))
  {
    Aws::Utils::Array<JsonView> holidayConfigJsonList = jsonValue.GetArray("HolidayConfig");
    for(unsigned holidayConfigIndex = 0; holidayConfigIndex < holidayConfigJsonList.GetLength(); ++holidayConfigIndex)
    {
      m_holidayConfig.push_back(holidayConfigJsonList[holidayConfigIndex].AsObject());
    }
    m_holidayConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CandidateGenerationConfig"))
  {
    m_candidateGenerationConfig = jsonValue.GetObject("CandidateGenerationConfig");
    m_candidateGenerationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeSeriesForecastingJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_featureSpecificationS3UriHasBeenSet)
  {
   payload.WithString("FeatureSpecificationS3Uri", m_featureSpecificationS3Uri);

  }

  if(m_completionCriteriaHasBeenSet)
  {
   payload.WithObject("CompletionCriteria", m_completionCriteria.Jsonize());

  }

  if(m_forecastFrequencyHasBeenSet)
  {
   payload.WithString("ForecastFrequency", m_forecastFrequency);

  }

  if(m_forecastHorizonHasBeenSet)
  {
   payload.WithInteger("ForecastHorizon", m_forecastHorizon);

  }

  if(m_forecastQuantilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> forecastQuantilesJsonList(m_forecastQuantiles.size());
   for(unsigned forecastQuantilesIndex = 0; forecastQuantilesIndex < forecastQuantilesJsonList.GetLength(); ++forecastQuantilesIndex)
   {
     forecastQuantilesJsonList[forecastQuantilesIndex].AsString(m_forecastQuantiles[forecastQuantilesIndex]);
   }
   payload.WithArray("ForecastQuantiles", std::move(forecastQuantilesJsonList));

  }

  if(m_transformationsHasBeenSet)
  {
   payload.WithObject("Transformations", m_transformations.Jsonize());

  }

  if(m_timeSeriesConfigHasBeenSet)
  {
   payload.WithObject("TimeSeriesConfig", m_timeSeriesConfig.Jsonize());

  }

  if(m_holidayConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> holidayConfigJsonList(m_holidayConfig.size());
   for(unsigned holidayConfigIndex = 0; holidayConfigIndex < holidayConfigJsonList.GetLength(); ++holidayConfigIndex)
   {
     holidayConfigJsonList[holidayConfigIndex].AsObject(m_holidayConfig[holidayConfigIndex].Jsonize());
   }
   payload.WithArray("HolidayConfig", std::move(holidayConfigJsonList));

  }

  if(m_candidateGenerationConfigHasBeenSet)
  {
   payload.WithObject("CandidateGenerationConfig", m_candidateGenerationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
