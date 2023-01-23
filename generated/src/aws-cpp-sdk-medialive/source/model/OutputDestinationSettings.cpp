/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/OutputDestinationSettings.h>
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

OutputDestinationSettings::OutputDestinationSettings() : 
    m_passwordParamHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

OutputDestinationSettings::OutputDestinationSettings(JsonView jsonValue) : 
    m_passwordParamHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

OutputDestinationSettings& OutputDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("passwordParam"))
  {
    m_passwordParam = jsonValue.GetString("passwordParam");

    m_passwordParamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamName"))
  {
    m_streamName = jsonValue.GetString("streamName");

    m_streamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_passwordParamHasBeenSet)
  {
   payload.WithString("passwordParam", m_passwordParam);

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("streamName", m_streamName);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
