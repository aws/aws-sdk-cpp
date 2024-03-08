/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GetMediaAnalysisJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMediaAnalysisJobResult::GetMediaAnalysisJobResult() : 
    m_status(MediaAnalysisJobStatus::NOT_SET)
{
}

GetMediaAnalysisJobResult::GetMediaAnalysisJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MediaAnalysisJobStatus::NOT_SET)
{
  *this = result;
}

GetMediaAnalysisJobResult& GetMediaAnalysisJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

  }

  if(jsonValue.ValueExists("OperationsConfig"))
  {
    m_operationsConfig = jsonValue.GetObject("OperationsConfig");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MediaAnalysisJobStatusMapper::GetMediaAnalysisJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

  }

  if(jsonValue.ValueExists("CompletionTimestamp"))
  {
    m_completionTimestamp = jsonValue.GetDouble("CompletionTimestamp");

  }

  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetObject("Input");

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

  }

  if(jsonValue.ValueExists("Results"))
  {
    m_results = jsonValue.GetObject("Results");

  }

  if(jsonValue.ValueExists("ManifestSummary"))
  {
    m_manifestSummary = jsonValue.GetObject("ManifestSummary");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
