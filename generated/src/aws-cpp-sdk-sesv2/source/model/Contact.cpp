/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Contact.h>
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

Contact::Contact() : 
    m_emailAddressHasBeenSet(false),
    m_topicPreferencesHasBeenSet(false),
    m_topicDefaultPreferencesHasBeenSet(false),
    m_unsubscribeAll(false),
    m_unsubscribeAllHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false)
{
}

Contact::Contact(JsonView jsonValue) : 
    m_emailAddressHasBeenSet(false),
    m_topicPreferencesHasBeenSet(false),
    m_topicDefaultPreferencesHasBeenSet(false),
    m_unsubscribeAll(false),
    m_unsubscribeAllHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

Contact& Contact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicPreferences"))
  {
    Aws::Utils::Array<JsonView> topicPreferencesJsonList = jsonValue.GetArray("TopicPreferences");
    for(unsigned topicPreferencesIndex = 0; topicPreferencesIndex < topicPreferencesJsonList.GetLength(); ++topicPreferencesIndex)
    {
      m_topicPreferences.push_back(topicPreferencesJsonList[topicPreferencesIndex].AsObject());
    }
    m_topicPreferencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicDefaultPreferences"))
  {
    Aws::Utils::Array<JsonView> topicDefaultPreferencesJsonList = jsonValue.GetArray("TopicDefaultPreferences");
    for(unsigned topicDefaultPreferencesIndex = 0; topicDefaultPreferencesIndex < topicDefaultPreferencesJsonList.GetLength(); ++topicDefaultPreferencesIndex)
    {
      m_topicDefaultPreferences.push_back(topicDefaultPreferencesJsonList[topicDefaultPreferencesIndex].AsObject());
    }
    m_topicDefaultPreferencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnsubscribeAll"))
  {
    m_unsubscribeAll = jsonValue.GetBool("UnsubscribeAll");

    m_unsubscribeAllHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Contact::Jsonize() const
{
  JsonValue payload;

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_topicPreferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicPreferencesJsonList(m_topicPreferences.size());
   for(unsigned topicPreferencesIndex = 0; topicPreferencesIndex < topicPreferencesJsonList.GetLength(); ++topicPreferencesIndex)
   {
     topicPreferencesJsonList[topicPreferencesIndex].AsObject(m_topicPreferences[topicPreferencesIndex].Jsonize());
   }
   payload.WithArray("TopicPreferences", std::move(topicPreferencesJsonList));

  }

  if(m_topicDefaultPreferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicDefaultPreferencesJsonList(m_topicDefaultPreferences.size());
   for(unsigned topicDefaultPreferencesIndex = 0; topicDefaultPreferencesIndex < topicDefaultPreferencesJsonList.GetLength(); ++topicDefaultPreferencesIndex)
   {
     topicDefaultPreferencesJsonList[topicDefaultPreferencesIndex].AsObject(m_topicDefaultPreferences[topicDefaultPreferencesIndex].Jsonize());
   }
   payload.WithArray("TopicDefaultPreferences", std::move(topicDefaultPreferencesJsonList));

  }

  if(m_unsubscribeAllHasBeenSet)
  {
   payload.WithBool("UnsubscribeAll", m_unsubscribeAll);

  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
