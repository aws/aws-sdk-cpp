/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisDisplayDataDrivenRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AxisDisplayDataDrivenRange::AxisDisplayDataDrivenRange()
{
}

AxisDisplayDataDrivenRange::AxisDisplayDataDrivenRange(JsonView jsonValue)
{
  *this = jsonValue;
}

AxisDisplayDataDrivenRange& AxisDisplayDataDrivenRange::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue AxisDisplayDataDrivenRange::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
