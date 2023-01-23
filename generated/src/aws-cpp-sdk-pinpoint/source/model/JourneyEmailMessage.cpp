/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyEmailMessage.h>
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

JourneyEmailMessage::JourneyEmailMessage() : 
    m_fromAddressHasBeenSet(false)
{
}

JourneyEmailMessage::JourneyEmailMessage(JsonView jsonValue) : 
    m_fromAddressHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyEmailMessage& JourneyEmailMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FromAddress"))
  {
    m_fromAddress = jsonValue.GetString("FromAddress");

    m_fromAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyEmailMessage::Jsonize() const
{
  JsonValue payload;

  if(m_fromAddressHasBeenSet)
  {
   payload.WithString("FromAddress", m_fromAddress);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
