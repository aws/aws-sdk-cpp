/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListOutpostResolversResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOutpostResolversResult::ListOutpostResolversResult()
{
}

ListOutpostResolversResult::ListOutpostResolversResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOutpostResolversResult& ListOutpostResolversResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OutpostResolvers"))
  {
    Aws::Utils::Array<JsonView> outpostResolversJsonList = jsonValue.GetArray("OutpostResolvers");
    for(unsigned outpostResolversIndex = 0; outpostResolversIndex < outpostResolversJsonList.GetLength(); ++outpostResolversIndex)
    {
      m_outpostResolvers.push_back(outpostResolversJsonList[outpostResolversIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
