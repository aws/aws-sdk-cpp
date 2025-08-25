/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

VideoSelector::VideoSelector(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoSelector& VideoSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alphaBehavior"))
  {
    m_alphaBehavior = AlphaBehaviorMapper::GetAlphaBehaviorForName(jsonValue.GetString("alphaBehavior"));
    m_alphaBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("colorSpace"))
  {
    m_colorSpace = ColorSpaceMapper::GetColorSpaceForName(jsonValue.GetString("colorSpace"));
    m_colorSpaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("colorSpaceUsage"))
  {
    m_colorSpaceUsage = ColorSpaceUsageMapper::GetColorSpaceUsageForName(jsonValue.GetString("colorSpaceUsage"));
    m_colorSpaceUsageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("embeddedTimecodeOverride"))
  {
    m_embeddedTimecodeOverride = EmbeddedTimecodeOverrideMapper::GetEmbeddedTimecodeOverrideForName(jsonValue.GetString("embeddedTimecodeOverride"));
    m_embeddedTimecodeOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hdr10Metadata"))
  {
    m_hdr10Metadata = jsonValue.GetObject("hdr10Metadata");
    m_hdr10MetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxLuminance"))
  {
    m_maxLuminance = jsonValue.GetInteger("maxLuminance");
    m_maxLuminanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("padVideo"))
  {
    m_padVideo = PadVideoMapper::GetPadVideoForName(jsonValue.GetString("padVideo"));
    m_padVideoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pid"))
  {
    m_pid = jsonValue.GetInteger("pid");
    m_pidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("programNumber"))
  {
    m_programNumber = jsonValue.GetInteger("programNumber");
    m_programNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rotate"))
  {
    m_rotate = InputRotateMapper::GetInputRotateForName(jsonValue.GetString("rotate"));
    m_rotateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleRange"))
  {
    m_sampleRange = InputSampleRangeMapper::GetInputSampleRangeForName(jsonValue.GetString("sampleRange"));
    m_sampleRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("selectorType"))
  {
    m_selectorType = VideoSelectorTypeMapper::GetVideoSelectorTypeForName(jsonValue.GetString("selectorType"));
    m_selectorTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streams"))
  {
    Aws::Utils::Array<JsonView> streamsJsonList = jsonValue.GetArray("streams");
    for(unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex)
    {
      m_streams.push_back(streamsJsonList[streamsIndex].AsInteger());
    }
    m_streamsHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoSelector::Jsonize() const
{
  JsonValue payload;

  if(m_alphaBehaviorHasBeenSet)
  {
   payload.WithString("alphaBehavior", AlphaBehaviorMapper::GetNameForAlphaBehavior(m_alphaBehavior));
  }

  if(m_colorSpaceHasBeenSet)
  {
   payload.WithString("colorSpace", ColorSpaceMapper::GetNameForColorSpace(m_colorSpace));
  }

  if(m_colorSpaceUsageHasBeenSet)
  {
   payload.WithString("colorSpaceUsage", ColorSpaceUsageMapper::GetNameForColorSpaceUsage(m_colorSpaceUsage));
  }

  if(m_embeddedTimecodeOverrideHasBeenSet)
  {
   payload.WithString("embeddedTimecodeOverride", EmbeddedTimecodeOverrideMapper::GetNameForEmbeddedTimecodeOverride(m_embeddedTimecodeOverride));
  }

  if(m_hdr10MetadataHasBeenSet)
  {
   payload.WithObject("hdr10Metadata", m_hdr10Metadata.Jsonize());

  }

  if(m_maxLuminanceHasBeenSet)
  {
   payload.WithInteger("maxLuminance", m_maxLuminance);

  }

  if(m_padVideoHasBeenSet)
  {
   payload.WithString("padVideo", PadVideoMapper::GetNameForPadVideo(m_padVideo));
  }

  if(m_pidHasBeenSet)
  {
   payload.WithInteger("pid", m_pid);

  }

  if(m_programNumberHasBeenSet)
  {
   payload.WithInteger("programNumber", m_programNumber);

  }

  if(m_rotateHasBeenSet)
  {
   payload.WithString("rotate", InputRotateMapper::GetNameForInputRotate(m_rotate));
  }

  if(m_sampleRangeHasBeenSet)
  {
   payload.WithString("sampleRange", InputSampleRangeMapper::GetNameForInputSampleRange(m_sampleRange));
  }

  if(m_selectorTypeHasBeenSet)
  {
   payload.WithString("selectorType", VideoSelectorTypeMapper::GetNameForVideoSelectorType(m_selectorType));
  }

  if(m_streamsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> streamsJsonList(m_streams.size());
   for(unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex)
   {
     streamsJsonList[streamsIndex].AsInteger(m_streams[streamsIndex]);
   }
   payload.WithArray("streams", std::move(streamsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
