/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/JobConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

JobConfigInput::JobConfigInput() : 
    m_bandMathConfigHasBeenSet(false),
    m_cloudMaskingConfigHasBeenSet(false),
    m_cloudRemovalConfigHasBeenSet(false),
    m_geoMosaicConfigHasBeenSet(false),
    m_landCoverSegmentationConfigHasBeenSet(false),
    m_resamplingConfigHasBeenSet(false),
    m_stackConfigHasBeenSet(false),
    m_temporalStatisticsConfigHasBeenSet(false),
    m_zonalStatisticsConfigHasBeenSet(false)
{
}

JobConfigInput::JobConfigInput(JsonView jsonValue) : 
    m_bandMathConfigHasBeenSet(false),
    m_cloudMaskingConfigHasBeenSet(false),
    m_cloudRemovalConfigHasBeenSet(false),
    m_geoMosaicConfigHasBeenSet(false),
    m_landCoverSegmentationConfigHasBeenSet(false),
    m_resamplingConfigHasBeenSet(false),
    m_stackConfigHasBeenSet(false),
    m_temporalStatisticsConfigHasBeenSet(false),
    m_zonalStatisticsConfigHasBeenSet(false)
{
  *this = jsonValue;
}

JobConfigInput& JobConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BandMathConfig"))
  {
    m_bandMathConfig = jsonValue.GetObject("BandMathConfig");

    m_bandMathConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudMaskingConfig"))
  {
    m_cloudMaskingConfig = jsonValue.GetObject("CloudMaskingConfig");

    m_cloudMaskingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudRemovalConfig"))
  {
    m_cloudRemovalConfig = jsonValue.GetObject("CloudRemovalConfig");

    m_cloudRemovalConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeoMosaicConfig"))
  {
    m_geoMosaicConfig = jsonValue.GetObject("GeoMosaicConfig");

    m_geoMosaicConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LandCoverSegmentationConfig"))
  {
    m_landCoverSegmentationConfig = jsonValue.GetObject("LandCoverSegmentationConfig");

    m_landCoverSegmentationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResamplingConfig"))
  {
    m_resamplingConfig = jsonValue.GetObject("ResamplingConfig");

    m_resamplingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackConfig"))
  {
    m_stackConfig = jsonValue.GetObject("StackConfig");

    m_stackConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemporalStatisticsConfig"))
  {
    m_temporalStatisticsConfig = jsonValue.GetObject("TemporalStatisticsConfig");

    m_temporalStatisticsConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZonalStatisticsConfig"))
  {
    m_zonalStatisticsConfig = jsonValue.GetObject("ZonalStatisticsConfig");

    m_zonalStatisticsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue JobConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_bandMathConfigHasBeenSet)
  {
   payload.WithObject("BandMathConfig", m_bandMathConfig.Jsonize());

  }

  if(m_cloudMaskingConfigHasBeenSet)
  {
   payload.WithObject("CloudMaskingConfig", m_cloudMaskingConfig.Jsonize());

  }

  if(m_cloudRemovalConfigHasBeenSet)
  {
   payload.WithObject("CloudRemovalConfig", m_cloudRemovalConfig.Jsonize());

  }

  if(m_geoMosaicConfigHasBeenSet)
  {
   payload.WithObject("GeoMosaicConfig", m_geoMosaicConfig.Jsonize());

  }

  if(m_landCoverSegmentationConfigHasBeenSet)
  {
   payload.WithObject("LandCoverSegmentationConfig", m_landCoverSegmentationConfig.Jsonize());

  }

  if(m_resamplingConfigHasBeenSet)
  {
   payload.WithObject("ResamplingConfig", m_resamplingConfig.Jsonize());

  }

  if(m_stackConfigHasBeenSet)
  {
   payload.WithObject("StackConfig", m_stackConfig.Jsonize());

  }

  if(m_temporalStatisticsConfigHasBeenSet)
  {
   payload.WithObject("TemporalStatisticsConfig", m_temporalStatisticsConfig.Jsonize());

  }

  if(m_zonalStatisticsConfigHasBeenSet)
  {
   payload.WithObject("ZonalStatisticsConfig", m_zonalStatisticsConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
