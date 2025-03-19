/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/UpdateEventRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateEventRuleResult::UpdateEventRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateEventRuleResult& UpdateEventRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notificationConfigurationArn"))
  {
    m_notificationConfigurationArn = jsonValue.GetString("notificationConfigurationArn");
    m_notificationConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusSummaryByRegion"))
  {
    Aws::Map<Aws::String, JsonView> statusSummaryByRegionJsonMap = jsonValue.GetObject("statusSummaryByRegion").GetAllObjects();
    for(auto& statusSummaryByRegionItem : statusSummaryByRegionJsonMap)
    {
      m_statusSummaryByRegion[statusSummaryByRegionItem.first] = statusSummaryByRegionItem.second.AsObject();
    }
    m_statusSummaryByRegionHasBeenSet = true;
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
