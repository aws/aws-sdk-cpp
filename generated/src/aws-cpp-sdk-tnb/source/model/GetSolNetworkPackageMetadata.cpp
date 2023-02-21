/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkPackageMetadata.h>
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

GetSolNetworkPackageMetadata::GetSolNetworkPackageMetadata() : 
    m_createdAtHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_nsdHasBeenSet(false)
{
}

GetSolNetworkPackageMetadata::GetSolNetworkPackageMetadata(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_nsdHasBeenSet(false)
{
  *this = jsonValue;
}

GetSolNetworkPackageMetadata& GetSolNetworkPackageMetadata::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("nsd"))
  {
    m_nsd = jsonValue.GetObject("nsd");

    m_nsdHasBeenSet = true;
  }

  return *this;
}

JsonValue GetSolNetworkPackageMetadata::Jsonize() const
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

  if(m_nsdHasBeenSet)
  {
   payload.WithObject("nsd", m_nsd.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
