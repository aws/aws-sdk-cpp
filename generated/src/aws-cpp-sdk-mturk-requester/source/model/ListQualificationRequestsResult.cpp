/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListQualificationRequestsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQualificationRequestsResult::ListQualificationRequestsResult() : 
    m_numResults(0)
{
}

ListQualificationRequestsResult::ListQualificationRequestsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numResults(0)
{
  *this = result;
}

ListQualificationRequestsResult& ListQualificationRequestsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NumResults"))
  {
    m_numResults = jsonValue.GetInteger("NumResults");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("QualificationRequests"))
  {
    Aws::Utils::Array<JsonView> qualificationRequestsJsonList = jsonValue.GetArray("QualificationRequests");
    for(unsigned qualificationRequestsIndex = 0; qualificationRequestsIndex < qualificationRequestsJsonList.GetLength(); ++qualificationRequestsIndex)
    {
      m_qualificationRequests.push_back(qualificationRequestsJsonList[qualificationRequestsIndex].AsObject());
    }
  }



  return *this;
}
