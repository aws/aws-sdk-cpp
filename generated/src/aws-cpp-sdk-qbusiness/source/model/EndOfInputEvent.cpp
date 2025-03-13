/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/EndOfInputEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

EndOfInputEvent::EndOfInputEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

EndOfInputEvent& EndOfInputEvent::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue EndOfInputEvent::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
