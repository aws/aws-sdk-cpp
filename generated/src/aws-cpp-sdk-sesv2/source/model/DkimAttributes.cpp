/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DkimAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DkimAttributes::DkimAttributes() : 
    m_signingEnabled(false),
    m_signingEnabledHasBeenSet(false),
    m_status(DkimStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tokensHasBeenSet(false),
    m_signingAttributesOrigin(DkimSigningAttributesOrigin::NOT_SET),
    m_signingAttributesOriginHasBeenSet(false),
    m_nextSigningKeyLength(DkimSigningKeyLength::NOT_SET),
    m_nextSigningKeyLengthHasBeenSet(false),
    m_currentSigningKeyLength(DkimSigningKeyLength::NOT_SET),
    m_currentSigningKeyLengthHasBeenSet(false),
    m_lastKeyGenerationTimestampHasBeenSet(false)
{
}

DkimAttributes::DkimAttributes(JsonView jsonValue) : 
    m_signingEnabled(false),
    m_signingEnabledHasBeenSet(false),
    m_status(DkimStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tokensHasBeenSet(false),
    m_signingAttributesOrigin(DkimSigningAttributesOrigin::NOT_SET),
    m_signingAttributesOriginHasBeenSet(false),
    m_nextSigningKeyLength(DkimSigningKeyLength::NOT_SET),
    m_nextSigningKeyLengthHasBeenSet(false),
    m_currentSigningKeyLength(DkimSigningKeyLength::NOT_SET),
    m_currentSigningKeyLengthHasBeenSet(false),
    m_lastKeyGenerationTimestampHasBeenSet(false)
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

  if(jsonValue.ValueExists("SigningAttributesOrigin"))
  {
    m_signingAttributesOrigin = DkimSigningAttributesOriginMapper::GetDkimSigningAttributesOriginForName(jsonValue.GetString("SigningAttributesOrigin"));

    m_signingAttributesOriginHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextSigningKeyLength"))
  {
    m_nextSigningKeyLength = DkimSigningKeyLengthMapper::GetDkimSigningKeyLengthForName(jsonValue.GetString("NextSigningKeyLength"));

    m_nextSigningKeyLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentSigningKeyLength"))
  {
    m_currentSigningKeyLength = DkimSigningKeyLengthMapper::GetDkimSigningKeyLengthForName(jsonValue.GetString("CurrentSigningKeyLength"));

    m_currentSigningKeyLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastKeyGenerationTimestamp"))
  {
    m_lastKeyGenerationTimestamp = jsonValue.GetDouble("LastKeyGenerationTimestamp");

    m_lastKeyGenerationTimestampHasBeenSet = true;
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

  if(m_signingAttributesOriginHasBeenSet)
  {
   payload.WithString("SigningAttributesOrigin", DkimSigningAttributesOriginMapper::GetNameForDkimSigningAttributesOrigin(m_signingAttributesOrigin));
  }

  if(m_nextSigningKeyLengthHasBeenSet)
  {
   payload.WithString("NextSigningKeyLength", DkimSigningKeyLengthMapper::GetNameForDkimSigningKeyLength(m_nextSigningKeyLength));
  }

  if(m_currentSigningKeyLengthHasBeenSet)
  {
   payload.WithString("CurrentSigningKeyLength", DkimSigningKeyLengthMapper::GetNameForDkimSigningKeyLength(m_currentSigningKeyLength));
  }

  if(m_lastKeyGenerationTimestampHasBeenSet)
  {
   payload.WithDouble("LastKeyGenerationTimestamp", m_lastKeyGenerationTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
