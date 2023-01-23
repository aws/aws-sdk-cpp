/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GutterStyle.h>
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

GutterStyle::GutterStyle() : 
    m_show(false),
    m_showHasBeenSet(false)
{
}

GutterStyle::GutterStyle(JsonView jsonValue) : 
    m_show(false),
    m_showHasBeenSet(false)
{
  *this = jsonValue;
}

GutterStyle& GutterStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Show"))
  {
    m_show = jsonValue.GetBool("Show");

    m_showHasBeenSet = true;
  }

  return *this;
}

JsonValue GutterStyle::Jsonize() const
{
  JsonValue payload;

  if(m_showHasBeenSet)
  {
   payload.WithBool("Show", m_show);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
