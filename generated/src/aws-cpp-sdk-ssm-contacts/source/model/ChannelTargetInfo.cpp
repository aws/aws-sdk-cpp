/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ChannelTargetInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

ChannelTargetInfo::ChannelTargetInfo() : 
    m_contactChannelIdHasBeenSet(false),
    m_retryIntervalInMinutes(0),
    m_retryIntervalInMinutesHasBeenSet(false)
{
}

ChannelTargetInfo::ChannelTargetInfo(JsonView jsonValue) : 
    m_contactChannelIdHasBeenSet(false),
    m_retryIntervalInMinutes(0),
    m_retryIntervalInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelTargetInfo& ChannelTargetInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactChannelId"))
  {
    m_contactChannelId = jsonValue.GetString("ContactChannelId");

    m_contactChannelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryIntervalInMinutes"))
  {
    m_retryIntervalInMinutes = jsonValue.GetInteger("RetryIntervalInMinutes");

    m_retryIntervalInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelTargetInfo::Jsonize() const
{
  JsonValue payload;

  if(m_contactChannelIdHasBeenSet)
  {
   payload.WithString("ContactChannelId", m_contactChannelId);

  }

  if(m_retryIntervalInMinutesHasBeenSet)
  {
   payload.WithInteger("RetryIntervalInMinutes", m_retryIntervalInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
