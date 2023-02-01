/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/DkimAttributes.h>
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

DkimAttributes::DkimAttributes() : 
    m_signingEnabled(false),
    m_signingEnabledHasBeenSet(false),
    m_status(DkimStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tokensHasBeenSet(false)
{
}

DkimAttributes::DkimAttributes(JsonView jsonValue) : 
    m_signingEnabled(false),
    m_signingEnabledHasBeenSet(false),
    m_status(DkimStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tokensHasBeenSet(false)
{
  *this = jsonValue;
}

DkimAttributes& DkimAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SigningEnabled"))
  {
    m_signingEnabled = jsonValue.GetBool("SigningEnabled");

    m_signingEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DkimStatusMapper::GetDkimStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tokens"))
  {
    Aws::Utils::Array<JsonView> tokensJsonList = jsonValue.GetArray("Tokens");
    for(unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex)
    {
      m_tokens.push_back(tokensJsonList[tokensIndex].AsString());
    }
    m_tokensHasBeenSet = true;
  }

  return *this;
}

JsonValue DkimAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_signingEnabledHasBeenSet)
  {
   payload.WithBool("SigningEnabled", m_signingEnabled);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DkimStatusMapper::GetNameForDkimStatus(m_status));
  }

  if(m_tokensHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tokensJsonList(m_tokens.size());
   for(unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex)
   {
     tokensJsonList[tokensIndex].AsString(m_tokens[tokensIndex]);
   }
   payload.WithArray("Tokens", std::move(tokensJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
