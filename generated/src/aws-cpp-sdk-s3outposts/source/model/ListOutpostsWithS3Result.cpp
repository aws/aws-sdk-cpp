/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3outposts/model/ListOutpostsWithS3Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOutpostsWithS3Result::ListOutpostsWithS3Result()
{
}

ListOutpostsWithS3Result::ListOutpostsWithS3Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOutpostsWithS3Result& ListOutpostsWithS3Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Outposts"))
  {
    Aws::Utils::Array<JsonView> outpostsJsonList = jsonValue.GetArray("Outposts");
    for(unsigned outpostsIndex = 0; outpostsIndex < outpostsJsonList.GetLength(); ++outpostsIndex)
    {
      m_outposts.push_back(outpostsJsonList[outpostsIndex].AsObject());
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
