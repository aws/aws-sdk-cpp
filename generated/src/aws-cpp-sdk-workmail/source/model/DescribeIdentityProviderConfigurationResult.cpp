/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DescribeIdentityProviderConfigurationResult.h>
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

DescribeIdentityProviderConfigurationResult::DescribeIdentityProviderConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeIdentityProviderConfigurationResult& DescribeIdentityProviderConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthenticationMode"))
  {
    m_authenticationMode = IdentityProviderAuthenticationModeMapper::GetIdentityProviderAuthenticationModeForName(jsonValue.GetString("AuthenticationMode"));
    m_authenticationModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityCenterConfiguration"))
  {
    m_identityCenterConfiguration = jsonValue.GetObject("IdentityCenterConfiguration");
    m_identityCenterConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PersonalAccessTokenConfiguration"))
  {
    m_personalAccessTokenConfiguration = jsonValue.GetObject("PersonalAccessTokenConfiguration");
    m_personalAccessTokenConfigurationHasBeenSet = true;
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
