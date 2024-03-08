/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribeTrustedTokenIssuerResult.h>
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

DescribeTrustedTokenIssuerResult::DescribeTrustedTokenIssuerResult() : 
    m_trustedTokenIssuerType(TrustedTokenIssuerType::NOT_SET)
{
}

DescribeTrustedTokenIssuerResult::DescribeTrustedTokenIssuerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_trustedTokenIssuerType(TrustedTokenIssuerType::NOT_SET)
{
  *this = result;
}

DescribeTrustedTokenIssuerResult& DescribeTrustedTokenIssuerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("TrustedTokenIssuerArn"))
  {
    m_trustedTokenIssuerArn = jsonValue.GetString("TrustedTokenIssuerArn");

  }

  if(jsonValue.ValueExists("TrustedTokenIssuerConfiguration"))
  {
    m_trustedTokenIssuerConfiguration = jsonValue.GetObject("TrustedTokenIssuerConfiguration");

  }

  if(jsonValue.ValueExists("TrustedTokenIssuerType"))
  {
    m_trustedTokenIssuerType = TrustedTokenIssuerTypeMapper::GetTrustedTokenIssuerTypeForName(jsonValue.GetString("TrustedTokenIssuerType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
