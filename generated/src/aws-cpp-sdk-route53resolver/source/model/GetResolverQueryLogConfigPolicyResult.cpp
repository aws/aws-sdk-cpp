/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetResolverQueryLogConfigPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResolverQueryLogConfigPolicyResult::GetResolverQueryLogConfigPolicyResult()
{
}

GetResolverQueryLogConfigPolicyResult::GetResolverQueryLogConfigPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResolverQueryLogConfigPolicyResult& GetResolverQueryLogConfigPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResolverQueryLogConfigPolicy"))
  {
    m_resolverQueryLogConfigPolicy = jsonValue.GetString("ResolverQueryLogConfigPolicy");

  }



  return *this;
}
