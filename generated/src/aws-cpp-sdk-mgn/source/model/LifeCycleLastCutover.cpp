/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LifeCycleLastCutover.h>
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

LifeCycleLastCutover::LifeCycleLastCutover() : 
    m_finalizedHasBeenSet(false),
    m_initiatedHasBeenSet(false),
    m_revertedHasBeenSet(false)
{
}

LifeCycleLastCutover::LifeCycleLastCutover(JsonView jsonValue) : 
    m_finalizedHasBeenSet(false),
    m_initiatedHasBeenSet(false),
    m_revertedHasBeenSet(false)
{
  *this = jsonValue;
}

LifeCycleLastCutover& LifeCycleLastCutover::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("finalized"))
  {
    m_finalized = jsonValue.GetObject("finalized");

    m_finalizedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initiated"))
  {
    m_initiated = jsonValue.GetObject("initiated");

    m_initiatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reverted"))
  {
    m_reverted = jsonValue.GetObject("reverted");

    m_revertedHasBeenSet = true;
  }

  return *this;
}

JsonValue LifeCycleLastCutover::Jsonize() const
{
  JsonValue payload;

  if(m_finalizedHasBeenSet)
  {
   payload.WithObject("finalized", m_finalized.Jsonize());

  }

  if(m_initiatedHasBeenSet)
  {
   payload.WithObject("initiated", m_initiated.Jsonize());

  }

  if(m_revertedHasBeenSet)
  {
   payload.WithObject("reverted", m_reverted.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
