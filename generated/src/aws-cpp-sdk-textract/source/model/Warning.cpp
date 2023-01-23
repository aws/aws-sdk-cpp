/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/Warning.h>
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

Warning::Warning() : 
    m_errorCodeHasBeenSet(false),
    m_pagesHasBeenSet(false)
{
}

Warning::Warning(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_pagesHasBeenSet(false)
{
  *this = jsonValue;
}

Warning& Warning::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
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

JsonValue Warning::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

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
