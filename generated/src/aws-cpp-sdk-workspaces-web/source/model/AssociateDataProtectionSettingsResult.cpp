﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AssociateDataProtectionSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateDataProtectionSettingsResult::AssociateDataProtectionSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateDataProtectionSettingsResult& AssociateDataProtectionSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("portalArn"))
  {
    m_portalArn = jsonValue.GetString("portalArn");
    m_portalArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataProtectionSettingsArn"))
  {
    m_dataProtectionSettingsArn = jsonValue.GetString("dataProtectionSettingsArn");
    m_dataProtectionSettingsArnHasBeenSet = true;
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
