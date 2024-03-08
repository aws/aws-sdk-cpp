/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/SourceAttribution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

SourceAttribution::SourceAttribution() : 
    m_citationNumber(0),
    m_citationNumberHasBeenSet(false),
    m_snippetHasBeenSet(false),
    m_textMessageSegmentsHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

SourceAttribution::SourceAttribution(JsonView jsonValue) : 
    m_citationNumber(0),
    m_citationNumberHasBeenSet(false),
    m_snippetHasBeenSet(false),
    m_textMessageSegmentsHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

SourceAttribution& SourceAttribution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("citationNumber"))
  {
    m_citationNumber = jsonValue.GetInteger("citationNumber");

    m_citationNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snippet"))
  {
    m_snippet = jsonValue.GetString("snippet");

    m_snippetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("textMessageSegments"))
  {
    Aws::Utils::Array<JsonView> textMessageSegmentsJsonList = jsonValue.GetArray("textMessageSegments");
    for(unsigned textMessageSegmentsIndex = 0; textMessageSegmentsIndex < textMessageSegmentsJsonList.GetLength(); ++textMessageSegmentsIndex)
    {
      m_textMessageSegments.push_back(textMessageSegmentsJsonList[textMessageSegmentsIndex].AsObject());
    }
    m_textMessageSegmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceAttribution::Jsonize() const
{
  JsonValue payload;

  if(m_citationNumberHasBeenSet)
  {
   payload.WithInteger("citationNumber", m_citationNumber);

  }

  if(m_snippetHasBeenSet)
  {
   payload.WithString("snippet", m_snippet);

  }

  if(m_textMessageSegmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textMessageSegmentsJsonList(m_textMessageSegments.size());
   for(unsigned textMessageSegmentsIndex = 0; textMessageSegmentsIndex < textMessageSegmentsJsonList.GetLength(); ++textMessageSegmentsIndex)
   {
     textMessageSegmentsJsonList[textMessageSegmentsIndex].AsObject(m_textMessageSegments[textMessageSegmentsIndex].Jsonize());
   }
   payload.WithArray("textMessageSegments", std::move(textMessageSegmentsJsonList));

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
