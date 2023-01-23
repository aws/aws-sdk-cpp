/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/ListFraudsterRegistrationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFraudsterRegistrationJobsResult::ListFraudsterRegistrationJobsResult()
{
}

ListFraudsterRegistrationJobsResult::ListFraudsterRegistrationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFraudsterRegistrationJobsResult& ListFraudsterRegistrationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobSummaries"))
  {
    Aws::Utils::Array<JsonView> jobSummariesJsonList = jsonValue.GetArray("JobSummaries");
    for(unsigned jobSummariesIndex = 0; jobSummariesIndex < jobSummariesJsonList.GetLength(); ++jobSummariesIndex)
    {
      m_jobSummaries.push_back(jobSummariesJsonList[jobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
