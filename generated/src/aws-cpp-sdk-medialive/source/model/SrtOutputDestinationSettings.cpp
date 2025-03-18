/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SrtOutputDestinationSettings.h>
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

SrtOutputDestinationSettings::SrtOutputDestinationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

SrtOutputDestinationSettings& SrtOutputDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionPassphraseSecretArn"))
  {
    m_encryptionPassphraseSecretArn = jsonValue.GetString("encryptionPassphraseSecretArn");
    m_encryptionPassphraseSecretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");
    m_streamIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtOutputDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionPassphraseSecretArnHasBeenSet)
  {
   payload.WithString("encryptionPassphraseSecretArn", m_encryptionPassphraseSecretArn);

  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
