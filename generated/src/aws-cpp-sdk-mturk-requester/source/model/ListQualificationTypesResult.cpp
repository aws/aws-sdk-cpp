/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListQualificationTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQualificationTypesResult::ListQualificationTypesResult() : 
    m_numResults(0)
{
}

ListQualificationTypesResult::ListQualificationTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numResults(0)
{
  *this = result;
}

ListQualificationTypesResult& ListQualificationTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("QualificationTypes"))
  {
    Aws::Utils::Array<JsonView> qualificationTypesJsonList = jsonValue.GetArray("QualificationTypes");
    for(unsigned qualificationTypesIndex = 0; qualificationTypesIndex < qualificationTypesJsonList.GetLength(); ++qualificationTypesIndex)
    {
      m_qualificationTypes.push_back(qualificationTypesJsonList[qualificationTypesIndex].AsObject());
    }
  }



  return *this;
}
