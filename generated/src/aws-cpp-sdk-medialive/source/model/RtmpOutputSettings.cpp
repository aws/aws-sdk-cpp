/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RtmpOutputSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

RtmpOutputSettings::RtmpOutputSettings() : 
    m_certificateMode(RtmpOutputCertificateMode::NOT_SET),
    m_certificateModeHasBeenSet(false),
    m_connectionRetryInterval(0),
    m_connectionRetryIntervalHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false)
{
}

RtmpOutputSettings::RtmpOutputSettings(JsonView jsonValue) : 
    m_certificateMode(RtmpOutputCertificateMode::NOT_SET),
    m_certificateModeHasBeenSet(false),
    m_connectionRetryInterval(0),
    m_connectionRetryIntervalHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false)
{
  *this = jsonValue;
}

RtmpOutputSettings& RtmpOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateMode"))
  {
    m_certificateMode = RtmpOutputCertificateModeMapper::GetRtmpOutputCertificateModeForName(jsonValue.GetString("certificateMode"));

    m_certificateModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionRetryInterval"))
  {
    m_connectionRetryInterval = jsonValue.GetInteger("connectionRetryInterval");

    m_connectionRetryIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numRetries"))
  {
    m_numRetries = jsonValue.GetInteger("numRetries");

    m_numRetriesHasBeenSet = true;
  }

  return *this;
}

JsonValue RtmpOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_certificateModeHasBeenSet)
  {
   payload.WithString("certificateMode", RtmpOutputCertificateModeMapper::GetNameForRtmpOutputCertificateMode(m_certificateMode));
  }

  if(m_connectionRetryIntervalHasBeenSet)
  {
   payload.WithInteger("connectionRetryInterval", m_connectionRetryInterval);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_numRetriesHasBeenSet)
  {
   payload.WithInteger("numRetries", m_numRetries);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
