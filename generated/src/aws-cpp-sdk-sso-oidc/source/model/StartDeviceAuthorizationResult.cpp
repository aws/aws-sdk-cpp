/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/StartDeviceAuthorizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartDeviceAuthorizationResult::StartDeviceAuthorizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartDeviceAuthorizationResult& StartDeviceAuthorizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deviceCode"))
  {
    m_deviceCode = jsonValue.GetString("deviceCode");
    m_deviceCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userCode"))
  {
    m_userCode = jsonValue.GetString("userCode");
    m_userCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("verificationUri"))
  {
    m_verificationUri = jsonValue.GetString("verificationUri");
    m_verificationUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("verificationUriComplete"))
  {
    m_verificationUriComplete = jsonValue.GetString("verificationUriComplete");
    m_verificationUriCompleteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expiresIn"))
  {
    m_expiresIn = jsonValue.GetInteger("expiresIn");
    m_expiresInHasBeenSet = true;
  }
  if(jsonValue.ValueExists("interval"))
  {
    m_interval = jsonValue.GetInteger("interval");
    m_intervalHasBeenSet = true;
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
