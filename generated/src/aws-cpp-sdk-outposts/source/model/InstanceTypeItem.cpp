/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/InstanceTypeItem.h>
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

InstanceTypeItem::InstanceTypeItem() : 
    m_instanceTypeHasBeenSet(false)
{
}

InstanceTypeItem::InstanceTypeItem(JsonView jsonValue) : 
    m_instanceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceTypeItem& InstanceTypeItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceTypeItem::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
