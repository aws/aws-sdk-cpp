/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ListSolFunctionInstanceMetadata.h>
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

ListSolFunctionInstanceMetadata::ListSolFunctionInstanceMetadata() : 
    m_createdAtHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
{
}

ListSolFunctionInstanceMetadata::ListSolFunctionInstanceMetadata(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
{
  *this = jsonValue;
}

ListSolFunctionInstanceMetadata& ListSolFunctionInstanceMetadata::operator =(JsonView jsonValue)
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

JsonValue ListSolFunctionInstanceMetadata::Jsonize() const
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
