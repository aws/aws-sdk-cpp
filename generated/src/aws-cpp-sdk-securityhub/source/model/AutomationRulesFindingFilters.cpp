/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutomationRulesFindingFilters.h>
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

AutomationRulesFindingFilters::AutomationRulesFindingFilters() : 
    m_productArnHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_generatorIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_criticalityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_severityLabelHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourcePartitionHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_resourceDetailsOtherHasBeenSet(false),
    m_complianceStatusHasBeenSet(false),
    m_complianceSecurityControlIdHasBeenSet(false),
    m_complianceAssociatedStandardsIdHasBeenSet(false),
    m_verificationStateHasBeenSet(false),
    m_workflowStatusHasBeenSet(false),
    m_recordStateHasBeenSet(false),
    m_relatedFindingsProductArnHasBeenSet(false),
    m_relatedFindingsIdHasBeenSet(false),
    m_noteTextHasBeenSet(false),
    m_noteUpdatedAtHasBeenSet(false),
    m_noteUpdatedByHasBeenSet(false),
    m_userDefinedFieldsHasBeenSet(false),
    m_resourceApplicationArnHasBeenSet(false),
    m_resourceApplicationNameHasBeenSet(false),
    m_awsAccountNameHasBeenSet(false)
{
}

AutomationRulesFindingFilters::AutomationRulesFindingFilters(JsonView jsonValue) : 
    m_productArnHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_generatorIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_firstObservedAtHasBeenSet(false),
    m_lastObservedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_criticalityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_severityLabelHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourcePartitionHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_resourceDetailsOtherHasBeenSet(false),
    m_complianceStatusHasBeenSet(false),
    m_complianceSecurityControlIdHasBeenSet(false),
    m_complianceAssociatedStandardsIdHasBeenSet(false),
    m_verificationStateHasBeenSet(false),
    m_workflowStatusHasBeenSet(false),
    m_recordStateHasBeenSet(false),
    m_relatedFindingsProductArnHasBeenSet(false),
    m_relatedFindingsIdHasBeenSet(false),
    m_noteTextHasBeenSet(false),
    m_noteUpdatedAtHasBeenSet(false),
    m_noteUpdatedByHasBeenSet(false),
    m_userDefinedFieldsHasBeenSet(false),
    m_resourceApplicationArnHasBeenSet(false),
    m_resourceApplicationNameHasBeenSet(false),
    m_awsAccountNameHasBeenSet(false)
{
  *this = jsonValue;
}

