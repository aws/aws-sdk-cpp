/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/WhatsAppBusinessAccountEventDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

WhatsAppBusinessAccountEventDestination::WhatsAppBusinessAccountEventDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

WhatsAppBusinessAccountEventDestination& WhatsAppBusinessAccountEventDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventDestinationArn"))
  {
    m_eventDestinationArn = jsonValue.GetString("eventDestinationArn");
    m_eventDestinationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppBusinessAccountEventDestination::Jsonize() const
{
  JsonValue payload;

  if(m_eventDestinationArnHasBeenSet)
  {
   payload.WithString("eventDestinationArn", m_eventDestinationArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
