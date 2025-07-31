/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/InlineRedactionPattern.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

InlineRedactionPattern::InlineRedactionPattern(JsonView jsonValue)
{
  *this = jsonValue;
}

InlineRedactionPattern& InlineRedactionPattern::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("builtInPatternId"))
  {
    m_builtInPatternId = jsonValue.GetString("builtInPatternId");
    m_builtInPatternIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customPattern"))
  {
    m_customPattern = jsonValue.GetObject("customPattern");
    m_customPatternHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redactionPlaceHolder"))
  {
    m_redactionPlaceHolder = jsonValue.GetObject("redactionPlaceHolder");
    m_redactionPlaceHolderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enforcedUrls"))
  {
    Aws::Utils::Array<JsonView> enforcedUrlsJsonList = jsonValue.GetArray("enforcedUrls");
    for(unsigned enforcedUrlsIndex = 0; enforcedUrlsIndex < enforcedUrlsJsonList.GetLength(); ++enforcedUrlsIndex)
    {
      m_enforcedUrls.push_back(enforcedUrlsJsonList[enforcedUrlsIndex].AsString());
    }
    m_enforcedUrlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exemptUrls"))
  {
    Aws::Utils::Array<JsonView> exemptUrlsJsonList = jsonValue.GetArray("exemptUrls");
    for(unsigned exemptUrlsIndex = 0; exemptUrlsIndex < exemptUrlsJsonList.GetLength(); ++exemptUrlsIndex)
    {
      m_exemptUrls.push_back(exemptUrlsJsonList[exemptUrlsIndex].AsString());
    }
    m_exemptUrlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("confidenceLevel"))
  {
    m_confidenceLevel = jsonValue.GetInteger("confidenceLevel");
    m_confidenceLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue InlineRedactionPattern::Jsonize() const
{
  JsonValue payload;

  if(m_builtInPatternIdHasBeenSet)
  {
   payload.WithString("builtInPatternId", m_builtInPatternId);

  }

  if(m_customPatternHasBeenSet)
  {
   payload.WithObject("customPattern", m_customPattern.Jsonize());

  }

  if(m_redactionPlaceHolderHasBeenSet)
  {
   payload.WithObject("redactionPlaceHolder", m_redactionPlaceHolder.Jsonize());

  }

  if(m_enforcedUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enforcedUrlsJsonList(m_enforcedUrls.size());
   for(unsigned enforcedUrlsIndex = 0; enforcedUrlsIndex < enforcedUrlsJsonList.GetLength(); ++enforcedUrlsIndex)
   {
     enforcedUrlsJsonList[enforcedUrlsIndex].AsString(m_enforcedUrls[enforcedUrlsIndex]);
   }
   payload.WithArray("enforcedUrls", std::move(enforcedUrlsJsonList));

  }

  if(m_exemptUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exemptUrlsJsonList(m_exemptUrls.size());
   for(unsigned exemptUrlsIndex = 0; exemptUrlsIndex < exemptUrlsJsonList.GetLength(); ++exemptUrlsIndex)
   {
     exemptUrlsJsonList[exemptUrlsIndex].AsString(m_exemptUrls[exemptUrlsIndex]);
   }
   payload.WithArray("exemptUrls", std::move(exemptUrlsJsonList));

  }

  if(m_confidenceLevelHasBeenSet)
  {
   payload.WithInteger("confidenceLevel", m_confidenceLevel);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
