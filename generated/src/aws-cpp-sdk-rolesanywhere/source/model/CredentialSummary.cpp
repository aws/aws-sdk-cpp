/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/CredentialSummary.h>
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

CredentialSummary::CredentialSummary() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_failed(false),
    m_failedHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_seenAtHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_x509CertificateDataHasBeenSet(false)
{
}

CredentialSummary::CredentialSummary(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_failed(false),
    m_failedHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_seenAtHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_x509CertificateDataHasBeenSet(false)
{
  *this = jsonValue;
}

CredentialSummary& CredentialSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failed"))
  {
    m_failed = jsonValue.GetBool("failed");

    m_failedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuer"))
  {
    m_issuer = jsonValue.GetString("issuer");

    m_issuerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("seenAt"))
  {
    m_seenAt = jsonValue.GetString("seenAt");

    m_seenAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serialNumber"))
  {
    m_serialNumber = jsonValue.GetString("serialNumber");

    m_serialNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("x509CertificateData"))
  {
    m_x509CertificateData = jsonValue.GetString("x509CertificateData");

    m_x509CertificateDataHasBeenSet = true;
  }

  return *this;
}

JsonValue CredentialSummary::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_failedHasBeenSet)
  {
   payload.WithBool("failed", m_failed);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("issuer", m_issuer);

  }

  if(m_seenAtHasBeenSet)
  {
   payload.WithString("seenAt", m_seenAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithString("serialNumber", m_serialNumber);

  }

  if(m_x509CertificateDataHasBeenSet)
  {
   payload.WithString("x509CertificateData", m_x509CertificateData);

  }

  return payload;
}

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
