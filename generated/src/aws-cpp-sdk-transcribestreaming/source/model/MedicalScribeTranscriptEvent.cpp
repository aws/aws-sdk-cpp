/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeTranscriptEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

MedicalScribeTranscriptEvent::MedicalScribeTranscriptEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

MedicalScribeTranscriptEvent& MedicalScribeTranscriptEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranscriptSegment"))
  {
    m_transcriptSegment = jsonValue.GetObject("TranscriptSegment");
    m_transcriptSegmentHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeTranscriptEvent::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptSegmentHasBeenSet)
  {
   payload.WithObject("TranscriptSegment", m_transcriptSegment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
