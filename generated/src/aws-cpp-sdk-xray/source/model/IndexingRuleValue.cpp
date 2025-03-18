/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/IndexingRuleValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

IndexingRuleValue::IndexingRuleValue(JsonView jsonValue)
{
  *this = jsonValue;
}

IndexingRuleValue& IndexingRuleValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Probabilistic"))
  {
    m_probabilistic = jsonValue.GetObject("Probabilistic");
    m_probabilisticHasBeenSet = true;
  }
  return *this;
}

JsonValue IndexingRuleValue::Jsonize() const
{
  JsonValue payload;

  if(m_probabilisticHasBeenSet)
  {
   payload.WithObject("Probabilistic", m_probabilistic.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
