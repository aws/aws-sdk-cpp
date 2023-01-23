/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/IdentityInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

IdentityInfo::IdentityInfo() : 
    m_identityType(IdentityType::NOT_SET),
    m_identityTypeHasBeenSet(false),
    m_identityNameHasBeenSet(false),
    m_sendingEnabled(false),
    m_sendingEnabledHasBeenSet(false),
    m_verificationStatus(VerificationStatus::NOT_SET),
    m_verificationStatusHasBeenSet(false)
{
}

IdentityInfo::IdentityInfo(JsonView jsonValue) : 
    m_identityType(IdentityType::NOT_SET),
    m_identityTypeHasBeenSet(false),
    m_identityNameHasBeenSet(false),
    m_sendingEnabled(false),
    m_sendingEnabledHasBeenSet(false),
    m_verificationStatus(VerificationStatus::NOT_SET),
    m_verificationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityInfo& IdentityInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdentityType"))
  {
    m_identityType = IdentityTypeMapper::GetIdentityTypeForName(jsonValue.GetString("IdentityType"));

    m_identityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityName"))
  {
    m_identityName = jsonValue.GetString("IdentityName");

    m_identityNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SendingEnabled"))
  {
    m_sendingEnabled = jsonValue.GetBool("SendingEnabled");

    m_sendingEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerificationStatus"))
  {
    m_verificationStatus = VerificationStatusMapper::GetVerificationStatusForName(jsonValue.GetString("VerificationStatus"));

    m_verificationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityInfo::Jsonize() const
{
  JsonValue payload;

  if(m_identityTypeHasBeenSet)
  {
   payload.WithString("IdentityType", IdentityTypeMapper::GetNameForIdentityType(m_identityType));
  }

  if(m_identityNameHasBeenSet)
  {
   payload.WithString("IdentityName", m_identityName);

  }

  if(m_sendingEnabledHasBeenSet)
  {
   payload.WithBool("SendingEnabled", m_sendingEnabled);

  }

  if(m_verificationStatusHasBeenSet)
  {
   payload.WithString("VerificationStatus", VerificationStatusMapper::GetNameForVerificationStatus(m_verificationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
