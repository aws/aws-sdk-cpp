/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/BaseScreenshot.h>
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

BaseScreenshot::BaseScreenshot() : 
    m_screenshotNameHasBeenSet(false),
    m_ignoreCoordinatesHasBeenSet(false)
{
}

BaseScreenshot::BaseScreenshot(JsonView jsonValue) : 
    m_screenshotNameHasBeenSet(false),
    m_ignoreCoordinatesHasBeenSet(false)
{
  *this = jsonValue;
}

BaseScreenshot& BaseScreenshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScreenshotName"))
  {
    m_screenshotName = jsonValue.GetString("ScreenshotName");

    m_screenshotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IgnoreCoordinates"))
  {
    Aws::Utils::Array<JsonView> ignoreCoordinatesJsonList = jsonValue.GetArray("IgnoreCoordinates");
    for(unsigned ignoreCoordinatesIndex = 0; ignoreCoordinatesIndex < ignoreCoordinatesJsonList.GetLength(); ++ignoreCoordinatesIndex)
    {
      m_ignoreCoordinates.push_back(ignoreCoordinatesJsonList[ignoreCoordinatesIndex].AsString());
    }
    m_ignoreCoordinatesHasBeenSet = true;
  }

  return *this;
}

JsonValue BaseScreenshot::Jsonize() const
{
  JsonValue payload;

  if(m_screenshotNameHasBeenSet)
  {
   payload.WithString("ScreenshotName", m_screenshotName);

  }

  if(m_ignoreCoordinatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ignoreCoordinatesJsonList(m_ignoreCoordinates.size());
   for(unsigned ignoreCoordinatesIndex = 0; ignoreCoordinatesIndex < ignoreCoordinatesJsonList.GetLength(); ++ignoreCoordinatesIndex)
   {
     ignoreCoordinatesJsonList[ignoreCoordinatesIndex].AsString(m_ignoreCoordinates[ignoreCoordinatesIndex]);
   }
   payload.WithArray("IgnoreCoordinates", std::move(ignoreCoordinatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
