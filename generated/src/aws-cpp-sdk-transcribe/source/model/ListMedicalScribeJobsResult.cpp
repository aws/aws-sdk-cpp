/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ListMedicalScribeJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMedicalScribeJobsResult::ListMedicalScribeJobsResult() : 
    m_status(MedicalScribeJobStatus::NOT_SET)
{
}

ListMedicalScribeJobsResult::ListMedicalScribeJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MedicalScribeJobStatus::NOT_SET)
{
  *this = result;
}

ListMedicalScribeJobsResult& ListMedicalScribeJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = MedicalScribeJobStatusMapper::GetMedicalScribeJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("MedicalScribeJobSummaries"))
  {
    Aws::Utils::Array<JsonView> medicalScribeJobSummariesJsonList = jsonValue.GetArray("MedicalScribeJobSummaries");
    for(unsigned medicalScribeJobSummariesIndex = 0; medicalScribeJobSummariesIndex < medicalScribeJobSummariesJsonList.GetLength(); ++medicalScribeJobSummariesIndex)
    {
      m_medicalScribeJobSummaries.push_back(medicalScribeJobSummariesJsonList[medicalScribeJobSummariesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
