﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/TagInfoForResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

TagInfoForResource::TagInfoForResource(JsonView jsonValue)
{
  *this = jsonValue;
}

TagInfoForResource& TagInfoForResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");
    m_resourceARNHasBeenSet = true;
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

JsonValue TagInfoForResource::Jsonize() const
{
  JsonValue payload;

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

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
} // namespace WAFV2
} // namespace Aws
