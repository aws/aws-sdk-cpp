/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/GetAutoManagementConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAutoManagementConfigurationResult::GetAutoManagementConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAutoManagementConfigurationResult& GetAutoManagementConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OptInLevel"))
  {
    m_optInLevel = OptInLevelMapper::GetOptInLevelForName(jsonValue.GetString("OptInLevel"));
    m_optInLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptInType"))
  {
    m_optInType = OptInTypeMapper::GetOptInTypeForName(jsonValue.GetString("OptInType"));
    m_optInTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotificationArn"))
  {
    m_notificationArn = jsonValue.GetString("NotificationArn");
    m_notificationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptInStatus"))
  {
    m_optInStatus = OptInStatusMapper::GetOptInStatusForName(jsonValue.GetString("OptInStatus"));
    m_optInStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExclusionList"))
  {
    Aws::Map<Aws::String, JsonView> exclusionListJsonMap = jsonValue.GetObject("ExclusionList").GetAllObjects();
    for(auto& exclusionListItem : exclusionListJsonMap)
    {
      Aws::Utils::Array<JsonView> quotaInfoListJsonList = exclusionListItem.second.AsArray();
      Aws::Vector<QuotaInfo> quotaInfoListList;
      quotaInfoListList.reserve((size_t)quotaInfoListJsonList.GetLength());
      for(unsigned quotaInfoListIndex = 0; quotaInfoListIndex < quotaInfoListJsonList.GetLength(); ++quotaInfoListIndex)
      {
        quotaInfoListList.push_back(quotaInfoListJsonList[quotaInfoListIndex].AsObject());
      }
      m_exclusionList[exclusionListItem.first] = std::move(quotaInfoListList);
    }
    m_exclusionListHasBeenSet = true;
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
