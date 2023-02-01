/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/SplitDocument.h>
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

SplitDocument::SplitDocument() : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_pagesHasBeenSet(false)
{
}

SplitDocument::SplitDocument(JsonView jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_pagesHasBeenSet(false)
{
  *this = jsonValue;
}

SplitDocument& SplitDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInteger("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pages"))
  {
    Aws::Utils::Array<JsonView> pagesJsonList = jsonValue.GetArray("Pages");
    for(unsigned pagesIndex = 0; pagesIndex < pagesJsonList.GetLength(); ++pagesIndex)
    {
      m_pages.push_back(pagesJsonList[pagesIndex].AsInteger());
    }
    m_pagesHasBeenSet = true;
  }

  return *this;
}

JsonValue SplitDocument::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("Index", m_index);

  }

  if(m_pagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pagesJsonList(m_pages.size());
   for(unsigned pagesIndex = 0; pagesIndex < pagesJsonList.GetLength(); ++pagesIndex)
   {
     pagesJsonList[pagesIndex].AsInteger(m_pages[pagesIndex]);
   }
   payload.WithArray("Pages", std::move(pagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
