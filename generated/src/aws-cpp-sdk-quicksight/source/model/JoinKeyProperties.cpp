/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/JoinKeyProperties.h>
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

JoinKeyProperties::JoinKeyProperties() : 
    m_uniqueKey(false),
    m_uniqueKeyHasBeenSet(false)
{
}

JoinKeyProperties::JoinKeyProperties(JsonView jsonValue) : 
    m_uniqueKey(false),
    m_uniqueKeyHasBeenSet(false)
{
  *this = jsonValue;
}

JoinKeyProperties& JoinKeyProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UniqueKey"))
  {
    m_uniqueKey = jsonValue.GetBool("UniqueKey");

    m_uniqueKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue JoinKeyProperties::Jsonize() const
{
  JsonValue payload;

  if(m_uniqueKeyHasBeenSet)
  {
   payload.WithBool("UniqueKey", m_uniqueKey);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
