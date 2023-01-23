/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/LoggingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

LoggingConfig::LoggingConfig()
{
}

LoggingConfig::LoggingConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

LoggingConfig& LoggingConfig::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue LoggingConfig::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
