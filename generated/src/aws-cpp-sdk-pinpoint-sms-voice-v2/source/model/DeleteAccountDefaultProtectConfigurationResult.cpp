﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteAccountDefaultProtectConfigurationResult.h>
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

DeleteAccountDefaultProtectConfigurationResult::DeleteAccountDefaultProtectConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteAccountDefaultProtectConfigurationResult& DeleteAccountDefaultProtectConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DefaultProtectConfigurationArn"))
  {
    m_defaultProtectConfigurationArn = jsonValue.GetString("DefaultProtectConfigurationArn");
    m_defaultProtectConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultProtectConfigurationId"))
  {
    m_defaultProtectConfigurationId = jsonValue.GetString("DefaultProtectConfigurationId");
    m_defaultProtectConfigurationIdHasBeenSet = true;
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
