/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/Filters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

Filters::Filters() : 
    m_textLocalesHasBeenSet(false),
    m_contentCategoriesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_principalsHasBeenSet(false),
    m_ancestorIdsHasBeenSet(false),
    m_searchCollectionTypesHasBeenSet(false),
    m_sizeRangeHasBeenSet(false),
    m_createdRangeHasBeenSet(false),
    m_modifiedRangeHasBeenSet(false)
{
}

Filters::Filters(JsonView jsonValue) : 
    m_textLocalesHasBeenSet(false),
    m_contentCategoriesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_principalsHasBeenSet(false),
    m_ancestorIdsHasBeenSet(false),
    m_searchCollectionTypesHasBeenSet(false),
    m_sizeRangeHasBeenSet(false),
    m_createdRangeHasBeenSet(false),
    m_modifiedRangeHasBeenSet(false)
{
  *this = jsonValue;
}

Filters& Filters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TextLocales"))
  {
    Aws::Utils::Array<JsonView> textLocalesJsonList = jsonValue.GetArray("TextLocales");
    for(unsigned textLocalesIndex = 0; textLocalesIndex < textLocalesJsonList.GetLength(); ++textLocalesIndex)
    {
      m_textLocales.push_back(LanguageCodeTypeMapper::GetLanguageCodeTypeForName(textLocalesJsonList[textLocalesIndex].AsString()));
    }
    m_textLocalesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentCategories"))
  {
    Aws::Utils::Array<JsonView> contentCategoriesJsonList = jsonValue.GetArray("ContentCategories");
    for(unsigned contentCategoriesIndex = 0; contentCategoriesIndex < contentCategoriesJsonList.GetLength(); ++contentCategoriesIndex)
    {
      m_contentCategories.push_back(ContentCategoryTypeMapper::GetContentCategoryTypeForName(contentCategoriesJsonList[contentCategoriesIndex].AsString()));
    }
    m_contentCategoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTypes"))
  {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
    {
      m_resourceTypes.push_back(SearchResourceTypeMapper::GetSearchResourceTypeForName(resourceTypesJsonList[resourceTypesIndex].AsString()));
    }
    m_resourceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Principals"))
  {
    Aws::Utils::Array<JsonView> principalsJsonList = jsonValue.GetArray("Principals");
    for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
    {
      m_principals.push_back(principalsJsonList[principalsIndex].AsObject());
    }
    m_principalsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AncestorIds"))
  {
    Aws::Utils::Array<JsonView> ancestorIdsJsonList = jsonValue.GetArray("AncestorIds");
    for(unsigned ancestorIdsIndex = 0; ancestorIdsIndex < ancestorIdsJsonList.GetLength(); ++ancestorIdsIndex)
    {
      m_ancestorIds.push_back(ancestorIdsJsonList[ancestorIdsIndex].AsString());
    }
    m_ancestorIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SearchCollectionTypes"))
  {
    Aws::Utils::Array<JsonView> searchCollectionTypesJsonList = jsonValue.GetArray("SearchCollectionTypes");
    for(unsigned searchCollectionTypesIndex = 0; searchCollectionTypesIndex < searchCollectionTypesJsonList.GetLength(); ++searchCollectionTypesIndex)
    {
      m_searchCollectionTypes.push_back(SearchCollectionTypeMapper::GetSearchCollectionTypeForName(searchCollectionTypesJsonList[searchCollectionTypesIndex].AsString()));
    }
    m_searchCollectionTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeRange"))
  {
    m_sizeRange = jsonValue.GetObject("SizeRange");

    m_sizeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedRange"))
  {
    m_createdRange = jsonValue.GetObject("CreatedRange");

    m_createdRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifiedRange"))
  {
    m_modifiedRange = jsonValue.GetObject("ModifiedRange");

    m_modifiedRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue Filters::Jsonize() const
{
  JsonValue payload;

  if(m_textLocalesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textLocalesJsonList(m_textLocales.size());
   for(unsigned textLocalesIndex = 0; textLocalesIndex < textLocalesJsonList.GetLength(); ++textLocalesIndex)
   {
     textLocalesJsonList[textLocalesIndex].AsString(LanguageCodeTypeMapper::GetNameForLanguageCodeType(m_textLocales[textLocalesIndex]));
   }
   payload.WithArray("TextLocales", std::move(textLocalesJsonList));

  }

  if(m_contentCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentCategoriesJsonList(m_contentCategories.size());
   for(unsigned contentCategoriesIndex = 0; contentCategoriesIndex < contentCategoriesJsonList.GetLength(); ++contentCategoriesIndex)
   {
     contentCategoriesJsonList[contentCategoriesIndex].AsString(ContentCategoryTypeMapper::GetNameForContentCategoryType(m_contentCategories[contentCategoriesIndex]));
   }
   payload.WithArray("ContentCategories", std::move(contentCategoriesJsonList));

  }

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(SearchResourceTypeMapper::GetNameForSearchResourceType(m_resourceTypes[resourceTypesIndex]));
   }
   payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("Labels", std::move(labelsJsonList));

  }

  if(m_principalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> principalsJsonList(m_principals.size());
   for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
   {
     principalsJsonList[principalsIndex].AsObject(m_principals[principalsIndex].Jsonize());
   }
   payload.WithArray("Principals", std::move(principalsJsonList));

  }

  if(m_ancestorIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ancestorIdsJsonList(m_ancestorIds.size());
   for(unsigned ancestorIdsIndex = 0; ancestorIdsIndex < ancestorIdsJsonList.GetLength(); ++ancestorIdsIndex)
   {
     ancestorIdsJsonList[ancestorIdsIndex].AsString(m_ancestorIds[ancestorIdsIndex]);
   }
   payload.WithArray("AncestorIds", std::move(ancestorIdsJsonList));

  }

  if(m_searchCollectionTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> searchCollectionTypesJsonList(m_searchCollectionTypes.size());
   for(unsigned searchCollectionTypesIndex = 0; searchCollectionTypesIndex < searchCollectionTypesJsonList.GetLength(); ++searchCollectionTypesIndex)
   {
     searchCollectionTypesJsonList[searchCollectionTypesIndex].AsString(SearchCollectionTypeMapper::GetNameForSearchCollectionType(m_searchCollectionTypes[searchCollectionTypesIndex]));
   }
   payload.WithArray("SearchCollectionTypes", std::move(searchCollectionTypesJsonList));

  }

  if(m_sizeRangeHasBeenSet)
  {
   payload.WithObject("SizeRange", m_sizeRange.Jsonize());

  }

  if(m_createdRangeHasBeenSet)
  {
   payload.WithObject("CreatedRange", m_createdRange.Jsonize());

  }

  if(m_modifiedRangeHasBeenSet)
  {
   payload.WithObject("ModifiedRange", m_modifiedRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
