/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ItemSource.h>
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

ItemSource::ItemSource() : 
    m_assetsHasBeenSet(false),
    m_dateTimeHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_idHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

ItemSource::ItemSource(JsonView jsonValue) : 
    m_assetsHasBeenSet(false),
    m_dateTimeHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_idHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

ItemSource& ItemSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Assets"))
  {
    Aws::Map<Aws::String, JsonView> assetsJsonMap = jsonValue.GetObject("Assets").GetAllObjects();
    for(auto& assetsItem : assetsJsonMap)
    {
      m_assets[assetsItem.first] = assetsItem.second.AsObject();
    }
    m_assetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateTime"))
  {
    m_dateTime = jsonValue.GetDouble("DateTime");

    m_dateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");

    m_geometryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Properties"))
  {
    m_properties = jsonValue.GetObject("Properties");

    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ItemSource::Jsonize() const
{
  JsonValue payload;

  if(m_assetsHasBeenSet)
  {
   JsonValue assetsJsonMap;
   for(auto& assetsItem : m_assets)
   {
     assetsJsonMap.WithObject(assetsItem.first, assetsItem.second.Jsonize());
   }
   payload.WithObject("Assets", std::move(assetsJsonMap));

  }

  if(m_dateTimeHasBeenSet)
  {
   payload.WithDouble("DateTime", m_dateTime.SecondsWithMSPrecision());
  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithObject("Properties", m_properties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
