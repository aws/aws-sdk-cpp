/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/CheckDomainAvailabilityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CheckDomainAvailabilityResult::CheckDomainAvailabilityResult() : 
    m_availability(DomainAvailability::NOT_SET)
{
}

CheckDomainAvailabilityResult::CheckDomainAvailabilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_availability(DomainAvailability::NOT_SET)
{
  *this = result;
}

CheckDomainAvailabilityResult& CheckDomainAvailabilityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Availability"))
  {
    m_availability = DomainAvailabilityMapper::GetDomainAvailabilityForName(jsonValue.GetString("Availability"));

  }



  return *this;
}
