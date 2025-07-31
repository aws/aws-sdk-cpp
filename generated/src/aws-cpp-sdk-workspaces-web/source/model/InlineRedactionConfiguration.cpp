/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/InlineRedactionConfiguration.h>
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

InlineRedactionConfiguration::InlineRedactionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

InlineRedactionConfiguration& InlineRedactionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inlineRedactionPatterns"))
  {
    Aws::Utils::Array<JsonView> inlineRedactionPatternsJsonList = jsonValue.GetArray("inlineRedactionPatterns");
    for(unsigned inlineRedactionPatternsIndex = 0; inlineRedactionPatternsIndex < inlineRedactionPatternsJsonList.GetLength(); ++inlineRedactionPatternsIndex)
    {
      m_inlineRedactionPatterns.push_back(inlineRedactionPatternsJsonList[inlineRedactionPatternsIndex].AsObject());
    }
    m_inlineRedactionPatternsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("globalEnforcedUrls"))
  {
    Aws::Utils::Array<JsonView> globalEnforcedUrlsJsonList = jsonValue.GetArray("globalEnforcedUrls");
    for(unsigned globalEnforcedUrlsIndex = 0; globalEnforcedUrlsIndex < globalEnforcedUrlsJsonList.GetLength(); ++globalEnforcedUrlsIndex)
    {
      m_globalEnforcedUrls.push_back(globalEnforcedUrlsJsonList[globalEnforcedUrlsIndex].AsString());
    }
    m_globalEnforcedUrlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("globalExemptUrls"))
  {
    Aws::Utils::Array<JsonView> globalExemptUrlsJsonList = jsonValue.GetArray("globalExemptUrls");
    for(unsigned globalExemptUrlsIndex = 0; globalExemptUrlsIndex < globalExemptUrlsJsonList.GetLength(); ++globalExemptUrlsIndex)
    {
      m_globalExemptUrls.push_back(globalExemptUrlsJsonList[globalExemptUrlsIndex].AsString());
    }
    m_globalExemptUrlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("globalConfidenceLevel"))
  {
    m_globalConfidenceLevel = jsonValue.GetInteger("globalConfidenceLevel");
    m_globalConfidenceLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue InlineRedactionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inlineRedactionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inlineRedactionPatternsJsonList(m_inlineRedactionPatterns.size());
   for(unsigned inlineRedactionPatternsIndex = 0; inlineRedactionPatternsIndex < inlineRedactionPatternsJsonList.GetLength(); ++inlineRedactionPatternsIndex)
   {
     inlineRedactionPatternsJsonList[inlineRedactionPatternsIndex].AsObject(m_inlineRedactionPatterns[inlineRedactionPatternsIndex].Jsonize());
   }
   payload.WithArray("inlineRedactionPatterns", std::move(inlineRedactionPatternsJsonList));

  }

  if(m_globalEnforcedUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> globalEnforcedUrlsJsonList(m_globalEnforcedUrls.size());
   for(unsigned globalEnforcedUrlsIndex = 0; globalEnforcedUrlsIndex < globalEnforcedUrlsJsonList.GetLength(); ++globalEnforcedUrlsIndex)
   {
     globalEnforcedUrlsJsonList[globalEnforcedUrlsIndex].AsString(m_globalEnforcedUrls[globalEnforcedUrlsIndex]);
   }
   payload.WithArray("globalEnforcedUrls", std::move(globalEnforcedUrlsJsonList));

  }

  if(m_globalExemptUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> globalExemptUrlsJsonList(m_globalExemptUrls.size());
   for(unsigned globalExemptUrlsIndex = 0; globalExemptUrlsIndex < globalExemptUrlsJsonList.GetLength(); ++globalExemptUrlsIndex)
   {
     globalExemptUrlsJsonList[globalExemptUrlsIndex].AsString(m_globalExemptUrls[globalExemptUrlsIndex]);
   }
   payload.WithArray("globalExemptUrls", std::move(globalExemptUrlsJsonList));

  }

  if(m_globalConfidenceLevelHasBeenSet)
  {
   payload.WithInteger("globalConfidenceLevel", m_globalConfidenceLevel);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
