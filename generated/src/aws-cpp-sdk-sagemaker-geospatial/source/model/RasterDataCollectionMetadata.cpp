/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/RasterDataCollectionMetadata.h>
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

RasterDataCollectionMetadata::RasterDataCollectionMetadata() : 
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_descriptionPageUrlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_supportedFiltersHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(DataCollectionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

RasterDataCollectionMetadata::RasterDataCollectionMetadata(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_descriptionPageUrlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_supportedFiltersHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(DataCollectionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RasterDataCollectionMetadata& RasterDataCollectionMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DescriptionPageUrl"))
  {
    m_descriptionPageUrl = jsonValue.GetString("DescriptionPageUrl");

    m_descriptionPageUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedFilters"))
  {
    Aws::Utils::Array<JsonView> supportedFiltersJsonList = jsonValue.GetArray("SupportedFilters");
    for(unsigned supportedFiltersIndex = 0; supportedFiltersIndex < supportedFiltersJsonList.GetLength(); ++supportedFiltersIndex)
    {
      m_supportedFilters.push_back(supportedFiltersJsonList[supportedFiltersIndex].AsObject());
    }
    m_supportedFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DataCollectionTypeMapper::GetDataCollectionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RasterDataCollectionMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_descriptionPageUrlHasBeenSet)
  {
   payload.WithString("DescriptionPageUrl", m_descriptionPageUrl);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_supportedFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedFiltersJsonList(m_supportedFilters.size());
   for(unsigned supportedFiltersIndex = 0; supportedFiltersIndex < supportedFiltersJsonList.GetLength(); ++supportedFiltersIndex)
   {
     supportedFiltersJsonList[supportedFiltersIndex].AsObject(m_supportedFilters[supportedFiltersIndex].Jsonize());
   }
   payload.WithArray("SupportedFilters", std::move(supportedFiltersJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DataCollectionTypeMapper::GetNameForDataCollectionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
