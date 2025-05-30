﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribeApplicationProviderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeApplicationProviderResult::DescribeApplicationProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeApplicationProviderResult& DescribeApplicationProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationProviderArn"))
  {
    m_applicationProviderArn = jsonValue.GetString("ApplicationProviderArn");
    m_applicationProviderArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FederationProtocol"))
  {
    m_federationProtocol = FederationProtocolMapper::GetFederationProtocolForName(jsonValue.GetString("FederationProtocol"));
    m_federationProtocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayData"))
  {
    m_displayData = jsonValue.GetObject("DisplayData");
    m_displayDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceServerConfig"))
  {
    m_resourceServerConfig = jsonValue.GetObject("ResourceServerConfig");
    m_resourceServerConfigHasBeenSet = true;
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
