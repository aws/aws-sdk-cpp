/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/model/ListProfileResourceAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53Profiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProfileResourceAssociationsResult::ListProfileResourceAssociationsResult()
{
}

ListProfileResourceAssociationsResult::ListProfileResourceAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProfileResourceAssociationsResult& ListProfileResourceAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ProfileResourceAssociations"))
  {
    Aws::Utils::Array<JsonView> profileResourceAssociationsJsonList = jsonValue.GetArray("ProfileResourceAssociations");
    for(unsigned profileResourceAssociationsIndex = 0; profileResourceAssociationsIndex < profileResourceAssociationsJsonList.GetLength(); ++profileResourceAssociationsIndex)
    {
      m_profileResourceAssociations.push_back(profileResourceAssociationsJsonList[profileResourceAssociationsIndex].AsObject());
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
