/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EventCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

EventCondition::EventCondition() : 
    m_dimensionsHasBeenSet(false),
    m_messageActivityHasBeenSet(false)
{
}

EventCondition::EventCondition(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_messageActivityHasBeenSet(false)
{
  *this = jsonValue;
}

EventCondition& EventCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    m_dimensions = jsonValue.GetObject("Dimensions");

    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageActivity"))
  {
    m_messageActivity = jsonValue.GetString("MessageActivity");

    m_messageActivityHasBeenSet = true;
  }

  return *this;
}

JsonValue EventCondition::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("Dimensions", m_dimensions.Jsonize());

  }

  if(m_messageActivityHasBeenSet)
  {
   payload.WithString("MessageActivity", m_messageActivity);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
