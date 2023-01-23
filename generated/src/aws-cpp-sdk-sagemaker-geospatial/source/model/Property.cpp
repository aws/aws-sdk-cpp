/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/Property.h>
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

Property::Property() : 
    m_eoCloudCoverHasBeenSet(false),
    m_landsatCloudCoverLandHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_viewOffNadirHasBeenSet(false),
    m_viewSunAzimuthHasBeenSet(false),
    m_viewSunElevationHasBeenSet(false)
{
}

Property::Property(JsonView jsonValue) : 
    m_eoCloudCoverHasBeenSet(false),
    m_landsatCloudCoverLandHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_viewOffNadirHasBeenSet(false),
    m_viewSunAzimuthHasBeenSet(false),
    m_viewSunElevationHasBeenSet(false)
{
  *this = jsonValue;
}

Property& Property::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EoCloudCover"))
  {
    m_eoCloudCover = jsonValue.GetObject("EoCloudCover");

    m_eoCloudCoverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LandsatCloudCoverLand"))
  {
    m_landsatCloudCoverLand = jsonValue.GetObject("LandsatCloudCoverLand");

    m_landsatCloudCoverLandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = jsonValue.GetObject("Platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViewOffNadir"))
  {
    m_viewOffNadir = jsonValue.GetObject("ViewOffNadir");

    m_viewOffNadirHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViewSunAzimuth"))
  {
    m_viewSunAzimuth = jsonValue.GetObject("ViewSunAzimuth");

    m_viewSunAzimuthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViewSunElevation"))
  {
    m_viewSunElevation = jsonValue.GetObject("ViewSunElevation");

    m_viewSunElevationHasBeenSet = true;
  }

  return *this;
}

JsonValue Property::Jsonize() const
{
  JsonValue payload;

  if(m_eoCloudCoverHasBeenSet)
  {
   payload.WithObject("EoCloudCover", m_eoCloudCover.Jsonize());

  }

  if(m_landsatCloudCoverLandHasBeenSet)
  {
   payload.WithObject("LandsatCloudCoverLand", m_landsatCloudCoverLand.Jsonize());

  }

  if(m_platformHasBeenSet)
  {
   payload.WithObject("Platform", m_platform.Jsonize());

  }

  if(m_viewOffNadirHasBeenSet)
  {
   payload.WithObject("ViewOffNadir", m_viewOffNadir.Jsonize());

  }

  if(m_viewSunAzimuthHasBeenSet)
  {
   payload.WithObject("ViewSunAzimuth", m_viewSunAzimuth.Jsonize());

  }

  if(m_viewSunElevationHasBeenSet)
  {
   payload.WithObject("ViewSunElevation", m_viewSunElevation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
