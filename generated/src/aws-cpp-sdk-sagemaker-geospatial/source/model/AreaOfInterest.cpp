/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/AreaOfInterest.h>
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

AreaOfInterest::AreaOfInterest() : 
    m_areaOfInterestGeometryHasBeenSet(false)
{
}

AreaOfInterest::AreaOfInterest(JsonView jsonValue) : 
    m_areaOfInterestGeometryHasBeenSet(false)
{
  *this = jsonValue;
}

AreaOfInterest& AreaOfInterest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AreaOfInterestGeometry"))
  {
    m_areaOfInterestGeometry = jsonValue.GetObject("AreaOfInterestGeometry");

    m_areaOfInterestGeometryHasBeenSet = true;
  }

  return *this;
}

JsonValue AreaOfInterest::Jsonize() const
{
  JsonValue payload;

  if(m_areaOfInterestGeometryHasBeenSet)
  {
   payload.WithObject("AreaOfInterestGeometry", m_areaOfInterestGeometry.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
