/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalTranscript.h>
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

MedicalTranscript::MedicalTranscript() : 
    m_resultsHasBeenSet(false)
{
}

MedicalTranscript::MedicalTranscript(JsonView jsonValue) : 
    m_resultsHasBeenSet(false)
{
  *this = jsonValue;
}

MedicalTranscript& MedicalTranscript::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Results"))
  {
    Aws::Utils::Array<JsonView> resultsJsonList = jsonValue.GetArray("Results");
    for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
    {
      m_results.push_back(resultsJsonList[resultsIndex].AsObject());
    }
    m_resultsHasBeenSet = true;
  }

  return *this;
}

JsonValue MedicalTranscript::Jsonize() const
{
  JsonValue payload;

  if(m_resultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resultsJsonList(m_results.size());
   for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
   {
     resultsJsonList[resultsIndex].AsObject(m_results[resultsIndex].Jsonize());
   }
   payload.WithArray("Results", std::move(resultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
