/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/CloudWatchLogsDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

CloudWatchLogsDestination::CloudWatchLogsDestination() : 
    m_iamRoleArnHasBeenSet(false),
    m_logGroupArnHasBeenSet(false)
{
}

CloudWatchLogsDestination::CloudWatchLogsDestination(JsonView jsonValue) : 
    m_iamRoleArnHasBeenSet(false),
    m_logGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsDestination& CloudWatchLogsDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("LogGroupArn");

    m_logGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsDestination::Jsonize() const
{
  JsonValue payload;

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("LogGroupArn", m_logGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
