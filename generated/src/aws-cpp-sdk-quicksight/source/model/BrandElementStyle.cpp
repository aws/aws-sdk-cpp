/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BrandElementStyle.h>
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

BrandElementStyle::BrandElementStyle(JsonView jsonValue)
{
  *this = jsonValue;
}

BrandElementStyle& BrandElementStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NavbarStyle"))
  {
    m_navbarStyle = jsonValue.GetObject("NavbarStyle");
    m_navbarStyleHasBeenSet = true;
  }
  return *this;
}

JsonValue BrandElementStyle::Jsonize() const
{
  JsonValue payload;

  if(m_navbarStyleHasBeenSet)
  {
   payload.WithObject("NavbarStyle", m_navbarStyle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
