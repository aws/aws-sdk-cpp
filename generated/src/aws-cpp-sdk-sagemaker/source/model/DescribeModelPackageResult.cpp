/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeModelPackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeModelPackageResult::DescribeModelPackageResult() : 
    m_modelPackageVersion(0),
    m_modelPackageStatus(ModelPackageStatus::NOT_SET),
    m_certifyForMarketplace(false),
    m_modelApprovalStatus(ModelApprovalStatus::NOT_SET)
{
}

DescribeModelPackageResult::DescribeModelPackageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_modelPackageVersion(0),
    m_modelPackageStatus(ModelPackageStatus::NOT_SET),
    m_certifyForMarketplace(false),
    m_modelApprovalStatus(ModelApprovalStatus::NOT_SET)
{
  *this = result;
}

DescribeModelPackageResult& DescribeModelPackageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelPackageName"))
  {
    m_modelPackageName = jsonValue.GetString("ModelPackageName");

  }

  if(jsonValue.ValueExists("ModelPackageGroupName"))
  {
    m_modelPackageGroupName = jsonValue.GetString("ModelPackageGroupName");

  }

  if(jsonValue.ValueExists("ModelPackageVersion"))
  {
    m_modelPackageVersion = jsonValue.GetInteger("ModelPackageVersion");

  }

  if(jsonValue.ValueExists("ModelPackageArn"))
  {
    m_modelPackageArn = jsonValue.GetString("ModelPackageArn");

  }

  if(jsonValue.ValueExists("ModelPackageDescription"))
  {
    m_modelPackageDescription = jsonValue.GetString("ModelPackageDescription");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("InferenceSpecification"))
  {
    m_inferenceSpecification = jsonValue.GetObject("InferenceSpecification");

  }

  if(jsonValue.ValueExists("SourceAlgorithmSpecification"))
  {
    m_sourceAlgorithmSpecification = jsonValue.GetObject("SourceAlgorithmSpecification");

  }

  if(jsonValue.ValueExists("ValidationSpecification"))
  {
    m_validationSpecification = jsonValue.GetObject("ValidationSpecification");

  }

  if(jsonValue.ValueExists("ModelPackageStatus"))
  {
    m_modelPackageStatus = ModelPackageStatusMapper::GetModelPackageStatusForName(jsonValue.GetString("ModelPackageStatus"));

  }

  if(jsonValue.ValueExists("ModelPackageStatusDetails"))
  {
    m_modelPackageStatusDetails = jsonValue.GetObject("ModelPackageStatusDetails");

  }

  if(jsonValue.ValueExists("CertifyForMarketplace"))
  {
    m_certifyForMarketplace = jsonValue.GetBool("CertifyForMarketplace");

  }

  if(jsonValue.ValueExists("ModelApprovalStatus"))
  {
    m_modelApprovalStatus = ModelApprovalStatusMapper::GetModelApprovalStatusForName(jsonValue.GetString("ModelApprovalStatus"));

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

  }

  if(jsonValue.ValueExists("MetadataProperties"))
  {
    m_metadataProperties = jsonValue.GetObject("MetadataProperties");

  }

  if(jsonValue.ValueExists("ModelMetrics"))
  {
    m_modelMetrics = jsonValue.GetObject("ModelMetrics");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

  }

  if(jsonValue.ValueExists("ApprovalDescription"))
  {
    m_approvalDescription = jsonValue.GetString("ApprovalDescription");

  }

  if(jsonValue.ValueExists("CustomerMetadataProperties"))
  {
    Aws::Map<Aws::String, JsonView> customerMetadataPropertiesJsonMap = jsonValue.GetObject("CustomerMetadataProperties").GetAllObjects();
    for(auto& customerMetadataPropertiesItem : customerMetadataPropertiesJsonMap)
    {
      m_customerMetadataProperties[customerMetadataPropertiesItem.first] = customerMetadataPropertiesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("DriftCheckBaselines"))
  {
    m_driftCheckBaselines = jsonValue.GetObject("DriftCheckBaselines");

  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

  }

  if(jsonValue.ValueExists("Task"))
  {
    m_task = jsonValue.GetString("Task");

  }

  if(jsonValue.ValueExists("SamplePayloadUrl"))
  {
    m_samplePayloadUrl = jsonValue.GetString("SamplePayloadUrl");

  }

  if(jsonValue.ValueExists("AdditionalInferenceSpecifications"))
  {
    Aws::Utils::Array<JsonView> additionalInferenceSpecificationsJsonList = jsonValue.GetArray("AdditionalInferenceSpecifications");
    for(unsigned additionalInferenceSpecificationsIndex = 0; additionalInferenceSpecificationsIndex < additionalInferenceSpecificationsJsonList.GetLength(); ++additionalInferenceSpecificationsIndex)
    {
      m_additionalInferenceSpecifications.push_back(additionalInferenceSpecificationsJsonList[additionalInferenceSpecificationsIndex].AsObject());
    }
  }



  return *this;
}