AutomationRulesFindingFilters& AutomationRulesFindingFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductArn"))
  {
    Aws::Utils::Array<JsonView> productArnJsonList = jsonValue.GetArray("ProductArn");
    for(unsigned productArnIndex = 0; productArnIndex < productArnJsonList.GetLength(); ++productArnIndex)
    {
      m_productArn.push_back(productArnJsonList[productArnIndex].AsObject());
    }
    m_productArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsAccountId"))
  {
    Aws::Utils::Array<JsonView> awsAccountIdJsonList = jsonValue.GetArray("AwsAccountId");
    for(unsigned awsAccountIdIndex = 0; awsAccountIdIndex < awsAccountIdJsonList.GetLength(); ++awsAccountIdIndex)
    {
      m_awsAccountId.push_back(awsAccountIdJsonList[awsAccountIdIndex].AsObject());
    }
    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    Aws::Utils::Array<JsonView> idJsonList = jsonValue.GetArray("Id");
    for(unsigned idIndex = 0; idIndex < idJsonList.GetLength(); ++idIndex)
    {
      m_id.push_back(idJsonList[idIndex].AsObject());
    }
    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneratorId"))
  {
    Aws::Utils::Array<JsonView> generatorIdJsonList = jsonValue.GetArray("GeneratorId");
    for(unsigned generatorIdIndex = 0; generatorIdIndex < generatorIdJsonList.GetLength(); ++generatorIdIndex)
    {
      m_generatorId.push_back(generatorIdJsonList[generatorIdIndex].AsObject());
    }
    m_generatorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    Aws::Utils::Array<JsonView> typeJsonList = jsonValue.GetArray("Type");
    for(unsigned typeIndex = 0; typeIndex < typeJsonList.GetLength(); ++typeIndex)
    {
      m_type.push_back(typeJsonList[typeIndex].AsObject());
    }
    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirstObservedAt"))
  {
    Aws::Utils::Array<JsonView> firstObservedAtJsonList = jsonValue.GetArray("FirstObservedAt");
    for(unsigned firstObservedAtIndex = 0; firstObservedAtIndex < firstObservedAtJsonList.GetLength(); ++firstObservedAtIndex)
    {
      m_firstObservedAt.push_back(firstObservedAtJsonList[firstObservedAtIndex].AsObject());
    }
    m_firstObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastObservedAt"))
  {
    Aws::Utils::Array<JsonView> lastObservedAtJsonList = jsonValue.GetArray("LastObservedAt");
    for(unsigned lastObservedAtIndex = 0; lastObservedAtIndex < lastObservedAtJsonList.GetLength(); ++lastObservedAtIndex)
    {
      m_lastObservedAt.push_back(lastObservedAtJsonList[lastObservedAtIndex].AsObject());
    }
    m_lastObservedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    Aws::Utils::Array<JsonView> createdAtJsonList = jsonValue.GetArray("CreatedAt");
    for(unsigned createdAtIndex = 0; createdAtIndex < createdAtJsonList.GetLength(); ++createdAtIndex)
    {
      m_createdAt.push_back(createdAtJsonList[createdAtIndex].AsObject());
    }
    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    Aws::Utils::Array<JsonView> updatedAtJsonList = jsonValue.GetArray("UpdatedAt");
    for(unsigned updatedAtIndex = 0; updatedAtIndex < updatedAtJsonList.GetLength(); ++updatedAtIndex)
    {
      m_updatedAt.push_back(updatedAtJsonList[updatedAtIndex].AsObject());
    }
    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    Aws::Utils::Array<JsonView> confidenceJsonList = jsonValue.GetArray("Confidence");
    for(unsigned confidenceIndex = 0; confidenceIndex < confidenceJsonList.GetLength(); ++confidenceIndex)
    {
      m_confidence.push_back(confidenceJsonList[confidenceIndex].AsObject());
    }
    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Criticality"))
  {
    Aws::Utils::Array<JsonView> criticalityJsonList = jsonValue.GetArray("Criticality");
    for(unsigned criticalityIndex = 0; criticalityIndex < criticalityJsonList.GetLength(); ++criticalityIndex)
    {
      m_criticality.push_back(criticalityJsonList[criticalityIndex].AsObject());
    }
    m_criticalityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    Aws::Utils::Array<JsonView> titleJsonList = jsonValue.GetArray("Title");
    for(unsigned titleIndex = 0; titleIndex < titleJsonList.GetLength(); ++titleIndex)
    {
      m_title.push_back(titleJsonList[titleIndex].AsObject());
    }
    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    Aws::Utils::Array<JsonView> descriptionJsonList = jsonValue.GetArray("Description");
    for(unsigned descriptionIndex = 0; descriptionIndex < descriptionJsonList.GetLength(); ++descriptionIndex)
    {
      m_description.push_back(descriptionJsonList[descriptionIndex].AsObject());
    }
    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceUrl"))
  {
    Aws::Utils::Array<JsonView> sourceUrlJsonList = jsonValue.GetArray("SourceUrl");
    for(unsigned sourceUrlIndex = 0; sourceUrlIndex < sourceUrlJsonList.GetLength(); ++sourceUrlIndex)
    {
      m_sourceUrl.push_back(sourceUrlJsonList[sourceUrlIndex].AsObject());
    }
    m_sourceUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductName"))
  {
    Aws::Utils::Array<JsonView> productNameJsonList = jsonValue.GetArray("ProductName");
    for(unsigned productNameIndex = 0; productNameIndex < productNameJsonList.GetLength(); ++productNameIndex)
    {
      m_productName.push_back(productNameJsonList[productNameIndex].AsObject());
    }
    m_productNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompanyName"))
  {
    Aws::Utils::Array<JsonView> companyNameJsonList = jsonValue.GetArray("CompanyName");
    for(unsigned companyNameIndex = 0; companyNameIndex < companyNameJsonList.GetLength(); ++companyNameIndex)
    {
      m_companyName.push_back(companyNameJsonList[companyNameIndex].AsObject());
    }
    m_companyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SeverityLabel"))
  {
    Aws::Utils::Array<JsonView> severityLabelJsonList = jsonValue.GetArray("SeverityLabel");
    for(unsigned severityLabelIndex = 0; severityLabelIndex < severityLabelJsonList.GetLength(); ++severityLabelIndex)
    {
      m_severityLabel.push_back(severityLabelJsonList[severityLabelIndex].AsObject());
    }
    m_severityLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    Aws::Utils::Array<JsonView> resourceTypeJsonList = jsonValue.GetArray("ResourceType");
    for(unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex)
    {
      m_resourceType.push_back(resourceTypeJsonList[resourceTypeIndex].AsObject());
    }
    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    Aws::Utils::Array<JsonView> resourceIdJsonList = jsonValue.GetArray("ResourceId");
    for(unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex)
    {
      m_resourceId.push_back(resourceIdJsonList[resourceIdIndex].AsObject());
    }
    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourcePartition"))
  {
    Aws::Utils::Array<JsonView> resourcePartitionJsonList = jsonValue.GetArray("ResourcePartition");
    for(unsigned resourcePartitionIndex = 0; resourcePartitionIndex < resourcePartitionJsonList.GetLength(); ++resourcePartitionIndex)
    {
      m_resourcePartition.push_back(resourcePartitionJsonList[resourcePartitionIndex].AsObject());
    }
    m_resourcePartitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceRegion"))
  {
    Aws::Utils::Array<JsonView> resourceRegionJsonList = jsonValue.GetArray("ResourceRegion");
    for(unsigned resourceRegionIndex = 0; resourceRegionIndex < resourceRegionJsonList.GetLength(); ++resourceRegionIndex)
    {
      m_resourceRegion.push_back(resourceRegionJsonList[resourceRegionIndex].AsObject());
    }
    m_resourceRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTags"))
  {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("ResourceTags");
    for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
    {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
    m_resourceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceDetailsOther"))
  {
    Aws::Utils::Array<JsonView> resourceDetailsOtherJsonList = jsonValue.GetArray("ResourceDetailsOther");
    for(unsigned resourceDetailsOtherIndex = 0; resourceDetailsOtherIndex < resourceDetailsOtherJsonList.GetLength(); ++resourceDetailsOtherIndex)
    {
      m_resourceDetailsOther.push_back(resourceDetailsOtherJsonList[resourceDetailsOtherIndex].AsObject());
    }
    m_resourceDetailsOtherHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceStatus"))
  {
    Aws::Utils::Array<JsonView> complianceStatusJsonList = jsonValue.GetArray("ComplianceStatus");
    for(unsigned complianceStatusIndex = 0; complianceStatusIndex < complianceStatusJsonList.GetLength(); ++complianceStatusIndex)
    {
      m_complianceStatus.push_back(complianceStatusJsonList[complianceStatusIndex].AsObject());
    }
    m_complianceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceSecurityControlId"))
  {
    Aws::Utils::Array<JsonView> complianceSecurityControlIdJsonList = jsonValue.GetArray("ComplianceSecurityControlId");
    for(unsigned complianceSecurityControlIdIndex = 0; complianceSecurityControlIdIndex < complianceSecurityControlIdJsonList.GetLength(); ++complianceSecurityControlIdIndex)
    {
      m_complianceSecurityControlId.push_back(complianceSecurityControlIdJsonList[complianceSecurityControlIdIndex].AsObject());
    }
    m_complianceSecurityControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceAssociatedStandardsId"))
  {
    Aws::Utils::Array<JsonView> complianceAssociatedStandardsIdJsonList = jsonValue.GetArray("ComplianceAssociatedStandardsId");
    for(unsigned complianceAssociatedStandardsIdIndex = 0; complianceAssociatedStandardsIdIndex < complianceAssociatedStandardsIdJsonList.GetLength(); ++complianceAssociatedStandardsIdIndex)
    {
      m_complianceAssociatedStandardsId.push_back(complianceAssociatedStandardsIdJsonList[complianceAssociatedStandardsIdIndex].AsObject());
    }
    m_complianceAssociatedStandardsIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerificationState"))
  {
    Aws::Utils::Array<JsonView> verificationStateJsonList = jsonValue.GetArray("VerificationState");
    for(unsigned verificationStateIndex = 0; verificationStateIndex < verificationStateJsonList.GetLength(); ++verificationStateIndex)
    {
      m_verificationState.push_back(verificationStateJsonList[verificationStateIndex].AsObject());
    }
    m_verificationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowStatus"))
  {
    Aws::Utils::Array<JsonView> workflowStatusJsonList = jsonValue.GetArray("WorkflowStatus");
    for(unsigned workflowStatusIndex = 0; workflowStatusIndex < workflowStatusJsonList.GetLength(); ++workflowStatusIndex)
    {
      m_workflowStatus.push_back(workflowStatusJsonList[workflowStatusIndex].AsObject());
    }
    m_workflowStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordState"))
  {
    Aws::Utils::Array<JsonView> recordStateJsonList = jsonValue.GetArray("RecordState");
    for(unsigned recordStateIndex = 0; recordStateIndex < recordStateJsonList.GetLength(); ++recordStateIndex)
    {
      m_recordState.push_back(recordStateJsonList[recordStateIndex].AsObject());
    }
    m_recordStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedFindingsProductArn"))
  {
    Aws::Utils::Array<JsonView> relatedFindingsProductArnJsonList = jsonValue.GetArray("RelatedFindingsProductArn");
    for(unsigned relatedFindingsProductArnIndex = 0; relatedFindingsProductArnIndex < relatedFindingsProductArnJsonList.GetLength(); ++relatedFindingsProductArnIndex)
    {
      m_relatedFindingsProductArn.push_back(relatedFindingsProductArnJsonList[relatedFindingsProductArnIndex].AsObject());
    }
    m_relatedFindingsProductArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedFindingsId"))
  {
    Aws::Utils::Array<JsonView> relatedFindingsIdJsonList = jsonValue.GetArray("RelatedFindingsId");
    for(unsigned relatedFindingsIdIndex = 0; relatedFindingsIdIndex < relatedFindingsIdJsonList.GetLength(); ++relatedFindingsIdIndex)
    {
      m_relatedFindingsId.push_back(relatedFindingsIdJsonList[relatedFindingsIdIndex].AsObject());
    }
    m_relatedFindingsIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoteText"))
  {
    Aws::Utils::Array<JsonView> noteTextJsonList = jsonValue.GetArray("NoteText");
    for(unsigned noteTextIndex = 0; noteTextIndex < noteTextJsonList.GetLength(); ++noteTextIndex)
    {
      m_noteText.push_back(noteTextJsonList[noteTextIndex].AsObject());
    }
    m_noteTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoteUpdatedAt"))
  {
    Aws::Utils::Array<JsonView> noteUpdatedAtJsonList = jsonValue.GetArray("NoteUpdatedAt");
    for(unsigned noteUpdatedAtIndex = 0; noteUpdatedAtIndex < noteUpdatedAtJsonList.GetLength(); ++noteUpdatedAtIndex)
    {
      m_noteUpdatedAt.push_back(noteUpdatedAtJsonList[noteUpdatedAtIndex].AsObject());
    }
    m_noteUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoteUpdatedBy"))
  {
    Aws::Utils::Array<JsonView> noteUpdatedByJsonList = jsonValue.GetArray("NoteUpdatedBy");
    for(unsigned noteUpdatedByIndex = 0; noteUpdatedByIndex < noteUpdatedByJsonList.GetLength(); ++noteUpdatedByIndex)
    {
      m_noteUpdatedBy.push_back(noteUpdatedByJsonList[noteUpdatedByIndex].AsObject());
    }
    m_noteUpdatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserDefinedFields"))
  {
    Aws::Utils::Array<JsonView> userDefinedFieldsJsonList = jsonValue.GetArray("UserDefinedFields");
    for(unsigned userDefinedFieldsIndex = 0; userDefinedFieldsIndex < userDefinedFieldsJsonList.GetLength(); ++userDefinedFieldsIndex)
    {
      m_userDefinedFields.push_back(userDefinedFieldsJsonList[userDefinedFieldsIndex].AsObject());
    }
    m_userDefinedFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceApplicationArn"))
  {
    Aws::Utils::Array<JsonView> resourceApplicationArnJsonList = jsonValue.GetArray("ResourceApplicationArn");
    for(unsigned resourceApplicationArnIndex = 0; resourceApplicationArnIndex < resourceApplicationArnJsonList.GetLength(); ++resourceApplicationArnIndex)
    {
      m_resourceApplicationArn.push_back(resourceApplicationArnJsonList[resourceApplicationArnIndex].AsObject());
    }
    m_resourceApplicationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceApplicationName"))
  {
    Aws::Utils::Array<JsonView> resourceApplicationNameJsonList = jsonValue.GetArray("ResourceApplicationName");
    for(unsigned resourceApplicationNameIndex = 0; resourceApplicationNameIndex < resourceApplicationNameJsonList.GetLength(); ++resourceApplicationNameIndex)
    {
      m_resourceApplicationName.push_back(resourceApplicationNameJsonList[resourceApplicationNameIndex].AsObject());
    }
    m_resourceApplicationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsAccountName"))
  {
    Aws::Utils::Array<JsonView> awsAccountNameJsonList = jsonValue.GetArray("AwsAccountName");
    for(unsigned awsAccountNameIndex = 0; awsAccountNameIndex < awsAccountNameJsonList.GetLength(); ++awsAccountNameIndex)
    {
      m_awsAccountName.push_back(awsAccountNameJsonList[awsAccountNameIndex].AsObject());
    }
    m_awsAccountNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomationRulesFindingFilters::Jsonize() const
{
  JsonValue payload;

  if(m_productArnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productArnJsonList(m_productArn.size());
   for(unsigned productArnIndex = 0; productArnIndex < productArnJsonList.GetLength(); ++productArnIndex)
   {
     productArnJsonList[productArnIndex].AsObject(m_productArn[productArnIndex].Jsonize());
   }
   payload.WithArray("ProductArn", std::move(productArnJsonList));

  }

  if(m_awsAccountIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsAccountIdJsonList(m_awsAccountId.size());
   for(unsigned awsAccountIdIndex = 0; awsAccountIdIndex < awsAccountIdJsonList.GetLength(); ++awsAccountIdIndex)
   {
     awsAccountIdJsonList[awsAccountIdIndex].AsObject(m_awsAccountId[awsAccountIdIndex].Jsonize());
   }
   payload.WithArray("AwsAccountId", std::move(awsAccountIdJsonList));

  }

  if(m_idHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idJsonList(m_id.size());
   for(unsigned idIndex = 0; idIndex < idJsonList.GetLength(); ++idIndex)
   {
     idJsonList[idIndex].AsObject(m_id[idIndex].Jsonize());
   }
   payload.WithArray("Id", std::move(idJsonList));

  }

  if(m_generatorIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> generatorIdJsonList(m_generatorId.size());
   for(unsigned generatorIdIndex = 0; generatorIdIndex < generatorIdJsonList.GetLength(); ++generatorIdIndex)
   {
     generatorIdJsonList[generatorIdIndex].AsObject(m_generatorId[generatorIdIndex].Jsonize());
   }
   payload.WithArray("GeneratorId", std::move(generatorIdJsonList));

  }

  if(m_typeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typeJsonList(m_type.size());
   for(unsigned typeIndex = 0; typeIndex < typeJsonList.GetLength(); ++typeIndex)
   {
     typeJsonList[typeIndex].AsObject(m_type[typeIndex].Jsonize());
   }
   payload.WithArray("Type", std::move(typeJsonList));

  }

  if(m_firstObservedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> firstObservedAtJsonList(m_firstObservedAt.size());
   for(unsigned firstObservedAtIndex = 0; firstObservedAtIndex < firstObservedAtJsonList.GetLength(); ++firstObservedAtIndex)
   {
     firstObservedAtJsonList[firstObservedAtIndex].AsObject(m_firstObservedAt[firstObservedAtIndex].Jsonize());
   }
   payload.WithArray("FirstObservedAt", std::move(firstObservedAtJsonList));

  }

  if(m_lastObservedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastObservedAtJsonList(m_lastObservedAt.size());
   for(unsigned lastObservedAtIndex = 0; lastObservedAtIndex < lastObservedAtJsonList.GetLength(); ++lastObservedAtIndex)
   {
     lastObservedAtJsonList[lastObservedAtIndex].AsObject(m_lastObservedAt[lastObservedAtIndex].Jsonize());
   }
   payload.WithArray("LastObservedAt", std::move(lastObservedAtJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> createdAtJsonList(m_createdAt.size());
   for(unsigned createdAtIndex = 0; createdAtIndex < createdAtJsonList.GetLength(); ++createdAtIndex)
   {
     createdAtJsonList[createdAtIndex].AsObject(m_createdAt[createdAtIndex].Jsonize());
   }
   payload.WithArray("CreatedAt", std::move(createdAtJsonList));

  }

  if(m_updatedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updatedAtJsonList(m_updatedAt.size());
   for(unsigned updatedAtIndex = 0; updatedAtIndex < updatedAtJsonList.GetLength(); ++updatedAtIndex)
   {
     updatedAtJsonList[updatedAtIndex].AsObject(m_updatedAt[updatedAtIndex].Jsonize());
   }
   payload.WithArray("UpdatedAt", std::move(updatedAtJsonList));

  }

  if(m_confidenceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> confidenceJsonList(m_confidence.size());
   for(unsigned confidenceIndex = 0; confidenceIndex < confidenceJsonList.GetLength(); ++confidenceIndex)
   {
     confidenceJsonList[confidenceIndex].AsObject(m_confidence[confidenceIndex].Jsonize());
   }
   payload.WithArray("Confidence", std::move(confidenceJsonList));

  }

  if(m_criticalityHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> criticalityJsonList(m_criticality.size());
   for(unsigned criticalityIndex = 0; criticalityIndex < criticalityJsonList.GetLength(); ++criticalityIndex)
   {
     criticalityJsonList[criticalityIndex].AsObject(m_criticality[criticalityIndex].Jsonize());
   }
   payload.WithArray("Criticality", std::move(criticalityJsonList));

  }

  if(m_titleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> titleJsonList(m_title.size());
   for(unsigned titleIndex = 0; titleIndex < titleJsonList.GetLength(); ++titleIndex)
   {
     titleJsonList[titleIndex].AsObject(m_title[titleIndex].Jsonize());
   }
   payload.WithArray("Title", std::move(titleJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> descriptionJsonList(m_description.size());
   for(unsigned descriptionIndex = 0; descriptionIndex < descriptionJsonList.GetLength(); ++descriptionIndex)
   {
     descriptionJsonList[descriptionIndex].AsObject(m_description[descriptionIndex].Jsonize());
   }
   payload.WithArray("Description", std::move(descriptionJsonList));

  }

  if(m_sourceUrlHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceUrlJsonList(m_sourceUrl.size());
   for(unsigned sourceUrlIndex = 0; sourceUrlIndex < sourceUrlJsonList.GetLength(); ++sourceUrlIndex)
   {
     sourceUrlJsonList[sourceUrlIndex].AsObject(m_sourceUrl[sourceUrlIndex].Jsonize());
   }
   payload.WithArray("SourceUrl", std::move(sourceUrlJsonList));

  }

  if(m_productNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productNameJsonList(m_productName.size());
   for(unsigned productNameIndex = 0; productNameIndex < productNameJsonList.GetLength(); ++productNameIndex)
   {
     productNameJsonList[productNameIndex].AsObject(m_productName[productNameIndex].Jsonize());
   }
   payload.WithArray("ProductName", std::move(productNameJsonList));

  }

  if(m_companyNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> companyNameJsonList(m_companyName.size());
   for(unsigned companyNameIndex = 0; companyNameIndex < companyNameJsonList.GetLength(); ++companyNameIndex)
   {
     companyNameJsonList[companyNameIndex].AsObject(m_companyName[companyNameIndex].Jsonize());
   }
   payload.WithArray("CompanyName", std::move(companyNameJsonList));

  }

  if(m_severityLabelHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> severityLabelJsonList(m_severityLabel.size());
   for(unsigned severityLabelIndex = 0; severityLabelIndex < severityLabelJsonList.GetLength(); ++severityLabelIndex)
   {
     severityLabelJsonList[severityLabelIndex].AsObject(m_severityLabel[severityLabelIndex].Jsonize());
   }
   payload.WithArray("SeverityLabel", std::move(severityLabelJsonList));

  }

  if(m_resourceTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypeJsonList(m_resourceType.size());
   for(unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex)
   {
     resourceTypeJsonList[resourceTypeIndex].AsObject(m_resourceType[resourceTypeIndex].Jsonize());
   }
   payload.WithArray("ResourceType", std::move(resourceTypeJsonList));

  }

  if(m_resourceIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdJsonList(m_resourceId.size());
   for(unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex)
   {
     resourceIdJsonList[resourceIdIndex].AsObject(m_resourceId[resourceIdIndex].Jsonize());
   }
   payload.WithArray("ResourceId", std::move(resourceIdJsonList));

  }

  if(m_resourcePartitionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcePartitionJsonList(m_resourcePartition.size());
   for(unsigned resourcePartitionIndex = 0; resourcePartitionIndex < resourcePartitionJsonList.GetLength(); ++resourcePartitionIndex)
   {
     resourcePartitionJsonList[resourcePartitionIndex].AsObject(m_resourcePartition[resourcePartitionIndex].Jsonize());
   }
   payload.WithArray("ResourcePartition", std::move(resourcePartitionJsonList));

  }

  if(m_resourceRegionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceRegionJsonList(m_resourceRegion.size());
   for(unsigned resourceRegionIndex = 0; resourceRegionIndex < resourceRegionJsonList.GetLength(); ++resourceRegionIndex)
   {
     resourceRegionJsonList[resourceRegionIndex].AsObject(m_resourceRegion[resourceRegionIndex].Jsonize());
   }
   payload.WithArray("ResourceRegion", std::move(resourceRegionJsonList));

  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("ResourceTags", std::move(resourceTagsJsonList));

  }

  if(m_resourceDetailsOtherHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceDetailsOtherJsonList(m_resourceDetailsOther.size());
   for(unsigned resourceDetailsOtherIndex = 0; resourceDetailsOtherIndex < resourceDetailsOtherJsonList.GetLength(); ++resourceDetailsOtherIndex)
   {
     resourceDetailsOtherJsonList[resourceDetailsOtherIndex].AsObject(m_resourceDetailsOther[resourceDetailsOtherIndex].Jsonize());
   }
   payload.WithArray("ResourceDetailsOther", std::move(resourceDetailsOtherJsonList));

  }

  if(m_complianceStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> complianceStatusJsonList(m_complianceStatus.size());
   for(unsigned complianceStatusIndex = 0; complianceStatusIndex < complianceStatusJsonList.GetLength(); ++complianceStatusIndex)
   {
     complianceStatusJsonList[complianceStatusIndex].AsObject(m_complianceStatus[complianceStatusIndex].Jsonize());
   }
   payload.WithArray("ComplianceStatus", std::move(complianceStatusJsonList));

  }

  if(m_complianceSecurityControlIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> complianceSecurityControlIdJsonList(m_complianceSecurityControlId.size());
   for(unsigned complianceSecurityControlIdIndex = 0; complianceSecurityControlIdIndex < complianceSecurityControlIdJsonList.GetLength(); ++complianceSecurityControlIdIndex)
   {
     complianceSecurityControlIdJsonList[complianceSecurityControlIdIndex].AsObject(m_complianceSecurityControlId[complianceSecurityControlIdIndex].Jsonize());
   }
   payload.WithArray("ComplianceSecurityControlId", std::move(complianceSecurityControlIdJsonList));

  }

  if(m_complianceAssociatedStandardsIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> complianceAssociatedStandardsIdJsonList(m_complianceAssociatedStandardsId.size());
   for(unsigned complianceAssociatedStandardsIdIndex = 0; complianceAssociatedStandardsIdIndex < complianceAssociatedStandardsIdJsonList.GetLength(); ++complianceAssociatedStandardsIdIndex)
   {
     complianceAssociatedStandardsIdJsonList[complianceAssociatedStandardsIdIndex].AsObject(m_complianceAssociatedStandardsId[complianceAssociatedStandardsIdIndex].Jsonize());
   }
   payload.WithArray("ComplianceAssociatedStandardsId", std::move(complianceAssociatedStandardsIdJsonList));

  }

  if(m_verificationStateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> verificationStateJsonList(m_verificationState.size());
   for(unsigned verificationStateIndex = 0; verificationStateIndex < verificationStateJsonList.GetLength(); ++verificationStateIndex)
   {
     verificationStateJsonList[verificationStateIndex].AsObject(m_verificationState[verificationStateIndex].Jsonize());
   }
   payload.WithArray("VerificationState", std::move(verificationStateJsonList));

  }

  if(m_workflowStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workflowStatusJsonList(m_workflowStatus.size());
   for(unsigned workflowStatusIndex = 0; workflowStatusIndex < workflowStatusJsonList.GetLength(); ++workflowStatusIndex)
   {
     workflowStatusJsonList[workflowStatusIndex].AsObject(m_workflowStatus[workflowStatusIndex].Jsonize());
   }
   payload.WithArray("WorkflowStatus", std::move(workflowStatusJsonList));

  }

  if(m_recordStateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordStateJsonList(m_recordState.size());
   for(unsigned recordStateIndex = 0; recordStateIndex < recordStateJsonList.GetLength(); ++recordStateIndex)
   {
     recordStateJsonList[recordStateIndex].AsObject(m_recordState[recordStateIndex].Jsonize());
   }
   payload.WithArray("RecordState", std::move(recordStateJsonList));

  }

  if(m_relatedFindingsProductArnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedFindingsProductArnJsonList(m_relatedFindingsProductArn.size());
   for(unsigned relatedFindingsProductArnIndex = 0; relatedFindingsProductArnIndex < relatedFindingsProductArnJsonList.GetLength(); ++relatedFindingsProductArnIndex)
   {
     relatedFindingsProductArnJsonList[relatedFindingsProductArnIndex].AsObject(m_relatedFindingsProductArn[relatedFindingsProductArnIndex].Jsonize());
   }
   payload.WithArray("RelatedFindingsProductArn", std::move(relatedFindingsProductArnJsonList));

  }

  if(m_relatedFindingsIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedFindingsIdJsonList(m_relatedFindingsId.size());
   for(unsigned relatedFindingsIdIndex = 0; relatedFindingsIdIndex < relatedFindingsIdJsonList.GetLength(); ++relatedFindingsIdIndex)
   {
     relatedFindingsIdJsonList[relatedFindingsIdIndex].AsObject(m_relatedFindingsId[relatedFindingsIdIndex].Jsonize());
   }
   payload.WithArray("RelatedFindingsId", std::move(relatedFindingsIdJsonList));

  }

  if(m_noteTextHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noteTextJsonList(m_noteText.size());
   for(unsigned noteTextIndex = 0; noteTextIndex < noteTextJsonList.GetLength(); ++noteTextIndex)
   {
     noteTextJsonList[noteTextIndex].AsObject(m_noteText[noteTextIndex].Jsonize());
   }
   payload.WithArray("NoteText", std::move(noteTextJsonList));

  }

  if(m_noteUpdatedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noteUpdatedAtJsonList(m_noteUpdatedAt.size());
   for(unsigned noteUpdatedAtIndex = 0; noteUpdatedAtIndex < noteUpdatedAtJsonList.GetLength(); ++noteUpdatedAtIndex)
   {
     noteUpdatedAtJsonList[noteUpdatedAtIndex].AsObject(m_noteUpdatedAt[noteUpdatedAtIndex].Jsonize());
   }
   payload.WithArray("NoteUpdatedAt", std::move(noteUpdatedAtJsonList));

  }

  if(m_noteUpdatedByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noteUpdatedByJsonList(m_noteUpdatedBy.size());
   for(unsigned noteUpdatedByIndex = 0; noteUpdatedByIndex < noteUpdatedByJsonList.GetLength(); ++noteUpdatedByIndex)
   {
     noteUpdatedByJsonList[noteUpdatedByIndex].AsObject(m_noteUpdatedBy[noteUpdatedByIndex].Jsonize());
   }
   payload.WithArray("NoteUpdatedBy", std::move(noteUpdatedByJsonList));

  }

  if(m_userDefinedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userDefinedFieldsJsonList(m_userDefinedFields.size());
   for(unsigned userDefinedFieldsIndex = 0; userDefinedFieldsIndex < userDefinedFieldsJsonList.GetLength(); ++userDefinedFieldsIndex)
   {
     userDefinedFieldsJsonList[userDefinedFieldsIndex].AsObject(m_userDefinedFields[userDefinedFieldsIndex].Jsonize());
   }
   payload.WithArray("UserDefinedFields", std::move(userDefinedFieldsJsonList));

  }

  if(m_resourceApplicationArnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceApplicationArnJsonList(m_resourceApplicationArn.size());
   for(unsigned resourceApplicationArnIndex = 0; resourceApplicationArnIndex < resourceApplicationArnJsonList.GetLength(); ++resourceApplicationArnIndex)
   {
     resourceApplicationArnJsonList[resourceApplicationArnIndex].AsObject(m_resourceApplicationArn[resourceApplicationArnIndex].Jsonize());
   }
   payload.WithArray("ResourceApplicationArn", std::move(resourceApplicationArnJsonList));

  }

  if(m_resourceApplicationNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceApplicationNameJsonList(m_resourceApplicationName.size());
   for(unsigned resourceApplicationNameIndex = 0; resourceApplicationNameIndex < resourceApplicationNameJsonList.GetLength(); ++resourceApplicationNameIndex)
   {
     resourceApplicationNameJsonList[resourceApplicationNameIndex].AsObject(m_resourceApplicationName[resourceApplicationNameIndex].Jsonize());
   }
   payload.WithArray("ResourceApplicationName", std::move(resourceApplicationNameJsonList));

  }

  if(m_awsAccountNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsAccountNameJsonList(m_awsAccountName.size());
   for(unsigned awsAccountNameIndex = 0; awsAccountNameIndex < awsAccountNameJsonList.GetLength(); ++awsAccountNameIndex)
   {
     awsAccountNameJsonList[awsAccountNameIndex].AsObject(m_awsAccountName[awsAccountNameIndex].Jsonize());
   }
   payload.WithArray("AwsAccountName", std::move(awsAccountNameJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
