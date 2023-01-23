/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ListMedicalTranscriptionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMedicalTranscriptionJobsResult::ListMedicalTranscriptionJobsResult() : 
    m_status(TranscriptionJobStatus::NOT_SET)
{
}

ListMedicalTranscriptionJobsResult::ListMedicalTranscriptionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TranscriptionJobStatus::NOT_SET)
{
  *this = result;
}

ListMedicalTranscriptionJobsResult& ListMedicalTranscriptionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TranscriptionJobStatusMapper::GetTranscriptionJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("MedicalTranscriptionJobSummaries"))
  {
    Aws::Utils::Array<JsonView> medicalTranscriptionJobSummariesJsonList = jsonValue.GetArray("MedicalTranscriptionJobSummaries");
    for(unsigned medicalTranscriptionJobSummariesIndex = 0; medicalTranscriptionJobSummariesIndex < medicalTranscriptionJobSummariesJsonList.GetLength(); ++medicalTranscriptionJobSummariesIndex)
    {
      m_medicalTranscriptionJobSummaries.push_back(medicalTranscriptionJobSummariesJsonList[medicalTranscriptionJobSummariesIndex].AsObject());
    }
  }



  return *this;
}
