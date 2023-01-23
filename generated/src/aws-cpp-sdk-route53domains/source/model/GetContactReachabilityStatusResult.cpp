/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/GetContactReachabilityStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetContactReachabilityStatusResult::GetContactReachabilityStatusResult() : 
    m_status(ReachabilityStatus::NOT_SET)
{
}

GetContactReachabilityStatusResult::GetContactReachabilityStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ReachabilityStatus::NOT_SET)
{
  *this = result;
}

GetContactReachabilityStatusResult& GetContactReachabilityStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReachabilityStatusMapper::GetReachabilityStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
