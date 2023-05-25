/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/UriPath.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

UriPath::UriPath()
{
}

UriPath::UriPath(JsonView jsonValue)
{
  *this = jsonValue;
}

UriPath& UriPath::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue UriPath::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
