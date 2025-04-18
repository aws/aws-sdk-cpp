﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

Configuration::Configuration(JsonView jsonValue)
{
  *this = jsonValue;
}

Configuration& Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectConfiguration"))
  {
    m_connectConfiguration = jsonValue.GetObject("connectConfiguration");
    m_connectConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_connectConfigurationHasBeenSet)
  {
   payload.WithObject("connectConfiguration", m_connectConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
