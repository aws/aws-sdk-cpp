/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CapacityTaskFailure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

CapacityTaskFailure::CapacityTaskFailure() : 
    m_reasonHasBeenSet(false),
    m_type(CapacityTaskFailureType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

CapacityTaskFailure::CapacityTaskFailure(JsonView jsonValue) : 
    m_reasonHasBeenSet(false),
    m_type(CapacityTaskFailureType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityTaskFailure& CapacityTaskFailure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = CapacityTaskFailureTypeMapper::GetCapacityTaskFailureTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityTaskFailure::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CapacityTaskFailureTypeMapper::GetNameForCapacityTaskFailureType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
