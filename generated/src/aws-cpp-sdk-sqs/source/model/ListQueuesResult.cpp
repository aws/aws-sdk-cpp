﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/ListQueuesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQueuesResult::ListQueuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListQueuesResult& ListQueuesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueueUrls"))
  {
    Aws::Utils::Array<JsonView> queueUrlsJsonList = jsonValue.GetArray("QueueUrls");
    for(unsigned queueUrlsIndex = 0; queueUrlsIndex < queueUrlsJsonList.GetLength(); ++queueUrlsIndex)
    {
      m_queueUrls.push_back(queueUrlsJsonList[queueUrlsIndex].AsString());
    }
    m_queueUrlsHasBeenSet = true;
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

  const auto& responseMetadataIter = headers.find("x-amzn-requestid");
  if(responseMetadataIter != headers.end())
  {
    m_responseMetadataHasBeenSet = true;
     // for backward compatibility for customers used to an old XML Client interface
     m_responseMetadata.SetRequestId(responseMetadataIter->second);
  }


  return *this;
}
