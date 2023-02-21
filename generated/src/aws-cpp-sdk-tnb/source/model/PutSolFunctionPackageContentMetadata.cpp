/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/PutSolFunctionPackageContentMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

PutSolFunctionPackageContentMetadata::PutSolFunctionPackageContentMetadata() : 
    m_vnfdHasBeenSet(false)
{
}

PutSolFunctionPackageContentMetadata::PutSolFunctionPackageContentMetadata(JsonView jsonValue) : 
    m_vnfdHasBeenSet(false)
{
  *this = jsonValue;
}

PutSolFunctionPackageContentMetadata& PutSolFunctionPackageContentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vnfd"))
  {
    m_vnfd = jsonValue.GetObject("vnfd");

    m_vnfdHasBeenSet = true;
  }

  return *this;
}

JsonValue PutSolFunctionPackageContentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_vnfdHasBeenSet)
  {
   payload.WithObject("vnfd", m_vnfd.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
