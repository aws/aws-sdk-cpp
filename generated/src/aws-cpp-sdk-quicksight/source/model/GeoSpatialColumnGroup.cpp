/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeoSpatialColumnGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

GeoSpatialColumnGroup::GeoSpatialColumnGroup() : 
    m_nameHasBeenSet(false),
    m_countryCode(GeoSpatialCountryCode::NOT_SET),
    m_countryCodeHasBeenSet(false),
    m_columnsHasBeenSet(false)
{
}

GeoSpatialColumnGroup::GeoSpatialColumnGroup(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_countryCode(GeoSpatialCountryCode::NOT_SET),
    m_countryCodeHasBeenSet(false),
    m_columnsHasBeenSet(false)
{
  *this = jsonValue;
}

GeoSpatialColumnGroup& GeoSpatialColumnGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = GeoSpatialCountryCodeMapper::GetGeoSpatialCountryCodeForName(jsonValue.GetString("CountryCode"));

    m_countryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("Columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsString());
    }
    m_columnsHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoSpatialColumnGroup::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", GeoSpatialCountryCodeMapper::GetNameForGeoSpatialCountryCode(m_countryCode));
  }

  if(m_columnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     columnsJsonList[columnsIndex].AsString(m_columns[columnsIndex]);
   }
   payload.WithArray("Columns", std::move(columnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
