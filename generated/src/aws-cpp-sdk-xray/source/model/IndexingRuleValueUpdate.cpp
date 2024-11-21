﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/IndexingRuleValueUpdate.h>
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

IndexingRuleValueUpdate::IndexingRuleValueUpdate() : 
    m_probabilisticHasBeenSet(false)
{
}

IndexingRuleValueUpdate::IndexingRuleValueUpdate(JsonView jsonValue)
  : IndexingRuleValueUpdate()
{
  *this = jsonValue;
}

IndexingRuleValueUpdate& IndexingRuleValueUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Probabilistic"))
  {
    m_probabilistic = jsonValue.GetObject("Probabilistic");

    m_probabilisticHasBeenSet = true;
  }

  return *this;
}

JsonValue IndexingRuleValueUpdate::Jsonize() const
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
