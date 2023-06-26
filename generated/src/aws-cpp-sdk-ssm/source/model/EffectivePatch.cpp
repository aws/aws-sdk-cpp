/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/EffectivePatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

EffectivePatch::EffectivePatch() : 
    m_patchHasBeenSet(false),
    m_patchStatusHasBeenSet(false)
{
}

EffectivePatch::EffectivePatch(JsonView jsonValue) : 
    m_patchHasBeenSet(false),
    m_patchStatusHasBeenSet(false)
{
  *this = jsonValue;
}

EffectivePatch& EffectivePatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Patch"))
  {
    m_patch = jsonValue.GetObject("Patch");

    m_patchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatchStatus"))
  {
    m_patchStatus = jsonValue.GetObject("PatchStatus");

    m_patchStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue EffectivePatch::Jsonize() const
{
  JsonValue payload;

  if(m_patchHasBeenSet)
  {
   payload.WithObject("Patch", m_patch.Jsonize());

  }

  if(m_patchStatusHasBeenSet)
  {
   payload.WithObject("PatchStatus", m_patchStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
