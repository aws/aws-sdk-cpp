/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GPSPointDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

GPSPointDimension::GPSPointDimension() : 
    m_coordinatesHasBeenSet(false),
    m_rangeInKilometers(0.0),
    m_rangeInKilometersHasBeenSet(false)
{
}

GPSPointDimension::GPSPointDimension(JsonView jsonValue) : 
    m_coordinatesHasBeenSet(false),
    m_rangeInKilometers(0.0),
    m_rangeInKilometersHasBeenSet(false)
{
  *this = jsonValue;
}

GPSPointDimension& GPSPointDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Coordinates"))
  {
    m_coordinates = jsonValue.GetObject("Coordinates");

    m_coordinatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeInKilometers"))
  {
    m_rangeInKilometers = jsonValue.GetDouble("RangeInKilometers");

    m_rangeInKilometersHasBeenSet = true;
  }

  return *this;
}

JsonValue GPSPointDimension::Jsonize() const
{
  JsonValue payload;

  if(m_coordinatesHasBeenSet)
  {
   payload.WithObject("Coordinates", m_coordinates.Jsonize());

  }

  if(m_rangeInKilometersHasBeenSet)
  {
   payload.WithDouble("RangeInKilometers", m_rangeInKilometers);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
