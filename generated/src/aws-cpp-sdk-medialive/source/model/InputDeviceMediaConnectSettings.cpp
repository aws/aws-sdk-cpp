/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceMediaConnectSettings.h>
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

InputDeviceMediaConnectSettings::InputDeviceMediaConnectSettings() : 
    m_flowArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_sourceNameHasBeenSet(false)
{
}

InputDeviceMediaConnectSettings::InputDeviceMediaConnectSettings(JsonView jsonValue) : 
    m_flowArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_sourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

InputDeviceMediaConnectSettings& InputDeviceMediaConnectSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

    m_flowArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretArn"))
  {
    m_secretArn = jsonValue.GetString("secretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceName"))
  {
    m_sourceName = jsonValue.GetString("sourceName");

    m_sourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDeviceMediaConnectSettings::Jsonize() const
{
  JsonValue payload;

  if(m_flowArnHasBeenSet)
  {
   payload.WithString("flowArn", m_flowArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("sourceName", m_sourceName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
