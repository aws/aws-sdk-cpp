/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/CreateReadinessCheckResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateReadinessCheckResult::CreateReadinessCheckResult()
{
}

CreateReadinessCheckResult::CreateReadinessCheckResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateReadinessCheckResult& CreateReadinessCheckResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("readinessCheckArn"))
  {
    m_readinessCheckArn = jsonValue.GetString("readinessCheckArn");

  }

  if(jsonValue.ValueExists("readinessCheckName"))
  {
    m_readinessCheckName = jsonValue.GetString("readinessCheckName");

  }

  if(jsonValue.ValueExists("resourceSet"))
  {
    m_resourceSet = jsonValue.GetString("resourceSet");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
