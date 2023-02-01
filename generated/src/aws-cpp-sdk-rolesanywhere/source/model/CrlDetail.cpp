/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/CrlDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

CrlDetail::CrlDetail() : 
    m_createdAtHasBeenSet(false),
    m_crlArnHasBeenSet(false),
    m_crlDataHasBeenSet(false),
    m_crlIdHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_trustAnchorArnHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CrlDetail::CrlDetail(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_crlArnHasBeenSet(false),
    m_crlDataHasBeenSet(false),
    m_crlIdHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_trustAnchorArnHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

CrlDetail& CrlDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("crlArn"))
  {
    m_crlArn = jsonValue.GetString("crlArn");

    m_crlArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("crlData"))
  {
    m_crlData = HashingUtils::Base64Decode(jsonValue.GetString("crlData"));
    m_crlDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("crlId"))
  {
    m_crlId = jsonValue.GetString("crlId");

    m_crlIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("trustAnchorArn"))
  {
    m_trustAnchorArn = jsonValue.GetString("trustAnchorArn");

    m_trustAnchorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue CrlDetail::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_crlArnHasBeenSet)
  {
   payload.WithString("crlArn", m_crlArn);

  }

  if(m_crlDataHasBeenSet)
  {
   payload.WithString("crlData", HashingUtils::Base64Encode(m_crlData));
  }

  if(m_crlIdHasBeenSet)
  {
   payload.WithString("crlId", m_crlId);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_trustAnchorArnHasBeenSet)
  {
   payload.WithString("trustAnchorArn", m_trustAnchorArn);

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
