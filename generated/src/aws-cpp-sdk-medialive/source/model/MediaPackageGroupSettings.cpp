﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MediaPackageGroupSettings.h>
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

MediaPackageGroupSettings::MediaPackageGroupSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaPackageGroupSettings& MediaPackageGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");
    m_destinationHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaPackageGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
