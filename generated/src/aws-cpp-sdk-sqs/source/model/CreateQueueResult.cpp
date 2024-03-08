/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/CreateQueueResult.h>
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

CreateQueueResult::CreateQueueResult()
{
}

CreateQueueResult::CreateQueueResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateQueueResult& CreateQueueResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueueUrl"))
  {
    m_queueUrl = jsonValue.GetString("QueueUrl");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  const auto& responseMetadataIter = headers.find("x-amzn-requestid");
  if(responseMetadataIter != headers.end())
  {
     // for backward compatibility for customers used to an old XML Client interface
     m_responseMetadata.SetRequestId(responseMetadataIter->second);
  }


  return *this;
}
