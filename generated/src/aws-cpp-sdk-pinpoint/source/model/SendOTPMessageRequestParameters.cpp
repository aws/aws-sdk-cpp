/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SendOTPMessageRequestParameters.h>
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

SendOTPMessageRequestParameters::SendOTPMessageRequestParameters() : 
    m_allowedAttempts(0),
    m_allowedAttemptsHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_codeLength(0),
    m_codeLengthHasBeenSet(false),
    m_destinationIdentityHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_originationIdentityHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_validityPeriod(0),
    m_validityPeriodHasBeenSet(false)
{
}

SendOTPMessageRequestParameters::SendOTPMessageRequestParameters(JsonView jsonValue) : 
    m_allowedAttempts(0),
    m_allowedAttemptsHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_codeLength(0),
    m_codeLengthHasBeenSet(false),
    m_destinationIdentityHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_originationIdentityHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_validityPeriod(0),
    m_validityPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

SendOTPMessageRequestParameters& SendOTPMessageRequestParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowedAttempts"))
  {
    m_allowedAttempts = jsonValue.GetInteger("AllowedAttempts");

    m_allowedAttemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BrandName"))
  {
    m_brandName = jsonValue.GetString("BrandName");

    m_brandNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Channel"))
  {
    m_channel = jsonValue.GetString("Channel");

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeLength"))
  {
    m_codeLength = jsonValue.GetInteger("CodeLength");

    m_codeLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationIdentity"))
  {
    m_destinationIdentity = jsonValue.GetString("DestinationIdentity");

    m_destinationIdentityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetString("EntityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginationIdentity"))
  {
    m_originationIdentity = jsonValue.GetString("OriginationIdentity");

    m_originationIdentityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceId"))
  {
    m_referenceId = jsonValue.GetString("ReferenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateId"))
  {
    m_templateId = jsonValue.GetString("TemplateId");

    m_templateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidityPeriod"))
  {
    m_validityPeriod = jsonValue.GetInteger("ValidityPeriod");

    m_validityPeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue SendOTPMessageRequestParameters::Jsonize() const
{
  JsonValue payload;

  if(m_allowedAttemptsHasBeenSet)
  {
   payload.WithInteger("AllowedAttempts", m_allowedAttempts);

  }

  if(m_brandNameHasBeenSet)
  {
   payload.WithString("BrandName", m_brandName);

  }

  if(m_channelHasBeenSet)
  {
   payload.WithString("Channel", m_channel);

  }

  if(m_codeLengthHasBeenSet)
  {
   payload.WithInteger("CodeLength", m_codeLength);

  }

  if(m_destinationIdentityHasBeenSet)
  {
   payload.WithString("DestinationIdentity", m_destinationIdentity);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_originationIdentityHasBeenSet)
  {
   payload.WithString("OriginationIdentity", m_originationIdentity);

  }

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("ReferenceId", m_referenceId);

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("TemplateId", m_templateId);

  }

  if(m_validityPeriodHasBeenSet)
  {
   payload.WithInteger("ValidityPeriod", m_validityPeriod);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
