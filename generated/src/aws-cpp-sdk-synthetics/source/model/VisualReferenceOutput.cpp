/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/VisualReferenceOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

VisualReferenceOutput::VisualReferenceOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

VisualReferenceOutput& VisualReferenceOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseScreenshots"))
  {
    Aws::Utils::Array<JsonView> baseScreenshotsJsonList = jsonValue.GetArray("BaseScreenshots");
    for(unsigned baseScreenshotsIndex = 0; baseScreenshotsIndex < baseScreenshotsJsonList.GetLength(); ++baseScreenshotsIndex)
    {
      m_baseScreenshots.push_back(baseScreenshotsJsonList[baseScreenshotsIndex].AsObject());
    }
    m_baseScreenshotsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BaseCanaryRunId"))
  {
    m_baseCanaryRunId = jsonValue.GetString("BaseCanaryRunId");
    m_baseCanaryRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BrowserType"))
  {
    m_browserType = BrowserTypeMapper::GetBrowserTypeForName(jsonValue.GetString("BrowserType"));
    m_browserTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue VisualReferenceOutput::Jsonize() const
{
  JsonValue payload;

  if(m_baseScreenshotsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> baseScreenshotsJsonList(m_baseScreenshots.size());
   for(unsigned baseScreenshotsIndex = 0; baseScreenshotsIndex < baseScreenshotsJsonList.GetLength(); ++baseScreenshotsIndex)
   {
     baseScreenshotsJsonList[baseScreenshotsIndex].AsObject(m_baseScreenshots[baseScreenshotsIndex].Jsonize());
   }
   payload.WithArray("BaseScreenshots", std::move(baseScreenshotsJsonList));

  }

  if(m_baseCanaryRunIdHasBeenSet)
  {
   payload.WithString("BaseCanaryRunId", m_baseCanaryRunId);

  }

  if(m_browserTypeHasBeenSet)
  {
   payload.WithString("BrowserType", BrowserTypeMapper::GetNameForBrowserType(m_browserType));
  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
