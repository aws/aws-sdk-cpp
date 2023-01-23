/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/Position.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

Position::Position() : 
    m_elevation(0.0),
    m_elevationHasBeenSet(false),
    m_elevationReference(ElevationReference::NOT_SET),
    m_elevationReferenceHasBeenSet(false),
    m_elevationUnit(ElevationUnit::NOT_SET),
    m_elevationUnitHasBeenSet(false),
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false)
{
}

Position::Position(JsonView jsonValue) : 
    m_elevation(0.0),
    m_elevationHasBeenSet(false),
    m_elevationReference(ElevationReference::NOT_SET),
    m_elevationReferenceHasBeenSet(false),
    m_elevationUnit(ElevationUnit::NOT_SET),
    m_elevationUnitHasBeenSet(false),
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false)
{
  *this = jsonValue;
}

Position& Position::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("elevation"))
  {
    m_elevation = jsonValue.GetDouble("elevation");

    m_elevationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elevationReference"))
  {
    m_elevationReference = ElevationReferenceMapper::GetElevationReferenceForName(jsonValue.GetString("elevationReference"));

    m_elevationReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elevationUnit"))
  {
    m_elevationUnit = ElevationUnitMapper::GetElevationUnitForName(jsonValue.GetString("elevationUnit"));

    m_elevationUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latitude"))
  {
    m_latitude = jsonValue.GetDouble("latitude");

    m_latitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("longitude"))
  {
    m_longitude = jsonValue.GetDouble("longitude");

    m_longitudeHasBeenSet = true;
  }

  return *this;
}

JsonValue Position::Jsonize() const
{
  JsonValue payload;

  if(m_elevationHasBeenSet)
  {
   payload.WithDouble("elevation", m_elevation);

  }

  if(m_elevationReferenceHasBeenSet)
  {
   payload.WithString("elevationReference", ElevationReferenceMapper::GetNameForElevationReference(m_elevationReference));
  }

  if(m_elevationUnitHasBeenSet)
  {
   payload.WithString("elevationUnit", ElevationUnitMapper::GetNameForElevationUnit(m_elevationUnit));
  }

  if(m_latitudeHasBeenSet)
  {
   payload.WithDouble("latitude", m_latitude);

  }

  if(m_longitudeHasBeenSet)
  {
   payload.WithDouble("longitude", m_longitude);

  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
