/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchGroupPatchBaselineMapping.h>
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

PatchGroupPatchBaselineMapping::PatchGroupPatchBaselineMapping() : 
    m_patchGroupHasBeenSet(false),
    m_baselineIdentityHasBeenSet(false)
{
}

PatchGroupPatchBaselineMapping::PatchGroupPatchBaselineMapping(JsonView jsonValue) : 
    m_patchGroupHasBeenSet(false),
    m_baselineIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

PatchGroupPatchBaselineMapping& PatchGroupPatchBaselineMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PatchGroup"))
  {
    m_patchGroup = jsonValue.GetString("PatchGroup");

    m_patchGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaselineIdentity"))
  {
    m_baselineIdentity = jsonValue.GetObject("BaselineIdentity");

    m_baselineIdentityHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchGroupPatchBaselineMapping::Jsonize() const
{
  JsonValue payload;

  if(m_patchGroupHasBeenSet)
  {
   payload.WithString("PatchGroup", m_patchGroup);

  }

  if(m_baselineIdentityHasBeenSet)
  {
   payload.WithObject("BaselineIdentity", m_baselineIdentity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
