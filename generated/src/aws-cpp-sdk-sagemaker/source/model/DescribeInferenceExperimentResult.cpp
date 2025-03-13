/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeInferenceExperimentResult.h>
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

DescribeInferenceExperimentResult::DescribeInferenceExperimentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInferenceExperimentResult& DescribeInferenceExperimentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = InferenceExperimentTypeMapper::GetInferenceExperimentTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");
    m_scheduleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = InferenceExperimentStatusMapper::GetInferenceExperimentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointMetadata"))
  {
    m_endpointMetadata = jsonValue.GetObject("EndpointMetadata");
    m_endpointMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelVariants"))
  {
    Aws::Utils::Array<JsonView> modelVariantsJsonList = jsonValue.GetArray("ModelVariants");
    for(unsigned modelVariantsIndex = 0; modelVariantsIndex < modelVariantsJsonList.GetLength(); ++modelVariantsIndex)
    {
      m_modelVariants.push_back(modelVariantsJsonList[modelVariantsIndex].AsObject());
    }
    m_modelVariantsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataStorageConfig"))
  {
    m_dataStorageConfig = jsonValue.GetObject("DataStorageConfig");
    m_dataStorageConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShadowModeConfig"))
  {
    m_shadowModeConfig = jsonValue.GetObject("ShadowModeConfig");
    m_shadowModeConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");
    m_kmsKeyHasBeenSet = true;
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
