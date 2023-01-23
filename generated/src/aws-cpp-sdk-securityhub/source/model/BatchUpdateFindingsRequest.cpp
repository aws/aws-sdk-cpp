/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchUpdateFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateFindingsRequest::BatchUpdateFindingsRequest() : 
    m_findingIdentifiersHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_verificationState(VerificationState::NOT_SET),
    m_verificationStateHasBeenSet(false),
    m_confidence(0),
    m_confidenceHasBeenSet(false),
    m_criticality(0),
    m_criticalityHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_userDefinedFieldsHasBeenSet(false),
    m_workflowHasBeenSet(false),
    m_relatedFindingsHasBeenSet(false)
{
}

Aws::String BatchUpdateFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingIdentifiersJsonList(m_findingIdentifiers.size());
   for(unsigned findingIdentifiersIndex = 0; findingIdentifiersIndex < findingIdentifiersJsonList.GetLength(); ++findingIdentifiersIndex)
   {
     findingIdentifiersJsonList[findingIdentifiersIndex].AsObject(m_findingIdentifiers[findingIdentifiersIndex].Jsonize());
   }
   payload.WithArray("FindingIdentifiers", std::move(findingIdentifiersJsonList));

  }

  if(m_noteHasBeenSet)
  {
   payload.WithObject("Note", m_note.Jsonize());

  }

  if(m_severityHasBeenSet)
  {
   payload.WithObject("Severity", m_severity.Jsonize());

  }

  if(m_verificationStateHasBeenSet)
  {
   payload.WithString("VerificationState", VerificationStateMapper::GetNameForVerificationState(m_verificationState));
  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithInteger("Confidence", m_confidence);

  }

  if(m_criticalityHasBeenSet)
  {
   payload.WithInteger("Criticality", m_criticality);

  }

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(m_types[typesIndex]);
   }
   payload.WithArray("Types", std::move(typesJsonList));

  }

  if(m_userDefinedFieldsHasBeenSet)
  {
   JsonValue userDefinedFieldsJsonMap;
   for(auto& userDefinedFieldsItem : m_userDefinedFields)
   {
     userDefinedFieldsJsonMap.WithString(userDefinedFieldsItem.first, userDefinedFieldsItem.second);
   }
   payload.WithObject("UserDefinedFields", std::move(userDefinedFieldsJsonMap));

  }

  if(m_workflowHasBeenSet)
  {
   payload.WithObject("Workflow", m_workflow.Jsonize());

  }

  if(m_relatedFindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedFindingsJsonList(m_relatedFindings.size());
   for(unsigned relatedFindingsIndex = 0; relatedFindingsIndex < relatedFindingsJsonList.GetLength(); ++relatedFindingsIndex)
   {
     relatedFindingsJsonList[relatedFindingsIndex].AsObject(m_relatedFindings[relatedFindingsIndex].Jsonize());
   }
   payload.WithArray("RelatedFindings", std::move(relatedFindingsJsonList));

  }

  return payload.View().WriteReadable();
}




