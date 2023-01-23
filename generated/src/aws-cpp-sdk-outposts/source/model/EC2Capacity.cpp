/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/EC2Capacity.h>
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

EC2Capacity::EC2Capacity() : 
    m_familyHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_quantityHasBeenSet(false)
{
}

EC2Capacity::EC2Capacity(JsonView jsonValue) : 
    m_familyHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_quantityHasBeenSet(false)
{
  *this = jsonValue;
}

EC2Capacity& EC2Capacity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Family"))
  {
    m_family = jsonValue.GetString("Family");

    m_familyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSize"))
  {
    m_maxSize = jsonValue.GetString("MaxSize");

    m_maxSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Quantity"))
  {
    m_quantity = jsonValue.GetString("Quantity");

    m_quantityHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2Capacity::Jsonize() const
{
  JsonValue payload;

  if(m_familyHasBeenSet)
  {
   payload.WithString("Family", m_family);

  }

  if(m_maxSizeHasBeenSet)
  {
   payload.WithString("MaxSize", m_maxSize);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithString("Quantity", m_quantity);

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
