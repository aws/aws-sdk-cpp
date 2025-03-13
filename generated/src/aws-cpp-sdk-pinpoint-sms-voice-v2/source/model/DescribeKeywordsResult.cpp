/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeKeywordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeKeywordsResult::DescribeKeywordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeKeywordsResult& DescribeKeywordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OriginationIdentityArn"))
  {
    m_originationIdentityArn = jsonValue.GetString("OriginationIdentityArn");
    m_originationIdentityArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginationIdentity"))
  {
    m_originationIdentity = jsonValue.GetString("OriginationIdentity");
    m_originationIdentityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Keywords"))
  {
    Aws::Utils::Array<JsonView> keywordsJsonList = jsonValue.GetArray("Keywords");
    for(unsigned keywordsIndex = 0; keywordsIndex < keywordsJsonList.GetLength(); ++keywordsIndex)
    {
      m_keywords.push_back(keywordsJsonList[keywordsIndex].AsObject());
    }
    m_keywordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
