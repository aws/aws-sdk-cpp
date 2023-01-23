/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte20PlusEmbeddedDestinationSettings.h>
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

Scte20PlusEmbeddedDestinationSettings::Scte20PlusEmbeddedDestinationSettings()
{
}

Scte20PlusEmbeddedDestinationSettings::Scte20PlusEmbeddedDestinationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

Scte20PlusEmbeddedDestinationSettings& Scte20PlusEmbeddedDestinationSettings::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue Scte20PlusEmbeddedDestinationSettings::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
