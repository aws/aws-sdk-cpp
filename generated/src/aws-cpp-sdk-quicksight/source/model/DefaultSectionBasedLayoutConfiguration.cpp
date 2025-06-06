﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultSectionBasedLayoutConfiguration.h>
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

DefaultSectionBasedLayoutConfiguration::DefaultSectionBasedLayoutConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DefaultSectionBasedLayoutConfiguration& DefaultSectionBasedLayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CanvasSizeOptions"))
  {
    m_canvasSizeOptions = jsonValue.GetObject("CanvasSizeOptions");
    m_canvasSizeOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DefaultSectionBasedLayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_canvasSizeOptionsHasBeenSet)
  {
   payload.WithObject("CanvasSizeOptions", m_canvasSizeOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
