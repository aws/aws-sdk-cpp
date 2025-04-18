﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/DescribeEmergencyContactSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEmergencyContactSettingsResult::DescribeEmergencyContactSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEmergencyContactSettingsResult& DescribeEmergencyContactSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EmergencyContactList"))
  {
    Aws::Utils::Array<JsonView> emergencyContactListJsonList = jsonValue.GetArray("EmergencyContactList");
    for(unsigned emergencyContactListIndex = 0; emergencyContactListIndex < emergencyContactListJsonList.GetLength(); ++emergencyContactListIndex)
    {
      m_emergencyContactList.push_back(emergencyContactListJsonList[emergencyContactListIndex].AsObject());
    }
    m_emergencyContactListHasBeenSet = true;
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
