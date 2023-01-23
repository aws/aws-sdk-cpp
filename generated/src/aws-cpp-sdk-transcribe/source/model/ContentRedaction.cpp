/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ContentRedaction.h>
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

ContentRedaction::ContentRedaction() : 
    m_redactionType(RedactionType::NOT_SET),
    m_redactionTypeHasBeenSet(false),
    m_redactionOutput(RedactionOutput::NOT_SET),
    m_redactionOutputHasBeenSet(false),
    m_piiEntityTypesHasBeenSet(false)
{
}

ContentRedaction::ContentRedaction(JsonView jsonValue) : 
    m_redactionType(RedactionType::NOT_SET),
    m_redactionTypeHasBeenSet(false),
    m_redactionOutput(RedactionOutput::NOT_SET),
    m_redactionOutputHasBeenSet(false),
    m_piiEntityTypesHasBeenSet(false)
{
  *this = jsonValue;
}

ContentRedaction& ContentRedaction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RedactionType"))
  {
    m_redactionType = RedactionTypeMapper::GetRedactionTypeForName(jsonValue.GetString("RedactionType"));

    m_redactionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedactionOutput"))
  {
    m_redactionOutput = RedactionOutputMapper::GetRedactionOutputForName(jsonValue.GetString("RedactionOutput"));

    m_redactionOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PiiEntityTypes"))
  {
    Aws::Utils::Array<JsonView> piiEntityTypesJsonList = jsonValue.GetArray("PiiEntityTypes");
    for(unsigned piiEntityTypesIndex = 0; piiEntityTypesIndex < piiEntityTypesJsonList.GetLength(); ++piiEntityTypesIndex)
    {
      m_piiEntityTypes.push_back(PiiEntityTypeMapper::GetPiiEntityTypeForName(piiEntityTypesJsonList[piiEntityTypesIndex].AsString()));
    }
    m_piiEntityTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentRedaction::Jsonize() const
{
  JsonValue payload;

  if(m_redactionTypeHasBeenSet)
  {
   payload.WithString("RedactionType", RedactionTypeMapper::GetNameForRedactionType(m_redactionType));
  }

  if(m_redactionOutputHasBeenSet)
  {
   payload.WithString("RedactionOutput", RedactionOutputMapper::GetNameForRedactionOutput(m_redactionOutput));
  }

  if(m_piiEntityTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> piiEntityTypesJsonList(m_piiEntityTypes.size());
   for(unsigned piiEntityTypesIndex = 0; piiEntityTypesIndex < piiEntityTypesJsonList.GetLength(); ++piiEntityTypesIndex)
   {
     piiEntityTypesJsonList[piiEntityTypesIndex].AsString(PiiEntityTypeMapper::GetNameForPiiEntityType(m_piiEntityTypes[piiEntityTypesIndex]));
   }
   payload.WithArray("PiiEntityTypes", std::move(piiEntityTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
