/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetDeliverabilityDashboardOptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeliverabilityDashboardOptionsResult::GetDeliverabilityDashboardOptionsResult() : 
    m_dashboardEnabled(false),
    m_accountStatus(DeliverabilityDashboardAccountStatus::NOT_SET)
{
}

GetDeliverabilityDashboardOptionsResult::GetDeliverabilityDashboardOptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dashboardEnabled(false),
    m_accountStatus(DeliverabilityDashboardAccountStatus::NOT_SET)
{
  *this = result;
}

GetDeliverabilityDashboardOptionsResult& GetDeliverabilityDashboardOptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DashboardEnabled"))
  {
    m_dashboardEnabled = jsonValue.GetBool("DashboardEnabled");

  }

  if(jsonValue.ValueExists("SubscriptionExpiryDate"))
  {
    m_subscriptionExpiryDate = jsonValue.GetDouble("SubscriptionExpiryDate");

  }

  if(jsonValue.ValueExists("AccountStatus"))
  {
    m_accountStatus = DeliverabilityDashboardAccountStatusMapper::GetDeliverabilityDashboardAccountStatusForName(jsonValue.GetString("AccountStatus"));

  }

  if(jsonValue.ValueExists("ActiveSubscribedDomains"))
  {
    Aws::Utils::Array<JsonView> activeSubscribedDomainsJsonList = jsonValue.GetArray("ActiveSubscribedDomains");
    for(unsigned activeSubscribedDomainsIndex = 0; activeSubscribedDomainsIndex < activeSubscribedDomainsJsonList.GetLength(); ++activeSubscribedDomainsIndex)
    {
      m_activeSubscribedDomains.push_back(activeSubscribedDomainsJsonList[activeSubscribedDomainsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PendingExpirationSubscribedDomains"))
  {
    Aws::Utils::Array<JsonView> pendingExpirationSubscribedDomainsJsonList = jsonValue.GetArray("PendingExpirationSubscribedDomains");
    for(unsigned pendingExpirationSubscribedDomainsIndex = 0; pendingExpirationSubscribedDomainsIndex < pendingExpirationSubscribedDomainsJsonList.GetLength(); ++pendingExpirationSubscribedDomainsIndex)
    {
      m_pendingExpirationSubscribedDomains.push_back(pendingExpirationSubscribedDomainsJsonList[pendingExpirationSubscribedDomainsIndex].AsObject());
    }
  }



  return *this;
}
