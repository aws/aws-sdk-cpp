/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NavbarStyle.h>
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

NavbarStyle::NavbarStyle(JsonView jsonValue)
{
  *this = jsonValue;
}

NavbarStyle& NavbarStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlobalNavbar"))
  {
    m_globalNavbar = jsonValue.GetObject("GlobalNavbar");
    m_globalNavbarHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContextualNavbar"))
  {
    m_contextualNavbar = jsonValue.GetObject("ContextualNavbar");
    m_contextualNavbarHasBeenSet = true;
  }
  return *this;
}

JsonValue NavbarStyle::Jsonize() const
{
  JsonValue payload;

  if(m_globalNavbarHasBeenSet)
  {
   payload.WithObject("GlobalNavbar", m_globalNavbar.Jsonize());

  }

  if(m_contextualNavbarHasBeenSet)
  {
   payload.WithObject("ContextualNavbar", m_contextualNavbar.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
