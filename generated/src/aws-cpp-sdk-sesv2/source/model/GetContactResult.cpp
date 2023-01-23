/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetContactResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetContactResult::GetContactResult() : 
    m_unsubscribeAll(false)
{
}

GetContactResult::GetContactResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_unsubscribeAll(false)
{
  *this = result;
}

GetContactResult& GetContactResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactListName"))
  {
    m_contactListName = jsonValue.GetString("ContactListName");

  }

  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

  }

  if(jsonValue.ValueExists("TopicPreferences"))
  {
    Aws::Utils::Array<JsonView> topicPreferencesJsonList = jsonValue.GetArray("TopicPreferences");
    for(unsigned topicPreferencesIndex = 0; topicPreferencesIndex < topicPreferencesJsonList.GetLength(); ++topicPreferencesIndex)
    {
      m_topicPreferences.push_back(topicPreferencesJsonList[topicPreferencesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TopicDefaultPreferences"))
  {
    Aws::Utils::Array<JsonView> topicDefaultPreferencesJsonList = jsonValue.GetArray("TopicDefaultPreferences");
    for(unsigned topicDefaultPreferencesIndex = 0; topicDefaultPreferencesIndex < topicDefaultPreferencesJsonList.GetLength(); ++topicDefaultPreferencesIndex)
    {
      m_topicDefaultPreferences.push_back(topicDefaultPreferencesJsonList[topicDefaultPreferencesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnsubscribeAll"))
  {
    m_unsubscribeAll = jsonValue.GetBool("UnsubscribeAll");

  }

  if(jsonValue.ValueExists("AttributesData"))
  {
    m_attributesData = jsonValue.GetString("AttributesData");

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

  }



  return *this;
}
