/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CollectiveConstantEntry.h>
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

CollectiveConstantEntry::CollectiveConstantEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

CollectiveConstantEntry& CollectiveConstantEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConstantType"))
  {
    m_constantType = ConstantTypeMapper::GetConstantTypeForName(jsonValue.GetString("ConstantType"));
    m_constantTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue CollectiveConstantEntry::Jsonize() const
{
  JsonValue payload;

  if(m_constantTypeHasBeenSet)
  {
   payload.WithString("ConstantType", ConstantTypeMapper::GetNameForConstantType(m_constantType));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
