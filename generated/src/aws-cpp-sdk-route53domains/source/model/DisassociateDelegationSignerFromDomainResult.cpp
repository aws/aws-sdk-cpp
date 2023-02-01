/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/DisassociateDelegationSignerFromDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateDelegationSignerFromDomainResult::DisassociateDelegationSignerFromDomainResult()
{
}

DisassociateDelegationSignerFromDomainResult::DisassociateDelegationSignerFromDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisassociateDelegationSignerFromDomainResult& DisassociateDelegationSignerFromDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OperationId"))
  {
    m_operationId = jsonValue.GetString("OperationId");

  }



  return *this;
}
