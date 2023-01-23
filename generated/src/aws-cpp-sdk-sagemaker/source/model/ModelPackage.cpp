/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ModelPackage::ModelPackage() : 
    m_modelPackageNameHasBeenSet(false),
    m_modelPackageGroupNameHasBeenSet(false),
    m_modelPackageVersion(0),
    m_modelPackageVersionHasBeenSet(false),
    m_modelPackageArnHasBeenSet(false),
    m_modelPackageDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_inferenceSpecificationHasBeenSet(false),
    m_sourceAlgorithmSpecificationHasBeenSet(false),
    m_validationSpecificationHasBeenSet(false),
    m_modelPackageStatus(ModelPackageStatus::NOT_SET),
    m_modelPackageStatusHasBeenSet(false),
    m_modelPackageStatusDetailsHasBeenSet(false),
    m_certifyForMarketplace(false),
    m_certifyForMarketplaceHasBeenSet(false),
    m_modelApprovalStatus(ModelApprovalStatus::NOT_SET),
    m_modelApprovalStatusHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_metadataPropertiesHasBeenSet(false),
    m_modelMetricsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_approvalDescriptionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_samplePayloadUrlHasBeenSet(false),
    m_additionalInferenceSpecificationsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_customerMetadataPropertiesHasBeenSet(false),
    m_driftCheckBaselinesHasBeenSet(false)
{
}

ModelPackage::ModelPackage(JsonView jsonValue) : 
    m_modelPackageNameHasBeenSet(false),
    m_modelPackageGroupNameHasBeenSet(false),
    m_modelPackageVersion(0),
    m_modelPackageVersionHasBeenSet(false),
    m_modelPackageArnHasBeenSet(false),
    m_modelPackageDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_inferenceSpecificationHasBeenSet(false),
    m_sourceAlgorithmSpecificationHasBeenSet(false),
    m_validationSpecificationHasBeenSet(false),
    m_modelPackageStatus(ModelPackageStatus::NOT_SET),
    m_modelPackageStatusHasBeenSet(false),
    m_modelPackageStatusDetailsHasBeenSet(false),
    m_certifyForMarketplace(false),
    m_certifyForMarketplaceHasBeenSet(false),
    m_modelApprovalStatus(ModelApprovalStatus::NOT_SET),
    m_modelApprovalStatusHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_metadataPropertiesHasBeenSet(false),
    m_modelMetricsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_approvalDescriptionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_samplePayloadUrlHasBeenSet(false),
    m_additionalInferenceSpecificationsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_customerMetadataPropertiesHasBeenSet(false),
    m_driftCheckBaselinesHasBeenSet(false)
{
  *this = jsonValue;
}

