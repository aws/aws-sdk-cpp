/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/MessageInsightsFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

MessageInsightsFilters::MessageInsightsFilters() : 
    m_fromEmailAddressHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_lastDeliveryEventHasBeenSet(false),
    m_lastEngagementEventHasBeenSet(false)
{
}

MessageInsightsFilters::MessageInsightsFilters(JsonView jsonValue) : 
    m_fromEmailAddressHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_lastDeliveryEventHasBeenSet(false),
    m_lastEngagementEventHasBeenSet(false)
{
  *this = jsonValue;
}

MessageInsightsFilters& MessageInsightsFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FromEmailAddress"))
  {
    Aws::Utils::Array<JsonView> fromEmailAddressJsonList = jsonValue.GetArray("FromEmailAddress");
    for(unsigned fromEmailAddressIndex = 0; fromEmailAddressIndex < fromEmailAddressJsonList.GetLength(); ++fromEmailAddressIndex)
    {
      m_fromEmailAddress.push_back(fromEmailAddressJsonList[fromEmailAddressIndex].AsString());
    }
    m_fromEmailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destination"))
  {
    Aws::Utils::Array<JsonView> destinationJsonList = jsonValue.GetArray("Destination");
    for(unsigned destinationIndex = 0; destinationIndex < destinationJsonList.GetLength(); ++destinationIndex)
    {
      m_destination.push_back(destinationJsonList[destinationIndex].AsString());
    }
    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subject"))
  {
    Aws::Utils::Array<JsonView> subjectJsonList = jsonValue.GetArray("Subject");
    for(unsigned subjectIndex = 0; subjectIndex < subjectJsonList.GetLength(); ++subjectIndex)
    {
      m_subject.push_back(subjectJsonList[subjectIndex].AsString());
    }
    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Isp"))
  {
    Aws::Utils::Array<JsonView> ispJsonList = jsonValue.GetArray("Isp");
    for(unsigned ispIndex = 0; ispIndex < ispJsonList.GetLength(); ++ispIndex)
    {
      m_isp.push_back(ispJsonList[ispIndex].AsString());
    }
    m_ispHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastDeliveryEvent"))
  {
    Aws::Utils::Array<JsonView> lastDeliveryEventJsonList = jsonValue.GetArray("LastDeliveryEvent");
    for(unsigned lastDeliveryEventIndex = 0; lastDeliveryEventIndex < lastDeliveryEventJsonList.GetLength(); ++lastDeliveryEventIndex)
    {
      m_lastDeliveryEvent.push_back(DeliveryEventTypeMapper::GetDeliveryEventTypeForName(lastDeliveryEventJsonList[lastDeliveryEventIndex].AsString()));
    }
    m_lastDeliveryEventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastEngagementEvent"))
  {
    Aws::Utils::Array<JsonView> lastEngagementEventJsonList = jsonValue.GetArray("LastEngagementEvent");
    for(unsigned lastEngagementEventIndex = 0; lastEngagementEventIndex < lastEngagementEventJsonList.GetLength(); ++lastEngagementEventIndex)
    {
      m_lastEngagementEvent.push_back(EngagementEventTypeMapper::GetEngagementEventTypeForName(lastEngagementEventJsonList[lastEngagementEventIndex].AsString()));
    }
    m_lastEngagementEventHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageInsightsFilters::Jsonize() const
{
  JsonValue payload;

  if(m_fromEmailAddressHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fromEmailAddressJsonList(m_fromEmailAddress.size());
   for(unsigned fromEmailAddressIndex = 0; fromEmailAddressIndex < fromEmailAddressJsonList.GetLength(); ++fromEmailAddressIndex)
   {
     fromEmailAddressJsonList[fromEmailAddressIndex].AsString(m_fromEmailAddress[fromEmailAddressIndex]);
   }
   payload.WithArray("FromEmailAddress", std::move(fromEmailAddressJsonList));

  }

  if(m_destinationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationJsonList(m_destination.size());
   for(unsigned destinationIndex = 0; destinationIndex < destinationJsonList.GetLength(); ++destinationIndex)
   {
     destinationJsonList[destinationIndex].AsString(m_destination[destinationIndex]);
   }
   payload.WithArray("Destination", std::move(destinationJsonList));

  }

  if(m_subjectHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subjectJsonList(m_subject.size());
   for(unsigned subjectIndex = 0; subjectIndex < subjectJsonList.GetLength(); ++subjectIndex)
   {
     subjectJsonList[subjectIndex].AsString(m_subject[subjectIndex]);
   }
   payload.WithArray("Subject", std::move(subjectJsonList));

  }

  if(m_ispHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ispJsonList(m_isp.size());
   for(unsigned ispIndex = 0; ispIndex < ispJsonList.GetLength(); ++ispIndex)
   {
     ispJsonList[ispIndex].AsString(m_isp[ispIndex]);
   }
   payload.WithArray("Isp", std::move(ispJsonList));

  }

  if(m_lastDeliveryEventHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastDeliveryEventJsonList(m_lastDeliveryEvent.size());
   for(unsigned lastDeliveryEventIndex = 0; lastDeliveryEventIndex < lastDeliveryEventJsonList.GetLength(); ++lastDeliveryEventIndex)
   {
     lastDeliveryEventJsonList[lastDeliveryEventIndex].AsString(DeliveryEventTypeMapper::GetNameForDeliveryEventType(m_lastDeliveryEvent[lastDeliveryEventIndex]));
   }
   payload.WithArray("LastDeliveryEvent", std::move(lastDeliveryEventJsonList));

  }

  if(m_lastEngagementEventHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastEngagementEventJsonList(m_lastEngagementEvent.size());
   for(unsigned lastEngagementEventIndex = 0; lastEngagementEventIndex < lastEngagementEventJsonList.GetLength(); ++lastEngagementEventIndex)
   {
     lastEngagementEventJsonList[lastEngagementEventIndex].AsString(EngagementEventTypeMapper::GetNameForEngagementEventType(m_lastEngagementEvent[lastEngagementEventIndex]));
   }
   payload.WithArray("LastEngagementEvent", std::move(lastEngagementEventJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
