﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ListTranscriptionJobsResult.h>
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

ListTranscriptionJobsResult::ListTranscriptionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTranscriptionJobsResult& ListTranscriptionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TranscriptionJobStatusMapper::GetTranscriptionJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TranscriptionJobSummaries"))
  {
    Aws::Utils::Array<JsonView> transcriptionJobSummariesJsonList = jsonValue.GetArray("TranscriptionJobSummaries");
    for(unsigned transcriptionJobSummariesIndex = 0; transcriptionJobSummariesIndex < transcriptionJobSummariesJsonList.GetLength(); ++transcriptionJobSummariesIndex)
    {
      m_transcriptionJobSummaries.push_back(transcriptionJobSummariesJsonList[transcriptionJobSummariesIndex].AsObject());
    }
    m_transcriptionJobSummariesHasBeenSet = true;
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
