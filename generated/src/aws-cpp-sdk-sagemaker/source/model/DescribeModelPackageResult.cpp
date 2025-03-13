/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeModelPackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeModelPackageResult::DescribeModelPackageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeModelPackageResult& DescribeModelPackageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("AdditionalInferenceSpecifications"))
  {
    Aws::Utils::Array<JsonView> additionalInferenceSpecificationsJsonList = jsonValue.GetArray("AdditionalInferenceSpecifications");
    for(unsigned additionalInferenceSpecificationsIndex = 0; additionalInferenceSpecificationsIndex < additionalInferenceSpecificationsJsonList.GetLength(); ++additionalInferenceSpecificationsIndex)
    {
      m_additionalInferenceSpecifications.push_back(additionalInferenceSpecificationsJsonList[additionalInferenceSpecificationsIndex].AsObject());
    }
    m_additionalInferenceSpecificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SkipModelValidation"))
  {
    m_skipModelValidation = SkipModelValidationMapper::GetSkipModelValidationForName(jsonValue.GetString("SkipModelValidation"));
    m_skipModelValidationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceUri"))
  {
    m_sourceUri = jsonValue.GetString("SourceUri");
    m_sourceUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityConfig"))
  {
    m_securityConfig = jsonValue.GetObject("SecurityConfig");
    m_securityConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelCard"))
  {
    m_modelCard = jsonValue.GetObject("ModelCard");
    m_modelCardHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelLifeCycle"))
  {
    m_modelLifeCycle = jsonValue.GetObject("ModelLifeCycle");
    m_modelLifeCycleHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
