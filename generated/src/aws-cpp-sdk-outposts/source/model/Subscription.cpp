/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/Subscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

Subscription::Subscription(JsonView jsonValue)
{
  *this = jsonValue;
}

Subscription& Subscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubscriptionId"))
  {
    m_subscriptionId = jsonValue.GetString("SubscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionType"))
  {
    m_subscriptionType = SubscriptionTypeMapper::GetSubscriptionTypeForName(jsonValue.GetString("SubscriptionType"));
    m_subscriptionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionStatus"))
  {
    m_subscriptionStatus = SubscriptionStatusMapper::GetSubscriptionStatusForName(jsonValue.GetString("SubscriptionStatus"));
    m_subscriptionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrderIds"))
  {
    Aws::Utils::Array<JsonView> orderIdsJsonList = jsonValue.GetArray("OrderIds");
    for(unsigned orderIdsIndex = 0; orderIdsIndex < orderIdsJsonList.GetLength(); ++orderIdsIndex)
    {
      m_orderIds.push_back(orderIdsJsonList[orderIdsIndex].AsString());
    }
    m_orderIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BeginDate"))
  {
    m_beginDate = jsonValue.GetDouble("BeginDate");
    m_beginDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetDouble("EndDate");
    m_endDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MonthlyRecurringPrice"))
  {
    m_monthlyRecurringPrice = jsonValue.GetDouble("MonthlyRecurringPrice");
    m_monthlyRecurringPriceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpfrontPrice"))
  {
    m_upfrontPrice = jsonValue.GetDouble("UpfrontPrice");
    m_upfrontPriceHasBeenSet = true;
  }
  return *this;
}

JsonValue Subscription::Jsonize() const
{
  JsonValue payload;

  if(m_subscriptionIdHasBeenSet)
  {
   payload.WithString("SubscriptionId", m_subscriptionId);

  }

  if(m_subscriptionTypeHasBeenSet)
  {
   payload.WithString("SubscriptionType", SubscriptionTypeMapper::GetNameForSubscriptionType(m_subscriptionType));
  }

  if(m_subscriptionStatusHasBeenSet)
  {
   payload.WithString("SubscriptionStatus", SubscriptionStatusMapper::GetNameForSubscriptionStatus(m_subscriptionStatus));
  }

  if(m_orderIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orderIdsJsonList(m_orderIds.size());
   for(unsigned orderIdsIndex = 0; orderIdsIndex < orderIdsJsonList.GetLength(); ++orderIdsIndex)
   {
     orderIdsJsonList[orderIdsIndex].AsString(m_orderIds[orderIdsIndex]);
   }
   payload.WithArray("OrderIds", std::move(orderIdsJsonList));

  }

  if(m_beginDateHasBeenSet)
  {
   payload.WithDouble("BeginDate", m_beginDate.SecondsWithMSPrecision());
  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("EndDate", m_endDate.SecondsWithMSPrecision());
  }

  if(m_monthlyRecurringPriceHasBeenSet)
  {
   payload.WithDouble("MonthlyRecurringPrice", m_monthlyRecurringPrice);

  }

  if(m_upfrontPriceHasBeenSet)
  {
   payload.WithDouble("UpfrontPrice", m_upfrontPrice);

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
