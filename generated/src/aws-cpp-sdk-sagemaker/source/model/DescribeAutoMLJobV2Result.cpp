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

DescribeAutoMLJobV2Result::DescribeAutoMLJobV2Result() : 
    m_autoMLProblemTypeConfigName(AutoMLProblemTypeConfigName::NOT_SET),
    m_autoMLJobStatus(AutoMLJobStatus::NOT_SET),
    m_autoMLJobSecondaryStatus(AutoMLJobSecondaryStatus::NOT_SET)
{
}

DescribeAutoMLJobV2Result::DescribeAutoMLJobV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoMLProblemTypeConfigName(AutoMLProblemTypeConfigName::NOT_SET),
    m_autoMLJobStatus(AutoMLJobStatus::NOT_SET),
    m_autoMLJobSecondaryStatus(AutoMLJobSecondaryStatus::NOT_SET)
{
  *this = result;
}

DescribeAutoMLJobV2Result& DescribeAutoMLJobV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutoMLJobName"))
  {
    m_autoMLJobName = jsonValue.GetString("AutoMLJobName");

  }

  if(jsonValue.ValueExists("AutoMLJobArn"))
  {
    m_autoMLJobArn = jsonValue.GetString("AutoMLJobArn");

  }

  if(jsonValue.ValueExists("AutoMLJobInputDataConfig"))
  {
    Aws::Utils::Array<JsonView> autoMLJobInputDataConfigJsonList = jsonValue.GetArray("AutoMLJobInputDataConfig");
    for(unsigned autoMLJobInputDataConfigIndex = 0; autoMLJobInputDataConfigIndex < autoMLJobInputDataConfigJsonList.GetLength(); ++autoMLJobInputDataConfigIndex)
    {
      m_autoMLJobInputDataConfig.push_back(autoMLJobInputDataConfigJsonList[autoMLJobInputDataConfigIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("OutputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("OutputDataConfig");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("AutoMLJobObjective"))
  {
    m_autoMLJobObjective = jsonValue.GetObject("AutoMLJobObjective");

  }

  if(jsonValue.ValueExists("AutoMLProblemTypeConfig"))
  {
    m_autoMLProblemTypeConfig = jsonValue.GetObject("AutoMLProblemTypeConfig");

  }

  if(jsonValue.ValueExists("AutoMLProblemTypeConfigName"))
  {
    m_autoMLProblemTypeConfigName = AutoMLProblemTypeConfigNameMapper::GetAutoMLProblemTypeConfigNameForName(jsonValue.GetString("AutoMLProblemTypeConfigName"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("PartialFailureReasons"))
  {
    Aws::Utils::Array<JsonView> partialFailureReasonsJsonList = jsonValue.GetArray("PartialFailureReasons");
    for(unsigned partialFailureReasonsIndex = 0; partialFailureReasonsIndex < partialFailureReasonsJsonList.GetLength(); ++partialFailureReasonsIndex)
    {
      m_partialFailureReasons.push_back(partialFailureReasonsJsonList[partialFailureReasonsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("BestCandidate"))
  {
    m_bestCandidate = jsonValue.GetObject("BestCandidate");

  }

  if(jsonValue.ValueExists("AutoMLJobStatus"))
  {
    m_autoMLJobStatus = AutoMLJobStatusMapper::GetAutoMLJobStatusForName(jsonValue.GetString("AutoMLJobStatus"));

  }

  if(jsonValue.ValueExists("AutoMLJobSecondaryStatus"))
  {
    m_autoMLJobSecondaryStatus = AutoMLJobSecondaryStatusMapper::GetAutoMLJobSecondaryStatusForName(jsonValue.GetString("AutoMLJobSecondaryStatus"));

  }

  if(jsonValue.ValueExists("AutoMLJobArtifacts"))
  {
    m_autoMLJobArtifacts = jsonValue.GetObject("AutoMLJobArtifacts");

  }

  if(jsonValue.ValueExists("ResolvedAttributes"))
  {
    m_resolvedAttributes = jsonValue.GetObject("ResolvedAttributes");

  }

  if(jsonValue.ValueExists("ModelDeployConfig"))
  {
    m_modelDeployConfig = jsonValue.GetObject("ModelDeployConfig");

  }

  if(jsonValue.ValueExists("ModelDeployResult"))
  {
    m_modelDeployResult = jsonValue.GetObject("ModelDeployResult");

  }

  if(jsonValue.ValueExists("DataSplitConfig"))
  {
    m_dataSplitConfig = jsonValue.GetObject("DataSplitConfig");

  }

  if(jsonValue.ValueExists("SecurityConfig"))
  {
    m_securityConfig = jsonValue.GetObject("SecurityConfig");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
