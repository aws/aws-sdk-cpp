/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkInstanceMetadata.h>
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

GetSolNetworkInstanceMetadata::GetSolNetworkInstanceMetadata() : 
    m_createdAtHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
{
}

GetSolNetworkInstanceMetadata::GetSolNetworkInstanceMetadata(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
{
  *this = jsonValue;
}

GetSolNetworkInstanceMetadata& GetSolNetworkInstanceMetadata::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue GetSolNetworkInstanceMetadata::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
