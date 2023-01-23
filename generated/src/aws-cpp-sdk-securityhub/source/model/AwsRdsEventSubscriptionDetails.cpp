/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsEventSubscriptionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRdsEventSubscriptionDetails::AwsRdsEventSubscriptionDetails() : 
    m_custSubscriptionIdHasBeenSet(false),
    m_customerAwsIdHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_eventCategoriesListHasBeenSet(false),
    m_eventSubscriptionArnHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_sourceIdsListHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subscriptionCreationTimeHasBeenSet(false)
{
}

AwsRdsEventSubscriptionDetails::AwsRdsEventSubscriptionDetails(JsonView jsonValue) : 
    m_custSubscriptionIdHasBeenSet(false),
    m_customerAwsIdHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_eventCategoriesListHasBeenSet(false),
    m_eventSubscriptionArnHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_sourceIdsListHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subscriptionCreationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsEventSubscriptionDetails& AwsRdsEventSubscriptionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustSubscriptionId"))
  {
    m_custSubscriptionId = jsonValue.GetString("CustSubscriptionId");

    m_custSubscriptionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerAwsId"))
  {
    m_customerAwsId = jsonValue.GetString("CustomerAwsId");

    m_customerAwsIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventCategoriesList"))
  {
    Aws::Utils::Array<JsonView> eventCategoriesListJsonList = jsonValue.GetArray("EventCategoriesList");
    for(unsigned eventCategoriesListIndex = 0; eventCategoriesListIndex < eventCategoriesListJsonList.GetLength(); ++eventCategoriesListIndex)
    {
      m_eventCategoriesList.push_back(eventCategoriesListJsonList[eventCategoriesListIndex].AsString());
    }
    m_eventCategoriesListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSubscriptionArn"))
  {
    m_eventSubscriptionArn = jsonValue.GetString("EventSubscriptionArn");

    m_eventSubscriptionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceIdsList"))
  {
    Aws::Utils::Array<JsonView> sourceIdsListJsonList = jsonValue.GetArray("SourceIdsList");
    for(unsigned sourceIdsListIndex = 0; sourceIdsListIndex < sourceIdsListJsonList.GetLength(); ++sourceIdsListIndex)
    {
      m_sourceIdsList.push_back(sourceIdsListJsonList[sourceIdsListIndex].AsString());
    }
    m_sourceIdsListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionCreationTime"))
  {
    m_subscriptionCreationTime = jsonValue.GetString("SubscriptionCreationTime");

    m_subscriptionCreationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsEventSubscriptionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_custSubscriptionIdHasBeenSet)
  {
   payload.WithString("CustSubscriptionId", m_custSubscriptionId);

  }

  if(m_customerAwsIdHasBeenSet)
  {
   payload.WithString("CustomerAwsId", m_customerAwsId);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_eventCategoriesListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventCategoriesListJsonList(m_eventCategoriesList.size());
   for(unsigned eventCategoriesListIndex = 0; eventCategoriesListIndex < eventCategoriesListJsonList.GetLength(); ++eventCategoriesListIndex)
   {
     eventCategoriesListJsonList[eventCategoriesListIndex].AsString(m_eventCategoriesList[eventCategoriesListIndex]);
   }
   payload.WithArray("EventCategoriesList", std::move(eventCategoriesListJsonList));

  }

  if(m_eventSubscriptionArnHasBeenSet)
  {
   payload.WithString("EventSubscriptionArn", m_eventSubscriptionArn);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_sourceIdsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceIdsListJsonList(m_sourceIdsList.size());
   for(unsigned sourceIdsListIndex = 0; sourceIdsListIndex < sourceIdsListJsonList.GetLength(); ++sourceIdsListIndex)
   {
     sourceIdsListJsonList[sourceIdsListIndex].AsString(m_sourceIdsList[sourceIdsListIndex]);
   }
   payload.WithArray("SourceIdsList", std::move(sourceIdsListJsonList));

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_subscriptionCreationTimeHasBeenSet)
  {
   payload.WithString("SubscriptionCreationTime", m_subscriptionCreationTime);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
