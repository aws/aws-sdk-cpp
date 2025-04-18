﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LogoSetConfiguration.h>
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

LogoSetConfiguration::LogoSetConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LogoSetConfiguration& LogoSetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Primary"))
  {
    m_primary = jsonValue.GetObject("Primary");
    m_primaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Favicon"))
  {
    m_favicon = jsonValue.GetObject("Favicon");
    m_faviconHasBeenSet = true;
  }
  return *this;
}

JsonValue LogoSetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_primaryHasBeenSet)
  {
   payload.WithObject("Primary", m_primary.Jsonize());

  }

  if(m_faviconHasBeenSet)
  {
   payload.WithObject("Favicon", m_favicon.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