ModelPackage& ModelPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelPackageName"))
  {
    m_modelPackageName = jsonValue.GetString("ModelPackageName");

    m_modelPackageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageGroupName"))
  {
    m_modelPackageGroupName = jsonValue.GetString("ModelPackageGroupName");

    m_modelPackageGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageVersion"))
  {
    m_modelPackageVersion = jsonValue.GetInteger("ModelPackageVersion");

    m_modelPackageVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageArn"))
  {
    m_modelPackageArn = jsonValue.GetString("ModelPackageArn");

    m_modelPackageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageDescription"))
  {
    m_modelPackageDescription = jsonValue.GetString("ModelPackageDescription");

    m_modelPackageDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceSpecification"))
  {
    m_inferenceSpecification = jsonValue.GetObject("InferenceSpecification");

    m_inferenceSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceAlgorithmSpecification"))
  {
    m_sourceAlgorithmSpecification = jsonValue.GetObject("SourceAlgorithmSpecification");

    m_sourceAlgorithmSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationSpecification"))
  {
    m_validationSpecification = jsonValue.GetObject("ValidationSpecification");

    m_validationSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageStatus"))
  {
    m_modelPackageStatus = ModelPackageStatusMapper::GetModelPackageStatusForName(jsonValue.GetString("ModelPackageStatus"));

    m_modelPackageStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageStatusDetails"))
  {
    m_modelPackageStatusDetails = jsonValue.GetObject("ModelPackageStatusDetails");

    m_modelPackageStatusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertifyForMarketplace"))
  {
    m_certifyForMarketplace = jsonValue.GetBool("CertifyForMarketplace");

    m_certifyForMarketplaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelApprovalStatus"))
  {
    m_modelApprovalStatus = ModelApprovalStatusMapper::GetModelApprovalStatusForName(jsonValue.GetString("ModelApprovalStatus"));

    m_modelApprovalStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetadataProperties"))
  {
    m_metadataProperties = jsonValue.GetObject("MetadataProperties");

    m_metadataPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelMetrics"))
  {
    m_modelMetrics = jsonValue.GetObject("ModelMetrics");

    m_modelMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovalDescription"))
  {
    m_approvalDescription = jsonValue.GetString("ApprovalDescription");

    m_approvalDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Task"))
  {
    m_task = jsonValue.GetString("Task");

    m_taskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SamplePayloadUrl"))
  {
    m_samplePayloadUrl = jsonValue.GetString("SamplePayloadUrl");

    m_samplePayloadUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalInferenceSpecifications"))
  {
    Aws::Utils::Array<JsonView> additionalInferenceSpecificationsJsonList = jsonValue.GetArray("AdditionalInferenceSpecifications");
    for(unsigned additionalInferenceSpecificationsIndex = 0; additionalInferenceSpecificationsIndex < additionalInferenceSpecificationsJsonList.GetLength(); ++additionalInferenceSpecificationsIndex)
    {
      m_additionalInferenceSpecifications.push_back(additionalInferenceSpecificationsJsonList[additionalInferenceSpecificationsIndex].AsObject());
    }
    m_additionalInferenceSpecificationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerMetadataProperties"))
  {
    Aws::Map<Aws::String, JsonView> customerMetadataPropertiesJsonMap = jsonValue.GetObject("CustomerMetadataProperties").GetAllObjects();
    for(auto& customerMetadataPropertiesItem : customerMetadataPropertiesJsonMap)
    {
      m_customerMetadataProperties[customerMetadataPropertiesItem.first] = customerMetadataPropertiesItem.second.AsString();
    }
    m_customerMetadataPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DriftCheckBaselines"))
  {
    m_driftCheckBaselines = jsonValue.GetObject("DriftCheckBaselines");

    m_driftCheckBaselinesHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelPackage::Jsonize() const
{
  JsonValue payload;

  if(m_modelPackageNameHasBeenSet)
  {
   payload.WithString("ModelPackageName", m_modelPackageName);

  }

  if(m_modelPackageGroupNameHasBeenSet)
  {
   payload.WithString("ModelPackageGroupName", m_modelPackageGroupName);

  }

  if(m_modelPackageVersionHasBeenSet)
  {
   payload.WithInteger("ModelPackageVersion", m_modelPackageVersion);

  }

  if(m_modelPackageArnHasBeenSet)
  {
   payload.WithString("ModelPackageArn", m_modelPackageArn);

  }

  if(m_modelPackageDescriptionHasBeenSet)
  {
   payload.WithString("ModelPackageDescription", m_modelPackageDescription);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_inferenceSpecificationHasBeenSet)
  {
   payload.WithObject("InferenceSpecification", m_inferenceSpecification.Jsonize());

  }

  if(m_sourceAlgorithmSpecificationHasBeenSet)
  {
   payload.WithObject("SourceAlgorithmSpecification", m_sourceAlgorithmSpecification.Jsonize());

  }

  if(m_validationSpecificationHasBeenSet)
  {
   payload.WithObject("ValidationSpecification", m_validationSpecification.Jsonize());

  }

  if(m_modelPackageStatusHasBeenSet)
  {
   payload.WithString("ModelPackageStatus", ModelPackageStatusMapper::GetNameForModelPackageStatus(m_modelPackageStatus));
  }

  if(m_modelPackageStatusDetailsHasBeenSet)
  {
   payload.WithObject("ModelPackageStatusDetails", m_modelPackageStatusDetails.Jsonize());

  }

  if(m_certifyForMarketplaceHasBeenSet)
  {
   payload.WithBool("CertifyForMarketplace", m_certifyForMarketplace);

  }

  if(m_modelApprovalStatusHasBeenSet)
  {
   payload.WithString("ModelApprovalStatus", ModelApprovalStatusMapper::GetNameForModelApprovalStatus(m_modelApprovalStatus));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_metadataPropertiesHasBeenSet)
  {
   payload.WithObject("MetadataProperties", m_metadataProperties.Jsonize());

  }

  if(m_modelMetricsHasBeenSet)
  {
   payload.WithObject("ModelMetrics", m_modelMetrics.Jsonize());

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithObject("LastModifiedBy", m_lastModifiedBy.Jsonize());

  }

  if(m_approvalDescriptionHasBeenSet)
  {
   payload.WithString("ApprovalDescription", m_approvalDescription);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_taskHasBeenSet)
  {
   payload.WithString("Task", m_task);

  }

  if(m_samplePayloadUrlHasBeenSet)
  {
   payload.WithString("SamplePayloadUrl", m_samplePayloadUrl);

  }

  if(m_additionalInferenceSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalInferenceSpecificationsJsonList(m_additionalInferenceSpecifications.size());
   for(unsigned additionalInferenceSpecificationsIndex = 0; additionalInferenceSpecificationsIndex < additionalInferenceSpecificationsJsonList.GetLength(); ++additionalInferenceSpecificationsIndex)
   {
     additionalInferenceSpecificationsJsonList[additionalInferenceSpecificationsIndex].AsObject(m_additionalInferenceSpecifications[additionalInferenceSpecificationsIndex].Jsonize());
   }
   payload.WithArray("AdditionalInferenceSpecifications", std::move(additionalInferenceSpecificationsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_customerMetadataPropertiesHasBeenSet)
  {
   JsonValue customerMetadataPropertiesJsonMap;
   for(auto& customerMetadataPropertiesItem : m_customerMetadataProperties)
   {
     customerMetadataPropertiesJsonMap.WithString(customerMetadataPropertiesItem.first, customerMetadataPropertiesItem.second);
   }
   payload.WithObject("CustomerMetadataProperties", std::move(customerMetadataPropertiesJsonMap));

  }

  if(m_driftCheckBaselinesHasBeenSet)
  {
   payload.WithObject("DriftCheckBaselines", m_driftCheckBaselines.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
