/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPIVisualStandardLayout.h>
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

KPIVisualStandardLayout::KPIVisualStandardLayout() : 
    m_type(KPIVisualStandardLayoutType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

KPIVisualStandardLayout::KPIVisualStandardLayout(JsonView jsonValue) : 
    m_type(KPIVisualStandardLayoutType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

KPIVisualStandardLayout& KPIVisualStandardLayout::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = KPIVisualStandardLayoutTypeMapper::GetKPIVisualStandardLayoutTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue KPIVisualStandardLayout::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", KPIVisualStandardLayoutTypeMapper::GetNameForKPIVisualStandardLayoutType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
