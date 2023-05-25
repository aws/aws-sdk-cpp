/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbStatusInfo.h>
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

AwsRdsDbStatusInfo::AwsRdsDbStatusInfo() : 
    m_statusTypeHasBeenSet(false),
    m_normal(false),
    m_normalHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

AwsRdsDbStatusInfo::AwsRdsDbStatusInfo(JsonView jsonValue) : 
    m_statusTypeHasBeenSet(false),
    m_normal(false),
    m_normalHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbStatusInfo& AwsRdsDbStatusInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatusType"))
  {
    m_statusType = jsonValue.GetString("StatusType");

    m_statusTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Normal"))
  {
    m_normal = jsonValue.GetBool("Normal");

    m_normalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbStatusInfo::Jsonize() const
{
  JsonValue payload;

  if(m_statusTypeHasBeenSet)
  {
   payload.WithString("StatusType", m_statusType);

  }

  if(m_normalHasBeenSet)
  {
   payload.WithBool("Normal", m_normal);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
