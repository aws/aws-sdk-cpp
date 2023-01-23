/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SigningJob.h>
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

SigningJob::SigningJob() : 
    m_jobIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_signedObjectHasBeenSet(false),
    m_signingMaterialHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(SigningStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_isRevoked(false),
    m_isRevokedHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_profileVersionHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_platformDisplayNameHasBeenSet(false),
    m_signatureExpiresAtHasBeenSet(false),
    m_jobOwnerHasBeenSet(false),
    m_jobInvokerHasBeenSet(false)
{
}

SigningJob::SigningJob(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_signedObjectHasBeenSet(false),
    m_signingMaterialHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(SigningStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_isRevoked(false),
    m_isRevokedHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_profileVersionHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_platformDisplayNameHasBeenSet(false),
    m_signatureExpiresAtHasBeenSet(false),
    m_jobOwnerHasBeenSet(false),
    m_jobInvokerHasBeenSet(false)
{
  *this = jsonValue;
}

SigningJob& SigningJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signedObject"))
  {
    m_signedObject = jsonValue.GetObject("signedObject");

    m_signedObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signingMaterial"))
  {
    m_signingMaterial = jsonValue.GetObject("signingMaterial");

    m_signingMaterialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SigningStatusMapper::GetSigningStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isRevoked"))
  {
    m_isRevoked = jsonValue.GetBool("isRevoked");

    m_isRevokedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profileName"))
  {
    m_profileName = jsonValue.GetString("profileName");

    m_profileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profileVersion"))
  {
    m_profileVersion = jsonValue.GetString("profileVersion");

    m_profileVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformId"))
  {
    m_platformId = jsonValue.GetString("platformId");

    m_platformIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformDisplayName"))
  {
    m_platformDisplayName = jsonValue.GetString("platformDisplayName");

    m_platformDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signatureExpiresAt"))
  {
    m_signatureExpiresAt = jsonValue.GetDouble("signatureExpiresAt");

    m_signatureExpiresAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobOwner"))
  {
    m_jobOwner = jsonValue.GetString("jobOwner");

    m_jobOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobInvoker"))
  {
    m_jobInvoker = jsonValue.GetString("jobInvoker");

    m_jobInvokerHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningJob::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_signedObjectHasBeenSet)
  {
   payload.WithObject("signedObject", m_signedObject.Jsonize());

  }

  if(m_signingMaterialHasBeenSet)
  {
   payload.WithObject("signingMaterial", m_signingMaterial.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SigningStatusMapper::GetNameForSigningStatus(m_status));
  }

  if(m_isRevokedHasBeenSet)
  {
   payload.WithBool("isRevoked", m_isRevoked);

  }

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("profileName", m_profileName);

  }

  if(m_profileVersionHasBeenSet)
  {
   payload.WithString("profileVersion", m_profileVersion);

  }

  if(m_platformIdHasBeenSet)
  {
   payload.WithString("platformId", m_platformId);

  }

  if(m_platformDisplayNameHasBeenSet)
  {
   payload.WithString("platformDisplayName", m_platformDisplayName);

  }

  if(m_signatureExpiresAtHasBeenSet)
  {
   payload.WithDouble("signatureExpiresAt", m_signatureExpiresAt.SecondsWithMSPrecision());
  }

  if(m_jobOwnerHasBeenSet)
  {
   payload.WithString("jobOwner", m_jobOwner);

  }

  if(m_jobInvokerHasBeenSet)
  {
   payload.WithString("jobInvoker", m_jobInvoker);

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
