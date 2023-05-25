/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EmbeddedPlusScte20DestinationSettings.h>
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

EmbeddedPlusScte20DestinationSettings::EmbeddedPlusScte20DestinationSettings()
{
}

EmbeddedPlusScte20DestinationSettings::EmbeddedPlusScte20DestinationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

EmbeddedPlusScte20DestinationSettings& EmbeddedPlusScte20DestinationSettings::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue EmbeddedPlusScte20DestinationSettings::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
