/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QueryCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

QueryCondition::QueryCondition() : 
    m_singleHasBeenSet(false)
{
}

QueryCondition::QueryCondition(JsonView jsonValue) : 
    m_singleHasBeenSet(false)
{
  *this = jsonValue;
}

QueryCondition& QueryCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("single"))
  {
    m_single = jsonValue.GetObject("single");

    m_singleHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryCondition::Jsonize() const
{
  JsonValue payload;

  if(m_singleHasBeenSet)
  {
   payload.WithObject("single", m_single.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
