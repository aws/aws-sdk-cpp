/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MedicalTranscript.h>
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

MedicalTranscript::MedicalTranscript() : 
    m_transcriptFileUriHasBeenSet(false)
{
}

MedicalTranscript::MedicalTranscript(JsonView jsonValue) : 
    m_transcriptFileUriHasBeenSet(false)
{
  *this = jsonValue;
}

MedicalTranscript& MedicalTranscript::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranscriptFileUri"))
  {
    m_transcriptFileUri = jsonValue.GetString("TranscriptFileUri");

    m_transcriptFileUriHasBeenSet = true;
  }

  return *this;
}

JsonValue MedicalTranscript::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptFileUriHasBeenSet)
  {
   payload.WithString("TranscriptFileUri", m_transcriptFileUri);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
