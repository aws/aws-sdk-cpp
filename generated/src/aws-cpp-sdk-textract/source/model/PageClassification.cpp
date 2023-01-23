/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/PageClassification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

PageClassification::PageClassification() : 
    m_pageTypeHasBeenSet(false),
    m_pageNumberHasBeenSet(false)
{
}

PageClassification::PageClassification(JsonView jsonValue) : 
    m_pageTypeHasBeenSet(false),
    m_pageNumberHasBeenSet(false)
{
  *this = jsonValue;
}

PageClassification& PageClassification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PageType"))
  {
    Aws::Utils::Array<JsonView> pageTypeJsonList = jsonValue.GetArray("PageType");
    for(unsigned pageTypeIndex = 0; pageTypeIndex < pageTypeJsonList.GetLength(); ++pageTypeIndex)
    {
      m_pageType.push_back(pageTypeJsonList[pageTypeIndex].AsObject());
    }
    m_pageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PageNumber"))
  {
    Aws::Utils::Array<JsonView> pageNumberJsonList = jsonValue.GetArray("PageNumber");
    for(unsigned pageNumberIndex = 0; pageNumberIndex < pageNumberJsonList.GetLength(); ++pageNumberIndex)
    {
      m_pageNumber.push_back(pageNumberJsonList[pageNumberIndex].AsObject());
    }
    m_pageNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue PageClassification::Jsonize() const
{
  JsonValue payload;

  if(m_pageTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pageTypeJsonList(m_pageType.size());
   for(unsigned pageTypeIndex = 0; pageTypeIndex < pageTypeJsonList.GetLength(); ++pageTypeIndex)
   {
     pageTypeJsonList[pageTypeIndex].AsObject(m_pageType[pageTypeIndex].Jsonize());
   }
   payload.WithArray("PageType", std::move(pageTypeJsonList));

  }

  if(m_pageNumberHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pageNumberJsonList(m_pageNumber.size());
   for(unsigned pageNumberIndex = 0; pageNumberIndex < pageNumberJsonList.GetLength(); ++pageNumberIndex)
   {
     pageNumberJsonList[pageNumberIndex].AsObject(m_pageNumber[pageNumberIndex].Jsonize());
   }
   payload.WithArray("PageNumber", std::move(pageNumberJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
