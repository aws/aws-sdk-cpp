/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Output.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Output::Output() : 
    m_audioDescriptionNamesHasBeenSet(false),
    m_captionDescriptionNamesHasBeenSet(false),
    m_outputNameHasBeenSet(false),
    m_outputSettingsHasBeenSet(false),
    m_videoDescriptionNameHasBeenSet(false)
{
}

Output::Output(JsonView jsonValue) : 
    m_audioDescriptionNamesHasBeenSet(false),
    m_captionDescriptionNamesHasBeenSet(false),
    m_outputNameHasBeenSet(false),
    m_outputSettingsHasBeenSet(false),
    m_videoDescriptionNameHasBeenSet(false)
{
  *this = jsonValue;
}

Output& Output::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioDescriptionNames"))
  {
    Aws::Utils::Array<JsonView> audioDescriptionNamesJsonList = jsonValue.GetArray("audioDescriptionNames");
    for(unsigned audioDescriptionNamesIndex = 0; audioDescriptionNamesIndex < audioDescriptionNamesJsonList.GetLength(); ++audioDescriptionNamesIndex)
    {
      m_audioDescriptionNames.push_back(audioDescriptionNamesJsonList[audioDescriptionNamesIndex].AsString());
    }
    m_audioDescriptionNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionDescriptionNames"))
  {
    Aws::Utils::Array<JsonView> captionDescriptionNamesJsonList = jsonValue.GetArray("captionDescriptionNames");
    for(unsigned captionDescriptionNamesIndex = 0; captionDescriptionNamesIndex < captionDescriptionNamesJsonList.GetLength(); ++captionDescriptionNamesIndex)
    {
      m_captionDescriptionNames.push_back(captionDescriptionNamesJsonList[captionDescriptionNamesIndex].AsString());
    }
    m_captionDescriptionNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputName"))
  {
    m_outputName = jsonValue.GetString("outputName");

    m_outputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputSettings"))
  {
    m_outputSettings = jsonValue.GetObject("outputSettings");

    m_outputSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoDescriptionName"))
  {
    m_videoDescriptionName = jsonValue.GetString("videoDescriptionName");

    m_videoDescriptionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Output::Jsonize() const
{
  JsonValue payload;

  if(m_audioDescriptionNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioDescriptionNamesJsonList(m_audioDescriptionNames.size());
   for(unsigned audioDescriptionNamesIndex = 0; audioDescriptionNamesIndex < audioDescriptionNamesJsonList.GetLength(); ++audioDescriptionNamesIndex)
   {
     audioDescriptionNamesJsonList[audioDescriptionNamesIndex].AsString(m_audioDescriptionNames[audioDescriptionNamesIndex]);
   }
   payload.WithArray("audioDescriptionNames", std::move(audioDescriptionNamesJsonList));

  }

  if(m_captionDescriptionNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> captionDescriptionNamesJsonList(m_captionDescriptionNames.size());
   for(unsigned captionDescriptionNamesIndex = 0; captionDescriptionNamesIndex < captionDescriptionNamesJsonList.GetLength(); ++captionDescriptionNamesIndex)
   {
     captionDescriptionNamesJsonList[captionDescriptionNamesIndex].AsString(m_captionDescriptionNames[captionDescriptionNamesIndex]);
   }
   payload.WithArray("captionDescriptionNames", std::move(captionDescriptionNamesJsonList));

  }

  if(m_outputNameHasBeenSet)
  {
   payload.WithString("outputName", m_outputName);

  }

  if(m_outputSettingsHasBeenSet)
  {
   payload.WithObject("outputSettings", m_outputSettings.Jsonize());

  }

  if(m_videoDescriptionNameHasBeenSet)
  {
   payload.WithString("videoDescriptionName", m_videoDescriptionName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
