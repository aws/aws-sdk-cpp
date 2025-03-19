/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/UpgradeDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpgradeDomainResult::UpgradeDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpgradeDomainResult& UpgradeDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UpgradeId"))
  {
    m_upgradeId = jsonValue.GetString("UpgradeId");
    m_upgradeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetVersion"))
  {
    m_targetVersion = jsonValue.GetString("TargetVersion");
    m_targetVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PerformCheckOnly"))
  {
    m_performCheckOnly = jsonValue.GetBool("PerformCheckOnly");
    m_performCheckOnlyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdvancedOptions"))
  {
    Aws::Map<Aws::String, JsonView> advancedOptionsJsonMap = jsonValue.GetObject("AdvancedOptions").GetAllObjects();
    for(auto& advancedOptionsItem : advancedOptionsJsonMap)
    {
      m_advancedOptions[advancedOptionsItem.first] = advancedOptionsItem.second.AsString();
    }
    m_advancedOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChangeProgressDetails"))
  {
    m_changeProgressDetails = jsonValue.GetObject("ChangeProgressDetails");
    m_changeProgressDetailsHasBeenSet = true;
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
