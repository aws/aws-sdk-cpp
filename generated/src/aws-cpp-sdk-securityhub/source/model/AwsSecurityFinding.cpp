/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSecurityFinding.h>
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

AwsSecurityFinding::AwsSecurityFinding() : 
    m_schemaVersionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_productArnHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_generatorIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_confidence(0),
    m_confidenceHasBeenSet(false),
    m_criticality(0),
    m_criticalityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_productFieldsHasBeenSet(false),
    m_userDefinedFieldsHasBeenSet(false),
    m_malwareHasBeenSet(false),
    m_networkHasBeenSet(false),
    m_networkPathHasBeenSet(false),
    m_processHasBeenSet(false),
    m_threatsHasBeenSet(false),
    m_threatIntelIndicatorsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_complianceHasBeenSet(false),
    m_verificationState(VerificationState::NOT_SET),
    m_verificationStateHasBeenSet(false),
    m_workflowState(WorkflowState::NOT_SET),
    m_workflowStateHasBeenSet(false),
    m_workflowHasBeenSet(false),
    m_recordState(RecordState::NOT_SET),
    m_recordStateHasBeenSet(false),
    m_relatedFindingsHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_vulnerabilitiesHasBeenSet(false),
    m_patchSummaryHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_findingProviderFieldsHasBeenSet(false),
    m_sample(false),
    m_sampleHasBeenSet(false)
{
}

