/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/TrustAnchorDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

TrustAnchorDetail::TrustAnchorDetail() : 
    m_createdAtHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_trustAnchorArnHasBeenSet(false),
    m_trustAnchorIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

TrustAnchorDetail::TrustAnchorDetail(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_trustAnchorArnHasBeenSet(false),
    m_trustAnchorIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

TrustAnchorDetail& TrustAnchorDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trustAnchorArn"))
  {
    m_trustAnchorArn = jsonValue.GetString("trustAnchorArn");

    m_trustAnchorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trustAnchorId"))
  {
    m_trustAnchorId = jsonValue.GetString("trustAnchorId");

    m_trustAnchorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustAnchorDetail::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_trustAnchorArnHasBeenSet)
  {
   payload.WithString("trustAnchorArn", m_trustAnchorArn);

  }

  if(m_trustAnchorIdHasBeenSet)
  {
   payload.WithString("trustAnchorId", m_trustAnchorId);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
