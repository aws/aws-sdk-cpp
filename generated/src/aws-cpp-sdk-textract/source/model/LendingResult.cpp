/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/LendingResult.h>
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

LendingResult::LendingResult() : 
    m_page(0),
    m_pageHasBeenSet(false),
    m_pageClassificationHasBeenSet(false),
    m_extractionsHasBeenSet(false)
{
}

LendingResult::LendingResult(JsonView jsonValue) : 
    m_page(0),
    m_pageHasBeenSet(false),
    m_pageClassificationHasBeenSet(false),
    m_extractionsHasBeenSet(false)
{
  *this = jsonValue;
}

LendingResult& LendingResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Page"))
  {
    m_page = jsonValue.GetInteger("Page");

    m_pageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PageClassification"))
  {
    m_pageClassification = jsonValue.GetObject("PageClassification");

    m_pageClassificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Extractions"))
  {
    Aws::Utils::Array<JsonView> extractionsJsonList = jsonValue.GetArray("Extractions");
    for(unsigned extractionsIndex = 0; extractionsIndex < extractionsJsonList.GetLength(); ++extractionsIndex)
    {
      m_extractions.push_back(extractionsJsonList[extractionsIndex].AsObject());
    }
    m_extractionsHasBeenSet = true;
  }

  return *this;
}

JsonValue LendingResult::Jsonize() const
{
  JsonValue payload;

  if(m_pageHasBeenSet)
  {
   payload.WithInteger("Page", m_page);

  }

  if(m_pageClassificationHasBeenSet)
  {
   payload.WithObject("PageClassification", m_pageClassification.Jsonize());

  }

  if(m_extractionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> extractionsJsonList(m_extractions.size());
   for(unsigned extractionsIndex = 0; extractionsIndex < extractionsJsonList.GetLength(); ++extractionsIndex)
   {
     extractionsJsonList[extractionsIndex].AsObject(m_extractions[extractionsIndex].Jsonize());
   }
   payload.WithArray("Extractions", std::move(extractionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