AwsSecurityFinding::AwsSecurityFinding(JsonView jsonValue) : 
    m_schemaVersionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_productArnHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_generatorIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_confidence(0),
    m_confidenceHasBeenSet(false),
    m_criticality(0),
    m_criticalityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_productFieldsHasBeenSet(false),
    m_userDefinedFieldsHasBeenSet(false),
    m_malwareHasBeenSet(false),
    m_networkHasBeenSet(false),
    m_networkPathHasBeenSet(false),
    m_processHasBeenSet(false),
    m_threatsHasBeenSet(false),
    m_threatIntelIndicatorsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_complianceHasBeenSet(false),
    m_verificationState(VerificationState::NOT_SET),
    m_verificationStateHasBeenSet(false),
    m_workflowState(WorkflowState::NOT_SET),
    m_workflowStateHasBeenSet(false),
    m_workflowHasBeenSet(false),
    m_recordState(RecordState::NOT_SET),
    m_recordStateHasBeenSet(false),
    m_relatedFindingsHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_vulnerabilitiesHasBeenSet(false),
    m_patchSummaryHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_findingProviderFieldsHasBeenSet(false),
    m_sample(false),
    m_sampleHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSecurityFinding& AwsSecurityFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("SchemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductArn"))
  {
    m_productArn = jsonValue.GetString("ProductArn");

    m_productArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductName"))
  {
    m_productName = jsonValue.GetString("ProductName");

    m_productNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompanyName"))
  {
    m_companyName = jsonValue.GetString("CompanyName");

    m_companyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneratorId"))
  {
    m_generatorId = jsonValue.GetString("GeneratorId");

    m_generatorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");

    m_awsAccountIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("FirstObservedAt"))
  {
    m_firstObservedAt = jsonValue.GetString("FirstObservedAt");

    m_firstObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastObservedAt"))
  {
    m_lastObservedAt = jsonValue.GetString("LastObservedAt");

    m_lastObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = jsonValue.GetObject("Severity");

    m_severityHasBeenSet = true;
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

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Remediation"))
  {
    m_remediation = jsonValue.GetObject("Remediation");

    m_remediationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceUrl"))
  {
    m_sourceUrl = jsonValue.GetString("SourceUrl");

    m_sourceUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductFields"))
  {
    Aws::Map<Aws::String, JsonView> productFieldsJsonMap = jsonValue.GetObject("ProductFields").GetAllObjects();
    for(auto& productFieldsItem : productFieldsJsonMap)
    {
      m_productFields[productFieldsItem.first] = productFieldsItem.second.AsString();
    }
    m_productFieldsHasBeenSet = true;
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

  if(jsonValue.ValueExists("Malware"))
  {
    Aws::Utils::Array<JsonView> malwareJsonList = jsonValue.GetArray("Malware");
    for(unsigned malwareIndex = 0; malwareIndex < malwareJsonList.GetLength(); ++malwareIndex)
    {
      m_malware.push_back(malwareJsonList[malwareIndex].AsObject());
    }
    m_malwareHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Network"))
  {
    m_network = jsonValue.GetObject("Network");

    m_networkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkPath"))
  {
    Aws::Utils::Array<JsonView> networkPathJsonList = jsonValue.GetArray("NetworkPath");
    for(unsigned networkPathIndex = 0; networkPathIndex < networkPathJsonList.GetLength(); ++networkPathIndex)
    {
      m_networkPath.push_back(networkPathJsonList[networkPathIndex].AsObject());
    }
    m_networkPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Process"))
  {
    m_process = jsonValue.GetObject("Process");

    m_processHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Threats"))
  {
    Aws::Utils::Array<JsonView> threatsJsonList = jsonValue.GetArray("Threats");
    for(unsigned threatsIndex = 0; threatsIndex < threatsJsonList.GetLength(); ++threatsIndex)
    {
      m_threats.push_back(threatsJsonList[threatsIndex].AsObject());
    }
    m_threatsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreatIntelIndicators"))
  {
    Aws::Utils::Array<JsonView> threatIntelIndicatorsJsonList = jsonValue.GetArray("ThreatIntelIndicators");
    for(unsigned threatIntelIndicatorsIndex = 0; threatIntelIndicatorsIndex < threatIntelIndicatorsJsonList.GetLength(); ++threatIntelIndicatorsIndex)
    {
      m_threatIntelIndicators.push_back(threatIntelIndicatorsJsonList[threatIntelIndicatorsIndex].AsObject());
    }
    m_threatIntelIndicatorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Compliance"))
  {
    m_compliance = jsonValue.GetObject("Compliance");

    m_complianceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerificationState"))
  {
    m_verificationState = VerificationStateMapper::GetVerificationStateForName(jsonValue.GetString("VerificationState"));

    m_verificationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowState"))
  {
    m_workflowState = WorkflowStateMapper::GetWorkflowStateForName(jsonValue.GetString("WorkflowState"));

    m_workflowStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Workflow"))
  {
    m_workflow = jsonValue.GetObject("Workflow");

    m_workflowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordState"))
  {
    m_recordState = RecordStateMapper::GetRecordStateForName(jsonValue.GetString("RecordState"));

    m_recordStateHasBeenSet = true;
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

  if(jsonValue.ValueExists("Note"))
  {
    m_note = jsonValue.GetObject("Note");

    m_noteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Vulnerabilities"))
  {
    Aws::Utils::Array<JsonView> vulnerabilitiesJsonList = jsonValue.GetArray("Vulnerabilities");
    for(unsigned vulnerabilitiesIndex = 0; vulnerabilitiesIndex < vulnerabilitiesJsonList.GetLength(); ++vulnerabilitiesIndex)
    {
      m_vulnerabilities.push_back(vulnerabilitiesJsonList[vulnerabilitiesIndex].AsObject());
    }
    m_vulnerabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatchSummary"))
  {
    m_patchSummary = jsonValue.GetObject("PatchSummary");

    m_patchSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetObject("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingProviderFields"))
  {
    m_findingProviderFields = jsonValue.GetObject("FindingProviderFields");

    m_findingProviderFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sample"))
  {
    m_sample = jsonValue.GetBool("Sample");

    m_sampleHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSecurityFinding::Jsonize() const
{
  JsonValue payload;

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("SchemaVersion", m_schemaVersion);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_productArnHasBeenSet)
  {
   payload.WithString("ProductArn", m_productArn);

  }

  if(m_productNameHasBeenSet)
  {
   payload.WithString("ProductName", m_productName);

  }

  if(m_companyNameHasBeenSet)
  {
   payload.WithString("CompanyName", m_companyName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_generatorIdHasBeenSet)
  {
   payload.WithString("GeneratorId", m_generatorId);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("AwsAccountId", m_awsAccountId);

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

  if(m_firstObservedAtHasBeenSet)
  {
   payload.WithString("FirstObservedAt", m_firstObservedAt);

  }

  if(m_lastObservedAtHasBeenSet)
  {
   payload.WithString("LastObservedAt", m_lastObservedAt);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithObject("Severity", m_severity.Jsonize());

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithInteger("Confidence", m_confidence);

  }

  if(m_criticalityHasBeenSet)
  {
   payload.WithInteger("Criticality", m_criticality);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_remediationHasBeenSet)
  {
   payload.WithObject("Remediation", m_remediation.Jsonize());

  }

  if(m_sourceUrlHasBeenSet)
  {
   payload.WithString("SourceUrl", m_sourceUrl);

  }

  if(m_productFieldsHasBeenSet)
  {
   JsonValue productFieldsJsonMap;
   for(auto& productFieldsItem : m_productFields)
   {
     productFieldsJsonMap.WithString(productFieldsItem.first, productFieldsItem.second);
   }
   payload.WithObject("ProductFields", std::move(productFieldsJsonMap));

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

  if(m_malwareHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> malwareJsonList(m_malware.size());
   for(unsigned malwareIndex = 0; malwareIndex < malwareJsonList.GetLength(); ++malwareIndex)
   {
     malwareJsonList[malwareIndex].AsObject(m_malware[malwareIndex].Jsonize());
   }
   payload.WithArray("Malware", std::move(malwareJsonList));

  }

  if(m_networkHasBeenSet)
  {
   payload.WithObject("Network", m_network.Jsonize());

  }

  if(m_networkPathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkPathJsonList(m_networkPath.size());
   for(unsigned networkPathIndex = 0; networkPathIndex < networkPathJsonList.GetLength(); ++networkPathIndex)
   {
     networkPathJsonList[networkPathIndex].AsObject(m_networkPath[networkPathIndex].Jsonize());
   }
   payload.WithArray("NetworkPath", std::move(networkPathJsonList));

  }

  if(m_processHasBeenSet)
  {
   payload.WithObject("Process", m_process.Jsonize());

  }

  if(m_threatsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatsJsonList(m_threats.size());
   for(unsigned threatsIndex = 0; threatsIndex < threatsJsonList.GetLength(); ++threatsIndex)
   {
     threatsJsonList[threatsIndex].AsObject(m_threats[threatsIndex].Jsonize());
   }
   payload.WithArray("Threats", std::move(threatsJsonList));

  }

  if(m_threatIntelIndicatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatIntelIndicatorsJsonList(m_threatIntelIndicators.size());
   for(unsigned threatIntelIndicatorsIndex = 0; threatIntelIndicatorsIndex < threatIntelIndicatorsJsonList.GetLength(); ++threatIntelIndicatorsIndex)
   {
     threatIntelIndicatorsJsonList[threatIntelIndicatorsIndex].AsObject(m_threatIntelIndicators[threatIntelIndicatorsIndex].Jsonize());
   }
   payload.WithArray("ThreatIntelIndicators", std::move(threatIntelIndicatorsJsonList));

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  if(m_complianceHasBeenSet)
  {
   payload.WithObject("Compliance", m_compliance.Jsonize());

  }

  if(m_verificationStateHasBeenSet)
  {
   payload.WithString("VerificationState", VerificationStateMapper::GetNameForVerificationState(m_verificationState));
  }

  if(m_workflowStateHasBeenSet)
  {
   payload.WithString("WorkflowState", WorkflowStateMapper::GetNameForWorkflowState(m_workflowState));
  }

  if(m_workflowHasBeenSet)
  {
   payload.WithObject("Workflow", m_workflow.Jsonize());

  }

  if(m_recordStateHasBeenSet)
  {
   payload.WithString("RecordState", RecordStateMapper::GetNameForRecordState(m_recordState));
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

  if(m_noteHasBeenSet)
  {
   payload.WithObject("Note", m_note.Jsonize());

  }

  if(m_vulnerabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vulnerabilitiesJsonList(m_vulnerabilities.size());
   for(unsigned vulnerabilitiesIndex = 0; vulnerabilitiesIndex < vulnerabilitiesJsonList.GetLength(); ++vulnerabilitiesIndex)
   {
     vulnerabilitiesJsonList[vulnerabilitiesIndex].AsObject(m_vulnerabilities[vulnerabilitiesIndex].Jsonize());
   }
   payload.WithArray("Vulnerabilities", std::move(vulnerabilitiesJsonList));

  }

  if(m_patchSummaryHasBeenSet)
  {
   payload.WithObject("PatchSummary", m_patchSummary.Jsonize());

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  if(m_findingProviderFieldsHasBeenSet)
  {
   payload.WithObject("FindingProviderFields", m_findingProviderFields.Jsonize());

  }

  if(m_sampleHasBeenSet)
  {
   payload.WithBool("Sample", m_sample);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
