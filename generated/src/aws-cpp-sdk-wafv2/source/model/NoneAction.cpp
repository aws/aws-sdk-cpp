/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/NoneAction.h>
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

NoneAction::NoneAction()
{
}

NoneAction::NoneAction(JsonView jsonValue)
{
  *this = jsonValue;
}

NoneAction& NoneAction::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue NoneAction::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
