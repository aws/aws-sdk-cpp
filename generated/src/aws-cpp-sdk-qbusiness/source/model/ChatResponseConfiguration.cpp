/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ChatResponseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ChatResponseConfiguration::ChatResponseConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ChatResponseConfiguration& ChatResponseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("chatResponseConfigurationId"))
  {
    m_chatResponseConfigurationId = jsonValue.GetString("chatResponseConfigurationId");
    m_chatResponseConfigurationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("chatResponseConfigurationArn"))
  {
    m_chatResponseConfigurationArn = jsonValue.GetString("chatResponseConfigurationArn");
    m_chatResponseConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseConfigurationSummary"))
  {
    m_responseConfigurationSummary = jsonValue.GetString("responseConfigurationSummary");
    m_responseConfigurationSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ChatResponseConfigurationStatusMapper::GetChatResponseConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ChatResponseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_chatResponseConfigurationIdHasBeenSet)
  {
   payload.WithString("chatResponseConfigurationId", m_chatResponseConfigurationId);

  }

  if(m_chatResponseConfigurationArnHasBeenSet)
  {
   payload.WithString("chatResponseConfigurationArn", m_chatResponseConfigurationArn);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_responseConfigurationSummaryHasBeenSet)
  {
   payload.WithString("responseConfigurationSummary", m_responseConfigurationSummary);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ChatResponseConfigurationStatusMapper::GetNameForChatResponseConfigurationStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
