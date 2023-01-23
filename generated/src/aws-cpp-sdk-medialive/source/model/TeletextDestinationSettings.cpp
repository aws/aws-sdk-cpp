/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TeletextDestinationSettings.h>
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

TeletextDestinationSettings::TeletextDestinationSettings()
{
}

TeletextDestinationSettings::TeletextDestinationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

TeletextDestinationSettings& TeletextDestinationSettings::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue TeletextDestinationSettings::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
