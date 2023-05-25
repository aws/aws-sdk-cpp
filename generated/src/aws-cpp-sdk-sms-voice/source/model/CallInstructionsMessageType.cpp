/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/CallInstructionsMessageType.h>
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

CallInstructionsMessageType::CallInstructionsMessageType() : 
    m_textHasBeenSet(false)
{
}

CallInstructionsMessageType::CallInstructionsMessageType(JsonView jsonValue) : 
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

CallInstructionsMessageType& CallInstructionsMessageType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue CallInstructionsMessageType::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
