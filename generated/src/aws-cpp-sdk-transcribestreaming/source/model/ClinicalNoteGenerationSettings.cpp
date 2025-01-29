/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/ClinicalNoteGenerationSettings.h>
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

ClinicalNoteGenerationSettings::ClinicalNoteGenerationSettings() : 
    m_outputBucketNameHasBeenSet(false)
{
}

ClinicalNoteGenerationSettings::ClinicalNoteGenerationSettings(JsonView jsonValue)
  : ClinicalNoteGenerationSettings()
{
  *this = jsonValue;
}

ClinicalNoteGenerationSettings& ClinicalNoteGenerationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputBucketName"))
  {
    m_outputBucketName = jsonValue.GetString("OutputBucketName");

    m_outputBucketNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ClinicalNoteGenerationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_outputBucketNameHasBeenSet)
  {
   payload.WithString("OutputBucketName", m_outputBucketName);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
