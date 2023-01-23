/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/SubtitlesOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

SubtitlesOutput::SubtitlesOutput() : 
    m_formatsHasBeenSet(false),
    m_subtitleFileUrisHasBeenSet(false),
    m_outputStartIndex(0),
    m_outputStartIndexHasBeenSet(false)
{
}

SubtitlesOutput::SubtitlesOutput(JsonView jsonValue) : 
    m_formatsHasBeenSet(false),
    m_subtitleFileUrisHasBeenSet(false),
    m_outputStartIndex(0),
    m_outputStartIndexHasBeenSet(false)
{
  *this = jsonValue;
}

SubtitlesOutput& SubtitlesOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Formats"))
  {
    Aws::Utils::Array<JsonView> formatsJsonList = jsonValue.GetArray("Formats");
    for(unsigned formatsIndex = 0; formatsIndex < formatsJsonList.GetLength(); ++formatsIndex)
    {
      m_formats.push_back(SubtitleFormatMapper::GetSubtitleFormatForName(formatsJsonList[formatsIndex].AsString()));
    }
    m_formatsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubtitleFileUris"))
  {
    Aws::Utils::Array<JsonView> subtitleFileUrisJsonList = jsonValue.GetArray("SubtitleFileUris");
    for(unsigned subtitleFileUrisIndex = 0; subtitleFileUrisIndex < subtitleFileUrisJsonList.GetLength(); ++subtitleFileUrisIndex)
    {
      m_subtitleFileUris.push_back(subtitleFileUrisJsonList[subtitleFileUrisIndex].AsString());
    }
    m_subtitleFileUrisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputStartIndex"))
  {
    m_outputStartIndex = jsonValue.GetInteger("OutputStartIndex");

    m_outputStartIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue SubtitlesOutput::Jsonize() const
{
  JsonValue payload;

  if(m_formatsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> formatsJsonList(m_formats.size());
   for(unsigned formatsIndex = 0; formatsIndex < formatsJsonList.GetLength(); ++formatsIndex)
   {
     formatsJsonList[formatsIndex].AsString(SubtitleFormatMapper::GetNameForSubtitleFormat(m_formats[formatsIndex]));
   }
   payload.WithArray("Formats", std::move(formatsJsonList));

  }

  if(m_subtitleFileUrisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subtitleFileUrisJsonList(m_subtitleFileUris.size());
   for(unsigned subtitleFileUrisIndex = 0; subtitleFileUrisIndex < subtitleFileUrisJsonList.GetLength(); ++subtitleFileUrisIndex)
   {
     subtitleFileUrisJsonList[subtitleFileUrisIndex].AsString(m_subtitleFileUris[subtitleFileUrisIndex]);
   }
   payload.WithArray("SubtitleFileUris", std::move(subtitleFileUrisJsonList));

  }

  if(m_outputStartIndexHasBeenSet)
  {
   payload.WithInteger("OutputStartIndex", m_outputStartIndex);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
