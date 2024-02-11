/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPIVisualLayoutOptions.h>
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

KPIVisualLayoutOptions::KPIVisualLayoutOptions() : 
    m_standardLayoutHasBeenSet(false)
{
}

KPIVisualLayoutOptions::KPIVisualLayoutOptions(JsonView jsonValue) : 
    m_standardLayoutHasBeenSet(false)
{
  *this = jsonValue;
}

KPIVisualLayoutOptions& KPIVisualLayoutOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardLayout"))
  {
    m_standardLayout = jsonValue.GetObject("StandardLayout");

    m_standardLayoutHasBeenSet = true;
  }

  return *this;
}

JsonValue KPIVisualLayoutOptions::Jsonize() const
{
  JsonValue payload;

  if(m_standardLayoutHasBeenSet)
  {
   payload.WithObject("StandardLayout", m_standardLayout.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
