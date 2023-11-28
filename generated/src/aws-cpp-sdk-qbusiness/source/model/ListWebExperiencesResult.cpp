/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ListWebExperiencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWebExperiencesResult::ListWebExperiencesResult()
{
}

ListWebExperiencesResult::ListWebExperiencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWebExperiencesResult& ListWebExperiencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("webExperiences"))
  {
    Aws::Utils::Array<JsonView> webExperiencesJsonList = jsonValue.GetArray("webExperiences");
    for(unsigned webExperiencesIndex = 0; webExperiencesIndex < webExperiencesJsonList.GetLength(); ++webExperiencesIndex)
    {
      m_webExperiences.push_back(webExperiencesJsonList[webExperiencesIndex].AsObject());
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
