/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/RetrieveDomainAuthCodeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RetrieveDomainAuthCodeResult::RetrieveDomainAuthCodeResult()
{
}

RetrieveDomainAuthCodeResult::RetrieveDomainAuthCodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RetrieveDomainAuthCodeResult& RetrieveDomainAuthCodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthCode"))
  {
    m_authCode = jsonValue.GetString("AuthCode");

  }



  return *this;
}
