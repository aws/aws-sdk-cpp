/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LifeCycleLastCutoverReverted.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

LifeCycleLastCutoverReverted::LifeCycleLastCutoverReverted(JsonView jsonValue)
{
  *this = jsonValue;
}

LifeCycleLastCutoverReverted& LifeCycleLastCutoverReverted::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiCallDateTime"))
  {
    m_apiCallDateTime = jsonValue.GetString("apiCallDateTime");
    m_apiCallDateTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue LifeCycleLastCutoverReverted::Jsonize() const
{
  JsonValue payload;

  if(m_apiCallDateTimeHasBeenSet)
  {
   payload.WithString("apiCallDateTime", m_apiCallDateTime);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
