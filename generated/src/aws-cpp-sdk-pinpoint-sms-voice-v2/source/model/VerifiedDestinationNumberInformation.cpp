/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/VerifiedDestinationNumberInformation.h>
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

VerifiedDestinationNumberInformation::VerifiedDestinationNumberInformation() : 
    m_verifiedDestinationNumberArnHasBeenSet(false),
    m_verifiedDestinationNumberIdHasBeenSet(false),
    m_destinationPhoneNumberHasBeenSet(false),
    m_status(VerificationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

VerifiedDestinationNumberInformation::VerifiedDestinationNumberInformation(JsonView jsonValue) : 
    m_verifiedDestinationNumberArnHasBeenSet(false),
    m_verifiedDestinationNumberIdHasBeenSet(false),
    m_destinationPhoneNumberHasBeenSet(false),
    m_status(VerificationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

VerifiedDestinationNumberInformation& VerifiedDestinationNumberInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VerifiedDestinationNumberArn"))
  {
    m_verifiedDestinationNumberArn = jsonValue.GetString("VerifiedDestinationNumberArn");

    m_verifiedDestinationNumberArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerifiedDestinationNumberId"))
  {
    m_verifiedDestinationNumberId = jsonValue.GetString("VerifiedDestinationNumberId");

    m_verifiedDestinationNumberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationPhoneNumber"))
  {
    m_destinationPhoneNumber = jsonValue.GetString("DestinationPhoneNumber");

    m_destinationPhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = VerificationStatusMapper::GetVerificationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue VerifiedDestinationNumberInformation::Jsonize() const
{
  JsonValue payload;

  if(m_verifiedDestinationNumberArnHasBeenSet)
  {
   payload.WithString("VerifiedDestinationNumberArn", m_verifiedDestinationNumberArn);

  }

  if(m_verifiedDestinationNumberIdHasBeenSet)
  {
   payload.WithString("VerifiedDestinationNumberId", m_verifiedDestinationNumberId);

  }

  if(m_destinationPhoneNumberHasBeenSet)
  {
   payload.WithString("DestinationPhoneNumber", m_destinationPhoneNumber);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", VerificationStatusMapper::GetNameForVerificationStatus(m_status));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
