/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/SnsDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

SnsDestination::SnsDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

SnsDestination& SnsDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TopicArn"))
  {
    m_topicArn = jsonValue.GetString("TopicArn");
    m_topicArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SnsDestination::Jsonize() const
{
  JsonValue payload;

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("TopicArn", m_topicArn);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
