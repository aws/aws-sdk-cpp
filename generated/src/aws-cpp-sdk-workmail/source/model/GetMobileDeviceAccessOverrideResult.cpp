/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetMobileDeviceAccessOverrideResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMobileDeviceAccessOverrideResult::GetMobileDeviceAccessOverrideResult() : 
    m_effect(MobileDeviceAccessRuleEffect::NOT_SET)
{
}

GetMobileDeviceAccessOverrideResult::GetMobileDeviceAccessOverrideResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_effect(MobileDeviceAccessRuleEffect::NOT_SET)
{
  *this = result;
}

GetMobileDeviceAccessOverrideResult& GetMobileDeviceAccessOverrideResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

  }

  if(jsonValue.ValueExists("Effect"))
  {
    m_effect = MobileDeviceAccessRuleEffectMapper::GetMobileDeviceAccessRuleEffectForName(jsonValue.GetString("Effect"));

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetDouble("DateCreated");

  }

  if(jsonValue.ValueExists("DateModified"))
  {
    m_dateModified = jsonValue.GetDouble("DateModified");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
