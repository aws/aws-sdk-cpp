﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/PinpointDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

PinpointDestination::PinpointDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

PinpointDestination& PinpointDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");
    m_applicationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PinpointDestination::Jsonize() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
