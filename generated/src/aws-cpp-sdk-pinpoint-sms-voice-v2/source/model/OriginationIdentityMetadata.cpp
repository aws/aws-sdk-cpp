/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/OriginationIdentityMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

OriginationIdentityMetadata::OriginationIdentityMetadata() : 
    m_originationIdentityArnHasBeenSet(false),
    m_originationIdentityHasBeenSet(false),
    m_isoCountryCodeHasBeenSet(false),
    m_numberCapabilitiesHasBeenSet(false)
{
}

OriginationIdentityMetadata::OriginationIdentityMetadata(JsonView jsonValue) : 
    m_originationIdentityArnHasBeenSet(false),
    m_originationIdentityHasBeenSet(false),
    m_isoCountryCodeHasBeenSet(false),
    m_numberCapabilitiesHasBeenSet(false)
{
  *this = jsonValue;
}

OriginationIdentityMetadata& OriginationIdentityMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OriginationIdentityArn"))
  {
    m_originationIdentityArn = jsonValue.GetString("OriginationIdentityArn");

    m_originationIdentityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginationIdentity"))
  {
    m_originationIdentity = jsonValue.GetString("OriginationIdentity");

    m_originationIdentityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsoCountryCode"))
  {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");

    m_isoCountryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberCapabilities"))
  {
    Aws::Utils::Array<JsonView> numberCapabilitiesJsonList = jsonValue.GetArray("NumberCapabilities");
    for(unsigned numberCapabilitiesIndex = 0; numberCapabilitiesIndex < numberCapabilitiesJsonList.GetLength(); ++numberCapabilitiesIndex)
    {
      m_numberCapabilities.push_back(NumberCapabilityMapper::GetNumberCapabilityForName(numberCapabilitiesJsonList[numberCapabilitiesIndex].AsString()));
    }
    m_numberCapabilitiesHasBeenSet = true;
  }

  return *this;
}

JsonValue OriginationIdentityMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_originationIdentityArnHasBeenSet)
  {
   payload.WithString("OriginationIdentityArn", m_originationIdentityArn);

  }

  if(m_originationIdentityHasBeenSet)
  {
   payload.WithString("OriginationIdentity", m_originationIdentity);

  }

  if(m_isoCountryCodeHasBeenSet)
  {
   payload.WithString("IsoCountryCode", m_isoCountryCode);

  }

  if(m_numberCapabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> numberCapabilitiesJsonList(m_numberCapabilities.size());
   for(unsigned numberCapabilitiesIndex = 0; numberCapabilitiesIndex < numberCapabilitiesJsonList.GetLength(); ++numberCapabilitiesIndex)
   {
     numberCapabilitiesJsonList[numberCapabilitiesIndex].AsString(NumberCapabilityMapper::GetNameForNumberCapability(m_numberCapabilities[numberCapabilitiesIndex]));
   }
   payload.WithArray("NumberCapabilities", std::move(numberCapabilitiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
