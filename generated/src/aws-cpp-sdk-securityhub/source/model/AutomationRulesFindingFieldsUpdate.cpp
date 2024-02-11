/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutomationRulesFindingFieldsUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AutomationRulesFindingFieldsUpdate::AutomationRulesFindingFieldsUpdate() : 
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

AutomationRulesFindingFieldsUpdate::AutomationRulesFindingFieldsUpdate(JsonView jsonValue) : 
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
  *this = jsonValue;
}

AutomationRulesFindingFieldsUpdate& AutomationRulesFindingFieldsUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Note"))
  {
    m_note = jsonValue.GetObject("Note");

    m_noteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = jsonValue.GetObject("Severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerificationState"))
  {
    m_verificationState = VerificationStateMapper::GetVerificationStateForName(jsonValue.GetString("VerificationState"));

    m_verificationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetInteger("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Criticality"))
  {
    m_criticality = jsonValue.GetInteger("Criticality");

    m_criticalityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("Types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(typesJsonList[typesIndex].AsString());
    }
    m_typesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserDefinedFields"))
  {
    Aws::Map<Aws::String, JsonView> userDefinedFieldsJsonMap = jsonValue.GetObject("UserDefinedFields").GetAllObjects();
    for(auto& userDefinedFieldsItem : userDefinedFieldsJsonMap)
    {
      m_userDefinedFields[userDefinedFieldsItem.first] = userDefinedFieldsItem.second.AsString();
    }
    m_userDefinedFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Workflow"))
  {
    m_workflow = jsonValue.GetObject("Workflow");

    m_workflowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedFindings"))
  {
    Aws::Utils::Array<JsonView> relatedFindingsJsonList = jsonValue.GetArray("RelatedFindings");
    for(unsigned relatedFindingsIndex = 0; relatedFindingsIndex < relatedFindingsJsonList.GetLength(); ++relatedFindingsIndex)
    {
      m_relatedFindings.push_back(relatedFindingsJsonList[relatedFindingsIndex].AsObject());
    }
    m_relatedFindingsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomationRulesFindingFieldsUpdate::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
