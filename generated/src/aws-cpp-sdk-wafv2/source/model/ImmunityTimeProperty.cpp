/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ImmunityTimeProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ImmunityTimeProperty::ImmunityTimeProperty() : 
    m_immunityTime(0),
    m_immunityTimeHasBeenSet(false)
{
}

ImmunityTimeProperty::ImmunityTimeProperty(JsonView jsonValue) : 
    m_immunityTime(0),
    m_immunityTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ImmunityTimeProperty& ImmunityTimeProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImmunityTime"))
  {
    m_immunityTime = jsonValue.GetInt64("ImmunityTime");

    m_immunityTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImmunityTimeProperty::Jsonize() const
{
  JsonValue payload;

  if(m_immunityTimeHasBeenSet)
  {
   payload.WithInt64("ImmunityTime", m_immunityTime);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
