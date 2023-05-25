/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SigningProfileRevocationRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SigningProfileRevocationRecord::SigningProfileRevocationRecord() : 
    m_revocationEffectiveFromHasBeenSet(false),
    m_revokedAtHasBeenSet(false),
    m_revokedByHasBeenSet(false)
{
}

SigningProfileRevocationRecord::SigningProfileRevocationRecord(JsonView jsonValue) : 
    m_revocationEffectiveFromHasBeenSet(false),
    m_revokedAtHasBeenSet(false),
    m_revokedByHasBeenSet(false)
{
  *this = jsonValue;
}

SigningProfileRevocationRecord& SigningProfileRevocationRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("revocationEffectiveFrom"))
  {
    m_revocationEffectiveFrom = jsonValue.GetDouble("revocationEffectiveFrom");

    m_revocationEffectiveFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revokedAt"))
  {
    m_revokedAt = jsonValue.GetDouble("revokedAt");

    m_revokedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revokedBy"))
  {
    m_revokedBy = jsonValue.GetString("revokedBy");

    m_revokedByHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningProfileRevocationRecord::Jsonize() const
{
  JsonValue payload;

  if(m_revocationEffectiveFromHasBeenSet)
  {
   payload.WithDouble("revocationEffectiveFrom", m_revocationEffectiveFrom.SecondsWithMSPrecision());
  }

  if(m_revokedAtHasBeenSet)
  {
   payload.WithDouble("revokedAt", m_revokedAt.SecondsWithMSPrecision());
  }

  if(m_revokedByHasBeenSet)
  {
   payload.WithString("revokedBy", m_revokedBy);

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
