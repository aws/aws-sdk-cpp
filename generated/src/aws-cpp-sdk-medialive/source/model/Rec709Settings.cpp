﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Rec709Settings.h>
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

Rec709Settings::Rec709Settings()
{
}

Rec709Settings::Rec709Settings(JsonView jsonValue)
{
  *this = jsonValue;
}

Rec709Settings& Rec709Settings::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue Rec709Settings::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
