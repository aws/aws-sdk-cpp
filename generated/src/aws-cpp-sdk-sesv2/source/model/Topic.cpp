/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Topic.h>
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

Topic::Topic() : 
    m_topicNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultSubscriptionStatus(SubscriptionStatus::NOT_SET),
    m_defaultSubscriptionStatusHasBeenSet(false)
{
}

Topic::Topic(JsonView jsonValue) : 
    m_topicNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultSubscriptionStatus(SubscriptionStatus::NOT_SET),
    m_defaultSubscriptionStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Topic& Topic::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");

    m_topicNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultSubscriptionStatus"))
  {
    m_defaultSubscriptionStatus = SubscriptionStatusMapper::GetSubscriptionStatusForName(jsonValue.GetString("DefaultSubscriptionStatus"));

    m_defaultSubscriptionStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Topic::Jsonize() const
{
  JsonValue payload;

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_defaultSubscriptionStatusHasBeenSet)
  {
   payload.WithString("DefaultSubscriptionStatus", SubscriptionStatusMapper::GetNameForSubscriptionStatus(m_defaultSubscriptionStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
