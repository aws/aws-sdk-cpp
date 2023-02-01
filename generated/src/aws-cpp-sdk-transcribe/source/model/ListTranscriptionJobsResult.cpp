/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ListTranscriptionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTranscriptionJobsResult::ListTranscriptionJobsResult() : 
    m_status(TranscriptionJobStatus::NOT_SET)
{
}

ListTranscriptionJobsResult::ListTranscriptionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TranscriptionJobStatus::NOT_SET)
{
  *this = result;
}

ListTranscriptionJobsResult& ListTranscriptionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("TranscriptionJobSummaries"))
  {
    Aws::Utils::Array<JsonView> transcriptionJobSummariesJsonList = jsonValue.GetArray("TranscriptionJobSummaries");
    for(unsigned transcriptionJobSummariesIndex = 0; transcriptionJobSummariesIndex < transcriptionJobSummariesJsonList.GetLength(); ++transcriptionJobSummariesIndex)
    {
      m_transcriptionJobSummaries.push_back(transcriptionJobSummariesJsonList[transcriptionJobSummariesIndex].AsObject());
    }
  }



  return *this;
}
