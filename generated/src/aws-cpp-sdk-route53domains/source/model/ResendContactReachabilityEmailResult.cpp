/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ResendContactReachabilityEmailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResendContactReachabilityEmailResult::ResendContactReachabilityEmailResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResendContactReachabilityEmailResult& ResendContactReachabilityEmailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("emailAddress"))
  {
    m_emailAddress = jsonValue.GetString("emailAddress");
    m_emailAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isAlreadyVerified"))
  {
    m_isAlreadyVerified = jsonValue.GetBool("isAlreadyVerified");
    m_isAlreadyVerifiedHasBeenSet = true;
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
