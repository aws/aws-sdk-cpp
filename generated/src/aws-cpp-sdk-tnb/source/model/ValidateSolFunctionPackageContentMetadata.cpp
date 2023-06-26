/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ValidateSolFunctionPackageContentMetadata.h>
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

ValidateSolFunctionPackageContentMetadata::ValidateSolFunctionPackageContentMetadata() : 
    m_vnfdHasBeenSet(false)
{
}

ValidateSolFunctionPackageContentMetadata::ValidateSolFunctionPackageContentMetadata(JsonView jsonValue) : 
    m_vnfdHasBeenSet(false)
{
  *this = jsonValue;
}

ValidateSolFunctionPackageContentMetadata& ValidateSolFunctionPackageContentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vnfd"))
  {
    m_vnfd = jsonValue.GetObject("vnfd");

    m_vnfdHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidateSolFunctionPackageContentMetadata::Jsonize() const
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
