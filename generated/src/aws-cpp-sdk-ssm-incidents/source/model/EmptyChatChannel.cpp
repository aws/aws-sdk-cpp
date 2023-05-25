/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/EmptyChatChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

EmptyChatChannel::EmptyChatChannel()
{
}

EmptyChatChannel::EmptyChatChannel(JsonView jsonValue)
{
  *this = jsonValue;
}

EmptyChatChannel& EmptyChatChannel::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue EmptyChatChannel::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
