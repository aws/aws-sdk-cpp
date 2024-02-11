/**
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

DescribeApplicationProviderResult::DescribeApplicationProviderResult() : 
    m_federationProtocol(FederationProtocol::NOT_SET)
{
}

DescribeApplicationProviderResult::DescribeApplicationProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_federationProtocol(FederationProtocol::NOT_SET)
{
  *this = result;
}

DescribeApplicationProviderResult& DescribeApplicationProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationProviderArn"))
  {
    m_applicationProviderArn = jsonValue.GetString("ApplicationProviderArn");

  }

  if(jsonValue.ValueExists("DisplayData"))
  {
    m_displayData = jsonValue.GetObject("DisplayData");

  }

  if(jsonValue.ValueExists("FederationProtocol"))
  {
    m_federationProtocol = FederationProtocolMapper::GetFederationProtocolForName(jsonValue.GetString("FederationProtocol"));

  }

  if(jsonValue.ValueExists("ResourceServerConfig"))
  {
    m_resourceServerConfig = jsonValue.GetObject("ResourceServerConfig");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
