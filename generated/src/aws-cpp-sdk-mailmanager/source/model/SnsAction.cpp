/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/SnsAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

SnsAction::SnsAction(JsonView jsonValue)
{
  *this = jsonValue;
}

SnsAction& SnsAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionFailurePolicy"))
  {
    m_actionFailurePolicy = ActionFailurePolicyMapper::GetActionFailurePolicyForName(jsonValue.GetString("ActionFailurePolicy"));
    m_actionFailurePolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TopicArn"))
  {
    m_topicArn = jsonValue.GetString("TopicArn");
    m_topicArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Encoding"))
  {
    m_encoding = SnsNotificationEncodingMapper::GetSnsNotificationEncodingForName(jsonValue.GetString("Encoding"));
    m_encodingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PayloadType"))
  {
    m_payloadType = SnsNotificationPayloadTypeMapper::GetSnsNotificationPayloadTypeForName(jsonValue.GetString("PayloadType"));
    m_payloadTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SnsAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionFailurePolicyHasBeenSet)
  {
   payload.WithString("ActionFailurePolicy", ActionFailurePolicyMapper::GetNameForActionFailurePolicy(m_actionFailurePolicy));
  }

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("TopicArn", m_topicArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_encodingHasBeenSet)
  {
   payload.WithString("Encoding", SnsNotificationEncodingMapper::GetNameForSnsNotificationEncoding(m_encoding));
  }

  if(m_payloadTypeHasBeenSet)
  {
   payload.WithString("PayloadType", SnsNotificationPayloadTypeMapper::GetNameForSnsNotificationPayloadType(m_payloadType));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
