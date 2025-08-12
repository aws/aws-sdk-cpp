/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribePatientContext.h>
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

MedicalScribePatientContext::MedicalScribePatientContext(JsonView jsonValue)
{
  *this = jsonValue;
}

MedicalScribePatientContext& MedicalScribePatientContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Pronouns"))
  {
    m_pronouns = PronounsMapper::GetPronounsForName(jsonValue.GetString("Pronouns"));
    m_pronounsHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribePatientContext::Jsonize() const
{
  JsonValue payload;

  if(m_pronounsHasBeenSet)
  {
   payload.WithString("Pronouns", PronounsMapper::GetNameForPronouns(m_pronouns));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
