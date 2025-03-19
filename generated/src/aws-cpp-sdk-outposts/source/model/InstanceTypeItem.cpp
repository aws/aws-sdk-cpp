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

InstanceTypeItem::InstanceTypeItem(JsonView jsonValue)
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
  if(jsonValue.ValueExists("VCPUs"))
  {
    m_vCPUs = jsonValue.GetInteger("VCPUs");
    m_vCPUsHasBeenSet = true;
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

  if(m_vCPUsHasBeenSet)
  {
   payload.WithInteger("VCPUs", m_vCPUs);

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
