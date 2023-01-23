/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/DomainDeliverabilityTrackingOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

DomainDeliverabilityTrackingOption::DomainDeliverabilityTrackingOption() : 
    m_domainHasBeenSet(false),
    m_subscriptionStartDateHasBeenSet(false),
    m_inboxPlacementTrackingOptionHasBeenSet(false)
{
}

DomainDeliverabilityTrackingOption::DomainDeliverabilityTrackingOption(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_subscriptionStartDateHasBeenSet(false),
    m_inboxPlacementTrackingOptionHasBeenSet(false)
{
  *this = jsonValue;
}

DomainDeliverabilityTrackingOption& DomainDeliverabilityTrackingOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionStartDate"))
  {
    m_subscriptionStartDate = jsonValue.GetDouble("SubscriptionStartDate");

    m_subscriptionStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InboxPlacementTrackingOption"))
  {
    m_inboxPlacementTrackingOption = jsonValue.GetObject("InboxPlacementTrackingOption");

    m_inboxPlacementTrackingOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainDeliverabilityTrackingOption::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_subscriptionStartDateHasBeenSet)
  {
   payload.WithDouble("SubscriptionStartDate", m_subscriptionStartDate.SecondsWithMSPrecision());
  }

  if(m_inboxPlacementTrackingOptionHasBeenSet)
  {
   payload.WithObject("InboxPlacementTrackingOption", m_inboxPlacementTrackingOption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
