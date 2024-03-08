/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/SendMessageResult.h>
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

SendMessageResult::SendMessageResult()
{
}

SendMessageResult::SendMessageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SendMessageResult& SendMessageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MD5OfMessageBody"))
  {
    m_mD5OfMessageBody = jsonValue.GetString("MD5OfMessageBody");

  }

  if(jsonValue.ValueExists("MD5OfMessageAttributes"))
  {
    m_mD5OfMessageAttributes = jsonValue.GetString("MD5OfMessageAttributes");

  }

  if(jsonValue.ValueExists("MD5OfMessageSystemAttributes"))
  {
    m_mD5OfMessageSystemAttributes = jsonValue.GetString("MD5OfMessageSystemAttributes");

  }

  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

  }

  if(jsonValue.ValueExists("SequenceNumber"))
  {
    m_sequenceNumber = jsonValue.GetString("SequenceNumber");

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
