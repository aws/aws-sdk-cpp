/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolFunctionPackageMetadata.h>
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

GetSolFunctionPackageMetadata::GetSolFunctionPackageMetadata() : 
    m_createdAtHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_vnfdHasBeenSet(false)
{
}

GetSolFunctionPackageMetadata::GetSolFunctionPackageMetadata(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_vnfdHasBeenSet(false)
{
  *this = jsonValue;
}

GetSolFunctionPackageMetadata& GetSolFunctionPackageMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetString("lastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vnfd"))
  {
    m_vnfd = jsonValue.GetObject("vnfd");

    m_vnfdHasBeenSet = true;
  }

  return *this;
}

JsonValue GetSolFunctionPackageMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("lastModified", m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_vnfdHasBeenSet)
  {
   payload.WithObject("vnfd", m_vnfd.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
