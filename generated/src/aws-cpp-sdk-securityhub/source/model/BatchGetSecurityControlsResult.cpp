/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchGetSecurityControlsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetSecurityControlsResult::BatchGetSecurityControlsResult()
{
}

BatchGetSecurityControlsResult::BatchGetSecurityControlsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetSecurityControlsResult& BatchGetSecurityControlsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SecurityControls"))
  {
    Aws::Utils::Array<JsonView> securityControlsJsonList = jsonValue.GetArray("SecurityControls");
    for(unsigned securityControlsIndex = 0; securityControlsIndex < securityControlsJsonList.GetLength(); ++securityControlsIndex)
    {
      m_securityControls.push_back(securityControlsJsonList[securityControlsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedIds"))
  {
    Aws::Utils::Array<JsonView> unprocessedIdsJsonList = jsonValue.GetArray("UnprocessedIds");
    for(unsigned unprocessedIdsIndex = 0; unprocessedIdsIndex < unprocessedIdsJsonList.GetLength(); ++unprocessedIdsIndex)
    {
      m_unprocessedIds.push_back(unprocessedIdsJsonList[unprocessedIdsIndex].AsObject());
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
