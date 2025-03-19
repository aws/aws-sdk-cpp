/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeAutoMLJobV2Result.h>
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

DescribeAutoMLJobV2Result::DescribeAutoMLJobV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAutoMLJobV2Result& DescribeAutoMLJobV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutoMLJobName"))
  {
    m_autoMLJobName = jsonValue.GetString("AutoMLJobName");
    m_autoMLJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLJobArn"))
  {
    m_autoMLJobArn = jsonValue.GetString("AutoMLJobArn");
    m_autoMLJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLJobInputDataConfig"))
  {
    Aws::Utils::Array<JsonView> autoMLJobInputDataConfigJsonList = jsonValue.GetArray("AutoMLJobInputDataConfig");
    for(unsigned autoMLJobInputDataConfigIndex = 0; autoMLJobInputDataConfigIndex < autoMLJobInputDataConfigJsonList.GetLength(); ++autoMLJobInputDataConfigIndex)
    {
      m_autoMLJobInputDataConfig.push_back(autoMLJobInputDataConfigJsonList[autoMLJobInputDataConfigIndex].AsObject());
    }
    m_autoMLJobInputDataConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("OutputDataConfig");
    m_outputDataConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLJobObjective"))
  {
    m_autoMLJobObjective = jsonValue.GetObject("AutoMLJobObjective");
    m_autoMLJobObjectiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLProblemTypeConfig"))
  {
    m_autoMLProblemTypeConfig = jsonValue.GetObject("AutoMLProblemTypeConfig");
    m_autoMLProblemTypeConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLProblemTypeConfigName"))
  {
    m_autoMLProblemTypeConfigName = AutoMLProblemTypeConfigNameMapper::GetAutoMLProblemTypeConfigNameForName(jsonValue.GetString("AutoMLProblemTypeConfigName"));
    m_autoMLProblemTypeConfigNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartialFailureReasons"))
  {
    Aws::Utils::Array<JsonView> partialFailureReasonsJsonList = jsonValue.GetArray("PartialFailureReasons");
    for(unsigned partialFailureReasonsIndex = 0; partialFailureReasonsIndex < partialFailureReasonsJsonList.GetLength(); ++partialFailureReasonsIndex)
    {
      m_partialFailureReasons.push_back(partialFailureReasonsJsonList[partialFailureReasonsIndex].AsObject());
    }
    m_partialFailureReasonsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BestCandidate"))
  {
    m_bestCandidate = jsonValue.GetObject("BestCandidate");
    m_bestCandidateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLJobStatus"))
  {
    m_autoMLJobStatus = AutoMLJobStatusMapper::GetAutoMLJobStatusForName(jsonValue.GetString("AutoMLJobStatus"));
    m_autoMLJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLJobSecondaryStatus"))
  {
    m_autoMLJobSecondaryStatus = AutoMLJobSecondaryStatusMapper::GetAutoMLJobSecondaryStatusForName(jsonValue.GetString("AutoMLJobSecondaryStatus"));
    m_autoMLJobSecondaryStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLJobArtifacts"))
  {
    m_autoMLJobArtifacts = jsonValue.GetObject("AutoMLJobArtifacts");
    m_autoMLJobArtifactsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResolvedAttributes"))
  {
    m_resolvedAttributes = jsonValue.GetObject("ResolvedAttributes");
    m_resolvedAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelDeployConfig"))
  {
    m_modelDeployConfig = jsonValue.GetObject("ModelDeployConfig");
    m_modelDeployConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelDeployResult"))
  {
    m_modelDeployResult = jsonValue.GetObject("ModelDeployResult");
    m_modelDeployResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSplitConfig"))
  {
    m_dataSplitConfig = jsonValue.GetObject("DataSplitConfig");
    m_dataSplitConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityConfig"))
  {
    m_securityConfig = jsonValue.GetObject("SecurityConfig");
    m_securityConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLComputeConfig"))
  {
    m_autoMLComputeConfig = jsonValue.GetObject("AutoMLComputeConfig");
    m_autoMLComputeConfigHasBeenSet = true;
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
