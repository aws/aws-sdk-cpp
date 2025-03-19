/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DirectQueryDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

DirectQueryDataSource::DirectQueryDataSource(JsonView jsonValue)
{
  *this = jsonValue;
}

DirectQueryDataSource& DirectQueryDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceName"))
  {
    m_dataSourceName = jsonValue.GetString("DataSourceName");
    m_dataSourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSourceType"))
  {
    m_dataSourceType = jsonValue.GetObject("DataSourceType");
    m_dataSourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpenSearchArns"))
  {
    Aws::Utils::Array<JsonView> openSearchArnsJsonList = jsonValue.GetArray("OpenSearchArns");
    for(unsigned openSearchArnsIndex = 0; openSearchArnsIndex < openSearchArnsJsonList.GetLength(); ++openSearchArnsIndex)
    {
      m_openSearchArns.push_back(openSearchArnsJsonList[openSearchArnsIndex].AsString());
    }
    m_openSearchArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSourceArn"))
  {
    m_dataSourceArn = jsonValue.GetString("DataSourceArn");
    m_dataSourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TagList"))
  {
    Aws::Utils::Array<JsonView> tagListJsonList = jsonValue.GetArray("TagList");
    for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
    {
      m_tagList.push_back(tagListJsonList[tagListIndex].AsObject());
    }
    m_tagListHasBeenSet = true;
  }
  return *this;
}

JsonValue DirectQueryDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceNameHasBeenSet)
  {
   payload.WithString("DataSourceName", m_dataSourceName);

  }

  if(m_dataSourceTypeHasBeenSet)
  {
   payload.WithObject("DataSourceType", m_dataSourceType.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_openSearchArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> openSearchArnsJsonList(m_openSearchArns.size());
   for(unsigned openSearchArnsIndex = 0; openSearchArnsIndex < openSearchArnsJsonList.GetLength(); ++openSearchArnsIndex)
   {
     openSearchArnsJsonList[openSearchArnsIndex].AsString(m_openSearchArns[openSearchArnsIndex]);
   }
   payload.WithArray("OpenSearchArns", std::move(openSearchArnsJsonList));

  }

  if(m_dataSourceArnHasBeenSet)
  {
   payload.WithString("DataSourceArn", m_dataSourceArn);

  }

  if(m_tagListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsObject(m_tagList[tagListIndex].Jsonize());
   }
   payload.WithArray("TagList", std::move(tagListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
