/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MedicalScribeOutput.h>
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

MedicalScribeOutput::MedicalScribeOutput() : 
    m_transcriptFileUriHasBeenSet(false),
    m_clinicalDocumentUriHasBeenSet(false)
{
}

MedicalScribeOutput::MedicalScribeOutput(JsonView jsonValue) : 
    m_transcriptFileUriHasBeenSet(false),
    m_clinicalDocumentUriHasBeenSet(false)
{
  *this = jsonValue;
}

MedicalScribeOutput& MedicalScribeOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranscriptFileUri"))
  {
    m_transcriptFileUri = jsonValue.GetString("TranscriptFileUri");

    m_transcriptFileUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClinicalDocumentUri"))
  {
    m_clinicalDocumentUri = jsonValue.GetString("ClinicalDocumentUri");

    m_clinicalDocumentUriHasBeenSet = true;
  }

  return *this;
}

JsonValue MedicalScribeOutput::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptFileUriHasBeenSet)
  {
   payload.WithString("TranscriptFileUri", m_transcriptFileUri);

  }

  if(m_clinicalDocumentUriHasBeenSet)
  {
   payload.WithString("ClinicalDocumentUri", m_clinicalDocumentUri);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
