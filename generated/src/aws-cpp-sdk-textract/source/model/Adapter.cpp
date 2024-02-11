/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/Adapter.h>
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

Adapter::Adapter() : 
    m_adapterIdHasBeenSet(false),
    m_pagesHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Adapter::Adapter(JsonView jsonValue) : 
    m_adapterIdHasBeenSet(false),
    m_pagesHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

Adapter& Adapter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdapterId"))
  {
    m_adapterId = jsonValue.GetString("AdapterId");

    m_adapterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pages"))
  {
    Aws::Utils::Array<JsonView> pagesJsonList = jsonValue.GetArray("Pages");
    for(unsigned pagesIndex = 0; pagesIndex < pagesJsonList.GetLength(); ++pagesIndex)
    {
      m_pages.push_back(pagesJsonList[pagesIndex].AsString());
    }
    m_pagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue Adapter::Jsonize() const
{
  JsonValue payload;

  if(m_adapterIdHasBeenSet)
  {
   payload.WithString("AdapterId", m_adapterId);

  }

  if(m_pagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pagesJsonList(m_pages.size());
   for(unsigned pagesIndex = 0; pagesIndex < pagesJsonList.GetLength(); ++pagesIndex)
   {
     pagesJsonList[pagesIndex].AsString(m_pages[pagesIndex]);
   }
   payload.WithArray("Pages", std::move(pagesJsonList));

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
