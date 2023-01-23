/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessorNotificationChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

StreamProcessorNotificationChannel::StreamProcessorNotificationChannel() : 
    m_sNSTopicArnHasBeenSet(false)
{
}

StreamProcessorNotificationChannel::StreamProcessorNotificationChannel(JsonView jsonValue) : 
    m_sNSTopicArnHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessorNotificationChannel& StreamProcessorNotificationChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SNSTopicArn"))
  {
    m_sNSTopicArn = jsonValue.GetString("SNSTopicArn");

    m_sNSTopicArnHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessorNotificationChannel::Jsonize() const
{
  JsonValue payload;

  if(m_sNSTopicArnHasBeenSet)
  {
   payload.WithString("SNSTopicArn", m_sNSTopicArn);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
