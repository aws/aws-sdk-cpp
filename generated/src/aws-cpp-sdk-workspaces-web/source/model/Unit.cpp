﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/Unit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

Unit::Unit(JsonView jsonValue)
{
  *this = jsonValue;
}

Unit& Unit::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue Unit::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
