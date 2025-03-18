/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/MessageComponentsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

MessageComponentsSummary::MessageComponentsSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageComponentsSummary& MessageComponentsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("headline"))
  {
    m_headline = jsonValue.GetString("headline");
    m_headlineHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageComponentsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_headlineHasBeenSet)
  {
   payload.WithString("headline", m_headline);

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
