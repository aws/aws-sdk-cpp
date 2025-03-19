/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/Properties.h>
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

Properties::Properties(JsonView jsonValue)
{
  *this = jsonValue;
}

Properties& Properties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EoCloudCover"))
  {
    m_eoCloudCover = jsonValue.GetDouble("EoCloudCover");
    m_eoCloudCoverHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LandsatCloudCoverLand"))
  {
    m_landsatCloudCoverLand = jsonValue.GetDouble("LandsatCloudCoverLand");
    m_landsatCloudCoverLandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = jsonValue.GetString("Platform");
    m_platformHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ViewOffNadir"))
  {
    m_viewOffNadir = jsonValue.GetDouble("ViewOffNadir");
    m_viewOffNadirHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ViewSunAzimuth"))
  {
    m_viewSunAzimuth = jsonValue.GetDouble("ViewSunAzimuth");
    m_viewSunAzimuthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ViewSunElevation"))
  {
    m_viewSunElevation = jsonValue.GetDouble("ViewSunElevation");
    m_viewSunElevationHasBeenSet = true;
  }
  return *this;
}

JsonValue Properties::Jsonize() const
{
  JsonValue payload;

  if(m_eoCloudCoverHasBeenSet)
  {
   payload.WithDouble("EoCloudCover", m_eoCloudCover);

  }

  if(m_landsatCloudCoverLandHasBeenSet)
  {
   payload.WithDouble("LandsatCloudCoverLand", m_landsatCloudCoverLand);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", m_platform);

  }

  if(m_viewOffNadirHasBeenSet)
  {
   payload.WithDouble("ViewOffNadir", m_viewOffNadir);

  }

  if(m_viewSunAzimuthHasBeenSet)
  {
   payload.WithDouble("ViewSunAzimuth", m_viewSunAzimuth);

  }

  if(m_viewSunElevationHasBeenSet)
  {
   payload.WithDouble("ViewSunElevation", m_viewSunElevation);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
