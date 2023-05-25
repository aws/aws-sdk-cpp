/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/EvaluateSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EvaluateSessionResult::EvaluateSessionResult() : 
    m_streamingStatus(StreamingStatus::NOT_SET)
{
}

EvaluateSessionResult::EvaluateSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_streamingStatus(StreamingStatus::NOT_SET)
{
  *this = result;
}

EvaluateSessionResult& EvaluateSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthenticationResult"))
  {
    m_authenticationResult = jsonValue.GetObject("AuthenticationResult");

  }

  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

  }

  if(jsonValue.ValueExists("FraudDetectionResult"))
  {
    m_fraudDetectionResult = jsonValue.GetObject("FraudDetectionResult");

  }

  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");

  }

  if(jsonValue.ValueExists("SessionName"))
  {
    m_sessionName = jsonValue.GetString("SessionName");

  }

  if(jsonValue.ValueExists("StreamingStatus"))
  {
    m_streamingStatus = StreamingStatusMapper::GetStreamingStatusForName(jsonValue.GetString("StreamingStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
