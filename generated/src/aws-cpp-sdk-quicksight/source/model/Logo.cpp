/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Logo.h>
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

Logo::Logo(JsonView jsonValue)
{
  *this = jsonValue;
}

Logo& Logo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AltText"))
  {
    m_altText = jsonValue.GetString("AltText");
    m_altTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogoSet"))
  {
    m_logoSet = jsonValue.GetObject("LogoSet");
    m_logoSetHasBeenSet = true;
  }
  return *this;
}

JsonValue Logo::Jsonize() const
{
  JsonValue payload;

  if(m_altTextHasBeenSet)
  {
   payload.WithString("AltText", m_altText);

  }

  if(m_logoSetHasBeenSet)
  {
   payload.WithObject("LogoSet", m_logoSet.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
