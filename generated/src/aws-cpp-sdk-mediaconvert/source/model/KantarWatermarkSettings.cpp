/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/KantarWatermarkSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

KantarWatermarkSettings::KantarWatermarkSettings() : 
    m_channelNameHasBeenSet(false),
    m_contentReferenceHasBeenSet(false),
    m_credentialsSecretNameHasBeenSet(false),
    m_fileOffset(0.0),
    m_fileOffsetHasBeenSet(false),
    m_kantarLicenseId(0),
    m_kantarLicenseIdHasBeenSet(false),
    m_kantarServerUrlHasBeenSet(false),
    m_logDestinationHasBeenSet(false),
    m_metadata3HasBeenSet(false),
    m_metadata4HasBeenSet(false),
    m_metadata5HasBeenSet(false),
    m_metadata6HasBeenSet(false),
    m_metadata7HasBeenSet(false),
    m_metadata8HasBeenSet(false)
{
}

KantarWatermarkSettings::KantarWatermarkSettings(JsonView jsonValue) : 
    m_channelNameHasBeenSet(false),
    m_contentReferenceHasBeenSet(false),
    m_credentialsSecretNameHasBeenSet(false),
    m_fileOffset(0.0),
    m_fileOffsetHasBeenSet(false),
    m_kantarLicenseId(0),
    m_kantarLicenseIdHasBeenSet(false),
    m_kantarServerUrlHasBeenSet(false),
    m_logDestinationHasBeenSet(false),
    m_metadata3HasBeenSet(false),
    m_metadata4HasBeenSet(false),
    m_metadata5HasBeenSet(false),
    m_metadata6HasBeenSet(false),
    m_metadata7HasBeenSet(false),
    m_metadata8HasBeenSet(false)
{
  *this = jsonValue;
}

KantarWatermarkSettings& KantarWatermarkSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentReference"))
  {
    m_contentReference = jsonValue.GetString("contentReference");

    m_contentReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("credentialsSecretName"))
  {
    m_credentialsSecretName = jsonValue.GetString("credentialsSecretName");

    m_credentialsSecretNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileOffset"))
  {
    m_fileOffset = jsonValue.GetDouble("fileOffset");

    m_fileOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kantarLicenseId"))
  {
    m_kantarLicenseId = jsonValue.GetInteger("kantarLicenseId");

    m_kantarLicenseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kantarServerUrl"))
  {
    m_kantarServerUrl = jsonValue.GetString("kantarServerUrl");

    m_kantarServerUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logDestination"))
  {
    m_logDestination = jsonValue.GetString("logDestination");

    m_logDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata3"))
  {
    m_metadata3 = jsonValue.GetString("metadata3");

    m_metadata3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata4"))
  {
    m_metadata4 = jsonValue.GetString("metadata4");

    m_metadata4HasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata5"))
  {
    m_metadata5 = jsonValue.GetString("metadata5");

    m_metadata5HasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata6"))
  {
    m_metadata6 = jsonValue.GetString("metadata6");

    m_metadata6HasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata7"))
  {
    m_metadata7 = jsonValue.GetString("metadata7");

    m_metadata7HasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata8"))
  {
    m_metadata8 = jsonValue.GetString("metadata8");

    m_metadata8HasBeenSet = true;
  }

  return *this;
}

JsonValue KantarWatermarkSettings::Jsonize() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  if(m_contentReferenceHasBeenSet)
  {
   payload.WithString("contentReference", m_contentReference);

  }

  if(m_credentialsSecretNameHasBeenSet)
  {
   payload.WithString("credentialsSecretName", m_credentialsSecretName);

  }

  if(m_fileOffsetHasBeenSet)
  {
   payload.WithDouble("fileOffset", m_fileOffset);

  }

  if(m_kantarLicenseIdHasBeenSet)
  {
   payload.WithInteger("kantarLicenseId", m_kantarLicenseId);

  }

  if(m_kantarServerUrlHasBeenSet)
  {
   payload.WithString("kantarServerUrl", m_kantarServerUrl);

  }

  if(m_logDestinationHasBeenSet)
  {
   payload.WithString("logDestination", m_logDestination);

  }

  if(m_metadata3HasBeenSet)
  {
   payload.WithString("metadata3", m_metadata3);

  }

  if(m_metadata4HasBeenSet)
  {
   payload.WithString("metadata4", m_metadata4);

  }

  if(m_metadata5HasBeenSet)
  {
   payload.WithString("metadata5", m_metadata5);

  }

  if(m_metadata6HasBeenSet)
  {
   payload.WithString("metadata6", m_metadata6);

  }

  if(m_metadata7HasBeenSet)
  {
   payload.WithString("metadata7", m_metadata7);

  }

  if(m_metadata8HasBeenSet)
  {
   payload.WithString("metadata8", m_metadata8);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
