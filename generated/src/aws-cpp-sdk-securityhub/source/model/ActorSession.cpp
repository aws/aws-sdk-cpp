/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ActorSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ActorSession::ActorSession(JsonView jsonValue)
{
  *this = jsonValue;
}

ActorSession& ActorSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uid"))
  {
    m_uid = jsonValue.GetString("Uid");
    m_uidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MfaStatus"))
  {
    m_mfaStatus = ActorSessionMfaStatusMapper::GetActorSessionMfaStatusForName(jsonValue.GetString("MfaStatus"));
    m_mfaStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetInt64("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetString("Issuer");
    m_issuerHasBeenSet = true;
  }
  return *this;
}

JsonValue ActorSession::Jsonize() const
{
  JsonValue payload;

  if(m_uidHasBeenSet)
  {
   payload.WithString("Uid", m_uid);

  }

  if(m_mfaStatusHasBeenSet)
  {
   payload.WithString("MfaStatus", ActorSessionMfaStatusMapper::GetNameForActorSessionMfaStatus(m_mfaStatus));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithInt64("CreatedTime", m_createdTime);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("Issuer", m_issuer);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
