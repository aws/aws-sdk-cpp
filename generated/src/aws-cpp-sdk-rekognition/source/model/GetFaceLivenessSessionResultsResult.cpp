/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GetFaceLivenessSessionResultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFaceLivenessSessionResultsResult::GetFaceLivenessSessionResultsResult() : 
    m_status(LivenessSessionStatus::NOT_SET),
    m_confidence(0.0)
{
}

GetFaceLivenessSessionResultsResult::GetFaceLivenessSessionResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(LivenessSessionStatus::NOT_SET),
    m_confidence(0.0)
{
  *this = result;
}

GetFaceLivenessSessionResultsResult& GetFaceLivenessSessionResultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = LivenessSessionStatusMapper::GetLivenessSessionStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

  }

  if(jsonValue.ValueExists("ReferenceImage"))
  {
    m_referenceImage = jsonValue.GetObject("ReferenceImage");

  }

  if(jsonValue.ValueExists("AuditImages"))
  {
    Aws::Utils::Array<JsonView> auditImagesJsonList = jsonValue.GetArray("AuditImages");
    for(unsigned auditImagesIndex = 0; auditImagesIndex < auditImagesJsonList.GetLength(); ++auditImagesIndex)
    {
      m_auditImages.push_back(auditImagesJsonList[auditImagesIndex].AsObject());
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
